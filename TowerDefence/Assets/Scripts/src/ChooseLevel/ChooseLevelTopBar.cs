using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class ChooseLevelTopBar : MonoBehaviour
{
    public GameObject earthNameLabel;
    public GameObject levelNumLabel;
    public GameObject diamondCountLabel;
	// Use this for initialization
	void Start () {
        Global.GetInstance().SetChooseLevelTopBar(this);
        //显示当前的钻石个数
        diamondCountLabel.transform.GetComponent<Text>().text ="Diamond:" + Global.GetInstance().GetLocalData().GetDiamondCount().ToString();
	}
	
	// Update is called once per frame
	void Update () {
		
	}
    public void SetLevelNum(int num){
        levelNumLabel.transform.GetComponent<Text>().text = "Level:" +  (num + 1).ToString();
}
}
