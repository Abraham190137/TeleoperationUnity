import numpy as np

from frankapy import FrankaArm, SensorDataMessageType
from frankapy import FrankaConstants as FC
from frankapy.proto_utils import sensor_proto2ros_msg, make_sensor_group_msg
from frankapy.proto import PosePositionSensorMessage, JointPositionSensorMessage #, ShouldTerminateSensorMessage, CartesianImpedanceSensorMessage
from franka_interface_msgs.msg import SensorDataGroup

import rospy
import threading

from copy import deepcopy

class GotoPoseLive:
    def __init__(self, dt = 0.02, T = 1000, cartesian_impedances = None, step_size = 0.05):
        """
        dt: the time inbetween each communication loop
        T: the total time the skill will be live for
        cartesian_impedances: list of cartesian impedaces. If none, uses default from FranaConstants
        step_size: max distance the controller will tell the robot to move in one step. If the distance to travel
            is greater, then the robot will be told to move step_size towards the goal (at that iteration)
        """
        self.dt = dt
        self.T = T
        self.initialize = True # determines whether to start the skill
        self.cartesian_impedances = cartesian_impedances
        self.fa = FrankaArm()
        self.pose = self.fa.get_pose() # pose to send to the skill
        print(type(self.pose), "intialize0")
        self.goal_pose = deepcopy(self.pose) # pose the user provides
        print(type(self.goal_pose), "intialize1")
        self.running = False # flag used to stop the loop
        self.step_size = step_size 


    def run(self):
        print('start run')
        rate = rospy.Rate(1/self.dt) #set the rospy rate.
        pub = rospy.Publisher(FC.DEFAULT_SENSOR_PUBLISHER_TOPIC, SensorDataGroup, queue_size=10) #used to update the skill
        self.initialize = True #set initilize to true
        id = 0 #id counter for the ross message

        # loop untill the 'running' flag is set to false
        while self.running:
            # If the robot is trying to move more than step_size, clip the motion.
            cur_pose = self.fa.get_pose() 
            delta_motion = self.goal_pose.translation - cur_pose.translation
            self.pose = deepcopy(self.goal_pose)
            if (np.linalg.norm(delta_motion) > self.step_size):
                self.pose.translation = (delta_motion/np.linalg.norm(delta_motion))*self.step_size + cur_pose.translation
                

            if self.initialize: # start the skill
                if self.cartesian_impedances != None:
                    self.fa.goto_pose(self.pose, duration=self.T, dynamic=True, buffer_time=10,
                        cartesian_impedances=self.cartesian_impedances)
                else:
                    self.fa.goto_pose(self.pose, duration=self.T, dynamic=True, buffer_time=10)

                    self.initialize = False # no longer initalizing
                    init_time = rospy.Time.now().to_time() # get initial time.
            
            else: # send update message
                # print("update go to pose", self.pose.translation)
                timestamp = rospy.Time.now().to_time() - init_time # update time stamp
                
                # ross messages:
                traj_gen_proto_msg = PosePositionSensorMessage(
                    id=id, timestamp=timestamp,
                    position=self.pose.translation, quaternion=self.pose.quaternion
                )
                ros_msg = make_sensor_group_msg(
                    trajectory_generator_sensor_msg=sensor_proto2ros_msg(
                        traj_gen_proto_msg, SensorDataMessageType.POSE_POSITION),
                )
                # uncomment below to log the ross messages to the terminal
                # rospy.loginfo('Publishing: ID {}'.format(traj_gen_proto_msg.id))
                pub.publish(ros_msg) # send message to franka
            rate.sleep() #sleep for dt.
            id += 1

    def get_goal_pose(self):
        # Returns the goal pose
        return self.goal_pose
    
    def set_goal_pose(self, goal_pose):
        # set the goal pose. This is used to control the robot.
        self.goal_pose = goal_pose

    def set_goal_translation(self, goal_translation):
        # sets the goal pose translation, leaves the goal rotation unchanged.
        self.goal_pose.translation = goal_translation
    
    def start(self):
        # start run() in a new thread
        self.running = True
        thread = threading.Thread(target=self.run, daemon=True)
        thread.start()
    
    def stop(self):
        # stop runing the thread by setting the 'running' flag to false, then waiting for 
        # the tread to terminate. Finally, stop any ongoing skill.
        self.running = False
        self.thread.join()
        print('joined')
        self.fa.stop_skill()


class GotoJointsLive:
    def __init__(self, dt = 0.02, T = 1000, k_gains = None, d_gains = None, ignore_virtual_walls = False, max_rot = 0.3):
        """
        dt: the time inbetween each communication loop
        T: the total time the skill will be live for
        k_gains: list of k gains for joint PID. I think. It's passed to fa.goto_joints.
        d_gains: list of d gains for joint PID. I think. It's passed to fa.goto_joints.
        max_rot: max rotation the controller will tell the robot to move in one step. If the goal rotation
            is greater, then the robot will be told to rotate max_rot towards the goal (at that iteration)
        ignore_virtual_walls: ignores python virtual walls. We shouldn't need to do this but we do, for some reason.
        """
        self.dt = dt
        self.T = T
        self.initialize = True # determines whether to start the skill

        # my defaults for k and d. They seem to work OK for joint 6.
        if d_gains == None:
            self.d_gains = (1*np.array(FC.DEFAULT_D_GAINS)).tolist()
        else:
            self.d_gains = d_gains
        if k_gains == None:
            self.k_gains = (0.5*np.array(FC.DEFAULT_K_GAINS)).tolist()
        else:
            self.k_gains = k_gains

        self.fa = FrankaArm()
        self.joints = self.fa.get_joints() # joints to send to the skill
        self.goal_joints = deepcopy(self.joints) # joints the user provides
        self.running = False # flag used to stop the loop
        self.ignore_virtual_walls = ignore_virtual_walls
        self.max_rot = max_rot

    
    def run(self):
        rate = rospy.Rate(1/self.dt) #set the rospy rate.
        pub = rospy.Publisher(FC.DEFAULT_SENSOR_PUBLISHER_TOPIC, SensorDataGroup, queue_size=10)
        self.initialize = True #set initilize to true
        id = 0 #id counter for the ross message

        # loop untill the 'running' flag is set to false
        while self.running:
            # If the robot is trying to move more than max_rot, clip the motion.
            cur_joints = self.fa.get_joints()
            delta_joints = self.goal_joints - cur_joints
            for i in range(len(delta_joints)):
                if abs(delta_joints[i]) > self.max_rot:
                    self.joints[i] = self.max_rot*delta_joints[i]/abs(delta_joints[i]) + cur_joints[i]
                else:
                    self.joints[i] = self.goal_joints[i]

            if self.initialize: # start the skill
                self.fa.goto_joints(self.joints, duration=self.T, dynamic=True, buffer_time=10,
                    d_gains=self.d_gains, k_gains= self.k_gains, ignore_virtual_walls=self.ignore_virtual_walls)

                self.initialize = False
                init_time = rospy.Time.now().to_time() # get initial time.
            
            else: # send update message
                # print("update go to pose", self.pose.translation)
                timestamp = rospy.Time.now().to_timevoe() - init_time

                # ross messages:
                traj_gen_proto_msg = JointPositionSensorMessage(
                    id=id, timestamp=timestamp,
                    joints = self.joints
                )
                ros_msg = make_sensor_group_msg(
                    trajectory_generator_sensor_msg=sensor_proto2ros_msg(
                        traj_gen_proto_msg, SensorDataMessageType.POSE_POSITION),
                )

                # uncomment below to log the ross messages to the terminal
                # rospy.loginfo('Publishing: ID {}'.format(traj_gen_proto_msg.id))
                pub.publish(ros_msg)
            rate.sleep() # sleep for dt.
            id += 1

    def get_goal_joints(self):
        # Returns the goal joints
        return self.goal_joints
    
    def set_goal_joints(self, goal_joints):
        # set the goal joints. This is used to control the robot.
        self.goal_joints = goal_joints
    
    def start(self):
        # start run() in a new thread
        self.running = True
        self.thread = threading.Thread(target=self.run, daemon=True)
        self.thread.start()
    
    def stop(self):
        # stop runing the thread by setting the 'running' flag to false, then waiting for 
        # the tread to terminate. Finally, stop any ongoing skill.
        self.running = False
        self.thread.join()
        print('joined')
        self.fa.stop_skill()

        