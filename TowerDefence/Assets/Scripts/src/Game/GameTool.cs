using UnityEngine;
using System.IO;
using System.Collections.Generic;
using System.Xml;

public class GameTool
{

    private List<Level> levelList;
    public Level currentLevel;
    public string earthName;
    public List<TowerData> towerDataList;
    public GameTool()
    {
        levelList = new List<Level>();
        towerDataList = new List<TowerData>();
    }
    public void ReadLevelXml(string path)
    {
        Debug.Log("Read xml path = " + path);
        if (File.Exists(path))
        {
            XmlDocument xmlDoc = new XmlDocument();
            xmlDoc.Load(path);
            XmlNode content = xmlDoc.SelectSingleNode("content");
            XmlNodeList levels = content.SelectNodes("level");
            earthName = content.SelectSingleNode("EarthName").InnerText;
            foreach (XmlElement xm in levels)
            {
                //Debug.Log("level id = " + xm.GetAttribute("id"));
                XmlNode textNode = xm.SelectSingleNode("text");
                XmlNodeList waveNodes = xm.SelectNodes("wave");
                //Debug.Log("text =" + textNode.InnerText);
                XmlNode levelTips = xm.SelectSingleNode("LevelTips");
                List<Wave> waveList = new List<Wave>();
                foreach (XmlElement waveXm in waveNodes)
                {
                    //Debug.Log("Wave id = " + waveXm.GetAttribute("id"));
                    //Level list = new Level(wave);
                    XmlNode type = waveXm.SelectSingleNode("type");
                    XmlNode count = waveXm.SelectSingleNode("count");
                    Wave wave = new Wave(type.InnerText, count.InnerText);
                    waveList.Add(wave);
                }
                Level level = new Level(waveList, textNode.InnerText);
                level.SetLevelTips(levelTips.InnerText);
                levelList.Add(level);
            }
        }
    }



    public void CreateXml(string filePath)
    {
        if (!File.Exists(filePath))
        {
            Debug.Log("没找到此文件");
            //创建xml
            XmlDocument xmlDoc = new XmlDocument();
            //创建根阶段
            XmlElement root = xmlDoc.CreateElement("transforms");
            //创建第一个子节点
            //XmlElement elmXml = xmlDoc.CreateElement("rotation");
            ////设置节点属性
            //elmXml.SetAttribute("id", "0");
            //elmXml.SetAttribute("name", "first");
            ////创建第一个子节点的子节点
            ////XmlElement rotation_x = xmlDoc.CreateElement("x");
            ////rotation_x.InnerText = "0";
            ////XmlElement rotation_y = xmlDoc.CreateElement("y");
            ////rotation_y.InnerText = "0";
            ////XmlElement rotation_z = xmlDoc.CreateElement("z");
            ////rotation_z.InnerText = "0";
            ////elmXml.AppendChild(rotation_x);
            ////elmXml.AppendChild(rotation_y);
            ////elmXml.AppendChild(rotation_z);
            //root.AppendChild(elmXml);
            //xmlDoc.AppendChild(root);
            xmlDoc.Save(filePath);

        }
    }
    public void CreateXmlWithName(){

    }
    //public Level GetCurrentLevel()
    //{
    //    Debug.Log("current level num = " + currentLevelNum);
    //    currentLevel = levelList[currentLevelNum];
    //    return currentLevel;
    //}

    //public static void setData(){
    //    PlayerPrefs.SetInt
    //}
    public void ReadTowerInfo(string path)
    {
        string[] nameList = new string[6];
        nameList[0] = "TowerName";
        nameList[1] = "UpdateCost";
        nameList[2] = "AttackRange";
        nameList[3] = "AttackDamage";
        nameList[4] = "AttackDuraction";
        nameList[5] = "SellGold";
        if (File.Exists(path))
        {
            XmlDocument xmlDoc = new XmlDocument();
            xmlDoc.Load(path);
            XmlNodeList towerXmlList = xmlDoc.SelectSingleNode("content").ChildNodes;
            //XmlNodeList towerXmlList = content.SelectNodes("Tower");
            Debug.Log("tower xml list = " + towerXmlList.Count);
            foreach (XmlNode towerXml in towerXmlList)
            {
                XmlNode tyXml = towerXml.SelectSingleNode("Type");
                TowerData td = new TowerData(int.Parse(tyXml.InnerText));

                td.SetCurrentTowerLevel(int.Parse(towerXml.SelectSingleNode("CurrentLevel").InnerText));
                td.SetSpecialSkillName(towerXml.SelectSingleNode("SpecialSkillName").InnerText);
                //XmlNodeList nodeList = towerXml.SelectNodes("TowerName");
                //Debug.Log("Node List = " + nodeList.Count);
                for (int i = 0; i < nameList.Length; i++)
                {
                    XmlNodeList nodeList = towerXml.SelectNodes(nameList[i]);
                    List<string> valueFloat = new List<string>();
                    foreach (XmlNode nodeXml in nodeList)
                    {
                        valueFloat.Add(nodeXml.InnerText);
                    }
                    td.SetTowerData(nameList[i], valueFloat);
                }
                towerDataList.Add(td);
            }

        }
    }

    public List<Level> GetLevelList()
    {
        return levelList;
    }
    public Level GetLevel(int index)
    {
        return levelList[index];
    }
    public List<TowerData> GetTowerDatas(){
        return towerDataList;
    }
    public TowerData GetTowerData(int type){
        return towerDataList[type];
    }
}
