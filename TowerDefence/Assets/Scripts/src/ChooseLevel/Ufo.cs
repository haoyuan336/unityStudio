using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ufo : MonoBehaviour {
    public GameObject targetPlanet;
    public float moveSpeed;
    // Use this for initialization
    private float planetDis = 0.0f;
    private Vector3 crossV;
    private Vector3 oldPos;
	void Start () {
        //得到ufo距离目标星球的距离
        planetDis = Vector3.Distance(transform.position, targetPlanet.transform.position);
        crossV = new Vector3(Random.Range(-1,1), Random.Range(-1, 1), Random.Range(-1, 1));
        oldPos = transform.position;

    }

    // Update is called once per frame
    void Update () {
        //围绕着目标物体做圆周运动
        float angle = Time.deltaTime * moveSpeed * Mathf.PI;
        Vector3 eV = Quaternion.AngleAxis( angle, crossV) * (transform.position - targetPlanet.transform.position) ;
        transform.position = targetPlanet.transform.position + eV;

        Vector3 cross = Vector3.Cross(oldPos - targetPlanet.transform.position, transform.position - targetPlanet.transform.position);

        transform.rotation = Quaternion.AngleAxis(angle , cross) * transform.rotation;


        oldPos = transform.position;

    }
}
