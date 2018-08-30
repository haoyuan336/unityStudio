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


        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;
        for (int i = 0; i < levelButtonList.Count; i ++){
            levelButtonList[i].transform.GetComponent<LevelButton>().OutMouse();
        }
        if (Physics.Raycast(ray, out hit, 1000f, 1))
        {
            //Debug.Log("hit tag = " + hit.transform.tag);
            if (hit.transform.tag == "LevelButton")
            {

                hit.transform.GetComponent<LevelButton>().OnMouse();

                if (isTouching){
                    hit.transform.GetComponent<LevelButton>().buttonDown();

                }
            }
        }

        Vector2 mousePos = Input.mousePosition;
        if (Input.GetMouseButtonDown(0))
        {
            mousePosition = mousePos;
            isTouching = true;


        }
        if (Input.GetMouseButtonUp(0))
        {
            mousePosition = mousePos;
            isTouching = false;

        }
        if (isTouching == true)
        {

            Vector2 director = mousePos - mousePosition;
            mousePosition = mousePos;
            earthObject.transform.Rotate(Vector3.down * director.x * Time.deltaTime * 10);
        }
    }
}
