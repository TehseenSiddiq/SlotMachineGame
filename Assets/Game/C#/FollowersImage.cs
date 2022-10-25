using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using DG.Tweening;

public class FollowersImage : MonoBehaviour
{
    [SerializeField]
    private Vector3 originPos;
    [SerializeField]
    private Vector3 showPos;
    public float speed = 5;
    public TMP_Text text;
    public float delay = 0.01f;
    public void AddFollowers(int value)
    {
       this.Wait(1,()=>StartCoroutine(FollowerAnimation(value)));
        
        this.GetComponent<RectTransform>().DOAnchorPos(showPos, speed);
    }
    public IEnumerator FollowerAnimation(int value)
    {
        for(int i = 1;i <= value; i++)
        {
            text.text = Followers(Game.instance.GetFollower());
         //   Debug.Log(((float)Game.instance.GetFollower() / 1000));
            Game.instance.SetFollowers(Game.instance.GetFollower() + 1);
            Game.instance.SaveGame();
            yield return new WaitForSeconds(delay);
        }
        this.Wait(1, () => this.GetComponent<RectTransform>().DOAnchorPos(originPos, speed));
    }
    public string Followers(float count)
    {
        if(count > 1000 && count < 1000000)
        {
            return (count / 1000).ToString("F") + "K";
        }
        else if(count > 1000000)
            return (count / 1000000).ToString("F") + "M";
        return count.ToString();
    }

    private void Start()
    {
     //   AddFollowers(200);
    }
}
