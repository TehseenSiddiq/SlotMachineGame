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

public class ColumnManager : MonoBehaviour
{
    /// Coloum Manager Script Instance..
    public static ColumnManager instance;
    /// All Coloum Reference Array..
    public ColumnScript[] columnScripts;

    void Awake()
    {
        instance = this;
    }

    void Start()
    {
        // Set Coloum Indentifire Index..
        for (int i = 0; i < columnScripts.Length; i++)
        {
            columnScripts[i].columnIndex = i;
        }
    }

    /// When Called Slot Item Start Spining..
    public IEnumerator StartSpinningColumn()
    {
        
        for (int i = 0; i < columnScripts.Length; i++)
        {
            
            columnScripts[i].StartSpin();
            yield return new WaitForSeconds(.05f);
        }
    }

    internal SlotItem GetSlotItemAt(int columnIndex, int rowIndex)
    {
        return (SlotItem)columnScripts[columnIndex].slotItemList[rowIndex];
        
    }

}// End Script
