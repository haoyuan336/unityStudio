using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Events;
using UnityEngine.SceneManagement;

public class Global
{
    private static Global global;
    private int currentLevelNum;
    private GameController gameController;
    private Canvas canvas;
    private UIController uiController;
    private TowerController towerController;
    //private int goldCount;
    private TopBar topBar;
    private GameTool tool;
    private MapController mapController;
    private EnemyController enemyController;
    private CheTwrCtl chooseTowerCtl;
    //public Level currentLevel;
    private ChooseTowerInfo chooseTowerInfo;
    private ChooseTowerIconPosCtl chooseTowerIconPosCtl;  //塔的位置的管理
    private ChooseTowerTopBar chooseTowerTopBar;
    //

    private GameLocalData gameLocalData; //游戏的本地储存
    private List<TowerData> currentTowerDatas = new List<TowerData>();


    private ChooseLevelTopBar chooseLevelTopBar;
    public static Global GetInstance()
    {
        if (global == null)
        {
            global = new Global();
            global.Init();
        }
        return global;
    }

    private void Init()
    {

        //goldCount = 0;
        currentLevelNum = 0;
        tool = new GameTool();
        tool.ReadLevelXml(Consts.LevelDir + "Earth" + currentLevelNum + ".xml");
        //currentLevel = tool.GetLevel(currentLevelNum);
        tool.ReadTowerInfo(Consts.LevelDir + "Tower.xml");
        gameLocalData = new GameLocalData(); //游戏进入的时候，实例化一个游戏本地储存的数据
    }
    public GameLocalData GetLocalData()
    {
        return gameLocalData;
    }
    public int GetLevelNum()
    {
        return currentLevelNum;
    }

    public void SetGameController(GameController ctl)
    {
        gameController = ctl;
    }
    public GameController GetGameController()
    {
        return gameController;
    }
    public void SetCanvas(Canvas ca)
    {
        canvas = ca;
    }
    public Canvas GetCanvas()
    {
        return canvas;
    }
    public UIController GetUIController()
    {
        return uiController;
    }
    public void SetUIController(UIController ctl)
    {
        uiController = ctl;
    }
    public void SetTowerController(TowerController ctl)
    {
        towerController = ctl;
    }
    public TowerController GetTowerController()
    {
        return towerController;
    }
    public void AddGold(int count)
    {
        //goldCount += count;
        mapController.goldCount += count;

    }
    public int GetGold()
    {
        //return goldCount;
        int count = mapController.goldCount;
        return count;
        //return mapController.goldCount;
    }
    public void SetTopBar(TopBar tb)
    {
        topBar = tb;
    }
    public TopBar GetTopBar()
    {
        return topBar;
    }
    public Level GetCurrentLevel()
    {
        //return currentLevel;
        return tool.GetLevelList()[currentLevelNum];
    }
    public string GetEarthName()
    {
        return tool.earthName;
    }
    public TowerData GetTowerData(int index)
    {
        return tool.towerDataList[index];
    }
    //public List<float> GetTowerBuildCostList()
    //{
    //    //返回的是  每一种塔的 建造费用 的 列表
    //    List<float> buildCost = new List<float>();
    //    List<TowerData> twd = tool.GetTowerDatas();
    //    foreach (TowerData td in twd)
    //    {
    //        buildCost.Add(td.GetUpdateCost[0]);
    //    }
    //    return buildCost;
    //}
    public void SetMapController(MapController ctl)
    {
        mapController = ctl;
    }
    public MapController GetMapController()
    {
        return mapController;
    }
    public void SetEnemyController(EnemyController ctl)
    {
        enemyController = ctl;
    }
    public EnemyController GetEnemyController()
    {
        return enemyController;
    }
    public void SetGameOver(bool value)
    {
        //游戏结束 告诉主要的控制器，游戏结束了
        //首先告诉敌人控制器，游戏结束不要在出敌人了
        enemyController.SetGameOver(value);
        towerController.SetGameOver(value);
        mapController.SetGameOver(value);

    }
    public void EnterChooseTowerScene(int level)
    {
        Debug.Log("Global choose Tower scene level = " + level);
        currentLevelNum = level;
        SceneManager.LoadScene("ChooseTower");
    }
    public void EnterHome()
    {
        //进入选择关卡的页面
        SceneManager.LoadScene("ChooseLevelScene");

    }
    public void EnterGame(int level)
    {
        currentLevelNum = level;
        Debug.Log("current Level num = " + level);
        SceneManager.LoadScene("GameScene");
    }
    public void EnterNextGame()
    {
        currentLevelNum += 1;
        SceneManager.LoadScene("GameScene");

    }
    public GameTool GetGameTool()
    {
        return tool;
    }
    public void SetChooseTowerCtl(CheTwrCtl ctl)
    {
        chooseTowerCtl = ctl;
    }
    public CheTwrCtl GetChooseTowerCtl()
    {
        return chooseTowerCtl;
    }
    public void SetChooseTowerInfo(ChooseTowerInfo ctinfo)
    {
        chooseTowerInfo = ctinfo;
    }
    public ChooseTowerInfo GetChooseTowerInfo()
    {
        return chooseTowerInfo;
    }
    public void SetChooseTowerIconPosCtl(ChooseTowerIconPosCtl ctl)
    {
        chooseTowerIconPosCtl = ctl;
    }
    public ChooseTowerIconPosCtl GetChooseTowerIconPosCtl()
    {
        return chooseTowerIconPosCtl;
    }
    public void SetCurrentTowerDatas(List<GameObject> values)
    {
        currentTowerDatas = new List<TowerData>();
        for (int i = 0; i < values.Count; i++)
        {
            currentTowerDatas.Add(values[i].transform.GetComponent<TowerIconPos>().GetTowerData());
        }
    }
    public List<TowerData> GetCurrentTowerDatas()
    {
        return currentTowerDatas;
    }
    public void SetChooseTowerTopBar(ChooseTowerTopBar ctl)
    {
        chooseTowerTopBar = ctl;
    }
    public ChooseTowerTopBar GetChooseTowerTopBar()
    {
        return chooseTowerTopBar;
    }
    public void SetChooseLevelTopBar(ChooseLevelTopBar ctl)
    {
        chooseLevelTopBar = ctl;
    }
    public ChooseLevelTopBar GetChooseLevelTopBar(){
        return chooseLevelTopBar;
    }
}