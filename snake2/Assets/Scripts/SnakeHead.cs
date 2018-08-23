using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SnakeHead : MonoBehaviour {

	private static FoodMaker _instance; 
	public int step;
	private int x;
	private int y;
	private Vector3 headPos;
	public float velocity = 0.35f;
	void Move (){
		headPos = gameObject.transform.localPosition;
		gameObject.transform.localPosition = new Vector3(headPos.x + x, headPos.y + y, headPos.z);
	}
	/// <summary>
	/// Start is called on the frame when a script is enabled just before
	/// any of the Update methods is called the first time.
	/// </summary>
	void Start()
	{
		InvokeRepeating("Move",0,velocity);
		x = 0;
		y = step;
	}
	void Update()
	{
		if (Input.GetKeyDown(KeyCode.Space)){
			CancelInvoke();
			InvokeRepeating("Move", 0, velocity - 0.2f);
		}
		if (Input.GetKeyUp(KeyCode.Space)){
			CancelInvoke();
			InvokeRepeating("Move", 0, velocity);
		}
		if (Input.GetKey(KeyCode.W) && y != -step){
			gameObject.transform.localRotation = Quaternion.Euler(0,0,0);
			x = 0;
			y = step;
		}	
		if (Input.GetKey(KeyCode.S) && y != step){
			gameObject.transform.localRotation = Quaternion.Euler(0,0,180);
		
			x = 0; 
			y = -step;
		}
		if (Input.GetKey(KeyCode.A) && x != step){
			gameObject.transform.localRotation = Quaternion.Euler(0,0,90);
			x = -step; 
			y = 0;
		}
		if (Input.GetKey(KeyCode.D) && x != -step){
			gameObject.transform.localRotation = Quaternion.Euler(0,0,-90);
			x = step;
			y = 0;
		}
	}
	/// <summary>
	/// Sent when another object enters a trigger collider attached to this
	/// object (2D physics only).
	/// </summary>
	/// <param name="other">The other Collider2D involved in this collision.</param>
	void OnTriggerEnter2D(Collider2D collider)
	{
		if (collider.gameObject.CompareTag("Food")){
			Destroy(collider.gameObject);
		}
	}
}
