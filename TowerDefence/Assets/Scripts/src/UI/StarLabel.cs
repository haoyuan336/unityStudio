using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StarLabel : MonoBehaviour {
    //亮的星
    public Sprite lightStartSprite;
    //暗的星
    public Sprite garyStarSprite;
	// Use this for initialization
	void Start () {
		
	}
	// Update is called once per frame
	void Update () {
		
	}
    public void SetStarNum(int value){
        for (int i = 0; i < 3; i ++){
            GameObject obj = new GameObject("star" + i);
            obj.transform.parent = transform;
            RectTransform rect = obj.AddComponent<RectTransform>();
            rect.sizeDelta = new Vector2(20, 20);
            rect.localPosition = new Vector3( (3- 1) * 20 * -0.5f+ i * 20,0,0);
            Image image = obj.AddComponent<Image>();
            if (i < value){
                //如果
                image.sprite = lightStartSprite;
            }
            else
            {
                image.sprite = garyStarSprite;
            }
        }
    }
}
