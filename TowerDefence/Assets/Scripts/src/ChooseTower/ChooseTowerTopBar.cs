using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class ChooseTowerTopBar : MonoBehaviour {

    // Use this for initialization
    public GameObject earthNameLabel;
    public GameObject levelNumLabel;
    public GameObject levelTipsLabel;
    public GameObject gameTipsLabel;
	void Start () {
        Global.GetInstance().SetChooseTowerTopBar(this);
        earthNameLabel.transform.GetComponent<Text>().text = Global.GetInstance().GetEarthName();
        levelNumLabel.transform.GetComponent<Text>().text = "Level:" + (Global.GetInstance().GetLevelNum() + 1).ToString();
        levelTipsLabel.transform.GetComponent<Text>().text = Global.GetInstance().GetCurrentLevel().levelTips;

	}
	
	// Update is called once per frame
	void Update () {
		
	}
    public void SetGameTips(string value){
        gameTipsLabel.transform.GetComponent<Text>().text = value;
    }
}
