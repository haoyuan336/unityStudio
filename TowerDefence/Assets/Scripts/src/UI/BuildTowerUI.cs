using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BuildTowerUI : MonoBehaviour {

    // Use this for initialization
    private Transform controller;
    private Transform towerBase;
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
    public void buttonClick(int  towerId){
        if (towerId == -1){
            Destroy(gameObject);
        }else{
            object[] message = new object[2];
            message[0] = towerId;
            message[1] = towerBase;
            //controller.SendMessage("BuildOneTower" , message);
            Global.GetInstance().GetTowerController().BuildOneTower(towerId, towerBase);
            Destroy(gameObject);
        }
        Debug.Log("Button Click id  = " + towerId);
       
    }
    //public void setControllerAndTowerBase(Transform ctl, Transform tra){
    //    //controller = ctl;
    //    //towerBase = tra;
    //}
    public void SetTowerBase(Transform tb){
        towerBase = tb;
    }
}
