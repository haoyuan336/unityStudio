using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TowerController : MonoBehaviour {

    // Use this for initialization
    public GameObject towerBasePosNodes;
    public GameObject towerBasePrefab;
    public List<GameObject> towerPrefabs;
    private GameObject rayHitObj;
    int targetMask;
    private List<GameObject> towerBaseList = new List<GameObject>();
	void Start () {
        //targetMask = LayerMask.GetMask("target");
        for (var i = 0; i < towerBasePosNodes.transform.childCount; i ++){
            var obj = Instantiate(towerBasePrefab);
            //obj.transform.parent = transform.parent;
            obj.transform.position = towerBasePosNodes.transform.GetChild(i).transform.position;
            towerBaseList.Add(obj);
            obj.GetComponent<TowerBase>().setController(transform);
        }
	}
	
	// Update is called once per frame
	void Update () {
        for (int i = 0; i < towerBaseList.Count; i ++){
            towerBaseList[i].transform.GetComponent<TowerBase>().OutUpBase();
        }
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;
        if (Physics.Raycast(ray, out hit, 100f, 1)){
            if (hit.transform.tag == "TowerBase"){
                hit.transform.GetComponent<TowerBase>().OnUpBase();
                if (Input.GetMouseButton(0)){
                    hit.transform.GetComponent<TowerBase>().ClickBase();
                }
                if (Input.GetMouseButtonDown(0)){
                    hit.transform.GetComponent<TowerBase>().ClickDownBase();
                }
            }
        }
    }
    public void BuildOneTower(int id, Vector3 pos){
        Debug.Log("Build one Tower = " + id);
        GameObject obj = Instantiate(this.towerPrefabs[id]);
        obj.transform.position = pos;
    }
}
