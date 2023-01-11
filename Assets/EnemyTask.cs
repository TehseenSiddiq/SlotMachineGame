using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class EnemyTask : MonoBehaviour
{
    public Image image;
    public TextMeshProUGUI taskTimeText, taskNameText;
    public DailyTask dailyTask;
    public int index;


    public void setter(Sprite image)
    {
      //  taskNameText.text = name;
        //taskTimeText.text = type;
        this.image.sprite = image;
     //   dailyTask.name = name;
       // dailyTask.time = type;
    }

   

    public void DoTask()
    {
        Destroy(gameObject);
    }
}
