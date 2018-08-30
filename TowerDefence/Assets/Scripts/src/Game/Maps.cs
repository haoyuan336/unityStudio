using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Maps : MonoBehaviour {
    public GameObject enemyPosNode;
    public GameObject roadNodes;
    public GameObject towerBasePosNode;
	// Use this for initialization
	void Start () {
		
	}
    public GameObject GetTowerBaseNodes(){
        return towerBasePosNode;
    }
    public GameObject GetEnemyPosNodes(){
        return enemyPosNode;
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}
