import numpy as np
import time

import UdpComms as U
import time

from panda_gym.envs.panda_tasks.panda_pick_and_place import PandaPickAndPlaceEnv
    
# Create UDP socket to use for sending (and receiving)
sock = U.UdpComms(udpIP="192.168.137.227", portTX=8000, portRX=8001, enableRX=True, suppressWarnings=True)

env = PandaPickAndPlaceEnv(render = True) # task enviroment
env.reset()

i = 0
while True:
    sock.SendData('Sent from Python: ' + str(i)) # Send this string to other application
    i += 1

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

        # time.sleep(0.1)
    
env.close() # close the sim