using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using DG.Tweening;

public enum Type { Hygiene, Productivity, Personality, StarLife }
[System.Serializable]
public struct DailyTask
{
    public string name;
    public int reward;
    public Type type;
    public bool isDone;
}
public class DailyTaskManager : MonoBehaviour
{
    public GameObject prefab;
    public Transform content;
    public DailyTask[] dailyTasks;
    public List<Task> list;
    public int rand;
    public GameObject TaskScreen;
    public Slider slider;

    private void Start()
    {
 
        Debug.Log(list.Count);
   
       if(list.Count <= 0)
       {
            rand = Random.Range(1, 10);
       }
       else
       {
            rand = list.Count;
       }
       //UpdateTasks();
       if (DateTimeManager.dayPassed)
       {
           UpdateTasks();
           DateTimeManager.SaveDayInfo();
           DateTimeManager.dayPassed = false;
           Debug.Log("Creating New Tasks");
       }
       else
       {
           LoadTasks();
           Debug.Log("Loading The Tasks");
       }
    }
    public void UpdateTasks()
    {
        for (int i = 0; i < rand; i++)
        {
            Task a = Instantiate(prefab, content).GetComponent<Task>();
            a.id = Random.Range(0, 500).ToString();

            list.Add(a);
        }
    }
    void LoadTasks()
    {
        for (int i = 0; i < rand; i++)
        {
           // var a = Instantiate(prefab, content);
            var a = Instantiate(prefab, content);
            Task task = a.GetComponent<Task>();
        
        }
    }
    string temp;
    public void PerformTask(string name)
    {
        TaskScreen.SetActive(true);
        temp = name;
       
    }
    private void LateUpdate()
    {
        if(TaskScreen.activeSelf)
           slider.value += Time.deltaTime;
        
        if (slider.value >= 5 )
        {
            for (int i = 0; i < list.Count - 1; i++)
            {
                if(list[i].GetComponent<Task>().taskNameText.text == temp)
                {
                    list[i].GetComponent<Task>().taskDetails.isDone = true;
                    list[i].GetComponent<Task>().toggle.isOn = true;
                   // list[i].GetComponent<Task>().SaveStats(i);
                }
            }
            //ES3.Save("DailyTasks", list);
            TaskScreen.GetComponent<FadeInOut>().Hide();
            slider.value = 0;
        }


    }

}
