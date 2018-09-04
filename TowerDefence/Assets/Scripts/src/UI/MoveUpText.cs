using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveUpText : MonoBehaviour {

    // Use this for initialization
    private float currentY = 0.0f;
    void Start () {
        Debug.Log("move up text");
        currentY = transform.position.y + 100.0f;
    }
	
	// Update is called once per frame
	void Update () {
        Vector3 endV = new Vector3(transform.position.x, currentY, transform.position.z);
        transform.position += endV.normalized * (Vector3.Distance(transform.position, endV) * 2 * Time.deltaTime);
        if (Vector3.Distance(transform.position, endV) < 10 ){
            Debug.Log("text move up  end");
            Destroy(gameObject);
        }
    }
}
