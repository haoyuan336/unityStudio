using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameOverUI : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
    public void OnButtonClick(string value){
        switch(value){
            case "home":
                Global.GetInstance().EnterHome();
                break;
            case "reaty":
                break;
            default:
                break;
        }
    }
}
