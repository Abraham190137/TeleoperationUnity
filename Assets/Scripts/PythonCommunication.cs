using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class PythonCommunication: MonoBehaviour
{
    //[SerializeField] TextMeshProUGUI pythonRcvdText = null;
    //[SerializeField] TextMeshProUGUI sendToPythonText = null;
    string pythonRcvdText;
    string sendToPythonText = "start";

    private ArticulationBody[] articulationChain;
    private Transform recordTransform;
    private Rigidbody rb;
    private Rigidbody rb2;
    //private ArticulationBody handAB;
    //private Rigidbody hand;

    string tempStr = "0,0,0\t0,0,0\t0,0,0,1\t0,0,0\n0,0,0\t0,0,0\t0,0,0,1\t0,0,0\n0,0,0";
    UdpSocket udpSocket;

    public void QuitApp()
    {
        Debug.Log("Quitting");
        Application.Quit();
    }

    public void UpdatePythonRcvdText(string str)
    {
        tempStr = str;
    }

    public void SendToPython()
    {
        udpSocket.SendData(sendToPythonText);
        Debug.Log("Sent: " + sendToPythonText);
    }

    private void Start()
    {
/*        string raw_input = "1,2,3\t4,5,6,7";
        var split_input = raw_input.Split('\t');
        var pose_str = split_input[0].Split(',');
        var rot_str = split_input[1].Split(',');
        var pose_float = new List<float>(3);
        var rot_float = new List<float>(4);
        foreach (string item in pose_str)
            {
            pose_float.Add(float.Parse(item));
            }
        foreach (string item in rot_str)
        {
            rot_float.Add(float.Parse(item));
        }
        var goal_position = new Vector3(pose_float[0], pose_float[1], pose_float[2]);
        var goal_rotation = new Quaternion(rot_float[0], rot_float[1], rot_float[2], rot_float[3]);
        Debug.Log(goal_rotation);*/
        rb = GameObject.Find("Block").GetComponent<Rigidbody>();
        rb2 = GameObject.Find("Block2").GetComponent<Rigidbody>();
        //handAB = GameObject.Find("python_hand").GetComponent<ArticulationBody>();
        //hand = GameObject.Find("python_hand").GetComponent<Rigidbody>();
        recordTransform = GameObject.Find("panda_1_hand_tcp").GetComponent<Transform>();
        udpSocket = FindObjectOfType<UdpSocket>();
        articulationChain = GameObject.Find("panda_1_link8").GetComponentsInChildren<ArticulationBody>();
    }

    void MoveBlock(string block_info, Rigidbody block)
    {
        var split_input = block_info.Split('\t');
        var pose_float = new List<float>(3);
        var vel_float = new List<float>(3);
        var rot_float = new List<float>(4);
        var avel_float = new List<float>(3);
        foreach (string item in split_input[0].Split(','))
        {
            pose_float.Add(float.Parse(item));
        }
        foreach (string item in split_input[1].Split(','))
        {
            vel_float.Add(float.Parse(item));
        }
        foreach (string item in split_input[2].Split(','))
        {
            rot_float.Add(float.Parse(item));
        }
        foreach (string item in split_input[3].Split(','))
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
        pythonRcvdText = tempStr;
        Debug.Log(tempStr);
        var split_input = pythonRcvdText.Split('\n');
        MoveBlock(split_input[0], rb);
        MoveBlock(split_input[1], rb2);
        //var hand_float = new List<float>(3);
        //foreach (string item in split_input[2].Split(','))
        //{
        //    hand_float.Add(float.Parse(item));
        //}
        //Vector3 hand_position = new Vector3(hand_float[0], hand_float[1], hand_float[2]);
        //handAB.TeleportRoot(hand_position);
        //hand.position = hand_position;
        sendToPythonText = recordTransform.position.ToString() + "\t" + articulationChain[2].xDrive.target.ToString();
        SendToPython();            
    }
}
