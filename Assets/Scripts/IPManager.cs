using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Net;
using System.Net.NetworkInformation;
using System.Net.Sockets;
using UnityEngine.SceneManagement;

public class IPManager : MonoBehaviour
{
	private string enteredIP = "none";
	//public Text hintText;

	void Start()
	{
		DontDestroyOnLoad(this.gameObject);
	}

	public void EnterIP(string input_IP)
	{
		enteredIP = input_IP;
	}

	public string ReturnIP()
	{
		return enteredIP;
	}
}