using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
//选择tower的位置管理界面
public class ChooseTowerIconPosCtl : MonoBehaviour
{

    public GameObject towerIconPosPrefab;
    public GameObject alertPrefab;
    public GameObject updateTowerPosLabel;

    //public GameObject towerPosBg;
    // Use this for initialization
    private List<Vector3> towerPosList = new List<Vector3>();
    private List<GameObject> towerIconsList = new List<GameObject>();
    private Queue<int> numQuene = new Queue<int>();
    private List<GameObject> towerImageList = new List<GameObject>();
    private int towerPosCount = 0;
    void Start()
    {
        Global.GetInstance().SetChooseTowerIconPosCtl(this);
        //根据当前的，根据Tower 的保存的当前的 塔位的个数初始化塔位
        towerPosCount = Global.GetInstance().GetLocalData().GetTowerPosCount();

        //Debug.Log("count = " + count);
        //Debug.Log("sin 30 = " + Mathf.Sin(Mathf.PI / 6));
        //增加塔位标识

        if (Global.GetInstance().GetLocalData().GetUpdateNextPosCost(towerPosCount) == -1)
        {
            updateTowerPosLabel.transform.GetComponent<Text>().text = "增加塔位:Max";
        }
        else
        {
            updateTowerPosLabel.transform.GetComponent<Text>().text = "增加塔位:" + Global.GetInstance().GetLocalData().GetUpdateNextPosCost(towerPosCount);

        }

        InitTowerPos(towerPosCount);

    }
    public void InitTowerPos(int count)
    {
        //初始化塔位


        foreach (GameObject img in towerImageList)
        {
            Destroy(img);
        }
        towerImageList = new List<GameObject>();

        towerPosList = new List<Vector3>();

        //foreach(GameObject obj in towerIconsList)
        //{
        //    Destroy(obj);
        //}
        //towerIconsList = new List<GameObject>();

        //numQuene = new Queue<int>();

        for (int i = 0; i < count; i++)
        {
            //根据count的数量
            GameObject image = new GameObject("TowerPosBg");
            image.transform.parent = transform;
            Sprite sp = Resources.Load("Res/build_menu_towerbg", typeof(Sprite)) as Sprite;
            Image img = image.AddComponent<Image>() as Image;
            img.sprite = sp;
            //image.transform.GetComponent<RectTransform>().localPosition = Vector3.zero;
            Vec2 vec2 = Vec2.Up();
            Vec2 endVec2 = Vec2.Rotate(vec2, -1 * Mathf.PI * 2 / count * i);
            endVec2 = endVec2.MultiValue(130);
            //Debug.Log("end Vec2  x= " + endVec2.x + "y= " + endVec2.y);
            Vector3 endV3 = new Vector3(endVec2.x, endVec2.y, 0);
            image.transform.GetComponent<RectTransform>().localPosition = endV3;
            towerImageList.Add(image);
            towerPosList.Add(endV3);
            numQuene.Enqueue(i);
        }
    }

    // Update is called once per frame
    void Update()
    {

    }

    public bool IsHaveThisType(int tp)
    {
        bool isHaveThisTowerIcon = false;
        for (int i = 0; i < towerIconsList.Count; i++)
        {
            GameObject t = towerIconsList[i];
            int type = t.transform.GetComponent<TowerIconPos>().GetTowerType();
            if (tp == type)
            {
                isHaveThisTowerIcon = true;
            }
        }
        return isHaveThisTowerIcon;
    }

    public void AddTowerIconPos(TowerData td)
    {
        //增加一个塔的位置

        if (!IsHaveThisType(td.GetTowerType()) && towerIconsList.Count < towerPosList.Count)
        {
            //如果还没有这个tower 的icon  那么就可以创建这个typa
            GameObject towerIconPos = Instantiate(towerIconPosPrefab);
            towerIconPos.transform.parent = transform;
            towerIconsList.Add(towerIconPos);
            int index = numQuene.Dequeue();
            towerIconPos.transform.GetComponent<RectTransform>().localPosition = towerPosList[index];

            towerIconPos.transform.GetComponent<TowerIconPos>().SetDataAndIndex(td, index);
        }
    }
    public void CancelChooseTower(int tp)
    {
        //取消选择某个tower 
        //foreach(GameObject obj in towerIconsList){

        //    if (tp == obj.transform.GetComponent<TowerIconPos>().GetTowerType()){
        //        towerIconsList.Remove(obj);
        //        Destroy(obj);
        //    }
        //}
        for (int i = 0; i < towerIconsList.Count; i++)
        {
            GameObject obj = towerIconsList[i];
            if (obj.transform.GetComponent<TowerIconPos>().GetTowerType() == tp)
            {

                numQuene.Enqueue(obj.transform.GetComponent<TowerIconPos>().GetIndex());
                towerIconsList.Remove(obj);
                Destroy(obj);
            }
        }
    }
    public List<GameObject> GetCurrentTowerIconsList()
    {
        return towerIconsList;
    }
    public bool IsCanStartGame()
    {
        if (towerIconsList.Count == 0)
        {
            return false;
        }
        return true;
    }
    public void OnButtonClick(string value)
    {
        switch (value)
        {
            case "update-count":
                //点击扩展的时候，弹出一个弹窗，问一下玩家是否
                //打开弹窗
                int CostDiamond = Global.GetInstance().GetLocalData().GetUpdateNextPosCost(towerPosCount);
                if (CostDiamond > Global.GetInstance().GetLocalData().GetDiamondCount())
                {
                    //如果需要的钻石个数大于当前的钻石个数那么提示玩家，钻石不足
                    //Global.GetInstance().GetChooseTowerTopBar().SetGameTips("钻石不足，无法增加!");
                    Global.GetInstance().GetChooseTowerTopBar().SetGameTips("钻石不足!");
                }
                else if (CostDiamond == -1)
                {
                    Global.GetInstance().GetChooseTowerTopBar().SetGameTips("已经升级到最大!");

                }
                else
                {
                    GameObject alert = Instantiate(alertPrefab);
                    alert.transform.parent = Global.GetInstance().GetCanvas().transform;
                    alert.transform.GetComponent<RectTransform>().localPosition = Vector3.zero;
                    ButtonCallBack cb = new ButtonCallBack(AlertCB);
                    alert.transform.GetComponent<Alert>().SetCallBack(cb, "确定花费" + CostDiamond + "个钻石来升级一个塔位么？");
                }


                break;
            default:
                break;
        }
    }
    public void AlertCB(string value)
    {
        Debug.Log("alert  cb  = " + value);
        switch (value)
        {
            case "ok":
                //确定花费一个钻石来升级一个塔位
                //首先钻石的个数减去1
                int CostDiamond = Global.GetInstance().GetLocalData().GetUpdateNextPosCost(towerPosCount);
                Global.GetInstance().GetLocalData().CostDiamond(CostDiamond);
                //diamond 显示的钻石数量更新一下
                Global.GetInstance().GetChooseTowerTopBar().SetDiamondLabelCount(Global.GetInstance().GetLocalData().GetDiamondCount());

                towerPosCount++;
                Global.GetInstance().GetLocalData().UpdateTowerPosCount(towerPosCount);


                InitTowerPos(towerPosCount);

                if (Global.GetInstance().GetLocalData().GetUpdateNextPosCost(towerPosCount) == -1)
                {
                    updateTowerPosLabel.transform.GetComponent<Text>().text = "增加塔位:Max";
                }
                else
                {
                    updateTowerPosLabel.transform.GetComponent<Text>().text = "增加塔位:" + Global.GetInstance().GetLocalData().GetUpdateNextPosCost(towerPosCount);

                }


                break;
            default:
                break;
        }
    }
}
