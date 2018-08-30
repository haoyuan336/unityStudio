using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Events;
public  class Global {
    private static Global global;
    private int currentLevel;
    public static Global GetInstance(){
        if (global == null){
            global = new Global();
            global.Init();
        }
        return global;
    }
   
    private void Init(){
        currentLevel = 0;
    }
    public int GetLevel(){
        return currentLevel;
    }
    public void SetLevel(int val){
        currentLevel = val;
    }
}