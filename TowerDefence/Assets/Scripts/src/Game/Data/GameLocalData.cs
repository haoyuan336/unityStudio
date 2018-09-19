using System.IO;
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
    private int currentEarthIndex = 0;
    private List<EarthData>  earthDatas = new List<EarthData>();
    public GameLocalData()
    {
       

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
            currentEarthIndex = int.Parse(rootNode.SelectSingleNode("CurrentEarthIndex").InnerText);
        }


        for (int i = 0; i < 3; i ++){
            EarthData earthData = new EarthData();
            earthData.LoadEarthData(i);
            earthDatas.Add(earthData);
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
   
    public int GetCurrentEarthIndex(){
        //得到当前的地球的列表
        return currentEarthIndex;
    }
    public void SetCurrentEarthIndex(int index){
        //将当前选择的星球的ID 储存在本地
        currentEarthIndex = index;
        XmlDocument xmlDoc = new XmlDocument();
        xmlDoc.Load(gameDataPath);
        XmlNode rootNode = xmlDoc.SelectSingleNode("content");
        rootNode.SelectSingleNode("CurrentEarthIndex").InnerText = index.ToString();
        xmlDoc.Save(gameDataPath);
    }
   
    public EarthData GetEarthDataWithIndex(int value){
        return earthDatas[value];
    }
}
