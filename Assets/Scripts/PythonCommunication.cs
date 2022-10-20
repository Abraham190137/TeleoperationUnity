using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine.SceneManagement;

public class PythonCommunication: MonoBehaviour
{
    //[SerializeField] TextMeshProUGUI pythonRcvdText = null;
    //[SerializeField] TextMeshProUGUI sendToPythonText = null;
    string pythonRcvdText;
    string sendToPythonText = "start";
    bool allowMove = false;

    private ArticulationBody[] articulationChain;
    private Transform recordTransform;
    private Rigidbody rb;
    private Rigidbody rb2;
    //private ArticulationBody handAB;
    private Rigidbody hand;
    private Transform fingerL;
    private Transform fingerR;
    private Transform fingerL_goal;
    private Transform fingerR_goal;
    private float finger_goal = 0;
    public float speed = 1;
    private List<string> unknown_objects = new List<string>();
    private string previous_message_id = "0";
    public Vector3 virtual_walls_max = new Vector3(0.25f, 0.9f, 0.25f);
    public Vector3 virtual_walls_min = new Vector3(-0.25f, 0f, -0.25f);
    public Vector3 camera_position = new Vector3(0f, 0.35f, -0.5f);
    private Vector3 goal_position;

    string tempStr = "_init";

    private Dictionary<string, Rigidbody> ObjectInventory = new Dictionary<string, Rigidbody>();

    string enteredIP;

    UdpSocket udpSocket;

    public void QuitApp()
    {
        //]Debug.Log("Quitting");
        Application.Quit();
    }

    public void UpdatePythonRcvdText(string str)
    {
        tempStr = str;
    }

    public void SendToPython()
    {
        udpSocket.SendData(sendToPythonText);
        //Debug.Log("Sent to Python: " + sendToPythonText);
    }

    private void Start()
    {

        //ObjectInventory.Add("rb", GameObject.Find("Block").GetComponent<Rigidbody>());
        //ObjectInventory.Add("rb2", GameObject.Find("Block2").GetComponent<Rigidbody>());
        //rb = GameObject.Find("Block").GetComponent<Rigidbody>();
        //rb2 = GameObject.Find("Block2").GetComponent<Rigidbody>();
        hand = GameObject.Find("python_hand").GetComponent<Rigidbody>();
        fingerR = GameObject.Find("fingerR").GetComponent<Transform>();
        fingerL = GameObject.Find("fingerL").GetComponent<Transform>();
        fingerL_goal = GameObject.Find("fingerL_goal").GetComponent<Transform>();
        fingerR_goal = GameObject.Find("fingerR_goal").GetComponent<Transform>();
        //recordTransform = GameObject.Find("panda_1_hand_tcp").GetComponent<Transform>();
        udpSocket = FindObjectOfType<UdpSocket>();
        //articulationChain = GameObject.Find("panda_1_link8").GetComponentsInChildren<ArticulationBody>();
    }

    //'name''/t''pose'\t'velocity'/t'rotation(quaternion)'\t'angularveleocity'\n
    void MoveBlock(string block_info, Rigidbody block)
    {
        var split_input = block_info.Split('\t');
        var pose_float = new List<float>(3);
        var vel_float = new List<float>(3);
        var rot_float = new List<float>(4);
        var avel_float = new List<float>(3);
        foreach (string item in split_input[1].Split(','))
        {
            pose_float.Add(float.Parse(item));
        }
        foreach (string item in split_input[2].Split(','))
        {
            vel_float.Add(float.Parse(item));
        }
        foreach (string item in split_input[3].Split(','))
        {
            rot_float.Add(float.Parse(item));
        }
        foreach (string item in split_input[4].Split(','))
        {
            avel_float.Add(float.Parse(item));
        }
        //Vector3 target_position = new Vector3(pose_float[0], pose_float[1], pose_float[2]);
        //Quaternion target_rotation = new Quaternion(rot_float[0], rot_float[1], rot_float[2], rot_float[3]);
        //Vector3 target_velocity= new Vector3(vel_float[0], vel_float[1], vel_float[2]);
        //Vector3 target_ang_velocity = new Vector3(avel_float[0], avel_float[1], avel_float[2]);

        block.MovePosition(new Vector3(pose_float[0], pose_float[1], pose_float[2]));
        block.MoveRotation(new Quaternion(rot_float[0], rot_float[1], rot_float[2], rot_float[3]));
        block.velocity = new Vector3(vel_float[0], vel_float[1], vel_float[2]);
        block.angularVelocity = new Vector3(avel_float[0], avel_float[1], avel_float[2]);
    }

    void Update()
    {
        if (OVRInput.GetDown(OVRInput.Button.Two))
        {
            AsyncOperation asyncLoad = SceneManager.LoadSceneAsync("Start Screen");
        }
        if (OVRInput.GetDown(OVRInput.Button.One)) {
            if (allowMove)
            {
                allowMove = false;
                GameObject.Find("node5").GetComponent<Renderer>().material.SetColor("_Color", Color.red);
            } else
            {
                allowMove = true;
                GameObject.Find("node5").GetComponent<Renderer>().material.SetColor("_Color", Color.white);
            }
        }
        if (allowMove)
        {
            Quaternion rotation_correction = Quaternion.Euler(200, 180, 0);
            Vector3 hand_offset = new Vector3(0f, 0.1034f, 0f);
            goal_position = OVRInput.GetLocalControllerPosition(OVRInput.Controller.RTouch) + camera_position - hand_offset;
            Quaternion goal_rotation = OVRInput.GetLocalControllerRotation(OVRInput.Controller.RTouch) * rotation_correction;
            for (int i = 0; i < 3; i++)
            {
                goal_position[i] = Mathf.Clamp(goal_position[i], virtual_walls_min[i], virtual_walls_max[i]);
            }

            //Lock the hand to pointing down
            goal_rotation = Quaternion.Euler(180, 180, 0);

            Vector2 ThumbstickInput = OVRInput.Get(OVRInput.Axis2D.SecondaryThumbstick);
            finger_goal += speed * ThumbstickInput[1] * Time.deltaTime;
            finger_goal = Mathf.Clamp(finger_goal, 0f, 0.04f);
            fingerL_goal.localPosition = new Vector3(-finger_goal, -0.0454f, 0f);
            fingerR_goal.localPosition = new Vector3(finger_goal, -0.0454f, 0f);
        }
        
        pythonRcvdText = tempStr;
        //Debug.Log(tempStr);
        var split_input = pythonRcvdText.Split('\n');
        if (split_input[0] != previous_message_id)
        {
            previous_message_id = split_input[0];
            foreach (string item in split_input[1..^0])
            {
                string item_name = item.Split("\t")[0];

                // ["_deleteItem", "name"] tab deliminated
                if (item_name == "_deleteItem")
                {
                    var item_details = item.Split("\t");
                    if (ObjectInventory.ContainsKey(item_details[1]))
                    {
                        Destroy(ObjectInventory[item_details[1]].gameObject);
                        ObjectInventory.Remove(item_details[1]);
                    }
                }
                // ["_newItem", "type", "name", "size(3)", "color(4)"] tab deliminated
                else if (item_name == "_newItem")
                {
                    var item_details = item.Split("\t");
                    if (ObjectInventory.ContainsKey(item_details[2]))
                    {
                        Destroy(ObjectInventory[item_details[2]].gameObject);
                        ObjectInventory.Remove(item_details[2]);
                    }

                    if (item_details[1] == "block")
                    {
                        var cube = GameObject.CreatePrimitive(PrimitiveType.Cube);
                        cube.AddComponent<Rigidbody>();
                        cube.GetComponent<Rigidbody>().useGravity = false;
                        Destroy(cube.GetComponent<BoxCollider>());
                        cube.name = item_details[2];

                        var size_float = new List<float>(3);
                        foreach (string size_component in item_details[3].Split(','))
                        {
                            size_float.Add(float.Parse(size_component));
                        }
                        cube.transform.localScale = new Vector3(size_float[0], size_float[1], size_float[2]);

                        var color_float = new List<float>(4);
                        foreach (string color_component in item_details[4].Split(','))
                        {
                            color_float.Add(float.Parse(color_component));
                        }
                        Color newColor = new Color(color_float[0] / 255f, color_float[1] / 255f, color_float[2] / 255f, color_float[3]);
                        cube.GetComponent<Renderer>().material.color = newColor;
                        ObjectInventory.Add(item_details[2], cube.GetComponent<Rigidbody>());
                        while (unknown_objects.Contains(item_details[2]))
                        {
                            unknown_objects.Remove(item_details[2]);
                        }
                    }
                }
                else if (item_name == "_hand")
                {
                    var hand_float = new List<float>(4);
                    foreach (string hand_item in item.Split("\t")[1].Split(','))
                    {
                        hand_float.Add(float.Parse(hand_item));
                    }
                    hand.position = new Vector3(hand_float[0], hand_float[1], hand_float[2]);
                    fingerR.localPosition = new Vector3(hand_float[3] / 2, -0.0454f, 0f);
                    fingerL.localPosition = new Vector3(-hand_float[3] / 2, -0.0454f, 0f);
                    if (Mathf.Abs(hand_float[3]/2 - finger_goal) > 0.01)
                    {
                        OVRInput.SetControllerVibration(1f, Mathf.Abs(hand_float[3] / 2f - finger_goal) / 0.04f, OVRInput.Controller.RTouch);
                    } else
                    {
                        OVRInput.SetControllerVibration(0, 0, OVRInput.Controller.RTouch);
                    }
                } else if (ObjectInventory.ContainsKey(item_name)) {
                    MoveBlock(item, ObjectInventory[item_name]);
                } else if (!unknown_objects.Contains(item_name) && item_name != "_init") {
                    unknown_objects.Add(item_name);
                }
            }
        }
        string inventory_list = "_inventory";
        string unknown_objects_message = "_unknown";
        //Debug.Log(unknown_objects);
        foreach(string object_name in unknown_objects) {
            unknown_objects_message += "\t" + object_name;
        }

        foreach (string item_name in ObjectInventory.Keys)
        {
            inventory_list += "\t" + item_name;
        }
        //MoveBlock(split_input[0], ObjectInventory["rb"]);
        //MoveBlock(split_input[1], ObjectInventory["rb2"]);
        //var hand_float = new List<float>(4);
        //foreach (string item in split_input[2].Split(','))
        //{
        //    hand_float.Add(float.Parse(item));
        //}
        //Debug.Log(hand_float[0]);
        //Vector3 hand_position = new Vector3(hand_float[0], hand_float[1], hand_float[2]);
        ////handAB.TeleportRoot(hand_position);
        //hand.position = hand_position;
        //fingerR.localPosition = new Vector3(hand_float[3] / 2, -0.0454f, 0f);
        //fingerL.localPosition = new Vector3(-hand_float[3] / 2, -0.0454f, 0f);
        sendToPythonText = inventory_list + '\n' + unknown_objects_message + '\n' + goal_position.ToString("F5") + "\t" + finger_goal.ToString("F5");
        SendToPython();            
    }
}
