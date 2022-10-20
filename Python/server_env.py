import numpy as np
import time

import UdpComms as U
import time

from panda_gym.envs.panda_tasks.panda_pick_and_place import PandaPickAndPlaceEnv
from panda_gym.envs.panda_tasks.panda_stack import PandaStackEnv
    
# Create UDP socket to use for sending (and receiving) Use THIS machines IP
#sock = U.UdpComms(udpIP="172.26.50.211", sendIP = "172.26.67.156", portTX=8000, portRX=8001, enableRX=True, suppressWarnings=False)
sock = U.UdpComms(udpIP="172.26.50.211", sendIP = "172.26.90.96", portTX=8000, portRX=8001, enableRX=True, suppressWarnings=False)

env = PandaStackEnv(render = True) # task enviroment
env.reset()
position = env.robot.get_ee_position()
gripper = env.robot.get_fingers_width()
env.sim.set_base_pose("object1", np.array([0.1, 0.1, 0.02]), np.array([0.0, 0.0, 0.0, 1.0]))
env.sim.set_base_pose("target1", np.array([-0.1, -0.1, 0.02]), np.array([0.0, 0.0, 0.0, 1.0]))
env.sim.set_base_pose("object2", np.array([0.1, -0.1, 0.02]), np.array([0.0, 0.0, 0.0, 1.0]))
env.sim.set_base_pose("target2", np.array([-0.1, 0.1, 0.02]), np.array([0.0, 0.0, 0.0, 1.0]))

game_objects = {"object1":{'type':'block', "size":"0.04,0.04,0.04", "color":"3,25,250,1"},
                "object2":{'type':'block', "size":"0.04,0.04,0.04", "color":"3,250,21,1"}}

new_object_list = []
inventory_list = []
message_index = 1
send_update_time = time.time()
sim_update_time = time.time()
delay = 0.05

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

i = 0

while True:
    hand_position = env.robot.get_ee_position()
    finder_width = env.robot.get_fingers_width()
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
    send_string += '_hand\t' + str(-hand_position[1]) + ',' + str(hand_position[2]) + ',' + str(hand_position[0]) + "," + str(finder_width)
    sock.SendData(send_string) # Send this string to other application
    # print(send_string)
    #i += 1

    if time.time() > send_update_time + delay:
        send_update_time = time.time()
        data = sock.ReadReceivedData() # read data

        if data != None: # if NEW data has been received since last ReadReceivedData function call
            i += 1
            print(i)
            #print(data)
            inventory, unknown_objects, gripper_data = data.split('\n')
            inventory_list = inventory.split('\t')[1:]
            new_object_list = unknown_objects.split('\t')[1:]
            #new_object_list = ['object1', 'object2']
            #print(new_object_list)
            position, finger = gripper_data.split('\t')
            position = np.array(position[1:-1].split(', ')).astype(np.float)
            position = np.array([position[2], -position[0], position[1]])
            gripper = 2*float(finger)

            if i == 100:
                del game_objects['object1']

    error = np.zeros(4)
    error[:3] = position - env.robot.get_ee_position()
    error[3] = gripper - env.robot.get_fingers_width()

    if time.time() > sim_update_time + 0.04:
        sim_update_time = time.time()
        next_env_dict, reward, done, info = env.step(10*np.array([1, 1, 1, 0.07])*error)

env.close() # close the sim