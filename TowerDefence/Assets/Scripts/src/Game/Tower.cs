using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tower : MonoBehaviour
{
    //建造好之后 就可以追踪敌人了
    // Use this for initialization
    private EnemyController enemyController;
    private List<GameObject> enemyList;
    public float attackDistance;
    private GameObject attackTarget;
    private Vector3 targetVector;
    private Vector3 currentVector;
    public GameObject bulletPrefab;
    public float shootDuraction;
    private float shootNotTime = 0.0f;
    public GameObject shootPoint;
    public GameObject gun;
    private void Awake()
    {
        currentVector = new Vector3(10, transform.position.y, 100);
        //bulletPool = new ObjectPool(bulletPrefab, 3);
    }
    void Start()
    {

        //Debug.DrawLine(Vector3.zero, Vector3.up * 100,Color.red);
        //Debug.DrawLine(Vector3.zero, new Vector3(100, 100, 100), Color.red);
    }
    public void SetController(Transform ctl)
    {
        enemyController = ctl.GetComponent<EnemyController>();
        enemyList = enemyController.enemyList;

    }
    // Update is called once per frame
    void Update()
    {
        //取出父节点里面 的 所有敌人的节点
        //遍历敌人节点 ，根据攻击距离寻找需要攻击的敌人 敌人列表不是空的，并且被攻击的对象 是null的 ，这时候寻找敌人
        if (enemyList != null && attackTarget == null)
        {
            for (int i = 0; i < enemyList.Count; i++)
            {
                GameObject obj = enemyList[i];
                if (!obj.transform.GetComponent<Enemy>().isDead())
                {
                    float dis = Vector3.Distance(transform.position, obj.transform.position);
                    if (dis <= attackDistance)
                    {
                        attackTarget = obj;
                    }
                }

            }
        }
        if (attackTarget != null && !attackTarget.GetComponent<Enemy>().isDead())
        {
            targetVector = new Vector3(attackTarget.transform.position.x, transform.position.y, attackTarget.transform.position.z);
            currentVector = Vector3.MoveTowards(currentVector, targetVector, Vector3.Distance(currentVector, targetVector) * 0.2f);
            transform.LookAt(currentVector);
            float dis = Vector3.Distance(transform.position, attackTarget.transform.position);

            if (dis > attackDistance)
            {
                attackTarget = null;
            }
        }
        if (attackTarget != null && !attackTarget.transform.GetComponent<Enemy>().isDead())
        {
            if (shootNotTime > shootDuraction)
            {
                shootNotTime = 0;
                ShootBullet();
            }
            else
            {
                shootNotTime += Time.deltaTime;
                //攻击间隔
            }

        }else{
            attackTarget = null;
        }

    }
    void ShootBullet()
    {
        //攻击的时候 创建

        Vector3 bulletPos = shootPoint.transform.position;
        //GameObject bullet = bulletPool.GetObjFromPool(bulletPos);
        GameObject bullet = Instantiate(bulletPrefab);
        bullet.transform.parent = transform.parent;
        bullet.transform.position = bulletPos;
        bullet.GetComponent<Bullet>().SetShootTarget(attackTarget);
        //bullet.GetComponent<Bullet>().SetController(this);
    }
    public void CollisionAttack(GameObject enemyTarget)
    {
        //
    }
    public void BullletEnd(GameObject obj)
    {
        //bulletPool.ReccleObj(obj);
    }
}
