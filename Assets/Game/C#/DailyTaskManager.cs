using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using DG.Tweening;

//public enum Type { 9-am, Productivity, Personality, StarLife }
[System.Serializable]
public class DailyTask
{
    public string name;
    public string time;
    public bool isDone;
}
public class DailyTaskManager : MonoBehaviour
{
    public GameObject prefab;
    public Transform content;
    public DailyTask[] dailyTasks;
    public List<DailyTask> list;

    public GameObject TaskScreen;
    public Slider slider;

    private void Start()
    {
      //  ES3.DeleteKey("DailyTask");
        if (ES3.KeyExists("DailyTask"))
        {
            LoadTasks();
        }
        else
        {
            CreateTasks();
        }
    }
    public void CreateTasks()
    {
        for (int i = 0; i < 5; i++)
        {
            Task task = Instantiate(prefab, content).GetComponent<Task>();
            task.setter(dailyTasks[Random.Range(0, dailyTasks.Length)].time, dailyTasks[Random.Range(0, dailyTasks.Length)].name, false);
            list.Add(task.dailyTask);
            Debug.Log("NAME: " + task.dailyTask.name);
            task.GetComponent<Button>().onClick.AddListener(() => Function(i));
            ES3.Save("DailyTask", list);
        }
    }
    void LoadTasks()
    {
        list = ES3.Load("DailyTask", list);
        for (int i = 0; i < 5; i++)
        {
            Task task = Instantiate(prefab, content).GetComponent<Task>();
            task.setter(list[i].time, list[i].name, list[i].isDone);
            task.index = i;
            task.GetComponent<Button>().onClick.AddListener(() => Function(task.index)); 
        }
    }
  
    void Function(int i) 
    {
        Debug.Log("Task Number " + i + " done.");
        if (!list[i].isDone)
        {
            list[i].isDone = true;
        }
        foreach (Transform child in content.GetComponentsInChildren<Transform>())
        {
            Debug.Log(child.name);
            Destroy(child.gameObject);
        }
    }
    private void LateUpdate()
    {
       
    }

}
