using UnityEngine;
using UnityEngine.UI;
using TMPro;
using DG.Tweening;

[System.Serializable]
public class TaskDetails
{
    public string Name;
    public string type;
    public bool isDone;
}
public class Task : MonoBehaviour
{
    public TaskDetails taskDetails;
    public TextMeshProUGUI taskTypeText, taskNameText;
    public Toggle toggle;
    public int index;
    public string id;
    public DailyTaskManager dailyTaskManager;
    private void Start()
    {
        if (ES3.KeyExists(id))
        {
            taskDetails = ES3.Load(id, taskDetails);
        }
        else
        {
            dailyTaskManager = FindObjectOfType<DailyTaskManager>();
            taskDetails.Name = dailyTaskManager.dailyTasks[Random.Range(0, dailyTaskManager.dailyTasks.Length)].name;
            taskDetails.type = dailyTaskManager.dailyTasks[Random.Range(0, dailyTaskManager.dailyTasks.Length)].type.ToString();
        }
    }
    public void seter(string type,string name,bool isDone)
    {
        taskNameText.text = name;
        taskTypeText.text = type;
        toggle.isOn = isDone;
    }

    private void OnApplicationQuit()
    {
        ES3.Save("TaskObj", this.gameObject);
    }
    public void DoTask()
    {
        FindObjectOfType<DailyTaskManager>().PerformTask(taskNameText.text);
        
    }
    public void LoadStats(int index)
    {
       taskDetails = ES3.Load("TaskDetails" + id, taskDetails);
        toggle.isOn = true;
    }
    private void OnEnable()
    {
      
        transform.DOScale(1, 0.5f).SetEase(Ease.OutBack);
        this.Wait(0.5f, () =>
        {
            seter(taskDetails.type, taskDetails.Name, taskDetails.isDone);
        });
        
    }
    private void OnDisable()
    {
        transform.localScale = new Vector3(0, 0, 0);
    }
}
