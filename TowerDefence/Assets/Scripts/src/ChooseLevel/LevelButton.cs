﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class LevelButton : MonoBehaviour {

    // Use this for initialization
    public GameObject levelTextPos;
    public GameObject levelTextPrefab;
    public GameObject body;
    private GameObject uiCanavs;
    private GameObject levelLabel;
    private int index;
    private Color currentColor;
    private bool isOvering;
    private bool isOnShow = false;

	void Start () {
        currentColor = body.transform.GetComponent<Renderer>().material.color;
	}
	
	// Update is called once per frame
	void Update () {
        //if (levelLabel){
        //    Vector3 pos = Camera.main.WorldToScreenPoint(levelTextPos.transform.position);
        //    levelLabel.transform.position = pos;
        //    if (levelTextPos.transform.position.z < 1){
        //        levelLabel.GetComponent<Text>().text = (index + 1).ToString();
        //        isOnShow = true;
        //    }
        //    else{
        //        isOnShow = false;
        //        levelLabel.GetComponent<Text>().text = "";

        //    }
        //    //}
        //}
        ////if (levelLabel.transform.position.){

        ////}
        //if (Input.GetMouseButtonUp(0) && isOvering && isOnShow){
        //    //Debug.Log("选中了关卡");
        //    //Global.GetInstance().SetLevel(index);
        //    //SceneManager.LoadScene("GameScene");
        //    //Global.GetInstance().EnterGame(index);
        //    //todo 进入选择tower 的页面,并且要将选中的关卡数传递过来。
        //    Global.GetInstance().EnterChooseTowerScene(index);
        //}
    }
  

    public void SetIndex(int value){
        index = value;
        levelLabel = Instantiate(levelTextPrefab);
        //levelLabel.transform.parent = Global.GetInstance().GetCanvas().transform;
    }
    public void OnMouse()
    {
        body.transform.GetComponent<Renderer>().material.color = Color.green;
        isOvering = true;
        Global.GetInstance().GetChooseLevelTopBar().SetLevelNum(index);
    }
    public void OutMouse(){
        body.transform.GetComponent<Renderer>().material.color = currentColor;
        isOvering = false;
    }
    public void buttonDown(){
        body.transform.GetComponent<Renderer>().material.color = Color.red;
    }
}
