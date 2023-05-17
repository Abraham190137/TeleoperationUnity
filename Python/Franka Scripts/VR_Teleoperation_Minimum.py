import pickle as pkl
import numpy as np

from frankapy import FrankaArm

from frankpy_extensions import GotoPoseLive
import UdpComms as U
import threading

import time


# Place holder class for the objects in the scene. Just takes in block info an stores it
class Object:
	def __init__(self, object_type = "block", size = "0.04,0.04,0.04", color = "0,0,255,1", position = [0, 0, 0], rotation = [0, 0, 0, 0], velocity = [0, 0, 0], ang_velocity = [0, 0, 0]):
		self.object_type = object_type
		self.size = size
		self.color = color
		self.position = position
		self.rotation = rotation
		self.velocity = velocity
		self.ang_velocity = ang_velocity

	def update(self, dt=0.02):
		self.position += velocity*dt
		

class Teleoperation:
	def __init__(self, franka_IP, Oculus_IP, portTX = 8000, portRX=8001, girpper_offset = [0, 0, 0]) -> None:
		self.fa = FrankaArm()
		# crate the communcation socket between franka and the oculus
		self.sock = U.UdpComms(udpIP=franka_IP, sendIP = Oculus_IP, portTX=portTX, portRX=portRX, enableRX=True, suppressWarnings=True)
		self.PoseController = GotoPoseLive()
		self.new_object_list = [] 
		self.inventory_list = []
		self.detected_objects = {}
		self.running = False
		self.gripper_offset = girpper_offset # gripper offset for if using custom grippers.
	

	# Generates a message to be sent to the oculus when a new object is created.
	def new_object_message(self, new_object_list):
		# new_object_list: list of all new objects. Keys to the object dictionary.
		message = ""
		for new_object in new_object_list:
			object_ID = int(new_object)
			message += '_newItem\t' + self.detected_objects[object_ID].object_type \
			+ '\t' + str(new_object) + '\t' + self.detected_objects[object_ID].size \
			+ '\t' + self.detected_objects[object_ID].color + '\n'
		return message
	
	# generates a message to be sent to the oculus for an object in the object dictonary.
	def object_message(self, object_ID):
		# object_ID: ID of the object to be sent. int.
		pos = self.detected_objects[object_ID].position
		vel = self.detected_objects[object_ID].velocity
		rot = self.detected_objects[object_ID].rotation
		avel = self.detected_objects[object_ID].ang_velocity
		return str(object_ID) + '\t' + str(-pos[1]) + ',' + str(pos[2]) + ',' + str(pos[0]-0.6) + '\t' \
		+ str(-vel[1]) + ',' + str(vel[2]) + ',' + str(vel[0]) + '\t' \
		+ str(rot[1]) + ',' + str(-rot[2]) + ',' + str(-rot[0]) + ',' + str(rot[3]) + '\t' \
		+ str(avel[1]) + ',' + str(-avel[2]) + ',' + str(-avel[0])


	def run(self):
		pose = fa.get_pose() # pose to move to. Default to current pose.
		message_index = 0
		while self.running:
			hand_pose = fa.get_pose() # get the current pose of the hand.
			hand_position = hand_pose.translation
			hand_rot = hand_pose.quaternion 
			message_index += 1
			
			send_string = str(message_index) + '\n' # Begin the message to send to the oculus

			# Update detected objects. If vision was included, here is where it would be called.
			for object_ID in self.detected_objects:
				self.detected_objects[object_ID].update()

			# add delete commands to the message
			for item in self.inventory_list:
				if not (int(item)) in self.detected_objects.keys():
					send_string += "_deleteItem" + '\t' + item + '\n'

			# Determine if any of the objects in the scene have not been sent to unity, and generate new object messages.
			for item in self.detected_objects.keys():
				if not(str(item) in self.inventory_list) and not(str(item) in self.new_object_list):
					self.new_object_list.append(str(item))
			if len(self.new_object_list) != 0: # There are new objects in the scene!
				send_string += self.new_object_message(self.new_object_list)
		
			# For each object in the scene, genearte an object message and add it to the send string.
			for game_object in self.detected_objects:
				send_string += self.object_message(game_object) + '\n'

			# Get the hand and gripper positions to send to the oculus.
			send_hand_position = hand_position + self.gripper_offset
			finger_width = fa.get_gripper_width()

			send_string += '_hand\t' + str(-send_hand_position[1]) + ',' + str(send_hand_position[2]) + ',' + str(send_hand_position[0]-0.6) +'\t'\
				+ str(hand_rot[2]) + ',' + str(-hand_rot[3]) + ',' + str(-hand_rot[1]) + ',' + str(hand_rot[0]) + '\t' + str(finger_width)

			self.sock.SendData(send_string) # Send this string to other application
			data = self.sock.ReadReceivedData() # read data

			if data != None: # if NEW data has been received since last ReadReceivedData function call
				inventory, unknown_objects, ee_pose, gripper_data = data.split('\n')
				gripper_data = gripper_data[:-1] # remove unnessesary tab
				self.inventory_list = inventory.split('\t')[1:]
				self.new_object_list = unknown_objects.split('\t')[1:]
				
				# Extract the goal position, rotation, and width from the oculus message.
				goal_position, goal_rotation = ee_pose.split('\t')
				goal_position = np.array(goal_position[1:-1].split(', ')).astype(np.float)
				goal_position = np.array([goal_position[2] + 0.6, -goal_position[0], goal_position[1] + 0.02])
				goal_position -= self.gripper_offset
				goal_rotation = np.array(goal_rotation[1:-1].split(', ')).astype(np.float)
				goal_rotation = np.array([goal_rotation[3], -goal_rotation[2], goal_rotation[0], -goal_rotation[1]])
				goal_width = 2*float(gripper_data)

				# set the pose rotation and translation to the goal values
				goal_rotation_mat = pose.rotation_from_quaternion(goal_rotation)
				pose.rotation = goal_rotation_mat

				pose.translation = goal_position

				# Send the goal pose to the pose controller
				self.PoseController.set_goal_pose(pose)
				
				# Move the gripper.
				fa.goto_gripper(goal_width, block=False, speed=0.15, force = 10)


	def start(self):
		# start run() in a new thread
		self.PoseController.start()
		self.running = True
		thread = threading.Thread(target=self.run, daemon=True)
		thread.start()


	def stop(self):
		# stop runing the thread by setting the 'running' flag to false, then waiting for 
		# the tread to terminate. Finally, stop any ongoing skill.
		self.PoseController.stop()
		self.running = False
		self.thread.join()
		print('Stoped Teleoperation')

	# sets the detected object dictionary.
	def set_detected_objects(self, detected_objects):
		# detected_objects: Dictionary (key: int, value: Object) of objects found in the scene.
		self.detected_objects = detected_objects



if __name__ == "__main__":
	# Reset Franka
	fa = FrankaArm()
	fa.reset_joints()
	fa.close_gripper()
	fa.goto_gripper(0.04)

	# Initalize the VR controller:
	TeleopController = Teleoperation(franka_IP = "172.26.18.135", Oculus_IP = "172.26.16.192")
	TeleopController.start()
	
	#Object demo, generates a block every 10 seconds.
	object_dictonary = {}
	for i in range(10):
		velocity = np.random.normal(0, 0.1, size=3)
		object_dictonary[i] = Object(position=[0.6, 0, 0.3], velocity=velocity)
		TeleopController.set_detected_objects(object_dictonary)
		time.sleep(10)

	input("Press enter to kill teleoperation")
	print('Killing Teleop')
	Teleoperation.stop()