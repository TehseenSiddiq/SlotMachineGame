using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TaskStore : MonoBehaviour
{
    public Slider slider;
    public DailyTaskManager dailyTaskManager;
    public string name;
    bool isDone;
    public void Function()
    {
        slider.gameObject.SetActive(true);
        isDone = true;
        for (int i = 0; i < dailyTaskManager.list.Count; i++)
        {
         
            if (dailyTaskManager.list[i].GetComponent<Task>().taskNameText.text == name)
            {
                Debug.Log(dailyTaskManager.list[i].GetComponent<Task>().taskNameText.text + ", " + name);
                Debug.Log(dailyTaskManager.list[i].GetComponent<Task>().taskNameText.text == name);
                // dailyTaskManager.brushBtn.interactable = false;
                if (slider.value == 5)
                    dailyTaskManager.list[i].GetComponent<Task>().toggle.isOn = true;
            }
        }
    }
    private void LateUpdate()
    {
        if (isDone)
        {
            slider.value += Time.deltaTime;
        }
        if (slider.value == 5)
        {
            Function();
            isDone = false;
            //brushBtn.interactable = true;
            slider.gameObject.SetActive(false);
            slider.value = 0;
        }
    }
}
