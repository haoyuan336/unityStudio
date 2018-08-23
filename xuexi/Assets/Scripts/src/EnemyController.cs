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
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
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
            obj.transform.parent = transform.parent;
            obj.transform.GetComponent<Enemy>().initPosNode(posNodes);
            createEnemyCount--;
        }
    }
    private void CreateAnWave(){
        if (createWaveCount == currentLevel.GetWaveCount()){
            isRunning = false;
            //Debug.Log("敌人增加结束了");
        }else{
            currentWave = currentLevel.GetWave(createWaveCount);
            createEnemyCount = currentWave.enemyCount;
            createWaveCount++;
        }
    }
}
