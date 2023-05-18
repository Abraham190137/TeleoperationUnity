from Teleoperation import Teleoperation
import numpy as np

from frankapy import FrankaArm

import UdpComms as U
import threading

import pyrealsense2 as rs
import cv2

from pupil_apriltags import Detector
from DetectObjectTeleop import DetectObject

from autolab_core import RigidTransform
from perception import CameraIntrinsics

REALSENSE_INTRINSICS = "realsense_intrinsics.intr"
REALSENSE_EE_TF = "realsense_ee_shifted.tf"

USE_ROBOHAND = False
TAG_OFFSET = np.array([0, 0, -0.02])
COUSTOM_GRIPPER_OFFSET = np.array([0, 0, 0])

class VisionSystem:
	def __init__(self, realsense_intrinsics, realsense_ee_transform, set_detected_objects_func, fa):
		self.running = True
		self.realsense_intrinsics = realsense_intrinsics
		self.realsense_ee_transform = realsense_ee_transform
		self.set_detected_objects_func = set_detected_objects_func
		self.fa = fa

	def stop(self):
		self.running = False
	
	def run(self):
		W = 848 # Camera resolution
		H = 480

		# Configure depth and color streams
		pipeline = rs.pipeline()
		config = rs.config()
		config.enable_device('220222066259')
		config.enable_stream(rs.stream.depth, W, H, rs.format.z16, 30)
		config.enable_stream(rs.stream.color, W, H, rs.format.bgr8, 30)

		pipeline.start(config)

		aligned_stream = rs.align(rs.stream.color) # alignment between color and depth
		point_cloud = rs.pointcloud()

		# get a stream of images
		detected_objects = {}
		while self.running:
			# ----- added from other method
			current_pose = self.fa.get_pose()
			frames = pipeline.wait_for_frames()
			frames = aligned_stream.process(frames)
			color_frame = frames.get_color_frame()
			depth_frame = frames.get_depth_frame().as_depth_frame()

			points = point_cloud.calculate(depth_frame)
			verts = np.asanyarray(points.get_vertices()).view(np.float32).reshape(-1, W, 3)  # xyz
			
			# Convert images to numpy arrays
			depth_image = np.asanyarray(depth_frame.get_data())

			# skip empty frames
			if not np.any(depth_image):
				continue

			color_image = np.asanyarray(color_frame.get_data())
			bw_image = cv2.cvtColor(color_image, cv2.COLOR_BGR2GRAY)

			# python wrapper AprilTag package
			detector = Detector(families="tag36h11",
				nthreads=1,
				quad_decimate=1.0,
				quad_sigma=0.0,
				refine_edges=1,
				decode_sharpening=0.25,
				debug=0)

			# camera parameters [fx, fy, cx, cy]
			cam_param = [self.realsense_intrinsics.fx, self.realsense_intrinsics.fy, self.realsense_intrinsics.cx, self.realsense_intrinsics.cy]
			detections = detector.detect(bw_image, estimate_tag_pose=True, camera_params=cam_param, tag_size=0.022) ##0028

			# loop over the detected AprilTags
			for d in detections:

				# check if apriltag has been detected before
				obj_id = d.tag_id
				if obj_id not in detected_objects:
					# add tag to the dictionary of detected objects
					tagFamily = d.tag_family.decode("utf-8")
					detected_objects[obj_id] = DetectObject(object_id=obj_id, object_class=tagFamily, realsense_intrinsics=self.realsense_intrinsics, realsense_ee_transform=self.realsense_ee_transform)

				# extract the bounding box (x, y)-coordinates for the AprilTag
				# and convert each of the (x, y)-coordinate pairs to integers
				(ptA, ptB, ptC, ptD) = d.corners
				ptB = (int(ptB[0]), int(ptB[1]))
				ptC = (int(ptC[0]), int(ptC[1]))
				ptD = (int(ptD[0]), int(ptD[1]))
				ptA = (int(ptA[0]), int(ptA[1]))

				# draw the bounding box of the AprilTag detection
				cv2.line(color_image, ptA, ptB, (0, 255, 0), 2)
				cv2.line(color_image, ptB, ptC, (0, 255, 0), 2)
				cv2.line(color_image, ptC, ptD, (0, 255, 0), 2)
				cv2.line(color_image, ptD, ptA, (0, 255, 0), 2)

				# draw the center (x, y)-coordinates of the AprilTag
				(cX, cY) = (int(d.center[0]), int(d.center[1]))
				cv2.circle(color_image, (cX, cY), 5, (0, 0, 255), -1)

				# --------- added code to calculate AprilTag x,y,z position ------
				bounds = np.array([ptA, ptB, ptC, ptD])
				obj = detected_objects[obj_id]
				translation_matrix = d.pose_t
				translation_matrix = np.array(translation_matrix).reshape(3)
				object_center_point = obj.get_position_apriltag(bounds, verts, current_pose, translation_matrix)

				string = "({:0.4f}, {:0.4f}, {:0.4f}) [m]".format(object_center_point[0], object_center_point[1], object_center_point[2])
				cv2.putText(color_image, string, (cX - 30, cY - 20), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255, 255, 255), 2)

			# update the detected objects
			if self.running:
				self.set_detected_objects_func(detected_objects)

			# Show the images
			cv2.imshow("Image", color_image)
			cv2.waitKey(1)

if __name__ == "__main__":
	# Reset Franka
	print("start teleop vision script")
	fa = FrankaArm()
	fa.reset_joints()
	fa.close_gripper()
	fa.goto_gripper(0.04)

	# Initalize the VR controller:
	print("start teleop thread")
	TeleopController = Teleoperation(franka_IP = "172.26.5.54", Oculus_IP = "172.26.33.175")
	TeleopController.start()

	realsense_intrinsics = CameraIntrinsics.load(REALSENSE_INTRINSICS)
	realsense_to_ee_transform = RigidTransform.load(REALSENSE_EE_TF)
	
	Vision = VisionSystem(realsense_intrinsics, realsense_to_ee_transform, TeleopController.set_detected_objects, fa)
	vision_thread = threading.Thread(target=Vision.run, daemon=True)
	vision_thread.start()

	input("Press enter to kill teleoperation")
	print('Killing Teleop')
	Vision.stop()
	TeleopController.stop()