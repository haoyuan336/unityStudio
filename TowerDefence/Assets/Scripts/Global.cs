using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Events;
public class Global
{
    private static Global global;
    private int currentLevel;
    private GameController gameController;
    private Canvas canvas;
    private UIController uiController;
    private TowerController towerController;
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
        currentLevel = 0;
    }
    public int GetLevel()
    {
        return currentLevel;
    }
    public void SetLevel(int val)
    {
        currentLevel = val;
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
    public Canvas GetCanvas(){
        return canvas;
    }
    public UIController GetUIController(){
        return uiController;
    }
    public void SetUIController(UIController ctl){
        uiController = ctl;
    }
    public void SetTowerController(TowerController ctl){
        towerController = ctl;
    }
    public TowerController GetTowerController(){
        return towerController;
    }
}