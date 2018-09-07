using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TowerIconButton : MonoBehaviour {
    public GameObject textLabel;
    // Use this for initialization
    private TowerData towerData;
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
    public void OnButtonClick(string value){
        switch(value){
            case "click":
                //点击
                Debug.Log("click");
                break;
            default:
                break;
        }
    }
    public void SetTowerData(TowerData td){
        towerData = td;
        //textLabel.transform
    }
}
