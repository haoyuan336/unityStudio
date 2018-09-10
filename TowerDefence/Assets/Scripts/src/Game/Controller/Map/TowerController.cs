using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TowerController : MonoBehaviour {

    // Use this for initialization
    public GameObject towerBasePosNodes;
    public GameObject towerBasePrefab;
    //public List<GameObject> towerPrefabs;
    private GameObject rayHitObj;
    int targetMask;
    private List<GameObject> towerBaseList = new List<GameObject>();
    private List<GameObject> towerList = new List<GameObject>();
    private Transform controller;
    private bool isRunning = false;
    private void Awake()
    {
        Global.GetInstance().SetTowerController(this);
    }
    void Start () {
        isRunning = true;
        //targetMask = LayerMask.GetMask("target");
        //towerBasePosNodes = transform.GetComponent<GameController>().map.transform.GetComponent<Maps>().GetTowerBaseNodes();
        for (var i = 0; i < towerBasePosNodes.transform.childCount; i ++){
            var obj = Instantiate(towerBasePrefab);
            obj.transform.parent = transform;
            obj.transform.position = towerBasePosNodes.transform.GetChild(i).transform.position;
            towerBaseList.Add(obj);
            //obj.GetComponent<TowerBase>().setControllerAndGameController(transform, controller);
        }
	}
	
	// Update is called once per frame
	void Update () {

        if (isRunning){

            for (int i = 0; i < towerBaseList.Count; i++)
            {
                towerBaseList[i].transform.GetComponent<TowerBase>().OutUpBase();
            }
            for (int i = 0; i < towerList.Count; i++)
            {
                towerList[i].transform.GetComponent<Tower>().OutUpTower();
            }
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit, 100f, 1))
            {
                if (hit.transform.tag == "TowerBase")
                {
                    hit.transform.GetComponent<TowerBase>().OnUpBase();
                    if (Input.GetMouseButton(0))
                    {
                        hit.transform.GetComponent<TowerBase>().ClickBase();
                    }
                    if (Input.GetMouseButtonDown(0))
                    {
                        hit.transform.GetComponent<TowerBase>().ClickDownBase();
                    }
                }
                if (hit.transform.tag == "Tower")
                {
                    hit.transform.GetComponent<Tower>().OnUpTower();

                }

            }
        }

       


    }
    public void BuildOneTower(int towerId, Transform tb){
        int towerType = towerId;
        GameObject tower = Instantiate(Global.GetInstance().GetGameController().GetTowerPrefab(towerType));
        tower.transform.parent = transform;
        tower.transform.position =   tb.position + Vector3.up * 0.5f;
        tower.transform.GetComponent<Tower>().SetController(transform);
        towerList.Add(tower);
        //Debug.Log("Build one Tower = " + id);
        //GameObject obj = Instantiate(this.towerPrefabs[id]);
        //obj.transform.position = pos;
    }
    public void SetController(Transform obj){
        controller = obj;
    }
    public void SellTower(Transform tw){
        towerList.Remove(tw.gameObject);
        Destroy(tw.gameObject);
    }
    public void SetGameOver(bool value){
        isRunning = false;
        foreach(GameObject obj in towerList){
            obj.transform.GetComponent<Tower>().SetGameOver(value);
        }
    }
}
