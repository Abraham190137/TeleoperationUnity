import numpy as np
import time

import UdpComms as U

from panda_gym.envs.panda_tasks.panda_pick_and_place import PandaPickAndPlaceEnv
from panda_gym.envs.panda_tasks.panda_stack import PandaStackEnv


def quaternion_multiply(q1, q2):
    x1, y1, z1, w1 = q1
    x2, y2, z2, w2 = q2

    x = w1 * x2 + x1 * w2 + y1 * z2 - z1 * y2
    y = w1 * y2 - x1 * z2 + y1 * w2 + z1 * x2
    z = w1 * z2 + x1 * y2 - y1 * x2 + z1 * w2
    w = w1 * w2 - x1 * x2 - y1 * y2 - z1 * z2

    return np.array([x, y, z, w])

# Create UDP socket to use for sending (and receiving) Use THIS machines IP for udp.
sock = U.UdpComms(udpIP="172.26.48.36", sendIP = "172.26.33.175", portTX=8000, portRX=8001, enableRX=True, suppressWarnings=False)
# sock = U.UdpComms(udpIP="172.26.42.52", sendIP = "172.26.76.116", portTX=8000, portRX=8001, enableRX=True, suppressWarnings=False)
# hand_sock = U.UdpComms(udpIP="172.26.42.52", sendIP = "172.26.43.236", portTX=8010, portRX=8011, enableRX=True, suppressWarnings=False)

env = PandaStackEnv(render = True)#, control_type = 'joints') # task enviroment
env.reset()
position = env.robot.get_ee_position()
gripper = env.robot.get_fingers_width()

target_location = np.zeros(3)
target_location[:2] = np.random.uniform(-0.15, 0.15, 2)
env.sim.set_base_pose("object1", np.array([0.1, 0.1, 0.02]), np.array([0.0, 0.0, 0.0, 1.0]))
env.sim.set_base_pose("target1", np.array([0, 0, 0.02]) + target_location, np.array([0.0, 0.0, 0.0, 1.0]))
env.sim.set_base_pose("object2", np.array([0.1, -0.1, 0.02]), np.array([0.0, 0.0, 0.0, 1.0]))
env.sim.set_base_pose("target2", np.array([0, 0, 0.06]) + target_location, np.array([0.0, 0.0, 0.0, 1.0]))

game_objects = {"object1":{'type':'block', "size":"0.04,0.04,0.04", "color":"3,25,250,1"},
                "object2":{'type':'block', "size":"0.04,0.04,0.04", "color":"3,250,21,1"},
                "target1":{'type':'block', "size":"0.04,0.04,0.04", "color":"3,25,250,0.3"},
                "target2":{'type':'block', "size":"0.04,0.04,0.04", "color":"3,250,21,0.3"}}

new_object_list = []
inventory_list = []
message_index = 1
send_update_time = time.time()
sim_update_time = time.time()
delay = 0.001 # 0.5
unity_latency = [0]
unity_last_time = time.time()
ENV_STEP_PERIOD = 0.04

def get_quaternion_from_euler(roll, pitch, yaw):
  """
  Convert an Euler angle to a quaternion.
   
  Input
    :param roll: The roll (rotation around x-axis) angle in radians.
    :param pitch: The pitch (rotation around y-axis) angle in radians.
    :param yaw: The yaw (rotation around z-axis) angle in radians.
 
  Output
    :return qx, qy, qz, qw: The orientation in quaternion [x,y,z,w] format
  """
  qx = np.sin(roll/2) * np.cos(pitch/2) * np.cos(yaw/2) - np.cos(roll/2) * np.sin(pitch/2) * np.sin(yaw/2)
  qy = np.cos(roll/2) * np.sin(pitch/2) * np.cos(yaw/2) + np.sin(roll/2) * np.cos(pitch/2) * np.sin(yaw/2)
  qz = np.cos(roll/2) * np.cos(pitch/2) * np.sin(yaw/2) - np.sin(roll/2) * np.sin(pitch/2) * np.cos(yaw/2)
  qw = np.cos(roll/2) * np.cos(pitch/2) * np.cos(yaw/2) + np.sin(roll/2) * np.sin(pitch/2) * np.sin(yaw/2)
 
  return [qx, qy, qz, qw]

def new_object_message(new_object_list, game_objects):
    message = ""
    for new_object in new_object_list:
        message += '_newItem\t' + game_objects[new_object]['type'] + '\t' + new_object + '\t' \
        + game_objects[new_object]["size"] + '\t' + game_objects[new_object]["color"] + '\n'
    return message
 
def object_message(object_name):
    pos = env.sim.get_base_position(object_name)
    vel = env.sim.get_base_velocity(object_name)
    rot = env.sim.get_base_orientation(object_name)
    avel = env.sim.get_base_angular_velocity(object_name)
    return object_name + '\t' + str(-pos[1]) + ',' + str(pos[2]) + ',' + str(pos[0]) + '\t' \
    + str(-vel[1]) + ',' + str(vel[2]) + ',' + str(vel[0]) + '\t' \
    + str(rot[1]) + ',' + str(-rot[2]) + ',' + str(-rot[0]) + ',' + str(rot[3]) + '\t' \
    + str(avel[1]) + ',' + str(-avel[2]) + ',' + str(-avel[0])

def generate_hand_message(hand_position, hand_rotation, finger_width):
    return '_hand\t' + str(-hand_position[1]) + ',' + str(hand_position[2]) + ',' + str(hand_position[0]) + '\t' \
     + str(hand_rotation[1]) + ',' + str(-hand_rotation[2]) + ',' + str(-hand_rotation[0]) + ',' + str(hand_rotation[3]) + '\t' + str(finger_width)

# i = 0
rotation = np.array([1, 0, 0, 0])

i = 0
while(i < 2000):
    if time.time() > send_update_time + delay:
        send_update_time += delay

        # Send an update to Unity
        hand_position = env.robot.get_ee_position()
        hand_rot = rotation
        finger_width = env.robot.get_fingers_width()
        send_string = str(message_index) + '\n'
        message_index += 1
        for item in inventory_list:
            if not (item in game_objects.keys()):
                send_string += "_deleteItem" + '\t' + item + '\n'
        for item in game_objects.keys():
            if not(item in inventory_list) and not(item in new_object_list):
                new_object_list.append(item)
        if len(new_object_list) != 0:
            send_string += new_object_message(new_object_list, game_objects)
        for game_object in game_objects:
            send_string += object_message(game_object) + '\n'
        send_string += generate_hand_message(hand_position, hand_rot, finger_width)
        sock.SendData(send_string) # Send this string to other application

        data = sock.ReadReceivedData() # read data

        if data != None: # if NEW data has been received since last ReadReceivedData function call
            # print(data)
            unity_latency.append(time.time() - unity_last_time)
            unity_last_time = time.time()

            i += 1
            inventory, unknown_objects, hand_pose, gripper_message = data.split('\n')
            gripper_message = gripper_message[:-1] # remove unneeded tab
            inventory_list = inventory.split('\t')[1:]
            new_object_list = unknown_objects.split('\t')[1:]

            object_index = 0

            position_message, rotation_message = hand_pose.split('\t')
            position = np.array(position_message[1:-1].split(', ')).astype(np.float)
            position = np.array([position[2], -position[0], position[1]])
            rotation = np.array(rotation_message[1:-1].split(', ')).astype(np.float)
            rotation = np.array([-rotation[2], rotation[0], -rotation[1], rotation[3]])
            if gripper_message != "":
                gripper = np.array(gripper_message.split('\t')).astype(np.float)
                if gripper.size == 1:
                    gripper = gripper[0]
                else:
                    gripper = 0
                    hand_sock.SendData(gripper_message)
                    # print('using robot hand')
            else:
                # print('no gripper message')
                pass
    # print('rotation', rotation)
    # rotation = np.array([1, 0, 0, 0])
    goal_joints = np.zeros(9)
    # goal_joints[:7] = env.robot.inverse_kinematics(11, position, quaternion_multiply(rotation, np.array([1, 0, 0, 0])))[:7]
    goal_joints[:7] = env.robot.inverse_kinematics(11, position, rotation)[:7]    
    
    goal_joints[7:] = gripper/2
    env.robot.set_joint_angles(goal_joints)

    # if time.time() > sim_update_time + ENV_STEP_PERIOD: # each env step takes 40ms, so step env every 0.04 seconds
    #     sim_update_time += ENV_STEP_PERIOD
    #     error = np.zeros(4)
    #     error[:3] = position - env.robot.get_ee_position()
    #     error[3] = gripper - env.robot.get_fingers_width()
    #     obs, reward, done, info = env.step(10*np.array([1, 1, 1, 0.07])*error)
    #     distance1 = np.linalg.norm(env.sim.get_base_position("object1") - env.sim.get_base_position("target1"))
    #     distance2 = np.linalg.norm(env.sim.get_base_position("object2") - env.sim.get_base_position("target2"))
    #     if distance2 < 0.05 and distance1 < 0.05:
    #         obs = env.reset()


env.close() # close the sim
print(unity_latency)