using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class ToogleButton : MonoBehaviour {
    public Sprite onCheckSprite;
    public Sprite outCheckSprite;
    public bool isChecked;
    public int index;
    public TowerTypes towerTypes;
    // Use this for initialization
    private ToogleButtonGroup toogleButtonGroup;
	void Start () {
        ChangeCheckedState(isChecked);
	}
   public void ChangeCheckedState(bool value){
        if (value)
        {
            transform.GetComponent<Image>().sprite = onCheckSprite;
        }else{
            transform.GetComponent<Image>().sprite = outCheckSprite;
        }
        transform.GetComponent<Image>().SetNativeSize();
        isChecked = value;
    }

    // Update is called once per frame
    void Update () {
		
	}
    public void OnButtonClick(){
        if (isChecked == false){
            toogleButtonGroup.OnButtonChecked(index);
            //刷新显示的Tower 的界面 按照新的排序模式进行排序
            Global.GetInstance().GetChooseTowerCtl().ReferTowerIconWithType(towerTypes);
        
        }
    }
    public void SetGroup(ToogleButtonGroup value){
        toogleButtonGroup = value; 
    }
    public int GetIndex(){
        return index;
    }
}
