using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using UnityEngine.Networking;

public class TeleportHand : MonoBehaviour
{
    public float linear_stiffness;
    public float rotational_stiffness;
    public Vector3 camera_position = new Vector3(0f, 0.35f, -0.5f);
    private ArticulationBody ab;
    private ArticulationBody[] articulationChain;

    private OVRCameraRig ovrCameraRig;
    private Transform myTransform;
    private Transform recordTransform;
    private Transform targetTransform;
    Unity.Robotics.UrdfImporter.Control.Controller jointController; 
    

    // Start is called before the first frame update
    void Start()
    {
        jointController = FindObjectOfType<Unity.Robotics.UrdfImporter.Control.Controller>();
        ab = GetComponent<ArticulationBody>();
        articulationChain = this.GetComponentsInChildren<ArticulationBody>();
        myTransform = GetComponent<Transform>();
        recordTransform = GameObject.Find("panda_1_hand_tcp").GetComponent<Transform>();
        targetTransform = GameObject.Find("Block").GetComponent<Transform>();

    }
    // Update is called once per frame
    void Update()
    {
        Vector2 ThumbstickInput = OVRInput.Get(OVRInput.Axis2D.SecondaryThumbstick);
        //float moveDirection = Input.GetAxis("Vertical");
        //jointController.moveDirectionUpdate(moveDirection);
        jointController.moveDirectionUpdate(ThumbstickInput[1]);
        

        //JointControl current = articulationChain[2].GetComponent<JointControl>();
        Vector3 current_position = myTransform.position;
        Quaternion current_rotation = myTransform.rotation;

        Quaternion rotation_correction = Quaternion.Euler(200, 180, 0);

        Vector3 goal_position = OVRInput.GetLocalControllerPosition(OVRInput.Controller.RTouch) + camera_position;
        Quaternion goal_rotation = OVRInput.GetLocalControllerRotation(OVRInput.Controller.RTouch) * rotation_correction;

        //Lock the hand to pointing down
        goal_rotation = Quaternion.Euler(180, 180, 0);

        ab.AddForce(linear_stiffness * (goal_position - current_position));
        Quaternion rotation_error = goal_rotation * Quaternion.Inverse(current_rotation);
        Vector3 TorqueVect = new Vector3(rotation_error.x, rotation_error.y, rotation_error.z);

        ab.AddTorque(rotational_stiffness * TorqueVect);
        //ab.TeleportRoot(goal_position, goal_rotation);

        if ((goal_position - current_position).magnitude > 0.5)
        {
            ab.TeleportRoot(goal_position, goal_rotation);
        }
    }
}