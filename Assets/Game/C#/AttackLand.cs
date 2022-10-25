using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class AttackLand : MonoBehaviour
{
    public TMP_Text playerName;
    public Image avater;
    public string[] names;
    public Sprite[] sprites;
    public string nameRand;
    
    public void SetInfo()
    {
        nameRand = names[Random.Range(0, names.Length)];
        playerName.text = nameRand;
        avater.sprite = sprites[Random.Range(0, sprites.Length)];
    }
}
