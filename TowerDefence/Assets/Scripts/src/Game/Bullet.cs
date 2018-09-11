using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.UI;
public class Bullet : MonoBehaviour
{

    // Use this for initialization
    private GameObject shootTarget;
    private Tower controller;
    private float targetScele;
    private float currentScale;
    private Vector3 director;
    public float damageCount;
    public enum BulletState
    {
        Invalide, Wait, Run, Bomb, End
    };
    public BulletState bulletState;
    void Start()
    {
        targetScele = transform.localScale.x;
        currentScale = targetScele;
    }
    //加一个子弹的状态机 ，解决没有 目标的时候子弹不消失的情况。
    // Update is called once per frame
    void Update()
    {

        if (bulletState == BulletState.Run)
        {
            if (shootTarget != null && !shootTarget.GetComponent<Enemy>().isDead())
            {
                director = Vector3.Normalize(shootTarget.transform.position - transform.position);
                transform.Translate(director * Time.deltaTime * 10);
                if (Vector3.Distance(transform.position, shootTarget.transform.position) <= (transform.localScale.x / 2 + shootTarget.transform.localScale.x / 2)){
                    SetState(BulletState.Bomb);
                }
            }else{
                SetState(BulletState.End);
            }


        }
        if (bulletState == BulletState.Bomb){
            currentScale += (targetScele - currentScale) * 0.2f;

            transform.localScale = new Vector3(currentScale, currentScale, currentScale);
            if (Mathf.Abs(currentScale - 1.0f) < 0.1f){
                Debug.Log("缩小到一定的程度");
                SetState(BulletState.End);
            }
        }
    }
    //public void SetController(Tower ctl)
    //{
    //    //controller = ctl;
    //}
    public void SetShootTarget(GameObject target)
    {
        //射击某个目标
        shootTarget = target;
        SetState(BulletState.Run);


    }
   
    void SetState(BulletState state)
    {
        if (bulletState == state)
        {
        }
        else
        {
            switch (state)
            {
                case BulletState.Run:
                    break;
                case BulletState.End:
                    Debug.Log("end");
                    Destroy(gameObject);
                    break;
                case BulletState.Bomb:
                    targetScele = 1.0f;
                    //子弹爆炸的时候，敌人收到了攻击

                    if (shootTarget != null){
                        shootTarget.transform.GetComponent<Enemy>().beAttach(damageCount);
                    }
                    break;
                default:
                    break;
            }
            bulletState = state;
        }

    }
    public void SetDamageCount(float value){
        damageCount = value;
    }
}
