/*
http://www.cgsoso.com/forum-211-1.html

CG搜搜 Unity3d 每日Unity3d插件免费更新 更有VIP资源！

CGSOSO 主打游戏开发，影视设计等CG资源素材。

插件如若商用，请务必官网购买！

daily assets update for try.

U should buy the asset from home store if u use it in your project!
*/

using UnityEngine;
using System.Collections;

public class SlotItemEffects : MonoBehaviour 
{
    public SlotItem mySlotItemScript;
    internal bool isHighlighting = false;

	// Use this for initialization
	void Start () 
    {
	
	}



    internal void Highlight(int val)
    {
        isHighlighting = true;

        int animationIndex;
        animationIndex = mySlotItemScript.animationIndex;
       // mySlotItemScript.ItemPackedSprite.PlayAnim(animationIndex);

        if (animationIndex < mySlotItemScript.audios.Length)
        {
            mySlotItemScript.GetComponent<AudioSource>().clip = mySlotItemScript.audios[animationIndex];
            mySlotItemScript.GetComponent<AudioSource>().Play();
            
        }

       

   

        if (val == 0)
        {
            iTween.Defaults.easeType = iTween.EaseType.easeInExpo;
            iTween.PunchScale(gameObject, new Vector3(.2f, .2f, .2f), 2f);
        }
        else if (val == 1)
        {
            iTween.Defaults.easeType = iTween.EaseType.easeOutExpo;
            iTween.ScaleFrom(gameObject, new Vector3(0, transform.localScale.y, transform.localScale.z), 1f);
        }
        else if (val == 2)
        {
            iTween.Defaults.easeType = iTween.EaseType.easeOutExpo;
            iTween.ScaleFrom(gameObject, new Vector3(transform.localScale.x, 0,transform.localScale.z), 1f);
        }
    }


    void DoAnimation()
    {
        iTween.Defaults.easeType = iTween.EaseType.linear;
        iTween.RotateFrom(gameObject, new Vector3(0, 90, 0), .5f);
    }


    internal void UnHighlight()
    {
        CancelInvoke("DoAnimation");
        isHighlighting = false;

      //  mySlotItemScript.ItemPackedSprite.PauseAnim();
      //  mySlotItemScript.ItemPackedSprite.SetFrame(mySlotItemScript.animationIndex, 0);
    }
}
