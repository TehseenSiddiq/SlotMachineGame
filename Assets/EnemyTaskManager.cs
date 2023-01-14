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
    public List<Button> buttons;
    public Transform content;

    public int totalAmount;
    public RectTransform endInfo;
    public bool isLooted = false;
    public Transform ps;
    public Animator animator;

    private void Start()
    {
        dailyTasks = FindObjectOfType<DailyTaskManager>().dailyTasks;

        for (int i = 0; i < 5; i++)
        {
            EnemyTask task = Instantiate(prefab, content).GetComponent<EnemyTask>();
            int a = Random.Range(0, dailyTasks.Length);
            task.setter(dailyTasks[a].icon);
            task.index = i;
            //task.GetComponent<Button>().onClick.AddListener(() => Function(task.index));
            buttons.Add(task.GetComponent<Button>());
        }
        foreach (var button in buttons)
        {
            button.onClick.AddListener(()=> {
                Successfull();
                ps.gameObject.SetActive(true);
                ps.DOScale(1, 0.5f);
                animator.Play("FameSabotage");
                });
        }
    }
    public void Successfull()
    {
        Debug.Log("Successfull Attack");
        totalAmount = Random.Range(10000, 50000) * Game.instance.GetLevel();
        this.transform.DOScale(0, 0.6f).SetEase(Ease.InBack);
        string name = FindObjectOfType<AttackLand>().nameRand;
        endInfo.GetComponentInChildren<TMP_Text>().text = "You sabotaged <b><color=\"red\">" + name + "</color></b> routine. \nYou earned <b><color=\"yellow\">" + totalAmount + "blonje cash</color>.";
        endInfo.DOAnchorPosY(0, 2);
    }
    public void SetCash()
    {
        Game.instance.SetCash(Game.instance.GetCash() + totalAmount);
    }
}
