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
    private Vector3 oldHitNormal;
    enum CameraState
    {
        Wait, Ready, MoveToOther
    }
    CameraState cameraState = CameraState.Wait;
    void Start()
    {
       
        Global.GetInstance().SetCanvas(canvas.GetComponent<Canvas>());
        //取出当前的 地球
        int index = Global.GetInstance().GetLocalData().GetCurrentEarthIndex();
        Debug.Log("index = " + index);
        currentEarth = earthList[index];
        Camera.main.transform.position = currentEarth.transform.position + Vector3.back * 20;
        Camera.main.transform.LookAt(currentEarth.transform.position);
        SetCameraState(CameraState.MoveToOther);

    }
    void RotationCamera()
    {
        //可以旋转摄像机
      

        if (isTouching)
        {
            Vector3 director = Input.mousePosition - touchPos;
            Vec2 v1 = new Vec2(Camera.main.transform.position.x, Camera.main.transform.position.z)
                - new Vec2(currentEarth.transform.position.x, currentEarth.transform.position.z);

            float dis = Vector3.Distance(Camera.main.transform.position, currentEarth.transform.position);
            Vec2 endXV = Vec2.MultiValue(Vec2.Rotate(v1, director.x * -0.005f).GetNormal(), 20);

            Vec2 v2 = new Vec2(Camera.main.transform.position.x, Camera.main.transform.position.y)
                - new Vec2(currentEarth.transform.position.x, currentEarth.transform.position.y);

            Vec2 endYV = Vec2.MultiValue(Vec2.Rotate(v2, director.y * -0.005f).GetNormal(), 20);
            Camera.main.transform.position = currentEarth.transform.position + new Vector3(endXV.x, 0, endXV.y);
            Camera.main.transform.LookAt(currentEarth.transform.position);

            touchPos = Input.mousePosition;
        }
        else
        {


            //摄像机自己旋转的代码哦
            Vec2 v1 = new Vec2(Camera.main.transform.position.x, Camera.main.transform.position.z) -
                new Vec2(currentEarth.transform.position.x, currentEarth.transform.position.z);
            Vec2 endV = Vec2.MultiValue(Vec2.Rotate(v1, Time.deltaTime * 0.01f).GetNormal(), 20);
            Camera.main.transform.position = currentEarth.transform.position + new Vector3(endV.x, 0, endV.y);
            Camera.main.transform.LookAt(currentEarth.transform.position);
        }
    }
    void RotationCameraWithQ(RaycastHit hit)
    {
        //用四元数的方式，旋转摄像机
        //第一步 ，取出触摸点的法线

       
        //if (isTouching)
        //{
        //    Vector3 normal = hit.normal;
        //    Vector3 cross = Vector3.Cross(normal, oldHitNormal);
        //    float angle = Vector3.Angle(normal, oldHitNormal);

        //    Vector3 pos = Quaternion.AngleAxis(angle * 0.1f, cross) * Camera.main.transform.position;
        //    Camera.main.transform.position = currentEarth.transform.position + pos;
        //    Camera.main.transform.LookAt(currentEarth.transform.position);
        //    oldHitNormal = normal;
        //}



    }
    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            touchPos = Input.mousePosition;
            isTouching = true;
        }
        if (Input.GetMouseButtonUp(0))
        {
            isTouching = false;
        }

        if (cameraState == CameraState.MoveToOther)
        {
            //如果当前的摄像机状态是切换星球的状态 ，那么就来开始切换星球了哦
            Vector3 currentPos = Camera.main.transform.position;
            Vector3 endPos = currentEarth.transform.position + Vector3.back * 20;
            float lookDis = Vector3.Distance(lookAtPosition, currentEarth.transform.position);
            float dis = Vector3.Distance(currentPos, endPos);
            if (dis < 0.05f)
            {
                //摄像机移动结束之后，要储存当前移动到的星球哦
                Global.GetInstance().GetLocalData().SetCurrentEarthIndex(currentEarth.GetComponent<Earth>().GetEarthIndex());
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

        if (cameraState == CameraState.Wait)
        {
           
            //摄像机准备好的情况下 ，玩家可以通过点击某个星球的方式来切换星球
            RaycastHit hit;
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(ray, out hit, 1000.0f, 1))
            {

                if (hit.transform.tag == "Earth")
                {

                    RotationCamera();

                    //如果触摸到了，
                    if (hit.transform != currentEarth.transform)
                    {

                        if (Input.GetMouseButtonDown(0))
                        {
                            //将当前的星球切换成触摸到的星球
                            lookAtPosition = new Vector3(currentEarth.transform.position.x, currentEarth.transform.position.y, currentEarth.transform.position.z);
                            currentEarth = hit.transform.gameObject;
                            SetCameraState(CameraState.MoveToOther);
                        }
                    }

                    //RotationCameraWithQ(hit);
                }
            }
        }

    }
    void MouseToOtherEarth()
    {

    }
    void SetCameraState(CameraState state)
    {
        if (state == cameraState)
        {

        }
        else
        {
            switch (state)
            {
                case CameraState.MoveToOther:
                    //切换星球的时候 重置一下 星球的名字
                    Global.GetInstance().GetChooseLevelTopBar().SetEarthName(currentEarth.GetComponent<Earth>().GetEarthName());
                    break;
                default:
                    break;
            }
            cameraState = state;
        }
    }
}
