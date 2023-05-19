import numpy as np
import time
import sys

import coustom_hand_controller as handControl

import UdpComms as U

OPEN_ANGLES = np.array([1, 0.5, 0.5, 0.5, 0.5]) # angle that corresponds to a fully closed finger
CLOSED_ANGLES = np.array([2, 3.2, 3.2, 3.2, 3.2]) # angle that corresponds to a fully open finger

# Create UDP socket to use for sending (and receiving) Use THIS machines IP
sock = U.UdpComms(udpIP="172.26.50.162", sendIP = "172.26.5.54", portTX=8011, portRX=8010, enableRX=True, suppressWarnings=False)
recieved_count = 0

hand = handControl.HandController()
hand.start()

# print('start loop')
while True:
    time.sleep(0.001)
    sock.SendData(str(recieved_count)) # Send this string to other application

    data = sock.ReadReceivedData() # read data
        
    if data != None: # if NEW data has been received since last ReadReceivedData function call
        # print(data)
        finger_angles_str = data[:-1].split("\t")
        finger_angles = np.array([float(i) for i in finger_angles_str])
        finger_portions = np.clip((finger_angles - CLOSED_ANGLES)/(OPEN_ANGLES - CLOSED_ANGLES), 0, 1)
        recieved_count += 1
        hand.set_joints_percent(finger_portions, durration = 0, sleep=False)

