using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class BuildTowerUI : MonoBehaviour {

    // Use this for initialization

    public GameObject towerIconButtonPrefab;
    private Transform controller;
    private Transform towerBase;
	void Start () {
        //towerCostList = Global.GetInstance().GetTowerData()

        //towerCostList = Global.GetInstance().GetTowerBuildCostList();

        //for (int i = 0; i < textList.Count; i ++){

        //    textList[i].transform.GetComponent<Text>().text = "Build Tower Cost:" + towerCostList[i].ToString();
        //}

        //根据选择的tower 的个数来初始化，几个towericon 的位置
       
	}
	
	// Update is called once per frame
	void Update () {
		
	}
    public void buttonClick(int  towerId){


        if (towerId == -1){
            Destroy(gameObject);
        }else{


           
        }
        Debug.Log("Button Click id  = " + towerId);
       
    }
    //public void setControllerAndTowerBase(Transform ctl, Transform tra){
    //    //controller = ctl;
    //    //towerBase = tra;
    //}
    public void SetTowerBase(Transform tb){
        towerBase = tb;
        List<TowerData> towerDatas = Global.GetInstance().GetCurrentTowerDatas();
        for (int i = 0; i < towerDatas.Count; i++)
        {
            Vec2 v = Vec2.Up();
            Vec2 endV = Vec2.Rotate(v, Mathf.PI * 2 / towerDatas.Count * i).GetNormal();
            endV = endV.MultiValue(100);
            GameObject towerIconButton = Instantiate(towerIconButtonPrefab);
            towerIconButton.transform.parent = transform;
            towerIconButton.transform.GetComponent<TowerIconButton>().SetTowerData(towerDatas[i], towerBase);
            towerIconButton.transform.GetComponent<RectTransform>().localPosition = new Vector3(endV.x, endV.y, 0);
        }
    }
}
