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
    // Use this for initialization
    private GameObject homeHealCountLabel;
    private GameObject gameOverUI;
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
    void GameOver(bool value){
        Global.GetInstance().SetGameOver(value);
        if (!value){
            gameOverUI = Instantiate(gameOverUIPrefab);
            gameOverUI.transform.parent = Global.GetInstance().GetCanvas().transform;
            gameOverUI.transform.position = Camera.main.WorldToScreenPoint(gameOverUIPos.transform.position);
        }
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
            GameOver(false);
        }
    }
}
