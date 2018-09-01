using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class UpdateTowerUI : MonoBehaviour
{

    public List<GameObject> textList;

    private Transform tower;
    private int currentTowerLevel;
    private TowerData towerData;
    // Use this for initialization
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }
    public void onButtonClick(string custom)
    {
        Debug.Log("custom data = " + custom);
        switch (custom)
        {
            case "update":

                {
                    //int endGold = Global.GetInstance().GetCurrentLevel().currentGold - 
                    if (currentTowerLevel >= (towerData.updateCastList.Count - 1)){
                        Debug.Log("满级。不可以在升级");
                    }else{
                        int endGold = Global.GetInstance().GetCurrentLevel().currentGold - (int)towerData.updateCastList[currentTowerLevel + 1];
                        if (endGold >= 0){
                            //金币够 可以升级
                            Global.GetInstance().GetCurrentLevel().SetCurrentGold(endGold);
                            tower.transform.GetComponent<Tower>().UpdateTower();
                            Destroy(gameObject);
                        }else{
                            Debug.Log("金币不足，不能升级");
                        }

                    }
                }

                break;
            case "sell":
                Global.GetInstance().GetTowerController().SellTower(tower);
                Destroy(gameObject);
                {
                    int endGold = Global.GetInstance().GetCurrentLevel().currentGold + (int)towerData.sellGoldList[currentTowerLevel];
                    Global.GetInstance().GetCurrentLevel().SetCurrentGold(endGold);

                }

                break;
            case "bg":
                if (tower != null)
                {
                    tower.GetComponent<Tower>().HideTowerRange();
                }
                Destroy(gameObject);

                break;
            default:
                break;
        }


    }
    public void SetTower(Transform tw)
    {
        tower = tw;
        currentTowerLevel = tw.transform.GetComponent<Tower>().GetCurrentTowerLevel();
        towerData = tw.transform.GetComponent<Tower>().GetTowerData();
        //取到升级需要的金币个数 ，卖出得到的金币个数
        //首先第一个Text 代表的是升级需要的金币个数

        if (currentTowerLevel == (towerData.updateCastList.Count - 1)){
            textList[0].transform.GetComponent<Text>().text = "Tower already Max";
        }
        else
        {
            textList[0].transform.GetComponent<Text>().text = "Update cast Gold: " + towerData.updateCastList[(currentTowerLevel + 1)].ToString();

        }


        textList[1].transform.GetComponent<Text>().text = "Sell will get Gold: " + towerData.sellGoldList[currentTowerLevel].ToString();
    }
}
