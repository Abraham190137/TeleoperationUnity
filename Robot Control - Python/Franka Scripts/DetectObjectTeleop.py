# import necessary packages and files
import numpy as np
from autolab_core import Point

def get_object_center_point_in_world_realsense_3D_camera_point(
    object_camera_point,
    intrinsics,
    transform,
    current_pose):

    object_camera_point = Point(object_camera_point, "realsense_ee")
    object_center_point_in_world = current_pose * transform * object_camera_point
    return object_center_point_in_world

class DetectObject:
	"""
	This is an object detection class that given an object, it will 
	predict the object's 6D pose. The object can be detected using
	AprilTags, or CNN methods. The pose prediction can be computed by 
	either the wrist-mounted camera, the statically-mounted camera, 
	or both. 
	"""
	def __init__(self, object_id, object_class, realsense_intrinsics, realsense_ee_transform, color=""):
		"""
		Initialize DetectObject.

		Parameters
		----------
		object_id: ID number of the detected object
		object_class: Class of the detected object 
		"""

		self.realsense_intrinsics = realsense_intrinsics
		self.realsense_to_ee_transform = realsense_ee_transform

		self.object_id = object_id
		self.object_class = object_class 

		# initialize object position, velocity, rotation, angular velocity all to zero
		self.position = np.array([0,0,0])
		self.velocity = np.array([0,0,0])
		self.rotation = np.array([0,0,0,0])
		self.ang_velocity = np.array([0,0,0])

		# size, color, type, block offset (NOTE: these should be inputs to the init file)
		self.size = "0.04,0.04,0.04" #[m]
		if color == "":
			color_array = np.random.randint(0,255,3)
			self.color = str(color_array[0]) + "," + str(color_array[1]) + "," + str(color_array[2]) + ",1"
		self.color = "0,0,255,1"
		self.object_type = "block"
		self.center_offset_vector = np.array([[0],[0],[0.015]])

	def get_position_apriltag(self, bounds, verts, robot_pose, translation_matrix, rotation_matrix=None):
		"""
		Estimate the object position in the robot's frame given the image, depth,
		object bounds and current robot pose based on AprilTag detection.

		Parameters
		----------
		bounds: numpy array of the bounding box of the detected object
		verts: pointcloud of the scene 
		robot_pose: the pose of the robot end-effector
		translation_matrix: translation of apriltag in camera frame
		rotation_matrix: rotation of apriltag in camera frame
			if None, find the center of the tag, not the object
		normal_offset_vector: vector displacemetn of the center point 
			from the center of the tag, in the tag's coordinate frame
			(ie. for the block, the vector is [0, 0, -0.015] since the center 
			is 1.5cm into the block (normal to the tag) and centered on the tag.)
			if None, find the center of the tag, not the object

		Returns
		-------
		object_center_point: the x,y,z coordinate of the center of the object
			in the robot's coordinate frame
		"""
		
		# ORIGINAL CODE:

		# ---- Depth-Based Prediction ----
		minx = np.amin(bounds[:,0], axis=0)
		maxx = np.amax(bounds[:,0], axis=0)
		miny = np.amin(bounds[:,1], axis=0)
		maxy = np.amax(bounds[:,1], axis=0)
		
		obj_points = verts[miny:maxy, minx:maxx].reshape(-1,3)

		zs = obj_points[:,2]
		z = np.median(zs)
		xs = obj_points[:,0]
		ys = obj_points[:,1]
		ys = np.delete(ys, np.where((zs < z - 1) | (zs > z + 1))) # take only y for close z to prevent including background

		x_pos = np.median(xs)
		y_pos = np.median(ys)
		z_pos = z

		median_point = np.array([x_pos, y_pos, z_pos])

		object_median_point = get_object_center_point_in_world_realsense_3D_camera_point(median_point, self.realsense_intrinsics, self.realsense_to_ee_transform, robot_pose)
		com_depth = np.array([object_median_point[0], object_median_point[1], object_median_point[2]])

		# ---- Image-Based Prediction (No Depth) ----
		com_nodepth = get_object_center_point_in_world_realsense_3D_camera_point(translation_matrix, self.realsense_intrinsics, self.realsense_to_ee_transform, robot_pose)
		com_nodepth = np.array([com_nodepth[0], com_nodepth[1], com_nodepth[2]])

		# # scale the no-depth y estimate to account for some linear error we determined experimentally

		# ---- Combine Predictions ----
		# if depth-based prediction is Nan, only use non-depth-based prediction
		if np.isnan(com_depth.any()):
			com_depth = com_nodepth

		# if the prediction difference between depth and no depth is large ignore depth-based z
		elif abs(com_depth[2] - com_nodepth[2]) > 0.05:
			com_depth = com_nodepth

		# weighted average
		self.position = np.array([(com_depth[0] + com_nodepth[0])/2, (com_depth[1] + com_nodepth[1])/2, (2*com_depth[2] + com_nodepth[2])/3])
		
		# BEGIN 10/26 ROTATION EDIT
		if (rotation_matrix is not None and self.center_offset_vector is not None):
			disp_vector = robot_pose.rotation@self.realsense_to_ee_transform.rotation@rotation_matrix@self.center_offset_vector
			self.position = self.position + disp_vector.flatten()

		return self.position