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

public class ColumnScript : MonoBehaviour
{
    /// Coloum Script Instance..
    public static ColumnScript instance;
    /// Set No Of Item in Each Coloum..
    private int noOfItemsInAColumn = 4;
    /// Colom Index..
    internal int columnIndex = 0;
    // All SlotItem According to Coloum..
    internal ArrayList slotItemList;
    /// slot Is spining 
    internal bool isSpinning = false;
    /// Slot Item Spin Using Itwwen When Spining Stop to Reposition slot Item..
    private bool shouldStopSpinning = false;
    /// Slot Item Current Anim Idex..
    internal int slotItemAnim;
    internal int rareItemChance;
    //50-50 chance for the lucky item to be shown
    public int luckyItemPercent ;

    void Awake()
    {
        instance = this;
    }

    public SlotItem[] slotItems;

    void UpdateSlotItemList()
    {
        slotItems = new SlotItem[slotItemList.Count];
        for (int i = 0; i < slotItemList.Count; i++)
        {
            slotItems[i] = (SlotItem)slotItemList[i];
        }

    }

    void Start()
    {
        slotItemList = new ArrayList();
        PopulateColumn();

        InvokeRepeating("UpdateSlotItemList", 2, 2);
    }

    /// Populate all Column With Slot Item..And Add Slot Item In ArrayList..
    private void PopulateColumn()
    {
        for (int i = 0; i < noOfItemsInAColumn; i++)
        {
            Vector3 pos = new Vector3(transform.position.x, transform.position.y - i * SlotManager.instance.verticalGap, -8);
            GameObject temp = (GameObject)Instantiate(SlotManager.instance.slotItemPrefab, pos, Quaternion.identity);
            temp.transform.parent = transform;
            temp.GetComponent<SlotItem>().indexInColumn = i;
            slotItemList.Add(temp.GetComponent<SlotItem>());
        }
        rareItemChance = Random.Range(0, slotItemList.Count);
    }

    /// Start Slot Item Spining ..
    internal void StartSpin()
    {
        isSpinning = true;
        shouldStopSpinning = false;

     
        for (int i = 0; i < slotItemList.Count; i++)
        {
            ((SlotItem)slotItemList[i]).luckyItem = false;
        }

        for (int i = 0; i < slotItemList.Count; i++)
        {
            ((SlotItem)slotItemList[i]).spin = true;

            if(i == rareItemChance) { 
                ((SlotItem)slotItemList[i]).luckyItem = true;
                ((SlotItem)slotItemList[i]).luckChance = luckyItemPercent;
            }
        }
        /// Call Stop Spining..
        Invoke("StopSpin", SlotManager.instance.timeOfSpin + columnIndex * .3f);
    }



    /// Spining Stop Iween Start to Reset Position Of slot Item....
    void StopSpin()
    {
        
        shouldStopSpinning = true;
    }

    /// Move Last item Of Coloum To First Index..
    internal void MoveLastItem()
    {

        ((SlotItem)slotItemList[noOfItemsInAColumn - 1]).transform.position = ((SlotItem)slotItemList[0]).transform.position + new Vector3(0, SlotManager.instance.verticalGap, 0);
        slotItemList.Insert(0, (SlotItem)slotItemList[noOfItemsInAColumn - 1]);
        slotItemList.RemoveAt(noOfItemsInAColumn);

        /// Reset Slot Item Position..
        for (int i = 0; i < slotItemList.Count; i++)
        {
            ((SlotItem)slotItemList[i]).indexInColumn = i;
        }

        if (shouldStopSpinning)
        {
        
            isSpinning = false;
           // SoundFxManager.instance.columnSpinCompleteSound.Play();
            if (columnIndex == 2)
            {
               this.Wait(1.2f,()=> SlotManager.instance.Result());
                SlotManager.instance.isSpinning = false;
            }        
                
        }
    }

}// End Script..
