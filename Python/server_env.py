import numpy as np
import time

import UdpComms as U
import time

from panda_gym.envs.panda_tasks.panda_pick_and_place import PandaPickAndPlaceEnv
from panda_gym.envs.panda_tasks.panda_stack import PandaStackEnv
    
# Create UDP socket to use for sending (and receiving) Use THIS machines IP
#sock = U.UdpComms(udpIP="172.26.110.185", sendIP = "172.26.67.156", portTX=8000, portRX=8001, enableRX=True, suppressWarnings=False)
sock = U.UdpComms(udpIP="172.26.40.249", sendIP = "172.26.90.96", portTX=8000, portRX=8001, enableRX=True, suppressWarnings=False)

env = PandaStackEnv(render = True) # task enviroment
env.reset()
env.sim.set_base_pose("object1", np.array([0.1, 0.1, 0.02]), np.array([0.0, 0.0, 0.0, 1.0]))
env.sim.set_base_pose("target1", np.array([-0.1, -0.1, 0.02]), np.array([0.0, 0.0, 0.0, 1.0]))
env.sim.set_base_pose("object2", np.array([0.1, -0.1, 0.02]), np.array([0.0, 0.0, 0.0, 1.0]))
env.sim.set_base_pose("target2", np.array([-0.1, 0.1, 0.02]), np.array([0.0, 0.0, 0.0, 1.0]))

def object_message(object_name):
    pos = env.sim.get_base_position(object_name)
    vel = env.sim.get_base_velocity(object_name)
    rot = env.sim.get_base_orientation(object_name)
    avel = env.sim.get_base_angular_velocity(object_name)
    return str(-pos[1]) + ',' + str(pos[2]) + ',' + str(pos[0]) + '\t' \
    + str(-vel[1]) + ',' + str(vel[2]) + ',' + str(vel[0]) + '\t' \
    + str(rot[1]) + ',' + str(-rot[2]) + ',' + str(-rot[0]) + ',' + str(rot[3]) + '\t' \
    + str(avel[1]) + ',' + str(-avel[2]) + ',' + str(-avel[0])

while True:
    hand_position = env.robot.get_ee_position()
    finder_width = env.robot.get_fingers_width()
    send_string = object_message('object1') + '\n' + object_message('object2') \
    + '\n' + str(-hand_position[1]) + ',' + str(hand_position[2]) + ',' + str(hand_position[0]) + "," + str(finder_width)
    sock.SendData(send_string) # Send this string to other application
    # print(send_string)
    #i += 1

    data = sock.ReadReceivedData() # read data

    if data != None: # if NEW data has been received since last ReadReceivedData function call
        print(data)
        position, finger = data.split('\t')
        position = np.array(position[1:-1].split(', ')).astype(np.float)
        position = np.array([position[2], -position[0], position[1]])
        gripper = 2*float(finger)

        error = np.zeros(4)
        error[:3] = position - env.robot.get_ee_position()
        error[3] = gripper - env.robot.get_fingers_width()

        next_env_dict, reward, done, info = env.step(10*np.array([1, 1, 1, 0.07])*error)
        print(env.robot.get_ee_position())

        # time.sleep(0.1)
    
env.close() # close the sim