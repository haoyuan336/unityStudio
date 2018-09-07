using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class TowerIconPos : MonoBehaviour {

    // Use this for initialization
    public GameObject typeLabel;
    private TowerData towerData;
    private int index;
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
    public void SetDataAndIndex(TowerData tp, int i){
        towerData = tp;
        index = i;
        typeLabel.transform.GetComponent<Text>().text = towerData.type.ToString();
    }
    public void OnButtonClick(string value){
        switch(value){
            case "active":
                // 取消选择一个tower
                Global.GetInstance().GetChooseTowerIconPosCtl().CancelChooseTower(towerData.type); 
                break;
            default:
                break;
        }
    }
    public int GetTowerType(){
        return towerData.type;
    }
    public int GetIndex(){
        return index;
    }
    public TowerData GetTowerData(){
        return towerData;
    }

}
