using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine.SceneManagement;

public class PythonCommunication: MonoBehaviour
{
    string pythonRcvdText;
    string sendToPythonText = "start";
    private List<string> unknown_objects = new List<string>();
    private string previous_message_id = "0";
    string tempStr = "_init";
    private Dictionary<string, Rigidbody> ObjectInventory = new Dictionary<string, Rigidbody>();
    string enteredIP;

    UdpSocket udpSocket;
    HandController hand_controller;

    public void UpdatePythonRcvdText(string str)
    {
        tempStr = str;
    }

    public void SendToPython()
    {
        udpSocket.SendData(sendToPythonText);
    }

    private void Start()
    {
        udpSocket = FindObjectOfType<UdpSocket>();
        hand_controller = FindObjectOfType<HandController>();
    }

    // Moves a specified rigid body based on a command string sent from python
    void MoveObject(string object_info, Rigidbody object_rb)
    {
        // seperate out each component of the message, and conver to a list of floats
        string[] split_input = object_info.Split('\t');
        List<float> pose_float = new List<float>(3);
        List<float> vel_float = new List<float>(3);
        List<float> rot_float = new List<float>(4);
        List<float> avel_float = new List<float>(3);
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

        // Move the rigid body based on the provided command
        object_rb.MovePosition(new Vector3(pose_float[0], pose_float[1], pose_float[2]));
        object_rb.MoveRotation(new Quaternion(rot_float[0], rot_float[1], rot_float[2], rot_float[3]));
        object_rb.velocity = new Vector3(vel_float[0], vel_float[1], vel_float[2]);
        object_rb.angularVelocity = new Vector3(avel_float[0], avel_float[1], avel_float[2]);
    }

    // Delete the specified item. Removes the object from the world and deletes the item's
    // entry from the inventory dictonary
    void DeleteItem(string command_txt, Dictionary<string, Rigidbody> Inventory_Dict)
    {
        var item_details = command_txt.Split("\t");
        if (Inventory_Dict.ContainsKey(item_details[1]))
        {
            Destroy(Inventory_Dict[item_details[1]].gameObject);
            Inventory_Dict.Remove(item_details[1]);
        }
    }

    // Create a new item based on a command text. Creates a new unity asset and adds the new item as 
    // a listing to the inventory dictionary
    void CreateItem(string command_txt, Dictionary<string, Rigidbody> Inventory_Dict, List<string> unknown_objects)
    {
        var item_details = command_txt.Split("\t");
        // if the item already exists (same name), delete it before creating a new instance
        if (Inventory_Dict.ContainsKey(item_details[2]))
        {
            Destroy(Inventory_Dict[item_details[2]].gameObject);
            Inventory_Dict.Remove(item_details[2]);
        }

        // Create a block
        if (item_details[1] == "block")
        {
            // create a cube game object, add a ridgid body to control the cube's location
            var cube = GameObject.CreatePrimitive(PrimitiveType.Cube);
            cube.AddComponent<Rigidbody>();
            // remove gravity and the box collider. We will directly control the object's location and speed.
            cube.GetComponent<Rigidbody>().useGravity = false; 
            Destroy(cube.GetComponent<BoxCollider>());
            cube.name = item_details[2];

            // Set the size of the object based on the item details 
            var size_float = new List<float>(3);
            foreach (string size_component in item_details[3].Split(','))
            {
                size_float.Add(float.Parse(size_component));
            }
            cube.transform.localScale = new Vector3(size_float[0], size_float[1], size_float[2]);

            // Set the color of the object
            var color_float = new List<float>(4);
            foreach (string color_component in item_details[4].Split(','))
            {
                color_float.Add(float.Parse(color_component));
            }
            Color newColor = new Color(color_float[0] / 255f, color_float[1] / 255f, color_float[2] / 255f, color_float[3]);
            cube.GetComponent<Renderer>().material.SetFloat("_Mode", 3);
            cube.GetComponent<Renderer>().material.color = newColor;

            // Add the item to the inventory dictionary and remove it from the unknown objects list.
            Inventory_Dict.Add(item_details[2], cube.GetComponent<Rigidbody>());
            while (unknown_objects.Contains(item_details[2]))
            {
                unknown_objects.Remove(item_details[2]);
            }
        }
    }

    void Update()
    {
        // Load in the start screen when the B button is pressed
        if (OVRInput.GetDown(OVRInput.Button.Two))
        {
            AsyncOperation asyncLoad = SceneManager.LoadSceneAsync("Start Screen");
        }

        // Uncomment the following line to have the hand directly follow the user's input (rather than the
        // message from the UDP Socket). Used for debugging purposes.
        //hand_controller.MoveHandSelf();
        pythonRcvdText = tempStr;
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
                    DeleteItem(item, ObjectInventory);
                }
                // ["_newItem", "type", "name", "size(3)", "color(4)"] tab deliminated
                else if (item_name == "_newItem")
                {
                    CreateItem(item, ObjectInventory, unknown_objects);
                }
                else if (item_name == "_hand")
                {
                    hand_controller.MoveHand(item);
                } else if (ObjectInventory.ContainsKey(item_name)) {
                    MoveObject(item, ObjectInventory[item_name]);
                } else if (!unknown_objects.Contains(item_name) && item_name != "_init") {
                    unknown_objects.Add(item_name);

                }
            }
        }
        string inventory_list = "_inventory";
        string unknown_objects_message = "_unknown";
        foreach(string object_name in unknown_objects) {
            unknown_objects_message += "\t" + object_name;
        }

        foreach (string item_name in ObjectInventory.Keys)
        {
            inventory_list += "\t" + item_name;
        }
        sendToPythonText = inventory_list + '\n' + unknown_objects_message + '\n' + hand_controller.GetGoalPosition().ToString("F5") + "\t" + hand_controller.GetGoalRotation().ToString("F5") + "\n" + hand_controller.GetFingerGoalMessage();
        SendToPython();            
    }
}