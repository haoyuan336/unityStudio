using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Xml;
public class TowerData
{

    public int type;


    public string specialSkill;

    //当前tower 的储存在本地的等级,从本地取出来的。

    private int currentTowerLevel;


    private List<float> sellGoldList;
    private List<string> towerName;
    private List<float> updateCostList;
    private List<float> attackRangeList;
    private List<float> attackDamageList;
    private List<float> attackDuractionList;
    public TowerData(int tp){
        type = tp;
        //取出当前tower等级
    }
  
    public void SetTowerData(string type, List<string> valueList)
    {
        switch (type)
        {
            case "TowerName":
                towerName = valueList;
                break;
            case "UpdateCost":

                updateCostList = new List<float>();
                foreach(string v in valueList){
                    updateCostList.Add(float.Parse(v));
                }
                break;
            case "AttackRange":
                attackRangeList = new List<float>();
                foreach(string v in valueList){
                    attackRangeList.Add(float.Parse(v));
                }
                break;
            case "AttackDamage":
                attackDamageList = new List<float>();
                foreach (string v in valueList)
                {
                    attackDamageList.Add(float.Parse(v));
                }
                break;
            case "AttackDuraction":
                attackDuractionList = new List<float>();
                foreach (string v in valueList)
                {
                    attackDuractionList.Add(float.Parse(v));
                }
                break;
            case "SellGold":
                sellGoldList = new List<float>();
                foreach (string v in valueList)
                {
                    sellGoldList.Add(float.Parse(v));
                }
                break;
            default:
                break;
        }
    }
    public void SetSpecialSkillName(string str){
        specialSkill = str;
    }
    public string GetTowerName(int value){
        return towerName[value]; 
    }
    public int GetBuildCost(){
        return (int)updateCostList[0]; 
    }
    public float GetUpdateCost(int value){
        return updateCostList[value];
    }
    public float GetDamage(int value){
        //在取到tower 的伤害值的时候 ，要将他的增益效果也一同返回哦 穿进去的值就是新的值
        return attackDamageList[value] * Global.GetInstance().GetLocalData().GetPreTowerLevelPlus(currentTowerLevel);
    }
    public float GetNextLevelDamage(int value){

       

        return attackDamageList[value] * Global.GetInstance().GetLocalData().GetPreTowerLevelPlus(currentTowerLevel + 1);

    }
    public float GetAttackSpeed(int value){
        return attackDuractionList[value] * Global.GetInstance().GetLocalData().GetPreTowerLevelPlus(currentTowerLevel);
    }
    public float GetNextAttackSpeed(int value){
        return attackDuractionList[value] * Global.GetInstance().GetLocalData().GetPreTowerLevelPlus(currentTowerLevel + 1);
    }
    public float GetAttackRange(int value){
        return attackRangeList[value] * Global.GetInstance().GetLocalData().GetPreTowerLevelPlus(currentTowerLevel);
    }
    public float GetNextAttackRange(int value){
        return attackRangeList[value] * Global.GetInstance().GetLocalData().GetPreTowerLevelPlus(currentTowerLevel + 1);

    }
    public int GetTowerType(){
        return type;
    }
    public int GetUpdateCount(){
        return updateCostList.Count;
    }
    public float GetSellTowerCount(int value){
        return sellGoldList[value];
    }
    public void SetCurrentTowerLevel(int value){
        //设置当前tower  的等级  跟游戏中tower 的等级有一定的区别
        currentTowerLevel = value;
    }
    public int GetCurrentTowerLevel(){
        return currentTowerLevel;
    }
    public void UpdateLevel(){
        //升级当前的tower 的等级，todo注意是tower的类型的等级，不是游戏中的 某个tower的 等级 虽然都是等级，但是还是有区别的
        currentTowerLevel++;
        XmlDocument xmlDoc = new XmlDocument();
        string path = Consts.LevelDir + "Tower.xml";
        xmlDoc.Load(path);
        XmlNode rootNode = xmlDoc.SelectSingleNode("content");
        XmlNode towerNode = rootNode.SelectNodes("Tower")[type]; //取出自己相对应的tower的数据
        towerNode.SelectSingleNode("CurrentLevel").InnerText = currentTowerLevel.ToString();
        xmlDoc.Save(path);
    }
}
