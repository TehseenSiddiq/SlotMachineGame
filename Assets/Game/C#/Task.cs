using UnityEngine;
using UnityEngine.UI;
using TMPro;
using DG.Tweening;


public class Task : MonoBehaviour
{
   // public TaskDetails taskDetails;
    public TextMeshProUGUI taskTimeText, taskNameText;
    public DailyTask dailyTask;
    public Toggle toggle;
    public int index;
    private void Start()
    {
       /* if (ES3.KeyExists(id))
        {
          // taskDetails = ES3.Load(id, taskDetails);
        }
        else
        {
            dailyTaskManager = FindObjectOfType<DailyTaskManager>();
           // taskDetails.Name = dailyTaskManager.dailyTasks[Random.Range(0, dailyTaskManager.dailyTasks.Length)].name;
            taskDetails.type = dailyTaskManager.dailyTasks[Random.Range(0, dailyTaskManager.dailyTasks.Length)].time;
        }*/
    }
    public void setter(string type,string name,bool isDone)
    {
        taskNameText.text = name;
        taskTimeText.text = type;
        toggle.isOn = isDone;
        dailyTask.name = name;
        dailyTask.time = type;
        dailyTask.isDone = isDone;
    }

  
    private void OnEnable()
    {
      
        transform.DOScale(1, 0.5f).SetEase(Ease.OutBack);
        this.Wait(0.5f, () =>
        {
           // seter(taskDetails.type, taskDetails.Name, taskDetails.isDone);
        });
        
    }
    private void OnDisable()
    {
        transform.localScale = new Vector3(0, 0, 0);
    }
}
