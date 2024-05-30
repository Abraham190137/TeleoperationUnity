# TeleoperationUnity

## Paper:
This repository contains the source code for *OpenVR: Teleoperation for Manipulation*, which can be found at https://arxiv.org/abs/2305.09765

## Instruction for use:
 1. Install git here: https://git-scm.com/download/
 2. Install Unity Hub with a Unity account here: https://unity.com/download
 3. Clone the repository using git or download this project as a zip file.
 4. Add the project in Unity Hub, by selecting "Add Project from Disk" from the drop-down menu and navigating to the cloned repository
 5. Open the project. Upon opening, Unity may say the project is broken. If it does, click 'Ignore'.
 6. In File -> Build Settings, select the Android platform and click "Switch Platform".
 7. Close Unity and Delete the Oculus folder in the TeleoperationUnity/Assets folder.
 10. Follow all of the instructions here to setup unity with the Oculus and enable developer mode on the Meta Quest 2: https://developer.oculus.com/documentation/unity/unity-gs-overview/
 11. Download the Oculus Integration SDK from here: https://developer.oculus.com/downloads/package/unity-integration
 12. Then follow instructions here to properly configure the package: https://developer.oculus.com/documentation/unity/unity-tutorial-hello-vr/
 13. Restart Unity.
 14. Delete the x86 folder and x_86.meta from TeleoperationUnity\Library\PackageCache\com.unity.robotics.urdf-importer@90f353e435\Runtime\UnityMeshImporter\Plugins\AssimpNet\Native\win.
 15. Click build and run to start the building process.

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
