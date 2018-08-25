using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIController : MonoBehaviour {
    public GameObject canvas;
    public GameObject buildTowerUIPrefab;
    // Use this for initialization
    private GameObject currentMenu;
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
    void ShowBuildTowerUI(Transform tra){
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
        currentMenu = Instantiate(this.buildTowerUIPrefab);
        currentMenu.transform.position = pos;
        currentMenu.transform.parent = canvas.transform;
        currentMenu.transform.GetComponent<BuildTowerUI>().setControllerAndTowerBase(transform, tra);
    }
    public void buttonClick(string type ){
        Debug.Log("uicontroller button click");
        switch(type){
            case "bg-click":
                Debug.Log("背景按钮点击");
                Destroy(currentMenu);
                break;
            default:
                break;
        }
    }

}
