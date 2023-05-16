import numpy as np
import time

import UdpComms as U

# Create UDP socket to use for sending (and receiving) Use THIS machines IP
sock = U.UdpComms(udpIP="172.26.63.157", sendIP = "172.26.76.116", portTX=8000, portRX=8001, enableRX=True, suppressWarnings=False)
# sock = U.UdpComms(udpIP="172.26.90.210", sendIP = "172.26.27.130", portTX=8000, portRX=8001, enableRX=True, suppressWarnings=False)
recieved_count = 0

while True:
    # sock.SendData(str(recieved_count)) # Send this string to other application

    data = sock.ReadReceivedData() # read data

    if data != None: # if NEW data has been received since last ReadReceivedData function call
        print(data)
        recieved_count += 1