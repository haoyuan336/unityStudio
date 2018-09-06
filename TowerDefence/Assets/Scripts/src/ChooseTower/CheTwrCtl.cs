using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CheTwrCtl : MonoBehaviour {
    public GameObject towerIconPrefab;
    public GameObject allTowerSVContent;
    public GameObject chooseTowerInfoPrefab;
    // Use this for initialization
    private List<GameObject> towerIconList = new List<GameObject>();
	void Start () {
        //进入游戏的时候 ，创建几个towericon
        List<TowerData> towerDatas = Global.GetInstance().GetGameTool().GetTowerDatas();
        //根据TowerData的数据初始化tower
        int count = (int)Mathf.Ceil(towerDatas.Count / 3.0f);
        Debug.Log("tower data count = " + count);
        int index = 0;
        for (int i = 0; i < count; i ++){
            for (int j = 0; j < 3; j ++){
                index = i * 3 + j;
                if (index < towerDatas.Count){
                    GameObject tIcon = Instantiate(towerIconPrefab);
                    tIcon.transform.parent = allTowerSVContent.transform;
                    tIcon.GetComponent<RectTransform>().anchoredPosition = new Vector3(106 * j + 58, -58 - i * 106, 0);
                    tIcon.GetComponent<TowerIcon>().SetTowerData(towerDatas[index]);
                }
               
            }
        }
        Global.GetInstance().SetChooseTowerCtl(this);
	}
	
	// Update is called once per frame
	void Update () {
		
	}
    public void OnButtonClick(string value){
        switch(value){ 
            case "play":
                Debug.Log("开始游戏");
                break;
            default:
                break;
        }
    }

}
