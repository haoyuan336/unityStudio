using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyController : MonoBehaviour
{
    // Use this for initialization
    public List<GameObject> enemyPrefabs;
    public GameObject posNodes;
    public float waveDuraction; //波次之间的时间间隔
    public float enemyDuraction; //敌人之间的时间间隔
    private bool isRunning = false;
    private float createEnemyTime = 0.0f;
    private int createEnemyCount = 0;
    private float createWaveTime = 0.0f;
    private int createWaveCount = 0;
    private Level currentLevel;
    private Wave currentWave;
    public List<GameObject> enemyList;
    void Start()
    {

    }
    private void Update()
    {

    }
    // Update is called once per frame
    void FixedUpdate()
    {
        if (isRunning)
        {
            if (createEnemyTime > enemyDuraction)
            {
                createEnemyTime = 0;
                CreateAnEnemy(currentWave.enemyType);
            }
            else
            {
                createEnemyTime += Time.deltaTime;
            }
            if (createEnemyCount == 0){
                createWaveTime += Time.deltaTime;
                Debug.Log("create Wave time = " + createWaveTime);
                if (createWaveTime > waveDuraction)
                {
                    createWaveTime = 0;
                    CreateAnWave();
                }
            }
        }
    }
    public void GameStart(string info)
    {
        currentLevel = Tool.GetCurrentLevel();
        isRunning = true;
        CreateAnWave();
    }
    private void CreateAnEnemy(int type)
    {
        if (createEnemyCount > 0)
        {
            GameObject obj = Instantiate(enemyPrefabs[type]);
            obj.transform.parent = transform;
            obj.transform.GetComponent<Enemy>().initPosNode(posNodes);
            obj.transform.GetComponent<Enemy>().setController(this);

            createEnemyCount--;
            enemyList.Add(obj);
        }
    }
    private void CreateAnWave(){
        if (createWaveCount == currentLevel.GetWaveCount()){
            isRunning = false;
            //Debug.Log("敌人增加结束了");
            //告诉游戏控制器
        }else{
            currentWave = currentLevel.GetWave(createWaveCount);
            createEnemyCount = currentWave.enemyCount;
            createWaveCount++;
        }
    }
    public void removeOneEnemy(GameObject obj){
        Destroy(obj);
        enemyList.Remove(obj);
        Debug.Log("enemy List length =  " + enemyList.Count);
    }
}
