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
        earthNameLabel.GetComponent<Text>().text = Tool.earthName;
        levelNumLabel.GetComponent<Text>().text = "Level:" + (Global.GetInstance().GetLevel() + 1).ToString();
        levelTextLabel.GetComponent<Text>().text = Tool.GetLevelList()[Global.GetInstance().GetLevel()].levelText;
    }
	
	// Update is called once per frame
	void Update () {
		
	}
    public void SetWaveText(string str){
        waveNumLabel.GetComponent<Text>().text = str;
    }
}
