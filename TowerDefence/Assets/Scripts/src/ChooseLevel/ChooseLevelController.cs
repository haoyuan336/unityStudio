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
    private Vector3 currentRotation = Vector3.zero;
    public GameObject levelButtonPrefab;
    void Start()
    {
        targetRotation = new Vector3(0, 0, 10);
        for (int i = 0; i < 10; i ++){
            GameObject obj = Instantiate(levelButtonPrefab);
            obj.transform.parent = earthObject.transform;
            Vector3 targetV = new Vector3(Random.Range(0, 100.0f), Random.Range(0, 100.0f), Random.Range(0, 100.0f));
            //obj.transform.position = Vector3.Angle(Vector3.zero,);
        }
    }

    // Update is called once per frame
    void Update()
    {

        Vector2 mousePos = Input.mousePosition;
        Ray ray = Camera.main.ScreenPointToRay(mousePos);
        RaycastHit hit;
        if (Physics.Raycast(ray, out hit, 100f,1)){
            if (hit.transform.tag == ""){

            }
        }




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
            //Vector2 mousePos = Input.mousePosition;
            ////Debug.Log("moyse pos = " + mousePos);
            //Vector2 director = mousePos - mousePosition;
            //director = director.normalized * 2;
            //mousePosition = mousePos;

            //targetRotation += Vector3.down * director.x;
            //targetRotation += Vector3.right * director.y;
            //currentRotation = Vector3.MoveTowards(currentRotation, targetRotation.normalized, 0.1f);

            //earthObject.transform.LookAt(currentRotation);
            Vector2 director = mousePos - mousePosition;
            mousePosition = mousePos;
            earthObject.transform.Rotate(Vector3.down * director.x * Time.deltaTime * 10);
        }
    }
}
