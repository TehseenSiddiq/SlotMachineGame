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

public enum SlotItemType
{
    Wild,
    Scatter,
    Normal,
    Bonus
}

public class SlotItem : MonoBehaviour
{
    public AudioClip[] audios;

    public Texture2D[] slotItemTextures;
    [SerializeField]string[] names;
    public static string itemName;
    private ColumnScript myColumnScript;
    public int indexInColumn;
    public int animationIndex = 0;
    private Transform myTransform;
    internal bool spin = false;
    public SlotItemType itemType = SlotItemType.Normal;
    internal bool luckyItem = false;
    internal float luckChance;

    public SlotItemEffects myEffectScript;

    void Start()
    {
        myTransform = transform;
        myColumnScript = transform.parent.GetComponent<ColumnScript>();
        SetNewAnim();
    }


    void Update()
    {
      
        if (!spin)
            return;

        // Itween Code To Reset Slot Item Position..
        if (myColumnScript.isSpinning == false)
        {
            iTween.Defaults.easeType = iTween.EaseType.easeInElastic;
            iTween.MoveTo(gameObject, new Vector3(transform.position.x, 0.2f + SlotManager.instance.verticalGap + indexInColumn * (-SlotManager.instance.verticalGap), transform.position.z), 1f);
            spin = false;
            return;
        }
        // Move Item Down-ward..
        myTransform.position -= new Vector3(0, SlotManager.instance.spinSpeed * Time.deltaTime, 0);
        // Move Last Item To First Position..
        if (myTransform.position.y < -3f)
        {
            myTransform.position = new Vector3(myTransform.position.x, 2, myTransform.position.z);
            SetNewAnim();
            myColumnScript.MoveLastItem();
        }
    }// End Update();

    /// Set Random Animation On Slot Item..
    internal void SetNewAnim()
    {
        // ItemPackedSprite.PlayAnim(animationIndex);
        // ItemPackedSprite.PauseAnim();
        if (luckyItem == true)
        {
            if(Random.Range(0,100) < luckChance) {
                animationIndex = 8 + Random.Range(1, 4);
            if (animationIndex > slotItemTextures.Length)
                animationIndex--;
            }
        }
        else 
            animationIndex = Random.Range(0,12);

        
        if (animationIndex < 9)
            itemType = SlotItemType.Normal;
        else if (animationIndex == 9)
            itemType = SlotItemType.Wild;
        else if (animationIndex == 10)
            itemType = SlotItemType.Scatter;
        else
            itemType = SlotItemType.Bonus;

        GetComponent<Renderer>().material.mainTexture = slotItemTextures[animationIndex];
        itemName = names[animationIndex];

    }
}// End Script..
