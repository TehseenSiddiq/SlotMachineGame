using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Map : MonoBehaviour
{
    public Image[] cities;
    private void OnEnable()
    {
        for (int i = 0; i < Game.instance.GetLevel(); i++)
        {
            cities[i].fillAmount = 1;
        }
    }
}
