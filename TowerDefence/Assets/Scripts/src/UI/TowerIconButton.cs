using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class TowerIconButton : MonoBehaviour {
    public GameObject textLabel;
    // Use this for initialization
    private TowerData towerData;
    private Transform towerBase;
    private BuildTowerUI controller;
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
                int cast = (int)towerData.GetBuildCast(); 
                int endGold = Global.GetInstance().GetMapController().goldCount - cast;

                if (endGold < 0)
                {
                    Debug.Log("Show alert tips  Gold Not Enough");
                }
                else
                {
                    Global.GetInstance().GetMapController().SetCurrentGold(endGold);
                    Global.GetInstance().GetTowerController().BuildOneTower(towerData.GetTowerType(), towerBase);
                    Destroy(transform.parent.gameObject);
                }


                break;
            default:
                break;
        }
    }
    public void SetTowerData(TowerData td, Transform tb){
        towerData = td;
        towerBase = tb;
        textLabel.transform.GetComponent<Text>().text = "tower" +  towerData.type.ToString() + " " + towerData.GetBuildCast().ToString();
    }
    public void SetController(BuildTowerUI ctl){
        controller = ctl;
    }
}
