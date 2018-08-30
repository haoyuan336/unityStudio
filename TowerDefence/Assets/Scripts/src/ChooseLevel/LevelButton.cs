using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class LevelButton : MonoBehaviour {

    // Use this for initialization
    public GameObject levelTextPrefab;
    private GameObject uiCanavs;
    public GameObject levelTextPos;
    private GameObject levelLabel;
    private int index;
    private Color currentColor;
    private bool isOvering;
	void Start () {
        currentColor = transform.GetComponent<Renderer>().material.color;
	}
	
	// Update is called once per frame
	void Update () {
        if (levelLabel){
            Vector3 pos = Camera.main.WorldToScreenPoint(levelTextPos.transform.position);
            levelLabel.transform.position = pos;
            if (levelTextPos.transform.position.z < 1){
                levelLabel.GetComponent<Text>().text = index.ToString();
              
            }
            else{
                levelLabel.GetComponent<Text>().text = "";

            }
            //}
        }
        //if (levelLabel.transform.position.){

        //}
        if (Input.GetMouseButtonUp(0) && isOvering){
            Debug.Log("选中了关卡");
            Global.GetInstance().SetLevel(index);
            SceneManager.LoadScene("GameScene");
        }
    }
    public void Init(GameObject canvas, int i){
        index = i;
        levelLabel = Instantiate(levelTextPrefab);
        levelLabel.transform.parent = canvas.transform;
    }
    public void OnMouse()
    {
        transform.GetComponent<Renderer>().material.color = Color.green;
        isOvering = true;
    }
    public void OutMouse(){
        transform.GetComponent<Renderer>().material.color = currentColor;
        isOvering = false;
    }
    public void buttonDown(){
        transform.GetComponent<Renderer>().material.color = Color.red;
    }
   
}
