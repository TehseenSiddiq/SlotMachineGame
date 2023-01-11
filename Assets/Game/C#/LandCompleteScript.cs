using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class LandCompleteScript : MonoBehaviour
{
    public ParticleSystem ps;
    public GameObject Map;
    public Image[] mapImages;
    public GameObject button;
    public void Open()
    {
        transform.DOScale(1, 2f).SetEase(Ease.OutBack);
        ps.Play();
        Debug.Log("Level " + Game.instance.GetLevel());
        if(Game.instance.GetLevel() >= 3)
        {
            button.SetActive(false);
            this.Wait(2.5f, () => { 
                transform.DOScale(0, 1).SetEase(Ease.InBack); 
                Map.SetActive(true);
                StartCoroutine(AnimateMap());
            });
            
        }

    }
    public void NextLevel()
    {
        Debug.Log("Working");
        Game.instance.SetLevel(Game.instance.GetLevel()+1);
        Game.instance.SaveGame();
        Map.SetActive(true);
        StartCoroutine(AnimateMap());
        this.transform.DOScale(0, 1).SetEase(Ease.OutBack);
    }
    IEnumerator AnimateMap()
    {
        float i = 0;
        mapImages[Game.instance.GetLevel() - 2].fillAmount = 1;
        if(Game.instance.GetLevel() >2)
            mapImages[Game.instance.GetLevel() - 3].fillAmount = 1;
        while (mapImages[Game.instance.GetLevel() - 1].fillAmount < 1)
        {
            
            mapImages[Game.instance.GetLevel() - 1].fillAmount = i;
                i += 0.05f;
            yield return new WaitForSeconds(0.05f);
        }
        Map.transform.DOScale(0, 2).SetEase(Ease.InBack);
        this.Wait(0.4f, () => { Map.SetActive(false); FindObjectOfType<BlonjeLandMaster>().ResetLand(); });
    }
}
