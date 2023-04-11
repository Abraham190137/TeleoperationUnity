# TeleoperationUnity
Instruction for use:
- Clone the repository
- Add the project in Unity Hub, by selecting "Add Project from Disk" from the drop-down menu and navigating to the cloned repository
- Open the project.
- Upon opening, Unity may say the project is broken. If it does, click 'Ignore'.
- In File -> Build Settings, select the Android platform and click "Switch Platform".
- Under Assets/Scenes, open the desired scene.
- Fix any errors that apear in consol.

Python Side:
The Python folder contains 3 python files used for comunicating with Unity. server.py has a basic communication setup for testing the connection, server_env.py uses panda_gym to simulate the robot, with unity controlling the robots movements, and the simulation sending unity the resultant object pose info.
