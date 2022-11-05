using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class TaskSlider : MonoBehaviour
{
    public Slider slider;
    bool doTask = false;
    public TMP_Text nameText;
    public TMP_Text progressText;
    public void PreformTask()
    {
        doTask = true;
    }
    public void ResetSlider()
    {
        slider.value = slider.minValue;
    }
    public bool PreformingTask(string Name)
    {
        nameText.text = Name;
        progressText.text = ((slider.value / slider.maxValue) * 100).ToString("0") +"%";
        if (slider.value < slider.maxValue)
            slider.value += Time.deltaTime;
        if (slider.value >= slider.maxValue)
            return true;
        return false;
    }
}
