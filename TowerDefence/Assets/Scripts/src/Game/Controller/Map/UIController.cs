using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIController : MonoBehaviour {
    public GameObject buildTowerUIPrefab;
    public GameObject updateTowerUIPrefab;
    // Use this for initialization
    private GameObject currentMenu;
    private Transform currentTower;
    public GameObject topBarPrefab;
    public GameObject topBarPos;
    private GameObject topBar;
	void Start () {
        Global.GetInstance().SetUIController(this);
        topBar = Instantiate(topBarPrefab);
        topBar.transform.parent = Global.GetInstance().GetCanvas().transform;
        //topBar.transform.position = Vector2.zero;
        Vector3 p = Camera.main.WorldToScreenPoint(topBarPos.transform.position);
        Debug.Log("top bar p =  " + p);
        topBar.transform.position = p;
	}
	
	// Update is called once per frame
	void Update () {
		
	}
    public void ShowBuildTowerUI(Transform tra){
        Vector3 pos = tra.position;
        Vector3 screenPos = Camera.main.WorldToScreenPoint(pos);
        if (currentMenu != null && screenPos.Equals(currentMenu.transform.position)){
            Debug.Log("相同位置的创建");
        }else if (currentMenu != null){
            Destroy(currentMenu);
            CreareBuildTower(screenPos, tra);
        }
        else
        {
            CreareBuildTower(screenPos, tra);
        }


    }
    private void CreareBuildTower(Vector3 pos, Transform tra){
        Debug.Log("Show Build Tower UI width pos = " + pos);
        if (currentTower != null)
        {
            currentTower.GetComponent<Tower>().HideTowerRange();
        }
        currentMenu = Instantiate(this.buildTowerUIPrefab);
        currentMenu.transform.position = pos;
        currentMenu.transform.parent = Global.GetInstance().GetCanvas().transform;
        currentMenu.transform.GetComponent<BuildTowerUI>().SetTowerBase(tra);
    }
    private void CreateUpdateTowerUI(Vector3 pos, Transform tw){
        if (currentTower != null){
            currentTower.GetComponent<Tower>().HideTowerRange();
        }
        currentTower = tw;
        currentMenu = Instantiate(this.updateTowerUIPrefab);
        currentMenu.transform.position = pos;
        currentMenu.transform.parent = Global.GetInstance().GetCanvas().transform;
        currentMenu.transform.GetComponent<UpdateTowerUI>().SetTower(tw);
    }
    public void buttonClick(string type ){
        Debug.Log("uicontroller button click");
        switch(type){
            case "bg-click":
                Debug.Log("背景按钮点击");
                if (currentMenu != null){
                    Destroy(currentMenu);

                }
                //关闭菜单的时候 ，tower的 范围也要关掉
                if (currentTower != null){
                    currentTower.GetComponent<Tower>().HideTowerRange();
                }
                break;
            default:
                break;
        }
    }
    public void ShowTowerUpdateUI(Transform tw){
        Vector3 pos = tw.position;
        Vector3 screenPos = Camera.main.WorldToScreenPoint(pos);
        if (currentMenu != null && screenPos.Equals(currentMenu.transform.position)){

        }else if (currentMenu != null){
            Destroy(currentMenu);
            CreateUpdateTowerUI(screenPos, tw);
        }else{
            CreateUpdateTowerUI(screenPos, tw);
        }
    }
    public void SetWaveNum(int totalNum, int currentNum){
        topBar.GetComponent<TopBar>().SetWaveText(currentNum.ToString() + "/" + totalNum.ToString());
    }
}
