using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class HandController_HandTracking : MonoBehaviour
{
    private bool allowMove;
    private Rigidbody hand;
    private Transform fingerL;
    private Transform fingerR;
    private Transform fingerL_goal;
    private Transform fingerR_goal;
    private float finger_goal = 0;
    public float speed = 0.1f;
    private List<string> unknown_objects = new List<string>();
    public Vector3 virtual_walls_max = new Vector3(0.25f, 0.9f, 0.25f);
    public Vector3 virtual_walls_min = new Vector3(-0.25f, 0f, -0.25f);
    public Vector3 camera_position = new Vector3(0f, 0.35f, -0.5f);
    public Vector3 RotationCorrectionEuler = new Vector3(200f, 180f, 0f);
    private Vector3 hand_offset = new Vector3(0f, 0.1034f, 0f);
    private Vector3 goal_position = new Vector3(0f, 0.1f, 0.2f);
    private Vector3 goal_position_new;
    private Quaternion goal_rotation = Quaternion.Euler(180, 180, 0);
    private Quaternion goal_rotation_new;
    private Quaternion rotation_correction;
    private Vector3[] bounding_points_hand = { new Vector3 { x = -0.1f, y = -0.1125f,  z = -0.025f}, //A
                                               new Vector3 { x = 0.1f,  y = -0.1125f,  z = -0.025f},  //B
                                               new Vector3 { x = 0.1f,  y = -0.1125f,  z = 0.025f}, //C
                                               new Vector3 { x = -0.1f, y = -0.1125f,  z = 0.025f}, //D
                                               new Vector3 { x = -0.1f, y = -0.0375f,  z = -0.02f},   //E
                                               new Vector3 { x = 0.1f,  y = -0.0375f,  z = -0.02f},  //F
                                               new Vector3 { x = 0.1f,  y = -0.0375f,  z = 0.02f},  //G
                                               new Vector3 { x = -0.1f, y = -0.0375f,  z = 0.02f}};  //H

    private Vector3[] bounding_points_finger = {new Vector3 { x = -1f, y = 0.01f, z = -0.01f}, //I
                                                new Vector3 { x = 1f,  y = 0.01f, z = -0.01f},  //J
                                                new Vector3 { x = 1f,  y = 0.01f, z = 0.01f}, //K
                                                new Vector3 { x = -1f, y = 0.01f, z = 0.01f}};  //L

    private Color controller_color = new Color(1f, 1f, 1f, 0.2f);

    // start is called before the first frame update
    void Start()
    {
        hand = GameObject.Find("python_hand").GetComponent<Rigidbody>();
        fingerR = GameObject.Find("fingerR").GetComponent<Transform>();
        fingerL = GameObject.Find("fingerL").GetComponent<Transform>();
        fingerL_goal = GameObject.Find("fingerL_goal").GetComponent<Transform>();
        fingerR_goal = GameObject.Find("fingerR_goal").GetComponent<Transform>();
        allowMove = false;
        GameObject.Find("node5").GetComponent<Renderer>().material.SetColor("_Color", Color.red);
        rotation_correction = Quaternion.Euler(RotationCorrectionEuler);
        //virtual_walls_max = new Vector3(0.3f, 0.95f, 0.3f);
        //virtual_walls_min = new Vector3(-0.3f, -0.05f, -0.3f);
}

    public float GetFingerGoal()
    {
        return finger_goal;
    }

    public Vector3 GetGoalPosition()
    {
        return goal_position;
    }

    public Quaternion GetGoalRotation()
    {
        return goal_rotation;
    }

    public void MoveHand(string command_txt)
    {
        // Convert the movehand command text into a list of floats
        string[] split_input = command_txt.Split('\t');
        List<float> pose_float = new List<float>(3);
        List<float> rot_float = new List<float>(3);
        float finger_float = float.Parse(split_input[3]);
        foreach (string item in split_input[1].Split(','))
        {
            pose_float.Add(float.Parse(item));
        }
        foreach (string item in split_input[2].Split(','))
        {
            rot_float.Add(float.Parse(item));
        }
        //Move the hand and two fingers to their respective positions(from the command text).
        hand.position = new Vector3(pose_float[0], pose_float[1], pose_float[2]);
        hand.rotation = new Quaternion(rot_float[0], rot_float[1], rot_float[2], rot_float[3]);
        fingerR.localPosition = new Vector3(finger_float / 2, -0.0454f, 0f);
        fingerL.localPosition = new Vector3(-finger_float / 2, -0.0454f, 0f);

    }

    // Move the hand based on the recorded goal positions. This bypasses the python side.
    public void MoveHandSelf()
    {
        hand.position = goal_position;
        hand.rotation = goal_rotation;
        fingerR.localPosition = new Vector3(finger_goal, -0.0454f, 0f);
        fingerL.localPosition = new Vector3(-finger_goal, -0.0454f, 0f);
    }

    // update is called once per frame
    void Update()
    {
        //Use button one (the A button) to toggle allow Move.
        //When allowMove == False, the controller position stops being tracked, allow the user to freely move
        //their hand. To show this, the hand turns red when allowMove is false.
        if (OVRInput.GetDown(OVRInput.Button.One))
        {
            if (allowMove)
            {
                allowMove = false;
                GameObject.Find("node5").GetComponent<Renderer>().material.SetColor("_Color", Color.red);
            }
            else
            {
                allowMove = true;
                GameObject.Find("node5").GetComponent<Renderer>().material.SetColor("_Color", Color.white);
            }
        }

        // Update the goal position to send over the socket
        if (allowMove)
        {
            // get the controller rotation and adjust (so that the hand is in a confortable resting position)
            goal_rotation_new = OVRInput.GetLocalControllerRotation(OVRInput.Controller.RTouch) * rotation_correction;

            // get the controller location, and adjust it based on the camera postion (since hand location is based
            // on distance from the camera) and hand offset (since the position sent over the socket is actually the
            // finger tip location, not the hand base location)
            goal_position_new = OVRInput.GetLocalControllerPosition(OVRInput.Controller.RTouch) + camera_position + goal_rotation*hand_offset;
            //Lock the hand to pointing down
            //goal_rotation = Quaternion.Euler(180, 180, 0);

            // keep the hand position within the virtual walls

            bool virtual_wall_collision = false;
            Debug.Log(hand.rotation * (new Vector3(0.10f, -0.1125f, -0.025f)) + hand.position);
            //for (int i = 0; i < 3; i++)
            //{
            //    goal_position_clamped[i] = Mathf.Clamp(goal_position[i], virtual_walls_min[i], virtual_walls_max[i]);
            //    if (goal_position_clamped[i] == virtual_walls_max[i] || goal_position_clamped[i] == virtual_walls_min[i])
            //    {
            //        virtual_wall_collision = true;
            //    }
            //}
            Vector3 finger_scaling = new Vector3(0.015f + Mathf.Max(finger_goal, fingerR.localPosition[0]), 1f, 1f);
            List<Vector3> bounding_points = new List<Vector3>();
            bounding_points.AddRange(bounding_points_hand);
            foreach (Vector3 finger_point in bounding_points_finger)
            {
                bounding_points.Add(Vector3.Scale(finger_point, finger_scaling));
            }
            foreach (Vector3 displacement in bounding_points)
            {
                Vector3 point = goal_rotation_new * displacement + goal_position_new;
                for (int i = 0; i < 3; i++)
                {
                    if (point[i] > virtual_walls_max[i] || point[i] < virtual_walls_min[i])
                    {
                        virtual_wall_collision = true;
                    }
                }
            }
            // if in collision with the virtual walls, vibrate the controllers.
            if (virtual_wall_collision)
            {
                OVRInput.SetControllerVibration(1f, 10f, OVRInput.Controller.RTouch);
            }
            else
            {
                OVRInput.SetControllerVibration(0, 0, OVRInput.Controller.RTouch);
                goal_position = goal_position_new;
                goal_rotation = goal_rotation_new;
            }

            controller_color.a = Mathf.Clamp((goal_position_new - hand.position).magnitude / 0.15f, 0f, 1f);
            GameObject.Find("r_rainier_mesh").GetComponent<Renderer>().material.SetColor("_Color", controller_color);

            // Move the goal finger position based on the thumbstick input
            Vector2 ThumbstickInput = OVRInput.Get(OVRInput.Axis2D.SecondaryThumbstick);
            finger_goal += speed * ThumbstickInput[1] * Time.deltaTime;
            finger_goal = Mathf.Clamp(finger_goal, 0f, 0.04f);
            fingerL_goal.localPosition = new Vector3(-finger_goal, -0.0454f, 0f);
            fingerR_goal.localPosition = new Vector3(finger_goal, -0.0454f, 0f);
        } 
        else
        {
            controller_color.a = 1f;
            GameObject.Find("r_rainier_mesh").GetComponent<Renderer>().material.SetColor("_Color", controller_color);
        }
    }
}
