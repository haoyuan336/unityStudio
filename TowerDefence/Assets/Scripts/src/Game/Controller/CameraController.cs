using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour {

    public GameObject lookPoint;
    // Use this for initialization
    bool isTouching = false;
    Vector2 touchPos = Vector2.zero;
	void Start () {
        transform.LookAt(lookPoint.transform.position);
	}
	
	// Update is called once per frame
	void Update () {
        if(Input.GetMouseButtonDown(0)){
            isTouching = true;
            touchPos = Input.mousePosition;
        }
        if(Input.GetMouseButtonUp(0)){
            isTouching = false;
        }
        if (isTouching){
            //如果正在触摸 ，则进行计算
            Vector2 mouseP = Input.mousePosition;
            Vector2 director = (mouseP - touchPos) * -1;

            Vec2 v =new Vec2(transform.position.x, transform.position.z);
            float dis = Vec2.GetDistance(v, Vec2.Zero());
            Vec2 endV = Vec2.MultiValue(Vec2.Rotate(v, director.x * 0.01f).GetNormal(), dis);
            //Debug.Log("end v = " + endV.x + "   " + endV.y);
            float endY = transform.position.y + director.y * 0.1f;
            if (endY > 30){
                endY = 30;
            }
            if (endY < 5){
                endY = 5;
            }
            transform.position = new Vector3(endV.x, endY, endV.y);


            transform.LookAt(lookPoint.transform.position);
            touchPos = mouseP;


        }
	}
}
