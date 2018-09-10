using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public delegate void ButtonCallBack(string value);
public class Alert : MonoBehaviour {
    // Use this for initialization
    ButtonCallBack callBack;
    public GameObject tipsLabel;
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
    public void OnButtonClick(string value){
        if (callBack != null){
            callBack(value);
        }
        switch(value){
            case "cancel":
                Destroy(gameObject);
                break;
            case "ok":
                Destroy(gameObject);
                break;
            case "close":
                Destroy(gameObject);
                break;
            default:
                break;
        }
    }
    public void SetCallBack(ButtonCallBack cb, string tips){
        callBack = cb;
        tipsLabel.transform.GetComponent<Text>().text = tips;
    }
}
