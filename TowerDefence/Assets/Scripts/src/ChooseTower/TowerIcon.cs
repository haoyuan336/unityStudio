using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class TowerIcon : MonoBehaviour
{
    public GameObject typeLabel;
    private TowerData towerData;
    // Use this for initialization
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }
    public void SetTowerData(TowerData value){
        towerData = value;
        typeLabel.transform.GetComponent<Text>().text = towerData.type.ToString();
    }
    public void OnButtonClick(string value){
        switch(value){
            case "active":
                //告诉选择tower 的管理区，我点击的是哪个icon
                Global.GetInstance().GetChooseTowerIconPosCtl().AddTowerIconPos(towerData);
                //todo 这里比较重要的一点，先增加了Tower的位置icon，然后再显示此Tower的相关信息,从而能够知道这个Tower是要装备还是要卸掉
                Global.GetInstance().GetChooseTowerInfo().ShowTowerData(towerData);



                break;
            default:
                break;
        }
    }
}
