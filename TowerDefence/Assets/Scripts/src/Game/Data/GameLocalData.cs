using System;
using System.IO;
using UnityEngine;
using System.Xml;
public class GameLocalData
{
    private string gameDataPath = Consts.resourcesPath + @"game-data.xml";
    private int towerPosCount; //塔的位置数量 可以选择的tower 的位置数量
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

            XmlElement chooseTowerCountElement = xmlDoc.CreateElement("choose-tower-count");
            chooseTowerCountElement.InnerText = "3";
            rootNode.AppendChild(chooseTowerCountElement);
            xmlDoc.AppendChild(rootNode);
            xmlDoc.Save(gameDataPath);

        }else{
            XmlDocument xmlDoc = new XmlDocument();
            xmlDoc.Load(gameDataPath);
            XmlNode rootNode = xmlDoc.SelectSingleNode("content");
            towerPosCount = int.Parse(rootNode.SelectSingleNode("choose-tower-coun").InnerText);
            Debug.Log("tower pos count = " + towerPosCount);
        }
    }
    //获取tower 位置数量的接口
    public int GetTowerPosCount(){
        return towerPosCount;
    }
}
