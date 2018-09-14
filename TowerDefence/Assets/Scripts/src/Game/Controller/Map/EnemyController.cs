using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyController : MonoBehaviour
{
    public List<GameObject> enemyList;
    public GameObject earth;
    // Use this for initialization
    public List<GameObject> enemyPrefabs;
    public GameObject posNodes;
    public float waveDuraction; //波次之间的时间间隔
    public float enemyDuraction; //敌人之间的时间间隔
    //private bool isRunning = false;
    private float createEnemyTime = 0.0f;
    private int createEnemyCount = 0;
    private float createWaveTime = 0.0f;
    private int createWaveCount = 0;
    private Level currentLevel;
    private Wave currentWave;




    private enum CtlState
    {
        Invalide, Wait, Running,End, Over
    }
    private CtlState state = CtlState.Invalide;

    void Start()
    {

        //Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        //RaycastHit hit;
        //if (Physics.Raycast(ray, out hit, 100f, 1))
        //{
        //    if (hit.transform.tag == "TowerBase")
        //    {
        //        hit.transform.GetComponent<TowerBase>().OnUpBase();
        //        if (Input.GetMouseButton(0))
        //        {
        //            hit.transform.GetComponent<TowerBase>().ClickBase();
        //        }
        //        if (Input.GetMouseButtonDown(0))
        //        {
        //            hit.transform.GetComponent<TowerBase>().ClickDownBase();
        //        }
        //    }
        //    if (hit.transform.tag == "Tower")
        //    {
        //        hit.transform.GetComponent<Tower>().OnUpTower();

        //    }

        //}

        //Ray ray = new Ray();

        for (int i = 0; i < posNodes.transform.childCount; i ++){
            Transform tra = posNodes.transform.GetChild(i);
            Ray ray = new Ray(tra.position, Vector3.down);
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit, 100.0f, 1)){
                if (hit.transform.tag == "Earth"){
                    Debug.Log("Hit eaeth" + hit.point);
                    posNodes.transform.GetChild(i).transform.position = hit.point;
                }
            }
        }

        Global.GetInstance().SetEnemyController(this);
    }
    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space)){
            GameStart();
        }

    }
    // Update is called once per frame
    void FixedUpdate()
    {
        if (state == CtlState.Running)
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
                if (createWaveTime > waveDuraction)
                {
                    createWaveTime = 0;
                    CreateAnWave();
                }
            }
        } 
        if (state == CtlState.End){
            //敌人控制器不在运行中了。然后这时候监控一下敌人是不是都死了, 并且大本营的血量要高于0 
            if (enemyList.Count == 0 && Global.GetInstance().GetMapController().GetHomeHealthCount() > 0){
                GameWin();
            }
        }
    }
    public void GameStart()
    {
        currentLevel = Global.GetInstance().GetCurrentLevel();
        //isRunning = true;
        SetState(CtlState.Running);
        CreateAnWave();
    }
    private void CreateAnEnemy(int type)
    {
      
        if (createEnemyCount > 0)
        {
            GameObject obj = Instantiate(enemyPrefabs[type]); 
            obj.transform.parent = transform;
            obj.transform.GetComponent<Enemy>().initPosNode(posNodes);
            obj.transform.GetComponent<Enemy>().setController(transform);
            createEnemyCount--;
            enemyList.Add(obj);
        }
    }
    private void CreateAnWave(){

        if (createWaveCount == currentLevel.GetWaveCount()){
            //isRunning = false;
            SetState(CtlState.End);
            //Debug.Log("敌人增加结束了");
            //告诉游戏控制器
        }else{
            currentWave = currentLevel.GetWave(createWaveCount);
            createEnemyCount = currentWave.enemyCount;
            createWaveCount++;
        }
        //Global.GetInstance().GetUIController().SetWaveNum(currentLevel.GetWaveCount(), createWaveCount);
        Global.GetInstance().GetTopBar().SetWaveText(currentLevel.GetWaveCount().ToString() + "/" + createWaveCount.ToString());
    }
    public void removeOneEnemy(GameObject obj){
        Destroy(obj);
        enemyList.Remove(obj);
    }
    public void SetGameOver(bool value){
        //isRunning = false;
        SetState(CtlState.Over);
        foreach (GameObject obj in enemyList){
            obj.transform.GetComponent<Enemy>().SetGameOver(value);
        }
    }
    private void GameWin(){
        //这时候创建游戏胜利的界面 ，告诉MapController 吧
        //Global.GetInstance().GetMapController().SetGameWin(); 
        SetState(CtlState.Over);
        Global.GetInstance().SetGameOver(true);
    }
    void SetState(CtlState ste){
        if (state != ste){
            switch(ste){
                case CtlState.Wait:
                    break;
                case CtlState.Running:
                    break;
                default:
                    break;
            }
            state = ste;
        }
    }
}
