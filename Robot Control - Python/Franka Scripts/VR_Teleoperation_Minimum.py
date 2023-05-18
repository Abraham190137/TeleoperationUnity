import numpy as np

from frankapy import FrankaArm

import time

from Teleoperation import Teleoperation

# Place holder class for the objects in the scene. Just takes in block info an stores it
class Object:
	def __init__(self, object_type = "block", size = "0.04,0.04,0.04", color = "0,0,255,1", position = [0, 0, 0], rotation = [0, 0, 0, 0], velocity = [0, 0, 0], ang_velocity = [0, 0, 0]):
		self.object_type = object_type
		self.size = size
		self.color = color
		self.position = np.array(position)
		self.rotation = rotation
		self.velocity = np.array(velocity)
		self.ang_velocity = ang_velocity

	def update(self, dt=0.02):
		self.position += velocity*dt


if __name__ == "__main__":
	# Reset Franka
	fa = FrankaArm()
	fa.reset_joints()
	fa.close_gripper()
	fa.goto_gripper(0.04)

	# Initalize the VR controller:
	TeleopController = Teleoperation(franka_IP = "172.26.5.54", Oculus_IP = "172.26.33.175")
	TeleopController.start()
	
	#Object demo, generates a block every 10 seconds.
	object_dictonary = {}
	i = 0 
	for t in np.arange(0, 60, 0.02):
		if t%10 == 0:
			velocity = np.random.normal(0, 0.1, size=3)
			object_dictonary[i] = Object(position=[0.6, 0, 0.3], velocity=velocity)
			i += 1
			TeleopController.set_detected_objects(object_dictonary)

		# Update detected objects. If vision was included, here is where it would be called.
		for object_ID in object_dictonary:
			object_dictonary[object_ID].update()
		
		time.sleep(0.02)
		t += 0.02

	input("Press enter to kill teleoperation")
	print('Killing Teleop')
	TeleopController.stop()