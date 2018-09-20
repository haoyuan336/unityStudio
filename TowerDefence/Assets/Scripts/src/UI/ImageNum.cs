using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class ImageNum : MonoBehaviour {
    public List<Sprite> numSprites;
    // Use this for initialization
    private Vector2 size;
    private List<GameObject> nums = new List<GameObject>();
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
		
	}
    public void SetNum(int value){

        if (nums.Count != 0){
            foreach(GameObject obj in nums){
                Destroy(obj);
            }
            nums = new List<GameObject>();
        }

        string str = value.ToString();
        int count = str.Length;
        for (int i = 0; i < count; i ++){
            GameObject obj = new GameObject("num" + value);
            obj.transform.parent = transform;
            RectTransform rect = obj.AddComponent<RectTransform>();
            Image image = obj.AddComponent<Image>();
            image.sprite = numSprites[int.Parse(str.Substring(i, 1))];
            rect.sizeDelta = new Vector2(14, 14);
            rect.localPosition = new Vector3((count - 1) * 14 * -0.5f + i * 14, 0, 0);
            nums.Add(obj);
        }
    }
    public void SetSize(Vector2 value){
        //设置字体的尺寸
        foreach (GameObject obj in nums){
            RectTransform tra = obj.transform.GetComponent<RectTransform>();
            tra.sizeDelta = value;
        }
        size = value;
    }
    public void SetAnchor(Vector2 value){
        for (int i = 0; i < nums.Count; i ++){
            RectTransform tra = nums[i].transform.GetComponent<RectTransform>();
            tra.localPosition = new Vector3((nums.Count - 1) * size.x * -value.x + i * size.x, size.y *(0.5f - value.y) , 0);
        }
    }
}
