using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Wave
{

    public int enemyType = 0;
    public int enemyCount = 0;

    public Wave(string type, string count)
    {
        int.TryParse(type, out enemyType);
        int.TryParse(count, out enemyCount);


        Debug.Log("Wave Type = " + enemyType);
        Debug.Log("Count = " + enemyCount);
    }

}
