using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TowerData
{

    public int type;
    public List<string> towerName;
    public List<float> updateCastList;
    public List<float> attackRangeList;
    public List<float> attackDamageList;
    public List<float> attackDuractionList;
    public List<float> sellGoldList;
    public string specialSkill;
    public TowerData(int tp){
        type = tp;
    }
  
    public void SetTowerData(string type, List<string> valueList)
    {
        switch (type)
        {
            case "TowerName":
                towerName = valueList;
                break;
            case "UpdateCast":
                updateCastList = new List<float>();
                foreach(string v in valueList){
                    updateCastList.Add(float.Parse(v));
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
}
