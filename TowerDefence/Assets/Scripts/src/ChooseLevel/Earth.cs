using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Earth : MonoBehaviour
{
    public int earthIndex;
    public float rotationSpeed;
    public GameObject levelButtonPrefab;
    //public GameObject canvas;
    // Use this for initialization
    private RaycastHit raycastHit;
    private List<Transform> levelIconBases = new List<Transform>();

    void Start()
    {
        for (int i = 0; i < transform.childCount; i++)
        {
            Transform obj = transform.GetChild(i);
            if (obj.name.IndexOf("Point") > -1)
            {

                levelIconBases.Add(obj);
            }
        }
        levelIconBases.Sort((left, right) =>
        {

            string endStrA = left.name.Substring(5, left.name.Length  - 5);
            int a = int.Parse(endStrA);


            string endStrB = right.name.Substring(5, right.name.Length  - 5);
            int b = int.Parse(endStrB);
            if (a > b)
            {
                return 1;
            }
            else
            {
                return -1;
            }
        });
        //排序好之后 ，开始添加LevelIcon
        Debug.Log("level base count = " + levelIconBases.Count);
        for (int i = 0; i < levelIconBases.Count; i++)
        {
            GameObject obj = Instantiate(levelButtonPrefab);
            obj.transform.parent = transform;
            obj.transform.position = levelIconBases[i].position;
            obj.transform.GetComponent<LevelButton>().SetIndex(i);
            //levelbutton 放置好之后 ，要翻转他们的朝向

            Vector3 v1 = Vector3.up;
            Vector3 v2 = obj.transform.position - transform.position;
            Vector3 v3 = Vector3.Cross(v1, v2);
            float angle = Vector3.Angle(v1, v2);

            obj.transform.rotation = Quaternion.AngleAxis(angle, v3) * obj.transform.rotation;
        }
    }

    // Update is called once per frame
    void Update()
    {
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        if (Physics.Raycast(ray, out raycastHit, 100.0f, 1))
        {

        }

        transform.Rotate(0, 180 / Mathf.PI * Time.deltaTime * rotationSpeed, 0);
    }
    public int GetEarthIndex()
    {
        return earthIndex;
    }
}
