using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BuildTowerUI : MonoBehaviour {

    // Use this for initialization
    private Transform controller;
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
    public void buttonClick(int  towerId){
        Debug.Log("Button Click id  = " + towerId);
        controller.SendMessage("BuildOneTower" , towerId);
        Destroy(gameObject);
    }
    public void setController(Transform ctl){
        controller = ctl;
    }
}
