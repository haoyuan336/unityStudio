﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class LevelButton : MonoBehaviour
{

    // Use this for initialization
    public GameObject levelTextPos;
    public GameObject levelTextPrefab;
    public GameObject body;
    public GameObject starLabelPrefab;


    private GameObject uiCanavs;
    private GameObject levelLabel;
    private int index;
    private Color currentColor;
    private bool isOvering;
    private bool isOnShow = false;
    private GameObject starLabel;
    private UnLockState isUnLock;
    void Start()
    {
        currentColor = body.transform.GetComponent<Renderer>().material.color;



    }
    //可见时 回调函数
    //void OnBecameVisible()
    //{
    //    bIsVisible = true;
    //    Debug.Log("我进来咯");
    //    levelLabel.GetComponent<Text>().text = (index + 1).ToString();
    //}

    ////不可见 回调函数
    //void OnBecameInvisible()
    //{
    //    bIsVisible = false;
    //    Debug.Log("我出去啦");
    //    levelLabel.GetComponent<Text>().text = "";

    //}
    // Update is called once per frame
    void Update()
    {
        if (levelLabel)
        {
            Vector3 pos = Camera.main.WorldToScreenPoint(levelTextPos.transform.position);
            levelLabel.transform.position = pos;



            float dis = Vector3.Distance(transform.position, Camera.main.transform.position);

            //if (){

            //}

            if (dis < 20)
            {
                //levelLabel.GetComponent<Text>().text = (index + 1).ToString();
                isOnShow = true;
            }
            else
            {

                isOnShow = false;
                //levelLabel.GetComponent<Text>().text = "";
            }
            levelLabel.SetActive(isOnShow);
            if (starLabel)
            {
                starLabel.transform.position = pos - new Vector3(0, 20, 0);
                starLabel.SetActive(isOnShow);

            }
        }

        if (Input.GetMouseButtonUp(0) && isOvering && isOnShow){
            //Debug.Log("选中了关卡");
            //Global.GetInstance().SetLevel(index);
            //SceneManager.LoadScene("GameScene");
            //Global.GetInstance().EnterGame(index);
            //todo 进入选择tower 的页面,并且要将选中的关卡数传递过来。
            buttonDown();
            Global.GetInstance().EnterChooseTowerScene(index);
        }
    }


    public void SetIndex(int value, UnLockState state)
    {
        isUnLock = state;
        index = value;
        levelLabel = Instantiate(levelTextPrefab);
        levelLabel.transform.parent = GameObject.Find("Canvas").transform;
        levelLabel.transform.GetComponent<ImageNum>().SetNum(value + 1);
        if (state == UnLockState.UnLock){

            starLabel = Instantiate(starLabelPrefab);
            starLabel.transform.parent = GameObject.Find("Canvas").transform;
            starLabel.transform.GetComponent<StarLabel>().SetStarNum(0);
            Debug.Log("解锁");
        }
        else if (state == UnLockState.UnLocking){
            Debug.Log("解锁中");
            starLabel = Instantiate(starLabelPrefab);
            starLabel.transform.parent = GameObject.Find("Canvas").transform;
            starLabel.transform.GetComponent<StarLabel>().SetStarNum(0);
        }
        else{
            Debug.Log("未解锁");
            body.transform.GetComponent<Renderer>().material.color = Color.gray;

        }




    }
    public void OnMouse()
    {
        Global.GetInstance().GetChooseLevelTopBar().SetLevelNum(index);

        if (isUnLock == UnLockState.UnLock || isUnLock == UnLockState.UnLocking){
            body.transform.GetComponent<Renderer>().material.color = Color.green;
            isOvering = true;
        }
 
    }
    public void OutMouse()
    {
        if (isUnLock == UnLockState.UnLock || isUnLock == UnLockState.UnLocking)
        {
            body.transform.GetComponent<Renderer>().material.color = currentColor;
            isOvering = false;
        }

  
    }
    void buttonDown()
    {
        if (isUnLock == UnLockState.UnLock || isUnLock == UnLockState.UnLocking)
        {
            body.transform.GetComponent<Renderer>().material.color = Color.red;
        }
    }
}
