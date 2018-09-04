using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class Enemy : MonoBehaviour
{
    private enum EnemyState
    {
        Invalide, Wait, Run, End, Dead
    }


    public float speed = 0.1f;
    // Use this for initialization
    public GameObject healthBarPos;
    public GameObject healthBarPrefab;
    public int healthTotalCount;
    public int gold;
    public GameObject addGoldPos;
    public GameObject textPrefab;
    public GameObject nameLabelPos;
    public string nameStr;
    public int damage;

    private GameObject nameLabel;
    private EnemyController enemyController;
    private GameObject PosNode;
    private int moveIndex = 0;
    private Vector3 nextPos;
    private EnemyState enemyState = EnemyState.Invalide;
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
        nameLabel = Instantiate(textPrefab);
        nameLabel.transform.parent = Global.GetInstance().GetCanvas().transform;
        nameLabel.transform.GetComponent<Text>().text = nameStr;
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
            nameLabel.transform.position = Camera.main.WorldToScreenPoint(nameLabelPos.transform.position);
        }
    }
    private void moveNextPos()
    {
        if (moveIndex == PosNode.transform.childCount){
            //移动到终点了
            //那么应该让大本营 掉血了
            Global.GetInstance().GetMapController().BeAttack(damage);
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
                    //敌人被打死了 那么给金币位置增加相应的金币值
                    int endGold = Global.GetInstance().GetCurrentLevel().currentGold + gold;
                    Global.GetInstance().GetCurrentLevel().SetCurrentGold(endGold);
                    GameObject addGoldText = Instantiate(textPrefab);



                    addGoldText.transform.parent = Global.GetInstance().GetCanvas().transform;
                    addGoldText.transform.position = Camera.main.WorldToScreenPoint(addGoldPos.transform.position);
                    addGoldText.transform.GetComponent<Text>().text = "+" + gold.ToString();
                    addGoldText.AddComponent<MoveUpText>();


                    //SleepTimeout.
                    break;
                case EnemyState.End:
                    Destroy(nameLabel);
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
    public void SetGameOver(bool value){
        SetState(EnemyState.Wait);
    }

}
