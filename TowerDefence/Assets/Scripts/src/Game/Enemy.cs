using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    private enum EnemyState
    {
        Invalide, Wait, Run, End, Dead
    }
    private GameObject PosNode;
    private int moveIndex = 0;
    private Vector3 nextPos;
    private EnemyState enemyState = EnemyState.Invalide;
    public float speed = 0.1f;
    private EnemyController enemyController;
    // Use this for initialization
    public GameObject healthBarPos;
    public GameObject healthBarPrefab;
    public int healthTotalCount;
    private GameObject healthBar;
    private UIController uIController;
    private  int healthCount;
    private readonly int bigSize = 2;
    private float targetSize = 1;
    private void Awake()
    {
        SetState(EnemyState.Wait);
    }
    void Start()
    {
        //先取到
        healthBar = Instantiate(healthBarPrefab);
        healthBar.transform.parent = Global.GetInstance().GetCanvas().transform;
        healthBar.transform.position = Camera.main.WorldToScreenPoint(healthBarPos.transform.position);
        healthCount = healthTotalCount;
    }
    public void initPosNode(GameObject obj)
    {
        PosNode = obj;
        SetState(EnemyState.Run);
        Debug.Log("init pos Node");
    }

    // Update is called once per frame
    void Update()
    {
        if (PosNode)
        {
            //for (int i = 0; i < PosNode.transform.childCount; i ++){

            //}
            if (enemyState == EnemyState.Run)
            {

                if (Vector3.Distance(transform.position, nextPos) <= speed * Time.deltaTime)
                {
                    moveNextPos();

                }
                else
                {
                    transform.position = Vector3.MoveTowards(transform.position, nextPos, speed * Time.deltaTime);
                    healthBar.transform.position = Camera.main.WorldToScreenPoint(healthBarPos.transform.position);
                }
            }
            if (enemyState == EnemyState.Dead){
               
                targetSize += (bigSize - targetSize) * 0.2f;
                transform.localScale = new Vector3(targetSize, targetSize, targetSize);
                if (Mathf.Abs(targetSize - bigSize) < 0.1f)
                {
                    SetState(EnemyState.End);
                }
            }

        }
    }
    private void moveNextPos()
    {
        if (moveIndex == PosNode.transform.childCount){
            SetState(EnemyState.End);
        }else{
            nextPos = PosNode.transform.GetChild(moveIndex).transform.position;
            moveIndex++;
        }
       


    }
    private void SetState(EnemyState state)
    {

        if (enemyState == state)
        {

        }
        else
        {
            switch (state)
            {
                case EnemyState.Wait:
                    break;
                case EnemyState.Run:
                    this.transform.position = PosNode.transform.GetChild(0).transform.position;
                    nextPos = transform.position;
                    break;
                case EnemyState.Dead:
                    //如果敌人死了。播放一段敌人死了的动画

                    break;
                case EnemyState.End:
                    Destroy(healthBar);
                    enemyController.removeOneEnemy(gameObject);
                    break;
                default:
                    break;
            }
        }
        enemyState = state;
    }
    public void setController(Transform ctl){
        enemyController = ctl.GetComponent<EnemyController>();
    }
    /// <param name="obj">被攻击的对象</param>
    public void beAttach(int damage){
        //int damageCount = obj.transform.GetComponent<Bullet>().damageCount;
        //int endCount =
        Debug.Log("attack  =  " + damage);
        int endCount = healthCount - damage;
        if (endCount <= 0){
            healthCount = 0;

        }else{
            healthCount = endCount;
        }
        if (healthCount == 0){
            SetState(EnemyState.Dead);
        }
        healthBar.GetComponent<ProgressBar>().SetValue((float)healthCount / (float)healthTotalCount); 
    }
    public bool isDead(){
        if (enemyState != EnemyState.Run){
            return true;
        }
        return false;
    }

}
