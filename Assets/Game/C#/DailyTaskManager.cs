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
    public GameObject MainPanel;

    public GameObject prefab;
    public GameObject noTaskPrefab;
    public Transform content;
    public DailyTask[] dailyTasks;
    public List<DailyTask> list;

    public GameObject TaskScreen;
    public TaskSlider slider;

    public ParticleSystem ps;
    public GameObject congratsPanel;
    public GameObject blockPanel;

    public TextMeshProUGUI timerText;
    public DateTimeManager dateTime;
    private void Start()
    {
        //ES3.DeleteKey("DailyTask");
        if (ES3.KeyExists("DailyTask"))
            LoadTasks();
        else
            CreateTasks();
    }
    
    public void CreateTasks()
    {
        foreach (Transform child in content.transform)
        {
            GameObject.Destroy(child.gameObject);
        }
        for (int i = 0; i < 5; i++)
        {
            Task task = Instantiate(prefab, content).GetComponent<Task>();
            task.setter(dailyTasks[Random.Range(0, dailyTasks.Length)].time, dailyTasks[Random.Range(0, dailyTasks.Length)].name, false);
            list.Add(task.dailyTask);
            //Debug.Log("NAME: " + task.dailyTask.name);
            task.index = i;
            task.GetComponent<Button>().onClick.AddListener(() => Function(task.index));
            ES3.Save("DailyTask", list);
        }
    }
    void LoadTasks()
    {
        foreach (Transform child in content.transform)
        {
            GameObject.Destroy(child.gameObject);
        }
        list = ES3.Load("DailyTask", list);
        for (int i = 0; i < 5; i++)
        {
            Task task = Instantiate(prefab, content).GetComponent<Task>();
            task.setter(list[i].time, list[i].name, list[i].isDone);
            task.index = i;
            task.GetComponent<Button>().onClick.AddListener(() => Function(task.index)); 
        }
    }

    public void SabotagedTask()
    {
        foreach (Transform child in content.transform)
        {
            GameObject.Destroy(child.gameObject);
        }
        list = ES3.Load("DailyTask", list);
        for(int i = 0;i< Random.Range(1, 3); i++)
        {
            list[Random.Range(0, list.Count)].isDone = false;
        }
        for (int i = 0; i < 5; i++)
        {
            Task task = Instantiate(prefab, content).GetComponent<Task>();
            task.setter(list[i].time, list[i].name, list[i].isDone);
            task.index = i;
            task.GetComponent<Button>().onClick.AddListener(() => Function(task.index));
        }
    }
    public bool doingTask = false;
    int index;
    void Function(int i) 
    {
        doingTask = true;
        index = i;
    }
    bool temBool = false;
    private void LateUpdate()
    {
        if (NewsMananger.taskBlocked)
            blockPanel.SetActive(true);
        else
            blockPanel.SetActive(false);
        
        if(dateTime.DisplayTime() == "New Tasks Avaible")
        {
            timerText.GetComponent<Button>().interactable = true;
            foreach (Transform child in content.transform)
            {
                GameObject.Destroy(child.gameObject);
            }
            Instantiate(noTaskPrefab, content);
        }  
        else
            timerText.GetComponent<Button>().interactable = false;
        timerText.text = dateTime.DisplayTime();
        if (doingTask)
        {
            if (!temBool)
            {
                MainPanel.GetComponent<FadeInOut>().Hide();
                temBool = true;
            }
            
            slider.gameObject.SetActive(true);
            if (slider.PreformingTask(list[index].name))
            {
                if (!list[index].isDone)
                {
                    
                    list[index].isDone = true;
                    ES3.Save("DailyTask", list);
                }
                LoadTasks();
                slider.ResetSlider();
                doingTask = false;
                temBool = false;
                slider.GetComponent<FadeInOut>().Hide();
                foreach(DailyTask task in list)
                {
                    if (!task.isDone)
                    {
                        return;
                    }
                }
                MainPanel.GetComponent<FadeInOut>().Hide();
                ps.Play();
                this.Wait(1, () => { congratsPanel.SetActive(true); });
            }
        }
    }
    public void CollectReward()
    {
        CreateTasks();
        
        FindObjectOfType<FollowersImage>().AddFollowers(Mathf.RoundToInt(25));
        CoinAnimater.instance.AddCoins(new Vector3(0, 0, 0), 60);
        congratsPanel.GetComponent<FadeInOut>().Hide();
    }

}
