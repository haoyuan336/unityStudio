using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;
public class GameController : MonoBehaviour
{
    public enum GameState
    {
        Invalide, Wait, Run, GameOve, Win
    }
    public GameObject mainCamera;
    public GameObject plane;
    public GameState gameState;
    // Use this for initialization
    public UnityEvent actionEvent;
    public GameObject levelLabel;
    private void Awake()
    {
        //进入游戏的时候 先读取xml数据 取出关卡数据
        Tool.ReadXml(Consts.LevelDir + "level1.xml");
    }
    void Start()
    {
        mainCamera.transform.LookAt(plane.transform.position);



    }
   
    public void GameStart(string info){
        Debug.Log("game Controller start" + info);
    }
    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space)){
            Debug.Log("key down");
            SetState(GameState.Run);
        }
        if (gameState == GameState.Run){

        }
    }
    void SetState(GameState state){
        if (gameState == state){
        }else{
            switch (state)
            {
                case GameState.Wait:
                    break;
                case GameState.Run:
                    Debug.Log("游戏开始运行了");
                    actionEvent.Invoke();
                    Debug.Log("Game Controller  = " + Tool.GetCurrentLevel().levelText);
                    levelLabel.transform.GetComponent<Text>().text = Tool.GetCurrentLevel().levelText.ToString();
                    break;
                default:
                    break;
            }
        }
        gameState = state;

    }
}
