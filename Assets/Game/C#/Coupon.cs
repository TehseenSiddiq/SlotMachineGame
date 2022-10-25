using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Coupon : MonoBehaviour
{
    [SerializeField] GameObject coupon;
    public bool isUnlocked = false;
    public GameObject error;

    private void Start()
    {
        isUnlocked = ES3.Load("Coupon", isUnlocked);
    }
    public void FadeIn()
    {

        if (isUnlocked)
        {
            coupon.SetActive(true);   
        
            coupon.GetComponent<Image>().DOFade(0.5f, 0.8f);
            coupon.transform.GetChild(0).GetComponent<Image>().DOFade(1, 0.8f);
            this.Wait(5f, () => {
                coupon.GetComponent<Image>().DOFade(0, 0.8f);
                coupon.transform.GetChild(0).GetComponent<Image>().DOFade(0, 0.8f);
                this.Wait(1, () => coupon.SetActive(false));
            }
            );
        }
        else
        {
            error.SetActive(true);
            error.GetComponent<Transform>().DOMove(new Vector3(500, 2500, 0), 2);
            this.Wait(2, () =>
            {
                error.SetActive(false);
                error.GetComponent<Transform>().position = new Vector3(500, -2500, 0);
            });
           
        }
    }
}

