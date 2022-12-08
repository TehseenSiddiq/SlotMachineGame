using DG.Tweening;
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

    public int totalAmount;
    public RectTransform endInfo;
    public bool isLooted = false;

    public void setter(string type, string name, bool isDone)
    {
        taskNameText.text = name;
        taskTimeText.text = type;
        toggle.isOn = isDone;
        dailyTask.name = name;
        dailyTask.time = type;
        dailyTask.isDone = isDone;
    }

    public void Successfull()
    {
        Debug.Log("Successfull Attack");

        string name = FindObjectOfType<AttackLand>().nameRand;
        endInfo.GetComponentInChildren<TMP_Text>().text = "You sabotaged <b><color=\"red\">" + name + "</color></b> routine. \nYou earned <b><color=\"yellow\">" + totalAmount + "blonje cash</color>.";
        endInfo.DOAnchorPosY(0, 2);
    }

    public void DoTask()
    {
        Destroy(gameObject);
    }
}
