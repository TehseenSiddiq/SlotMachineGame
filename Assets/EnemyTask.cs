using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class EnemyTask : MonoBehaviour
{
    public TextMeshProUGUI taskTimeText, taskNameText;
    public DailyTask dailyTask;
    public Toggle toggle;
    public int index;

    public void setter(string type, string name, bool isDone)
    {
        taskNameText.text = name;
        taskTimeText.text = type;
        toggle.isOn = isDone;
        dailyTask.name = name;
        dailyTask.time = type;
        dailyTask.isDone = isDone;
    }

}
