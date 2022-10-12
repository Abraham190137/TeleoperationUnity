# TeleoperationUnity
Instruction for use:
- Clone the repository
- Add the project in Unity Hub, by selecting "Add Project from Disk" from the drop-down menu and navigating to the cloned repository
- Open the project.
- Upon opening, Unity may say the project is broken. If it does, click 'Ignore'.
- In the repository is the folder "Other Files", which contains Controller.cs and Unity.Robotics.URDFImporter.asmdef. Use these to replace Controller.cs in TeleoperationUnity\Library\PackageCache\com.unity.robotics.urdf-importer@90f353e435\Runtime\Controller and Unity.Robotics.URDFImporter.asmdef in TeleoperationUnity\Library\PackageCache\com.unity.robotics.urdf-importer@90f353e435\Runtime
- In File -> Build Settings, select the Android platform and click "Switch Platform".
- Under Assets/Scenes, open the desired scene.
- Fix any errors that apear in consol.
