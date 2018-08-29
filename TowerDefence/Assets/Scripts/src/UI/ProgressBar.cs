using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProgressBar : MonoBehaviour {
    public GameObject bar;
    // Use this for initialization
    public float value;
	void Start () {
        SetValue(value);
	}
	
	// Update is called once per frame
	void Update () {
		
	}
    public void SetValue(float v){
        value = v;
        //bar
        bar.transform.localScale = new Vector2(v, 1);


    }
}