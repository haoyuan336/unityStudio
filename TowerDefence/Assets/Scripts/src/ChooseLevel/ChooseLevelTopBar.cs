using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class ChooseLevelTopBar : MonoBehaviour
{
    public GameObject earthNameImage;
    public GameObject levelNumLabel;
    public GameObject diamondCountLabel;
    // Use this for initialization
    void Start()
    {
        Global.GetInstance().SetChooseLevelTopBar(this);
        //显示当前的钻石个数
        //diamondCountLabel.transform.GetComponent<Text>().text = "钻石:" + Global.GetInstance().GetLocalData().GetDiamondCount().ToString();
        diamondCountLabel.transform.GetComponent<ImageNum>().SetNum(Global.GetInstance().GetLocalData().GetDiamondCount());
        diamondCountLabel.transform.GetComponent<ImageNum>().SetSize(new Vector2(26, 26));
        diamondCountLabel.transform.GetComponent<ImageNum>().SetAnchor(new Vector2(0, 0.5f));
    }

    // Update is called once per frame
    void Update()
    {

    }
    public void SetLevelNum(int num)
    {
        //levelNumLabel.transform.GetComponent<Text>().text = "关卡:" + (num + 1).ToString();

        levelNumLabel.transform.GetComponent<ImageNum>().SetNum(num + 1);
        levelNumLabel.transform.GetComponent<ImageNum>().SetAnchor(new Vector2(0,0.5f));
        levelNumLabel.transform.GetComponent<ImageNum>().SetSize(new Vector2(30, 30));

    }
    public void SetEarthName(string val){
        //earthNameLabel.GetComponent<Text>().text = "星球:" + val;
    }
    public void SetEarthNameImage(Sprite value){
        Image image = earthNameImage.transform.GetComponent<Image>();
        image.sprite = value;
        image.SetNativeSize();
    }

}
