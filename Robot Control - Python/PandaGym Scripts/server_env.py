import numpy as np
import time

import UdpComms as U

# PandaGym underwent a major update durring development of this project. 
# If you are using an older version of PandaGym, set OLD_PANDAGYM to True.
OLD_PANDAGYM = False

if OLD_PANDAGYM:
    from panda_gym.envs.panda_tasks.panda_stack import PandaStackEnv
else:
    from panda_gym.envs.panda_tasks import PandaStackEnv

THIS_IP = "172.26.116.22" # IP adress of this machine
OCULUS_IP = "172.26.33.175" # IP adress of the Oculus Headset
RESET_AT_TASK_COMPLETION = False # Resets the enviroemnt when the task (stack) is completed.


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

# Create UDP socket to use for sending (and receiving) Use THIS machines IP for udp.
sock = U.UdpComms(udpIP=THIS_IP, sendIP = OCULUS_IP, portTX=8000, portRX=8001, enableRX=True, suppressWarnings=False)

if OLD_PANDAGYM:
    env = PandaStackEnv(render = True, control_type="joints") # task enviroment
else:
    env = PandaStackEnv(render_mode = "human", control_type="joints") # task enviroment

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
DELAY = 0.005 # Set communication delay with the oculus headset. Means that the oculus will communicate at a max of 200HZ
ENV_STEP_PERIOD = 0.04 
send_update_time = time.time() - DELAY
sim_update_time = time.time() - ENV_STEP_PERIOD

rotation = np.array([1, 0, 0, 0])
goal_joints = np.empty(9)
for i in range(9):
    goal_joints[i] = env.robot.get_joint_angle(i)

while(True):
    if time.time() > send_update_time + DELAY:
        send_update_time += DELAY

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
            inventory, unknown_objects, hand_pose, gripper_message = data.split('\n')
            gripper_message = gripper_message[:-1] # remove unneeded tab
            inventory_list = inventory.split('\t')[1:]
            new_object_list = unknown_objects.split('\t')[1:]

            object_index = 0

            position_message, rotation_message = hand_pose.split('\t')
            position = np.array(position_message[1:-1].split(', ')).astype(np.float64)
            position = np.array([position[2], -position[0], position[1]])
            rotation = np.array(rotation_message[1:-1].split(', ')).astype(np.float64)
            rotation = np.array([-rotation[2], rotation[0], -rotation[1], rotation[3]])
            if gripper_message == "":
                continue

            gripper = np.array(gripper_message.split('\t')).astype(np.float64)[0]
            print(gripper)

            # Update the position of the simulated panda robot acording to the recieved message
            goal_joints[:7] = env.robot.inverse_kinematics(11, position, rotation)[:7]    
            
            goal_joints[7:] = gripper*2
            # env.robot.set_joint_angles(goal_joints)

    # Update the panda-gym simulation
    if time.time() > sim_update_time + ENV_STEP_PERIOD: # each env step takes 40ms, so step env every 0.04 seconds
        sim_update_time += ENV_STEP_PERIOD
        joint_angles = np.empty(9)
        for i in range(7):
            joint_angles[i] = env.robot.get_joint_angle(i)
        
        joint_angles[7:] = env.robot.get_fingers_width()
            

        error = goal_joints - joint_angles

        if OLD_PANDAGYM:
            obs, reward, done, info = env.step(10*error[:8])
        else:
            obs, reward, done, _, info = env.step(10*error[:8])

        print(joint_angles)

        # Reset the enviroment if the task is completed
        if RESET_AT_TASK_COMPLETION:
            distance1 = np.linalg.norm(env.sim.get_base_position("object1") - env.sim.get_base_position("target1"))
            distance2 = np.linalg.norm(env.sim.get_base_position("object2") - env.sim.get_base_position("target2"))
            if distance2 < 0.05 and distance1 < 0.05:
                obs = env.reset()


env.close() # close the sim