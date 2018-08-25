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
            //如果被攻击的对象不是null 那么开始攻击
            Vector2 v1 = new Vector2(transform.position.x, transform.position.z) - Vector2.up;
            Vector2 v2 = new Vector2(attackTarget.transform.position.x, attackTarget.transform.position.z) - Vector2.up;
            //float angle = Quaternion.Angle(new Quaternion(v1), v2);
            //float angle = Mathf.Atan((v2.y - v1.y) / (v2.x - v1.x));
            //Debug.Log("angle = " + angle);
            //float sign = Mathf.Sign(v2.y - v1.y);
            //Debug.Log("sign =  " + sign);
            //angle *= sign;
            //angle += Mathf.PI * 0.01f;
            //transform.rotation = Quaternion.Euler(new Vector3(0,angle,0));
            //transform.rotation = 
        }
        
	}
}
