using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI; 
public class ChooseTowerInfo : MonoBehaviour {
    public GameObject towerNameLabel;
    public GameObject towerIcon;
    public GameObject damageLabel;
    public GameObject damageSpeedLabel;
    public GameObject damageRangeLabel;
    public GameObject buildCastLabel;

    public GameObject buttonLabel;

    // Use this for initialization
    private TowerData towerData;
	void Start () {
        Global.GetInstance().SetChooseTowerInfo(this);
	}
	
	// Update is called once per frame
	void Update () {
		
	}
    public void OnButtonClick(string value){
        switch(value){
            case "click":
                if (towerData != null){
                    //如果塔的数据不为空，
                }
                break;
            default:
                break;
        }
    }
    public void ShowTowerData(TowerData td){
        //显示tower 的相关信息
        towerData = td;
        towerNameLabel.GetComponent<Text>().text =  towerData.GetTowerName();
        damageLabel.GetComponent<Text>().text = "攻击力:" + towerData.GetDamage().ToString();
        damageSpeedLabel.GetComponent<Text>().text = "攻击速度:" + towerData.GetAttackSpeed().ToString();
        damageRangeLabel.GetComponent<Text>().text = "攻击范围:" + towerData.GetAttackRangeList().ToString();
        buildCastLabel.GetComponent<Text>().text ="建造花费:" + towerData.GetBuildCast().ToString();


        UpdateButtonState();
    }
    private void UpdateButtonState(){

    }
}
