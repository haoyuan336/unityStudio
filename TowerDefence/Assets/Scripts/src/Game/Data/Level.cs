using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Level
{
    public int currentGold = 0;
    public static void SetLevel(int level)
    {
    }
    public static int GetLevelNum()
    {
        return PlayerPrefs.GetInt("level");
    }
    public static int currentLevel;
    public List<Wave> waveList;
    public string levelText;
    public Level(List<Wave> list, string text)
    {
        waveList = list;
        levelText = text;
    }
    public Wave GetWave(int waveIndex)
    {
        return waveList[waveIndex];
    }
    public int GetWaveCount()
    {
        return waveList.Count;
    }
    public void SetCurrentGold(int gold)
    {
        currentGold = gold;
        Global.GetInstance().GetTopBar().SetGoldNumText(gold);
    }
}
