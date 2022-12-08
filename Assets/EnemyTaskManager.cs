using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class EnemyTaskManager : MonoBehaviour
{
    public GameObject prefab;
    public DailyTask[] dailyTasks;
    public Button[] buttons;
    public Transform content;

    public int totalAmount;
    public RectTransform endInfo;
    public bool isLooted = false;
    public ParticleSystem ps;

    private void Start()
    {
        dailyTasks = FindObjectOfType<DailyTaskManager>().dailyTasks;

        for (int i = 0; i < 5; i++)
        {
            EnemyTask task = Instantiate(prefab, content).GetComponent<EnemyTask>();
            task.setter(dailyTasks[Random.Range(0, dailyTasks.Length)].time, dailyTasks[Random.Range(0, dailyTasks.Length)].name, false);
            task.index = i;
            //task.GetComponent<Button>().onClick.AddListener(() => Function(task.index));

        }
        foreach (var button in buttons)
        {
            button.onClick.AddListener(()=> {
                Successfull();
                ps.Play();


                });
        }
    }
    public void Successfull()
    {
        Debug.Log("Successfull Attack");

        string name = FindObjectOfType<AttackLand>().nameRand;
        endInfo.GetComponentInChildren<TMP_Text>().text = "You sabotaged <b><color=\"red\">" + name + "</color></b> routine. \nYou earned <b><color=\"yellow\">" + totalAmount + "blonje cash</color>.";
        endInfo.DOAnchorPosY(0, 2);
    }
}
