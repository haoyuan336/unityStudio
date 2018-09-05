using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class MapController : MonoBehaviour {
    public GameObject homeHealth;
    public GameObject homeHealCountLabelPos;
    public GameObject textPrefab;
    public int homeHealthCount;
    public GameObject gameOverUIPrefab;
    public GameObject gameOverUIPos;
    public GameObject gameWinUIPrefab; 
    // Use this for initialization
    private GameObject homeHealCountLabel;
    private GameObject gameOverUI;
    private GameObject gameWinUI;
    public int goldCount;
	void Start () {
        Global.GetInstance().SetMapController(this);
        homeHealCountLabel = Instantiate(textPrefab);
        homeHealCountLabel.transform.parent = Global.GetInstance().GetCanvas().transform;
        homeHealCountLabel.transform.position = Camera.main.WorldToScreenPoint(homeHealCountLabelPos.transform.position);
        homeHealCountLabel.transform.GetComponent<Text>().text = homeHealthCount.ToString();
	}
	
	// Update is called once per frame
	void Update () {
		
	}
  
    public void BeAttack(int damage){
        int endHealth = homeHealthCount - damage;
        if (endHealth <= 0){
            endHealth = 0;
        }
        homeHealthCount = endHealth;
        //更新大本营的血量值
        homeHealCountLabel.transform.GetComponent<Text>().text = homeHealthCount.ToString();
        if (homeHealthCount == 0){
            //游戏结束
            Global.GetInstance().SetGameOver(false);
        }
    }
    public int GetHomeHealthCount(){
        return homeHealthCount;
    }
    public void SetGameOver(bool value){
        if (value){
            //游戏胜利 ，这时候 渲染游戏胜利的界面
            gameWinUI = Instantiate(gameWinUIPrefab);
            gameWinUI.transform.parent = Global.GetInstance().GetCanvas().transform;
            gameWinUI.transform.position = Camera.main.WorldToScreenPoint(gameOverUIPos.transform.position);
        }
        if (!value)
        {
            gameOverUI = Instantiate(gameOverUIPrefab);
            gameOverUI.transform.parent = Global.GetInstance().GetCanvas().transform;
            gameOverUI.transform.position = Camera.main.WorldToScreenPoint(gameOverUIPos.transform.position);
        }
    }
    public void SetCurrentGold(int gold){
        goldCount = gold;
        Global.GetInstance().GetTopBar().currentGoldLabel.transform.GetComponent<Text>().text = gold.ToString();
    }
}
