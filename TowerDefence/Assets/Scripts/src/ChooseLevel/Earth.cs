using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Earth : MonoBehaviour {
    public int earthIndex;
    // Use this for initialization
    private RaycastHit raycastHit;
    public float rotationSpeed;
    void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        if (Physics.Raycast(ray, out raycastHit, 100.0f, 1)){
            
        }

        transform.Rotate(0, 0 , 180 / Mathf.PI * Time.deltaTime  * rotationSpeed);
	}
    public int GetEarthIndex(){
        return earthIndex;
    }
}
