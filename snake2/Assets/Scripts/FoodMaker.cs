using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class FoodMaker : MonoBehaviour 
{
	public int xlimit = 21;
	public int ylimit = 11;
	public int xoffset = 7;
	public GameObject foodPrefab;
	public Sprite[] foodSprites;
	private Transform foodHandler;
	void Start()
	{
		foodHandler = GameObject.Find("FoodHandler").transform;
		MakeFood();
	}
	void MakeFood ()
	{
		int index = Random.Range(0, foodSprites.Length);
		GameObject food = Instantiate(foodPrefab);
		food.GetComponent<Image>().sprite = foodSprites[index];
		food.transform.SetParent(foodHandler, false);
		int x = Random.Range(-xlimit + xoffset, xlimit);
		int y = Random.Range(-ylimit + xoffset, ylimit);
		food.transform.localPosition = new Vector3(x * 30, y * 30, 0);
		
	}
	
}
