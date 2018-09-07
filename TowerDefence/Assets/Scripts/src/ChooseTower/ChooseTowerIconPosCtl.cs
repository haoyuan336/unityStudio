using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
//选择tower的位置管理界面
public class ChooseTowerIconPosCtl : MonoBehaviour {

    public GameObject towerIconPosPrefab;

    //public GameObject towerPosBg;
    // Use this for initialization
    private List<Vector3> towerPosList = new List<Vector3>();
    private List<GameObject> towerIconsList = new List<GameObject>();
    private Queue<int> numQuene = new Queue<int>();
	void Start () {
        Global.GetInstance().SetChooseTowerIconPosCtl(this);
        //根据当前的，根据Tower 的保存的当前的 塔位的个数初始化塔位
        int count = Global.GetInstance().GetLocalData().GetTowerPosCount();
        //Debug.Log("count = " + count);
        //Debug.Log("sin 30 = " + Mathf.Sin(Mathf.PI / 6));

        for (int i = 0; i < count; i ++){
            //根据count的数量
            GameObject image = new GameObject("TowerPosBg");
            image.transform.parent = transform;
            Sprite sp = Resources.Load("Res/build_menu_towerbg", typeof(Sprite)) as Sprite;
            Image img = image.AddComponent<Image>() as Image;
            img.sprite = sp;
            //image.transform.GetComponent<RectTransform>().localPosition = Vector3.zero;
            Vec2 vec2 = Vec2.Up();
            Vec2 endVec2 = Vec2.Rotate(vec2,  -1 * Mathf.PI * 2 / count * i );
            endVec2 = endVec2.MultiValue(130);
            Debug.Log("end Vec2  x= " + endVec2.x + "y= " + endVec2.y);
            Vector3 endV3 = new Vector3(endVec2.x, endVec2.y, 0);
            image.transform.GetComponent<RectTransform>().localPosition = endV3;
            towerPosList.Add(endV3);
            numQuene.Enqueue(i);
        }
    }
	
	// Update is called once per frame
	void Update () {
		
	}

    public bool IsHaveThisType(int tp){
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
   
    public void AddTowerIconPos(TowerData td){
        //增加一个塔的位置
       
        if (!IsHaveThisType(td.GetTowerType()) &&  towerIconsList.Count < towerPosList.Count){
            //如果还没有这个tower 的icon  那么就可以创建这个typa
            GameObject towerIconPos = Instantiate(towerIconPosPrefab);
            towerIconPos.transform.parent = transform;
            towerIconsList.Add(towerIconPos);
            int index = numQuene.Dequeue();
            towerIconPos.transform.GetComponent<RectTransform>().localPosition = towerPosList[index];

            towerIconPos.transform.GetComponent<TowerIconPos>().SetDataAndIndex(td, index);
        }
    }
    public void CancelChooseTower(int tp){
        //取消选择某个tower 
        //foreach(GameObject obj in towerIconsList){

        //    if (tp == obj.transform.GetComponent<TowerIconPos>().GetTowerType()){
        //        towerIconsList.Remove(obj);
        //        Destroy(obj);
        //    }
        //}
        for (int i = 0; i < towerIconsList.Count; i ++){
            GameObject obj = towerIconsList[i];
            if (obj.transform.GetComponent<TowerIconPos>().GetTowerType() == tp){

                numQuene.Enqueue(obj.transform.GetComponent<TowerIconPos>().GetIndex());
                towerIconsList.Remove(obj);
                Destroy(obj);
            }
        }
    }
    public List<GameObject> GetCurrentTowerIconsList(){
        return towerIconsList;
    }
}
