using UnityEngine;
using System.IO;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System.Xml;

public class Tool
{

    private static List<Level> levelList = new List<Level>();
    public static Level currentLevel;
    public static string earthName;
    public static void ReadXml(string path)
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
                Debug.Log("level id = " + xm.GetAttribute("id"));
                XmlNode textNode = xm.SelectSingleNode("text");
                XmlNodeList waveNodes = xm.SelectNodes("wave");
                Debug.Log("text =" + textNode.InnerText);
                List<Wave> waveList = new List<Wave>();
                foreach (XmlElement waveXm in waveNodes)
                {
                    Debug.Log("Wave id = " + waveXm.GetAttribute("id"));
                    //Level list = new Level(wave);
                    XmlNode type = waveXm.SelectSingleNode("type");
                    XmlNode count = waveXm.SelectSingleNode("count");
                    Wave wave = new Wave(type.InnerText, count.InnerText);
                    waveList.Add(wave);
                }
                Level level = new Level(waveList, textNode.InnerText);
                levelList.Add(level);
            }
        }
    }



    public static void CreateXml(string filePath)
    {
        if (!File.Exists(filePath))
        {
            Debug.Log("没找到此文件");
            //创建xml
            XmlDocument xmlDoc = new XmlDocument();
            //创建根阶段
            XmlElement root = xmlDoc.CreateElement("transforms");
            //创建第一个子节点
            XmlElement elmXml = xmlDoc.CreateElement("rotation");
            //设置节点属性
            elmXml.SetAttribute("id", "0");
            elmXml.SetAttribute("name", "first");
            //创建第一个子节点的子节点
            XmlElement rotation_x = xmlDoc.CreateElement("x");
            rotation_x.InnerText = "0";
            XmlElement rotation_y = xmlDoc.CreateElement("y");
            rotation_y.InnerText = "0";
            XmlElement rotation_z = xmlDoc.CreateElement("z");
            rotation_z.InnerText = "0";
            elmXml.AppendChild(rotation_x);
            elmXml.AppendChild(rotation_y);
            elmXml.AppendChild(rotation_z);
            root.AppendChild(elmXml);
            xmlDoc.AppendChild(root);
            xmlDoc.Save(filePath);

        }
    }
    public static Level GetCurrentLevel(){
        int currentLevelNum = Level.GetLevelNum();
        Debug.Log("current level num = " + currentLevelNum);
        currentLevel = levelList[currentLevelNum];
        return currentLevel;
    }

    //public static void setData(){
    //    PlayerPrefs.SetInt
    //}

    public static List<Level> GetLevelList(){
        return levelList;
    }
}
