using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ToogleButtonGroup : MonoBehaviour {
    public List<GameObject> buttonList;
	// Use this for initialization
	void Start () {
        foreach(GameObject obj in buttonList){
            obj.transform.GetComponent<ToogleButton>().SetGroup(this);
        }
	}
	
	// Update is called once per frame
	void Update () {
		
	}
    public void OnButtonChecked(int value){
        foreach (GameObject obj in  buttonList){
            if (value == obj.GetComponent<ToogleButton>().GetIndex()){
                obj.GetComponent<ToogleButton>().ChangeCheckedState(true);
            }
            else
            {
                obj.GetComponent<ToogleButton>().ChangeCheckedState(false);
            }
        }
    }
}
