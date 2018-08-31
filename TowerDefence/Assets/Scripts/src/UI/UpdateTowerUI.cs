using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UpdateTowerUI : MonoBehaviour
{
    private Transform tower;
    // Use this for initialization
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }
    public void onButtonClick(string custom)
    {
        Debug.Log("custom data = " + custom);
        switch (custom)
        {
            case "update":
                tower.GetComponent<Tower>().UpdateTower();
                break;
            case "sell":
                Global.GetInstance().GetTowerController().SellTower(tower);
                break;
            case "bg":
                if (tower != null){
                    tower.GetComponent<Tower>().HideTowerRange();
                }
                break;
            default:
                break;
        }


        Destroy(gameObject);
    }
    public void SetTower(Transform tw)
    {
        tower = tw;

    }
}
