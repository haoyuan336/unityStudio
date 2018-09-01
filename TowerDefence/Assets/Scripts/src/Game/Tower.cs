using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class Tower : MonoBehaviour
{
    //建造好之后 就可以追踪敌人了
    // Use this for initialization
    public int towerType;
    public GameObject bulletPrefab;
    public GameObject shootPoint;
    public GameObject towerRange;
    public GameObject levelLabelPos;
    public GameObject levelLabelPrefab;


    private EnemyController enemyController;
    private List<GameObject> enemyList;
    //private List<float> attackDistance;
    private GameObject attackTarget;
    private Vector3 targetVector;
    private Vector3 currentVector;
    //public float shootDuraction;
    private float shootNotTime = 0.0f;
    private bool isMouseOver = false;
    private Color currentColor;

    private GameObject levelLabel;
    private int currentLevel;
    private TowerData towerData;
    //public float  
    private void Awake()
    {
        currentVector = new Vector3(10, transform.position.y, 100);
        //bulletPool = new ObjectPool(bulletPrefab, 3);
        currentColor = transform.GetComponent<Renderer>().material.color;
    }
    void Start()
    {
        levelLabel = Instantiate(levelLabelPrefab);
        levelLabel.transform.parent = Global.GetInstance().GetCanvas().transform;
        levelLabel.transform.position = Camera.main.WorldToScreenPoint(levelLabelPos.transform.position);
        //当前的等级是0 级

        //Debug.DrawLine(Vector3.zero, Vector3.up * 100,Color.red);
        //Debug.DrawLine(Vector3.zero, new Vector3(100, 100, 100), Color.red);
        currentLevel = 0;
        towerData = Global.GetInstance().GetTowerData(towerType);
        levelLabel.transform.GetComponent<Text>().text = towerData.towerName[currentLevel] + ":" + (currentLevel + 1).ToString();

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
            for (int i = (enemyList.Count - 1); i >= 0; i--)
            {
                GameObject obj = enemyList[i];
                if (!obj.transform.GetComponent<Enemy>().isDead())
                {
                    float dis = Vector3.Distance(transform.position, obj.transform.position);
                    if (dis <= towerData.attackRangeList[currentLevel])
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

            if (dis > towerData.attackRangeList[currentLevel])
            {
                attackTarget = null;
            }
        }
        if (attackTarget != null && !attackTarget.transform.GetComponent<Enemy>().isDead())
        {
            if (shootNotTime > towerData.attackDuractionList[currentLevel])
            {
                shootNotTime = 0;
                ShootBullet();
            }
            else
            {
                shootNotTime += Time.deltaTime;
                //攻击间隔
            }

        }
        else
        {
            attackTarget = null;
        }


        if (isMouseOver && Input.GetMouseButtonDown(0))
        {
            //鼠标点击事件
            Global.GetInstance().GetUIController().ShowTowerUpdateUI(transform);
            ShowAttackRange();
        }

    }
    void ShowAttackRange()
    {
        towerRange.SetActive(true);
        float distance = towerData.attackRangeList[currentLevel];
        towerRange.transform.localScale = new Vector3(distance * 2, transform.localScale.y, distance * 2);
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
    public void OnUpTower()
    {
        transform.GetComponent<Renderer>().material.color = Color.red;
        isMouseOver = true;
    }
    public void OutUpTower()
    {
        transform.GetComponent<Renderer>().material.color = currentColor;
        isMouseOver = false;
    }
    public void UpdateTower()
    {
        currentLevel += 1;
        levelLabel.transform.GetComponent<Text>().text = towerData.towerName[currentLevel] + ':' + (currentLevel + 1).ToString();
        HideTowerRange();
    }
    public void HideTowerRange()
    {
        towerRange.SetActive(false);
    }
    public TowerData GetTowerData()
    {
        return towerData;

    }
    public int GetCurrentTowerLevel(){
        return currentLevel;
    }
    public void OnDestroy()
    {
        Destroy(levelLabel);
    }
}
