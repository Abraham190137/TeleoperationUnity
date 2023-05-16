import numpy as np
import time

import UdpComms as U

from panda_gym.envs.panda_tasks.panda_pick_and_place import PandaPickAndPlaceEnv
from panda_gym.envs.panda_tasks.panda_stack import PandaStackEnv
    
# Create UDP socket to use for sending (and receiving) Use THIS machines IP for udp.
sock = U.UdpComms(udpIP="172.26.5.152", sendIP = "172.26.76.116", portTX=8000, portRX=8001, enableRX=True, suppressWarnings=False)
# sock = U.UdpComms(udpIP="172.26.50.82", sendIP = "172.26.89.114", portTX=8000, portRX=8001, enableRX=True, suppressWarnings=False)

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
new_ghost_list = []
inventory_list = []
message_index = 1
send_update_time = time.time()
sim_update_time = time.time()
delay = 0.01 # 0.5
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

class ghost_object:
    def __init__(self, object_name):
        color = np.random.randint(0, 255, 3)
        self.discription = {'type':'block', "size":"0.04,0.04,0.04", "color":str(color[0])+","+str(color[1])+","+str(color[2])+",1"}
        self.object_name = object_name
        self.pos = np.random.uniform(-0.1, 0.1, 3) + np.array([0, 0, 0.1])
        self.vel = np.random.uniform(-1, 1, 3)
        self.rot = np.random.uniform(-np.pi, np.pi, 3)
        self.avel = np.random.uniform(-1, 1, 3)

    def object_message(self):
        self.quat = get_quaternion_from_euler(self.rot[0], self.rot[1], self.rot[2])

        return self.object_name + '\t' + str(-self.pos[1]) + ',' + str(self.pos[2]) + ',' + str(self.pos[0]) + '\t' \
        + str(-self.vel[1]) + ',' + str(self.vel[2]) + ',' + str(self.vel[0]) + '\t' \
        + str(self.quat[1]) + ',' + str(-self.quat[2]) + ',' + str(-self.quat[0]) + ',' + str(self.quat[3]) + '\t' \
        + str(self.avel[1]) + ',' + str(-self.avel[2]) + ',' + str(-self.avel[0])

    def update(self, delta_time):
        self.pos += self.vel*delta_time
        self.vel += np.random.uniform(-0.1, 0.1, 3) - 0.05*(self.pos - np.array([0, 0, 0.25])) -0.05*self.vel
        self.rot += self.avel*delta_time
        self.avel += np.random.uniform(-0.3, 0.3, 3) - 0.01*self.avel
        
    
    def new_object_message(self):
        return '_newItem\t' + self.discription['type'] + '\t' + self.object_name + '\t' \
            + self.discription["size"] + '\t' + self.discription["color"] + '\n'


ghost_objects = {'g0': ghost_object('g0')}

def generate_hand_message(hand_position, hand_rotation, finger_width):
    return '_hand\t' + str(-hand_position[1]) + ',' + str(hand_position[2]) + ',' + str(hand_position[0]) + '\t' \
     + str(hand_rotation[1]) + ',' + str(-hand_rotation[2]) + ',' + str(-hand_rotation[0]) + ',' + str(hand_rotation[3]) + '\t' + str(finger_width)

i = 0
rotation = np.array([0, -0.21644, 0, 0.9763])

summon_last_time = time.time()

while True:
    if time.time() > send_update_time + delay:
        send_update_time += delay

        # Send an update to Unity
        hand_position = env.robot.get_ee_position()
        hand_rot = rotation
        finger_width = env.robot.get_fingers_width()
        send_string = str(message_index) + '\n'
        message_index += 1
        for item in inventory_list:
            if not (item in game_objects.keys() or item in ghost_objects.keys()):
                send_string += "_deleteItem" + '\t' + item + '\n'
        for item in game_objects.keys():
            if not(item in inventory_list) and not(item in new_object_list):
                new_object_list.append(item)
        for new_ghost in new_ghost_list:
            send_string += ghost_objects[new_ghost].new_object_message()
        if len(new_object_list) != 0:
            send_string += new_object_message(new_object_list, game_objects)
        for obj in ghost_objects:
            send_string += ghost_objects[obj].object_message() + '\n'
        for game_object in game_objects:
            send_string += object_message(game_object) + '\n'
        send_string += generate_hand_message(hand_position, hand_rot, finger_width)
        sock.SendData(send_string) # Send this string to other application

        data = sock.ReadReceivedData() # read data

        if data != None: # if NEW data has been received since last ReadReceivedData function call
            unity_latency.append(time.time() - unity_last_time)
            unity_last_time = time.time()

            # print(unity_latency[-1])
            for ghost in ghost_objects.values():
                ghost.update(unity_latency[-1])

            i += 1
            inventory, unknown_objects, gripper_data = data.split('\n')
            inventory_list = inventory.split('\t')[1:]
            new_object_list = unknown_objects.split('\t')[1:]
            new_ghost_list = []

            object_index = 0
            while object_index < len(new_object_list):
                if new_object_list[object_index] in ghost_objects.keys():
                    new_ghost_list.append(new_object_list.pop(object_index))
                else:
                    object_index += 1

            position, rotation, finger = gripper_data.split('\t')
            position = np.array(position[1:-1].split(', ')).astype(np.float)
            position = np.array([position[2], -position[0], position[1]])
            rotation = np.array(rotation[1:-1].split(', ')).astype(np.float)
            rotation = np.array([-rotation[2], rotation[0], -rotation[1], rotation[3]])
            gripper = 2*float(finger)

            if time.time()-summon_last_time > 0.25:
                summon_last_time += 0.25
                print(data)
                print('num_ghosts', len(ghost_objects))
                print('num_inventory', len(inventory_list))
                ghost_name = 'g' + str(len(ghost_objects))
                ghost_objects[ghost_name] = ghost_object(ghost_name)

            # if i%100 == 0:
            #     for j in range(100):
            #         ghost_name = 'ghost_' + str(len(ghost_objects))
            #         ghost_objects[ghost_name] = ghost_object(ghost_name)

    if time.time() > sim_update_time + ENV_STEP_PERIOD: # each env step takes 40ms, so step env every 0.04 seconds
        sim_update_time += ENV_STEP_PERIOD
        error = np.zeros(4)
        error[:3] = position - env.robot.get_ee_position()
        error[3] = gripper - env.robot.get_fingers_width()
        obs, reward, done, info = env.step(10*np.array([1, 1, 1, 0.07])*error)
        distance1 = np.linalg.norm(env.sim.get_base_position("object1") - env.sim.get_base_position("target1"))
        distance2 = np.linalg.norm(env.sim.get_base_position("object2") - env.sim.get_base_position("target2"))
        if distance2 < 0.05 and distance1 < 0.05:
            obs = env.reset()

env.close() # close the sim