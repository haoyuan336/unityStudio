using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class TopBar : MonoBehaviour {

    // Use this for initialization
    public GameObject earthNameLabel;
    public GameObject levelNumLabel;
    public GameObject waveNumLabel;
    public GameObject levelTextLabel;
    public GameObject currentGoldLabel; 
	void Start () {
        //earthNameLabel.GetComponent<Text>().text = Global.GetInstance().GetEarthName();
        levelNumLabel.GetComponent<Text>().text = "Level:" + (Global.GetInstance().GetLevelNum() + 1).ToString();
        levelTextLabel.GetComponent<Text>().text = Global.GetInstance().GetCurrentLevel().levelText;
        Global.GetInstance().SetTopBar(this);
        //SetGoldNumText(Global.GetInstance().GetMapController().goldCount);
    }
	
	// Update is called once per frame
	void Update () {
		
	}
    public void SetWaveText(string str){
        waveNumLabel.GetComponent<Text>().text = str;
    }
    public void SetGoldNumText(int num){
        currentGoldLabel.GetComponent<Text>().text = num.ToString();

    }
}
      

