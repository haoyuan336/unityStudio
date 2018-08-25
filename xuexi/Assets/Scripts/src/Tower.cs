using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tower : MonoBehaviour {
    //建造好之后 就可以追踪敌人了
    // Use this for initialization
    private Transform controller;
    private EnemyController enemyController;
    private List<GameObject> enemyList;
    public float attackDistance;
    private GameObject attackTarget;
    private Vector3 targetVector;
    private Vector3 currentVector;
    private void Awake()
    {
        currentVector = new Vector3(0, transform.position.y, 0);
    }
    void Start () {

        //Debug.DrawLine(Vector3.zero, Vector3.up * 100,Color.red);
        Debug.DrawLine(Vector3.zero, new Vector3(0, 100, 0), Color.red);
    }
    public void setController (Transform ctl){
        controller = ctl;
        enemyController = ctl.GetComponent<EnemyController>();
        enemyList = enemyController.enemyList;

    }
    private float angle = 0;
	// Update is called once per frame
	void Update () {
		//取出父节点里面 的 所有敌人的节点
        //遍历敌人节点 ，根据攻击距离寻找需要攻击的敌人 敌人列表不是空的，并且被攻击的对象 是null的 ，这时候寻找敌人
        if (enemyList != null && attackTarget == null){
            for (int i = 0; i < enemyList.Count; i ++){
                GameObject obj = enemyList[i];
                float dis = Vector3.Distance(transform.position, obj.transform.position);
                Debug.Log("dis = " + dis);
                if (dis <= attackDistance){
                    Debug.Log("攻击");
                    attackTarget = obj;
                }
            }
        }
        if (attackTarget != null){
            targetVector = new Vector3(attackTarget.transform.position.x, transform.position.y, attackTarget.transform.position.z);
            currentVector = Vector3.MoveTowards(currentVector, targetVector, Vector3.Distance(currentVector, targetVector) * 0.2f);
            transform.LookAt(currentVector);
            float dis = Vector3.Distance(transform.position, attackTarget.transform.position);

            if (dis > attackDistance){
                attackTarget = null;
            }
        }
        
	}
}
