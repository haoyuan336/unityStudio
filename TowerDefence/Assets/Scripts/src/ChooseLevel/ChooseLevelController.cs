using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChooseLevelController : MonoBehaviour
{
    public GameObject levelButtonPrefab;
    public GameObject canvas;
    public List<GameObject> earthList;
    // Use this for initialization
    private Vector2 mousePosition = Vector2.zero;
    private bool isTouching = false;
    private Vector3 targetRotation;
    private List<GameObject> levelButtonList = new List<GameObject>();
    private Vector3 oldHitPoint;
    private GameObject currentEarth;
    private Vector3 touchPos;
    private Vector3 lookAtPosition;
    enum CameraState{
        Wait,Ready,MoveToOther
    }
    CameraState cameraState =  CameraState.Wait;
    void Start()
    {
        //Global.GetInstance();
        //targetRotation = new Vector3(0, 0, 10);
        //for (int i = 0; i < 10; i++)
        //{
        //    GameObject obj = Instantiate(levelButtonPrefab);
        //    obj.transform.parent = earthObject.transform;
        //    float th = Random.Range(0, Mathf.PI);
        //    float fh = Random.Range(0, Mathf.PI * 2);
        //    float x = 5.0f * Mathf.Sin(th) * Mathf.Cos(fh);
        //    float y = 5.0f * Mathf.Sin(th) * Mathf.Sin(fh);
        //    float z = 5.0f * Mathf.Cos(th);
        //    obj.transform.position = new Vector3(x, y, z);
        //    //obj
        //    obj.transform.GetComponent<LevelButton>().Init(canvas,i);
        //    levelButtonList.Add(obj);
        //}

        //取出当前的 地球
        currentEarth = earthList[Global.GetInstance().GetLocalData().GetCurrentEarthIndex()];
        Camera.main.transform.position = currentEarth.transform.position + Vector3.back * 20;
        Camera.main.transform.LookAt(currentEarth.transform.position);
    }


    // Update is called once per frame
    void Update()
    {


        if (cameraState == CameraState.Wait){
            //摄像机准备好的情况下 ，玩家可以通过点击某个星球的方式来切换星球
            RaycastHit hit;
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(ray, out hit, 1000.0f, 1))
            {
                //如果触摸到了，
                if (hit.transform != currentEarth.transform)
                {

                    if (Input.GetMouseButtonDown(0))
                    {
                        Debug.Log("Click other earth");
                        //将当前的星球切换成触摸到的星球
                        lookAtPosition = new Vector3(currentEarth.transform.position.x, currentEarth.transform.position.y, currentEarth.transform.position.z);
                        currentEarth = hit.transform.gameObject;
                        SetCameraState(CameraState.MoveToOther);
                    }
                    if (Input.GetMouseButtonUp(0))
                    {

                    }

                }
            }
        }
        if (cameraState == CameraState.MoveToOther){
            //如果当前的摄像机状态是切换星球的状态 ，那么就来开始切换星球了哦
            Vector3 currentPos = Camera.main.transform.position;
            Vector3 endPos = currentEarth.transform.position + Vector3.back * 20;
            float lookDis = Vector3.Distance(lookAtPosition, currentEarth.transform.position);
            float dis = Vector3.Distance(currentPos, endPos);
            if (dis < 0.05f){
                Debug.Log("照相机移动结束");
                SetCameraState(CameraState.Wait);
                Camera.main.transform.position = endPos;
            }
            else
            {
                Vector3 targetPos = Vector3.MoveTowards(currentPos, endPos, dis * 0.04f);
                Camera.main.transform.position = targetPos;
                //Camera.main.transform.LookAt(currentEarth.transform.position);

                lookAtPosition = Vector3.MoveTowards(lookAtPosition, currentEarth.transform.position, lookDis * 0.04f);
               
                Camera.main.transform.LookAt(lookAtPosition);
            }

        }
        if (cameraState ==CameraState.Wait){
            //可以旋转摄像机
            if (Input.GetMouseButtonDown(0)){
                touchPos = Input.mousePosition;
                isTouching = true;
            }
            if (Input.GetMouseButtonUp(0)){
                isTouching = false;
            }

            if (isTouching){
                Vector3 director = Input.mousePosition - touchPos;
                Vec2 v1 = new Vec2(Camera.main.transform.position.x, Camera.main.transform.position.z) - new Vec2(currentEarth.transform.position.x, currentEarth.transform.position.z);
                float dis = Vector3.Distance(Camera.main.transform.position, currentEarth.transform.position);
                Vec2 endV =  Vec2.MultiValue(Vec2.Rotate(v1, director.x *  - 0.005f).GetNormal(), 20);

                //Debug.Log("end v = " + endV.x + "  " + endV.y);
                //Vec2 v2 = new Vec2(Camera.main.transform.position.y, Camera.main.transform.position.z);
                //Debug.Log("v2 = " + v2.x + " " + v2.y);
                //Vec2 endV2 = Vec2.MultiValue(Vec2.Rotate(v2, director.y * -0.005f).GetNormal(), dis);

                //Vector3 endV3 = (new Vector3(endV.x, 0, endV.y) + new Vector3(0, endV2.x, endV2.y)) / 2;


                //Camera.main.transform.position = endV3;

                Camera.main.transform.position = currentEarth.transform.position + new Vector3(endV.x, 0, endV.y);





                Camera.main.transform.LookAt(currentEarth.transform.position);




                touchPos = Input.mousePosition;
            }

        }




        //Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        //RaycastHit hit;
        //for (int i = 0; i < levelButtonList.Count; i ++){
        //    levelButtonList[i].transform.GetComponent<LevelButton>().OutMouse();
        //}
        //if (Physics.Raycast(ray, out hit, 1000f, 1))
        //{
        //    //Debug.Log("hit tag = " + hit.transform.tag);
        //    if (hit.transform.tag == "LevelButton")
        //    {

        //        hit.transform.GetComponent<LevelButton>().OnMouse();

        //        if (isTouching){
        //            hit.transform.GetComponent<LevelButton>().buttonDown();

        //        }
        //    }
        //}
        //Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        //RaycastHit hit;

        //if (Physics.Raycast(ray, out hit, 1000f, 1))
        //{
        //    if (hit.transform.tag == "LevelButton" && Global.GetInstance().GetLocalData().GetCurrentEarthIndex() == )
        //    {

        //        hit.transform.GetComponent<LevelButton>().OnMouse();

        //        if (isTouching)
        //        {
        //            hit.transform.GetComponent<LevelButton>().buttonDown();

        //        }
        //    }
        //        //Debug.Log("hit point = " + hit.point);
        //}

        //Vector2 mousePos = Input.mousePosition;
        //if (Input.GetMouseButtonDown(0))
        //{
        //    mousePosition = mousePos;
        //    isTouching = true;
        //    oldHitPoint = hit.point;


        //}
        //if (Input.GetMouseButtonUp(0))
        //{
        //    mousePosition = mousePos;
        //    isTouching = false;

        //}
        //if (isTouching == true)
        //{
        //    if (oldHitPoint == null){
        //        oldHitPoint = hit.point;
        //    }else{
        //        //oldHitPoint = hit.point;
        //        //如果上一帧的触摸点不是空 那么就可以取出两个向量
        //        Vector3 v1 = oldHitPoint - earthObject.transform.position;
        //        Vector3 v2 = hit.point - earthObject.transform.position;
        //        //获取到法向量
        //        Vector3 vf = Vector3.Cross(v1, v2);
        //        //渠道法相量之后，
        //        float angle = Vector3.Angle(v1, v2);
        //        //四元数  获取以法向量的面 旋转相应的角度的 四元数
        //        Quaternion quaternion = Quaternion.AngleAxis(angle, vf);

        //        earthObject.transform.rotation =   quaternion * earthObject.transform.rotation;

        //    }
        //    oldHitPoint = hit.point;
           
        //    //Vector2 director = mousePos - mousePosition;
        //    //mousePosition = mousePos;
        //    //earthObject.transform.Rotate(Vector3.down * director.x * Time.deltaTime * 10);
        //}
    }
    void MouseToOtherEarth(){

    }
    void SetCameraState(CameraState state){
        if (state == cameraState){

        }else{
            switch(state){
                case CameraState.MoveToOther:
                    break;
                default:
                    break;
            }
            cameraState = state;
        }
    }
}
