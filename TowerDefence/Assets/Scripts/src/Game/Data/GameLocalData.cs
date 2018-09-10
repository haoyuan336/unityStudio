﻿using System.IO;
using System.Xml;
using System.Collections.Generic;
public class GameLocalData
{
    private string gameDataPath = Consts.resourcesPath + @"game-data.xml";
    private int towerPosCount; //塔的位置数量 可以选择的tower 的位置数量
    private int diamondCount; //储存在本地的钻石的个数
    private List<int> updateTowerPosCostList = new List<int>(); //每一个tower的位置需要的金币个数
    private List<float> towerLevelPlusList = new List<float>(); //每一个等级的 增益值
    private List<int> updateTowerLevelCostList = new List<int>(); //每一个等级需要花费的金币个数

    public GameLocalData()
    {

        //Debug.Log("没找到此文件");
        ////创建xml
        //XmlDocument xmlDoc = new XmlDocument();
        ////创建根阶段
        //XmlElement root = xmlDoc.CreateElement("transforms");
        ////创建第一个子节点
        ////XmlElement elmXml = xmlDoc.CreateElement("rotation");
        //////设置节点属性
        ////elmXml.SetAttribute("id", "0");
        ////elmXml.SetAttribute("name", "first");
        //////创建第一个子节点的子节点
        //////XmlElement rotation_x = xmlDoc.CreateElement("x");
        //////rotation_x.InnerText = "0";
        //////XmlElement rotation_y = xmlDoc.CreateElement("y");
        //////rotation_y.InnerText = "0";
        //////XmlElement rotation_z = xmlDoc.CreateElement("z");
        //////rotation_z.InnerText = "0";
        //////elmXml.AppendChild(rotation_x);
        //////elmXml.AppendChild(rotation_y);
        //////elmXml.AppendChild(rotation_z);
        ////root.AppendChild(elmXml);
        ////xmlDoc.AppendChild(root);
        //xmlDoc.Save(filePath);

        if (!File.Exists(gameDataPath)){
            XmlDocument xmlDoc = new XmlDocument();
            XmlElement rootNode = xmlDoc.CreateElement("content");

            XmlElement chooseTowerCountElement = xmlDoc.CreateElement("ChooseTowerCount");
            chooseTowerCountElement.InnerText = "3";
            rootNode.AppendChild(chooseTowerCountElement);
            xmlDoc.AppendChild(rootNode);
            xmlDoc.Save(gameDataPath);

        }else{
            XmlDocument xmlDoc = new XmlDocument();
            xmlDoc.Load(gameDataPath);
            XmlNode rootNode = xmlDoc.SelectSingleNode("content");
            towerPosCount = int.Parse(rootNode.SelectSingleNode("ChooseTowerCount").InnerText);
            diamondCount = int.Parse(rootNode.SelectSingleNode("DiamondCount").InnerText);
            XmlNodeList updatePosCostListNode = rootNode.SelectSingleNode("UpdateTowerPosCountCostDiamond").SelectNodes("Pos");
            foreach(XmlNode xml in updatePosCostListNode){
                updateTowerPosCostList.Add(int.Parse(xml.InnerText));
            }
            XmlNodeList towerLevelPlusNodeList = rootNode.SelectSingleNode("TowerPreLevelPlus").SelectNodes("Level");
            foreach(XmlNode xml in towerLevelPlusNodeList){
                towerLevelPlusList.Add(float.Parse(xml.InnerText));
            }
            XmlNodeList updateTowerLevelCostListNodeList = rootNode.SelectSingleNode("UpdateTowerPreLevel").SelectNodes("Level");

            foreach (XmlNode xml in updateTowerLevelCostListNodeList)
            {
                updateTowerLevelCostList.Add(int.Parse(xml.InnerText));
            }
        }
    }


   


    //获取tower 位置数量的接口
    public int GetTowerPosCount(){
        return towerPosCount;
    }
    public int GetDiamondCount(){
        return diamondCount;
    }
    public int GetUpdateNextPosCost(int value){
        if (value == updateTowerPosCostList.Count){
            return -1;
        }
        return updateTowerPosCostList[value];
    }
    public void CostDiamond(int value){
        diamondCount -= value;
        //当前的钻石个数 减去一定的钻石的值
        //并且储存在本地
        XmlDocument xmlDoc = new XmlDocument();
        xmlDoc.Load(gameDataPath);
        XmlNode rootNode = xmlDoc.SelectSingleNode("content");
        rootNode.SelectSingleNode("DiamondCount").InnerText = diamondCount.ToString();
        xmlDoc.Save(gameDataPath);
    }
    public void UpdateTowerPosCount(int value){
        XmlDocument xmlDoc = new XmlDocument();
        xmlDoc.Load(gameDataPath);
        XmlNode rootNode = xmlDoc.SelectSingleNode("content");
        rootNode.SelectSingleNode("ChooseTowerCount").InnerText = value.ToString();
        xmlDoc.Save(gameDataPath);
    }


    public int GetUpdateTowerLevelCost(int level){
        if (level == (updateTowerLevelCostList.Count - 1)){
            return -1;
        }
        return updateTowerLevelCostList[level];
    }
    public float GetPreTowerLevelPlus(int level){
        if (level == (towerLevelPlusList.Count - 1)){
            return -1;
        }
        return towerLevelPlusList[level];
    }
}
