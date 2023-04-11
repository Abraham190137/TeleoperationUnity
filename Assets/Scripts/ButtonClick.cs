using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Net;
using System.Net.NetworkInformation;
using System.Net.Sockets;
using UnityEngine.SceneManagement;

public class ButtonClick : MonoBehaviour
{
	IPManager ipManager;

	void Start()
	{
		ipManager = FindObjectOfType<IPManager>();
		GameObject.Find("output_txt").GetComponent<TMPro.TextMeshProUGUI>().text = "Local IP Adress: " + GetLocalIPAddress();
	}

	public void TaskOnClick()
	{
		AsyncOperation asyncLoad = SceneManager.LoadSceneAsync("Main Scene");
	}

	public void PrintInput(string input_txt) 
	{ 
		GameObject.Find("output_txt").GetComponent<TMPro.TextMeshProUGUI>().text = "Local IP Adress: " + GetLocalIPAddress();
		ipManager.EnterIP(input_txt);
	}

	public string GetLocalIPAddress()
	{
		var host = Dns.GetHostEntry(Dns.GetHostName());
		foreach (var ip in host.AddressList)
		{
			if (ip.AddressFamily == AddressFamily.InterNetwork)
			{
				//hintText.text = ip.ToString();
				return ip.ToString();
			}
		}
		throw new System.Exception("No network adapters with an IPv4 address in the system!");
	}

	void Update()
	{
		// This is included so that the main scene can be loaded when previewing in Unity.
		if (Input.GetKeyDown("space"))
		{
			AsyncOperation asyncLoad = SceneManager.LoadSceneAsync("Main Scene");
		}
	}
}
