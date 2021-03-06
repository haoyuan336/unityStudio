﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class ChooseTowerInfo : MonoBehaviour
{
    public GameObject towerNameLabel;
    public GameObject towerIcon;
    public GameObject damageLabel;
    public GameObject damageSpeedLabel;
    public GameObject damageRangeLabel;
    public GameObject buildCostLabel;
    public GameObject buttonLabel;
    public GameObject currentLevelLabel;

    // Use this for initialization
    private TowerData towerData;
    private ButtonCallBack alertButtonCb;
    void Start()
    {
        Global.GetInstance().SetChooseTowerInfo(this);
        alertButtonCb = new ButtonCallBack(AlertCallBack);
    }

    // Update is called once per frame
    void Update()
    {

    }
    public void OnButtonClick(string value)
    {
        switch (value)
        {
            case "click":
                if (towerData != null)
                {
                    //如果塔的数据不为空，
                    //弹出是够升级的确定取消按钮
                    int Cost = Global.GetInstance().GetLocalData().GetUpdateTowerLevelCost(towerData.GetCurrentTowerLevel() + 1);
                    if (Cost == -1)
                    {
                        //花费的钻石个数不等于-1 并且要小于当前拥有的钻石个数 否则，不能升级的哦
                        Global.GetInstance().GetChooseTowerTopBar().SetGameTips("已经满级了!");
                    }
                    else if (Cost > Global.GetInstance().GetLocalData().GetDiamondCount())
                    {
                        Global.GetInstance().GetChooseTowerTopBar().SetGameTips("钻石不足！");
                    }
                    else
                    {
                        //这时候是可以升级的  
                        Global.GetInstance().GetChooseTowerCtl().ShowAlert(alertButtonCb, "你确定花费" + Cost + "个钻石去升一级么");
                    }

                }
                break;
            default:
                break;
        }
    }
    public void ShowTowerData(TowerData td)
    {
        //显示tower 的相关信息
        towerData = td;
        towerNameLabel.GetComponent<Text>().text = towerData.GetTowerName(0);
        damageLabel.GetComponent<Text>().text = "攻击力:" + towerData.GetDamage(0).ToString("f2") + " <color=green>" + ((towerData.GetNextLevelDamage(0) > 0) ? ("+" + towerData.GetNextLevelDamage(0).ToString("f2")) : "Max") + "</color>";
        damageSpeedLabel.GetComponent<Text>().text = "攻击速度:" + towerData.GetAttackSpeed(0).ToString("f2") + " <color=green>" + ((towerData.GetNextAttackSpeed(0) > 0) ? ("+" + towerData.GetNextAttackSpeed(0).ToString("f2")) : "Max") + "</color>";
        damageRangeLabel.GetComponent<Text>().text = "攻击范围:" + towerData.GetAttackRange(0).ToString("f2") + " <color=green>" + ((towerData.GetNextAttackRange(0) > 0) ? ("+" + towerData.GetNextAttackRange(0).ToString("f2")) : "Max") + "</color>"; ;
        buildCostLabel.GetComponent<Text>().text = "建造花费:" + towerData.GetBuildCost().ToString() + " <color=green>";
        //按钮处要显示当前的tower 升级到下一级需要的钻石个数

        int Cost = Global.GetInstance().GetLocalData().GetUpdateTowerLevelCost(towerData.GetCurrentTowerLevel() + 1);
        buttonLabel.GetComponent<Text>().text = "升级:" + (Cost != -1 ? Cost.ToString() : "Max");


        //UpdateButtonState();
    }

    void AlertCallBack(string value)
    {
        switch (value)
        {
            case "ok":
                //点击了升级的按钮，  那么就开始处理升级的相关的操作 ，首先钻石的个数减一下 
                //int Cost = 
                //升级当前所需要的钻石个数是 
                int cost = Global.GetInstance().GetLocalData().GetUpdateTowerLevelCost(towerData.GetCurrentTowerLevel() + 1);
                //然后本地储存减去这些钻石个数
                Global.GetInstance().GetLocalData().CostDiamond(cost);
                //减了这些钻石之后,显示钻石个数的地方将钻石的个数显示成最新的钻石个数
                Global.GetInstance().GetChooseTowerTopBar().SetDiamondLabelCount(Global.GetInstance().GetLocalData().GetDiamondCount());

                //然后让towerData去升级
                //towerData
                towerData.UpdateLevel();
                //升级好了之后。在重新刷新一下当前显示的值
                ShowTowerData(towerData);

                break;
            default:
                break;
        }
    }

    //private void UpdateButtonState(){

    //}
}
