using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TowerBase : MonoBehaviour
{

    // Use this for initialization
    private Color color;
    private Transform controller;
    //private Transform gameController;
    void Start()
    {
        color = transform.GetComponent<Renderer>().material.color;
    }

    // Update is called once per frame
    void Update()
    {



    }
    public void ClickBase()
    {
        transform.GetComponent<Renderer>().material.color = Color.red;
    }
    public void ClickDownBase()
    {
        Debug.Log("Click Down Base ");
        //点下了tower 之后 ，给控制器发送一条消息。可以绘制一个UI了
        //gameController.SendMessage("ShowBuildTowerUI", transform);
        //controller.SendMessage("ShowBuildTowerUI", Camera.main.WorldToScreenPoint(transform.position));
        //transform.parent.SendMessage("ShowBuildTowerUI", transform);
        Global.GetInstance().GetUIController().ShowBuildTowerUI(transform);

    }
    public void OnUpBase()
    {
        transform.GetComponent<Renderer>().material.color = Color.blue;
    }
    public void OutUpBase()
    {
        transform.GetComponent<Renderer>().material.color = color;
    }
    public void ClickEndBase()
    {
    }
    Vector3 GetEuler(){
        return transform.eulerAngles;
    }
    //public void setControllerAndGameController(Transform ctl, Transform ctl2){
    //    //controller = ctl;
    //    //gameController = ctl2;
    //}
}
