using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class EnemyLandManager : MonoBehaviour
{
    public LandObject[] objs;
  

    public int totalAmount;
    public int amountLooted;

    public bool bodyGurad;

    public Animator bodyguard;
    public RectTransform endInfo;
    public bool isLooted = false;
    private void OnEnable()
    {
        totalAmount = objs[0].value+objs[1].value+objs[2].value+objs[3].value;
        bodyGurad = (Random.value > 0.5f);
    }
    public void CaugthByBodygurad()
    {
        foreach (LandObject landObject in objs)
        {
            landObject.targetImage.SetActive(false);
        }
        bodyguard.Play("BodygruadAnimation");
        string name = FindObjectOfType<AttackLand>().nameRand;
        endInfo.GetComponentInChildren<TMP_Text>().text = "<b><color=\"red\">" + name + "</color></b> Blocked Your attack. \nYou got <b><color=\"yellow\">"+ (totalAmount*0.4f) +"</color> ";
        this.Wait(3, () => endInfo.DOAnchorPosY(0, 2));
    }
    public void Successfull()
    {
        foreach(LandObject landObject in objs)
        {
            landObject.targetImage.SetActive(false);
        }
        string name = FindObjectOfType<AttackLand>().nameRand;
        endInfo.GetComponentInChildren<TMP_Text>().text = "You destroyed <b><color=\"red\">"+name+"</color></b> property. \nYou got <b><color=\"yellow\">"+totalAmount+"</color> ";
        endInfo.DOAnchorPosY(0, 2);
    }
}
