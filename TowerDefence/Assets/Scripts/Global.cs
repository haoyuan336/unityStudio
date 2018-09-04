﻿using System.Collections;
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
    private int goldCount;
    private TopBar topBar;
    private Tool tool;
    private MapController mapController;
    private EnemyController enemyController;
    public Level currentLevel;
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

        goldCount = 0;
        currentLevelNum = 0;
        tool = new Tool();
        tool.ReadLevelXml(Consts.LevelDir + "Earth" + currentLevelNum + ".xml");
        currentLevel = tool.GetLevel(currentLevelNum);


        tool.ReadTowerInfo(Consts.LevelDir + "Tower.xml");

    }
    public int GetLevelNum()
    {
        return currentLevelNum;
    }

    public void SetController(GameController ctl)
    {
        gameController = ctl;
    }
    public GameController GetController()
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
        goldCount += count;
    }
    public int GetGold()
    {
        return goldCount;
    }
    public void SetTopBar(TopBar tb){
        topBar = tb;
    }
    public TopBar GetTopBar(){
        return topBar;
    }
    public Level GetCurrentLevel(){
        return currentLevel;
    }
    public string GetEarthName(){
        return tool.earthName;
    }
    public TowerData GetTowerData(int index){
        return tool.towerDataList[index];
    }
    public List<float> GetTowerBuildCastList(){
        //返回的是  每一种塔的 建造费用 的 列表
        List<float> buildCast = new List<float>();
        List<TowerData> twd = tool.GetTowerDatas();
        foreach (TowerData td in twd){
            buildCast.Add(td.updateCastList[0]);
        }
        return buildCast;
    }
    public void SetMapController(MapController ctl){
        mapController = ctl;
    }
    public MapController GetMapController(){
        return mapController;
    }
    public void SetEnemyController(EnemyController ctl){
        enemyController = ctl;
    }
    public EnemyController GetEnemyController(){
        return enemyController;   
    }
    public void SetGameOver(bool value){
        //游戏结束 告诉主要的控制器，游戏结束了
        //首先告诉敌人控制器，游戏结束不要在出敌人了
        enemyController.SetGameOver(value);
        towerController.SetGameOver(value);

    }
    public void EnterHome(){
        //进入选择关卡的页面
        SceneManager.LoadScene("ChooseLevelScene");

    }
    public void EnterGame(int level){
        currentLevelNum= level;
        Debug.Log("current Level num = " + level);
        SceneManager.LoadScene("GameScene");
    }
}