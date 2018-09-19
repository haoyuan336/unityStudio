using System;
using System.Collections.Generic;
using System.Xml;
using System.IO;
using UnityEngine;
public enum UnLockState{
    Lock, UnLock, UnLocking
}
public class EarthData
{
    string resourcesPath = Consts.LevelDir;
    int currentLevel = 0;
    public void LoadEarthData(int value){
        string pathStr = resourcesPath + "Earth" + value + ".xml";
        XmlDocument xmldoc = new XmlDocument();
        xmldoc.Load(pathStr);
        XmlNode root = xmldoc.SelectSingleNode("content");
        XmlNode currentLevelIndexNode = root.SelectSingleNode("CurrentLevelIndex");
        currentLevel = int.Parse(currentLevelIndexNode.InnerText);

    }
    public int GetCurrentUnLockLevel(){

        return currentLevel;
    }
}
