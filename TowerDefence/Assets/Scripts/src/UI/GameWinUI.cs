using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameWinUI : MonoBehaviour {

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
            case "next":
                //Global.GetInstance().EnterGame(Global.GetInstance().GetCurrentLevel(). + 1);
                Global.GetInstance().EnterNextGame();
                break;
            default:
                break;
        }
    }
}
