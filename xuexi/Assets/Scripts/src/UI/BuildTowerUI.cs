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
        Debug.Log("Button Click id  = " + towerId);
        object[] message = new object[2];
        message[0] = towerId;
        message[1] = towerBase;
        controller.SendMessage("BuildOneTower" , message);
        Destroy(gameObject);
    }
    public void setControllerAndTowerBase(Transform ctl, Transform tra){
        controller = ctl;
        towerBase = tra;
    }
}
