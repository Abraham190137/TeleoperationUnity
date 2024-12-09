# TeleoperationUnity

## Paper:
This repository contains the source code for *OpenVR: Teleoperation for Manipulation*, which can be found at https://arxiv.org/abs/2305.09765

## Instruction for use:
 1. Install Unity Hub with a Unity account here: https://unity.com/download
 2. Clone the repository using git or download this project as a zip file.
 3. Add the project in Unity Hub, by selecting "Add Project from Disk" from the drop-down menu and navigating to the cloned repository
 4. Open the project. Upon opening, Unity may say the project is broken. If it does, click 'Ignore'.
 5. In File -> Build Settings, select the Android platform and click "Switch Platform".
 6. Close Unity and Delete the Oculus folder in the TeleoperationUnity/Assets folder.
 7. Follow all of the instructions here to setup unity with the Oculus and enable developer mode on the Meta Quest: https://developer.oculus.com/documentation/unity/unity-gs-overview/
 8. Then follow the instructions here to properly configure the package: https://developer.oculus.com/documentation/unity/unity-tutorial-hello-vr/
 9. Restart Unity.
 10. Delete the x86 folder and x_86.meta from TeleoperationUnity\Library\PackageCache\com.unity.robotics.urdf-importer@90f353e435\Runtime\UnityMeshImporter\Plugins\AssimpNet\Native\win.
 11. Click build and run to start the building process.

Note: The Oculus SDK is constantly changing, so the Unity-Oculus set-up steps (steps 7 and 8) may be slightly different for you. Before using this repo, I would recommend creating a separate Unity project and following the Oculus tutorial. Once you have successfully created a VR app and pushed it to the Oculus, follow the instructions above. (Note: You will be creating a new Unity project. Do not use the project from the Oculus tutorial). When you get to steps 7 and 8, you can follow the Oculus setup procedure (installing the right SDKs, configuring the build setting, etc.) from the tutorial. 

## Robot Control:
The Robotic Control folder contains scripts to interface with the Franka Emika Panda robot, either on hardware through the FrankaPy control structure (https://github.com/iamlab-cmu/frankapy) or in simulation, using the PandaGym bybullet based simulator (https://github.com/qgallouedec/panda-gym).

### Franka Scripts:
- Teleoperation: Communication back-bone for interfacing with the Oculus application and controlling the Panda robot.
- UdpComms: Class to handle Udp Socket communication
- franakpy_extensions: Additional classes to extend the FrankaPy control structure for continuous communciation.
- VR_Teleopeartion_Minimum: Basic implimentation of the teleoperation system.
- DetectObjectTeleop: Helper class for the vision system incharge of detecting objects.
- realsense_ee_shifted.tf, realsense_intrinsics.intr: calibration matricies for the camera in the vision system. You will have to create your own, for your own camera's in your setup.
- VR_Teleoperation_Vision: Teleoperation system with vision.
- Five Fingered Hand Pi Script: Server script that runs on the Raspery Pi controlling the five fingered hand. 

### PandaGym Scripts:
- UdpComms: Class to handle Udp Socket communication
- simple_server: Upd server that prints all messages recieved from the Oculus application. Useful for debugging.
- server_env: Simulates a Franka Emika Panda Robot in a Panda Gym task enviroment (block stacking). Interfaces with the Oculus application, allowing the VR user to control the Panda robot.

## Example Environment Instructions
The code base includes a block stacking example task. Although this demo is implemented for both hardware and simulation, this section will focus on walking through the simulation example, as it is cross-platform and doesn’t require any specific hardware (aside from the Oculus headset) to run. 

First, follow the above instructions for building and deploying the Unity application on the Oculus VR headset. Once the application is running on the VR headset, you can use the simple_server.py script to test its connection to your control PC (the computer controller the robot, either simulation or hardware). 

When you boot the Oculus application, you will see a startup screen (in VR) displaying the Oculus’s IP address and an input box for the control PC’s IP address. Enter the PC’s IP and hit submit. Similarly, in the simple_server.py script, set the socket IP address on line 8. The udpIP is the IP address of the control PC, and the sendIP is the IP address of the Oculus headset.
Once the IP addresses are set, run the program. It should immediately start printing the data messages received from the Oculus. In VR, try moving around the controller - you should see a corresponding change in the hand pose message received by the Python script. 

Connection troubleshooting tips:
- Verify that both devices are on the same network
- Check your network for firewalls that could disable peer-to-peer connections
- If you are using a secure network (ie. university wifi) try connecting both devices to a “standard” wifi network, such as a mobile hotspot.

Once the VR application is running and the connection with the control PC has been tested, the next step is to set up the simulation environment. This environment uses the PandaGym simulator (https://github.com/qgallouedec/panda-gym), so you need to install the panda-gym python package:
pip install panda-gym

Once panda-gym is installed, running server_env.py (located in Robot Control - Python/PandaGym Scripts) will start a PandaGym simulation environment. Before starting, you need to set the IP addresses of the headset and the PC on lines 15 and 16 of the server_env.py script (similar to the process for the simple_server test). 

server_env.py is set up to run PandaGym’s block stacking task. This task creates four objects in the scene: two blocks and two transparent “goal regions”. Once you start the script, the data on these objects, along with the current gripper pose, will be sent to the headset, and these objects will appear in VR and the end effector sprite will move to the location seen in the simulation. The user controls the simulated Franka via the Oculus - moving the right controller will change the goal pose sent to the control PC, which in turn will cause the simulated panda to move towards the new goal pose (which can be seen in the simulation’s rendering). The simulated end-effector’s new pose will then be sent to the Oculus, causing the rendered gripper to move accordingly. 

Once the simulated version of the teleoperation script is working, you can move onto hardware teleoperation by running the VR_Teleperation_Vision.py script (located in the Robot Control - Python/Franka Scripts folder). However, this script requires the FrankaPy low-level controller. If your robot is not a Franka or is using a different controller, then VR_Teleperation_Vision.py will need to be modified accordingly. Specifically, you will need to replace the goto_gripper() and get_gripper_width() functions, along with the GotoPoseLive function, a wrapper that sets goal_poses and reads current poses from FrankaPy.

