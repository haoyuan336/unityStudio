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

    // Use this for initialization
    private void Awake()
    {
        setState(EnemyState.Wait);
    }
    void Start()
    {
        //先取到

    }
    public void initPosNode(GameObject obj)
    {
        PosNode = obj;
        setState(EnemyState.Run);
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
                }
            }

        }
    }
    private void moveNextPos()
    {
        if (moveIndex == PosNode.transform.childCount){
            setState(EnemyState.End);
        }else{
            nextPos = PosNode.transform.GetChild(moveIndex).transform.position;
            moveIndex++;
        }
       


    }
    private void setState(EnemyState state)
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
                    break;
                case EnemyState.End:
                    Destroy(gameObject);                    
                    break;
                default:
                    break;
            }
        }
        enemyState = state;
    }
}
