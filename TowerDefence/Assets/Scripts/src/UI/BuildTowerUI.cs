using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class BuildTowerUI : MonoBehaviour {

    // Use this for initialization
    private Transform controller;
    private Transform towerBase;
    public List<GameObject> textList;
    private List<float> towerCastList;
	void Start () {
        //towerCastList = Global.GetInstance().GetTowerData()

        towerCastList = Global.GetInstance().GetTowerBuildCastList();

        for (int i = 0; i < textList.Count; i ++){

            textList[i].transform.GetComponent<Text>().text = "Build Tower Cast:" + towerCastList[i].ToString();
        }
	}
	
	// Update is called once per frame
	void Update () {
		
	}
    public void buttonClick(int  towerId){


        if (towerId == -1){
            Destroy(gameObject);
        }else{


            int cast = (int)towerCastList[towerId];
            int endGold = Global.GetInstance().GetCurrentLevel().currentGold - cast;

            if (endGold < 0){
                Debug.Log("Show alert tips  Gold Not Enough");
            }else{
                Global.GetInstance().GetCurrentLevel().SetCurrentGold(endGold);
                Global.GetInstance().GetTowerController().BuildOneTower(towerId, towerBase);
                Destroy(gameObject);
            }
           
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
