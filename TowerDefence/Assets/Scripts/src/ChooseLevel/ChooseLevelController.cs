using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChooseLevelController : MonoBehaviour
{

    // Use this for initialization
    private Vector2 mousePosition = Vector2.zero;
    public GameObject earthObject;
    private bool isTouching = false;
    private Vector3 targetRotation;
    public GameObject levelButtonPrefab;
    public GameObject canvas;
    private List<GameObject> levelButtonList = new List<GameObject>();
    private Vector3 oldHitPoint;
    void Start()
    {
        Global.GetInstance();
        targetRotation = new Vector3(0, 0, 10);
        for (int i = 0; i < 10; i++)
        {
            GameObject obj = Instantiate(levelButtonPrefab);
            obj.transform.parent = earthObject.transform;
            float th = Random.Range(0, Mathf.PI);
            float fh = Random.Range(0, Mathf.PI * 2);
            float x = 5.0f * Mathf.Sin(th) * Mathf.Cos(fh);
            float y = 5.0f * Mathf.Sin(th) * Mathf.Sin(fh);
            float z = 5.0f * Mathf.Cos(th);
            obj.transform.position = new Vector3(x, y, z);
            //obj
            obj.transform.GetComponent<LevelButton>().Init(canvas,i);
            levelButtonList.Add(obj);
        }
    }

    // Update is called once per frame
    void Update()
    {


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
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;

        if (Physics.Raycast(ray, out hit, 1000f, 1))
        {
            //Debug.Log("hit point = " + hit.point);
        }

        Vector2 mousePos = Input.mousePosition;
        if (Input.GetMouseButtonDown(0))
        {
            mousePosition = mousePos;
            isTouching = true;
            oldHitPoint = hit.point;


        }
        if (Input.GetMouseButtonUp(0))
        {
            mousePosition = mousePos;
            isTouching = false;

        }
        if (isTouching == true)
        {
            if (oldHitPoint == null){
                oldHitPoint = hit.point;
            }else{
                //oldHitPoint = hit.point;
                //如果上一帧的触摸点不是空 那么就可以取出两个向量
                Vector3 v1 = oldHitPoint - earthObject.transform.position;
                Vector3 v2 = hit.point - earthObject.transform.position;
                //获取到法向量
                Vector3 vf = Vector3.Cross(v1, v2);
                //渠道法相量之后，
                float angle = Vector3.Angle(v1, v2);
                //四元数  获取以法向量的面 旋转相应的角度的 四元数
                Quaternion quaternion = Quaternion.AngleAxis(angle, vf);

                earthObject.transform.rotation =   quaternion * earthObject.transform.rotation;

            }
            oldHitPoint = hit.point;
           
            //Vector2 director = mousePos - mousePosition;
            //mousePosition = mousePos;
            //earthObject.transform.Rotate(Vector3.down * director.x * Time.deltaTime * 10);
        }
    }
}
