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
//using System;
public class SlotManager : MonoBehaviour
{
    /// SlotManager Script Instance ..
    internal static SlotManager instance;
    /// Slot Item Prefeb GameObject
    /// 
    public GameObject[] themeSlotItemPrefabArray;
    public GameObject[] themePayTablePrefabArray;

    public float probality;
    public RectTransform gamblingPanel;
    public GameObject spinButton;
    public GameObject gamblingWheel;
    public GameObject gamblingCanvas;
    public GameObject wheelCanvas;
    public GameObject wheelPannel;
    public GameObject tersureCanvas;
    public GameObject tersurePannel;

   


    public GameObject slotItemPrefab;
    /// Item Spining Speed.
    public float spinSpeed = 10;
    /// Vertical Gap B/W Slot Item..
    public float verticalGap = 1.5f;
    /// Item Matched In Line Info
    private int countElement;
    /// Slot Machine Rolling Time..
    public float timeOfSpin = 2;
    internal bool bonusinFreeSpin;
    /// Slot Is Spining Or Not..
    internal bool isSpinning = false;

    internal int noOfLinesSelected = 25;
	internal int betPerLineAmount = 25;
    public int totalBetAmount;
    public int currentSpinWinningAmount;

    [Header("Min Limits")]
    public float minForGambling;
    public float minForWheel;
    public float minForTeasure;

    internal int totalNoOfLines = 25;
    public string[] remarks;

    public SlotItem[] resutItems = new SlotItem[3];
    void Awake()
    {       
        instance = this;
      
    }

    public void SpinButtonClicked()
    {
        if (isSpinning)
            return;

        //add to our total spendings
        //PlayerPrefs.SetInt("TotalSpendings",PlayerPrefs.GetInt("TotalSpendings") + totalBetAmount);

        //add our rank points
        //	Rank rp = GameObject.FindObjectOfType(typeof(Rank)) as Rank;
        //rp.AddRankPoints(50);

        //SoundFxManager.instance.spinSound.Play();
        FindObjectOfType<AudioManager>().Play("SpinSound");
            
         //   ResetAll();
   
         //   GUIManager.instance.ShowPerLineWinAmount("Good Luck !!");
            isSpinning = true;
           // Game.currentGameState = GameState.isSpining;
     //   Game.noOfCoinsLeft -= totalBetAmount;
     //   Game.SaveGameSettings();
        Debug.Log("Spin Button Clicked");
     //   ResetAllAmount();
            StartCoroutine(ColumnManager.instance.StartSpinningColumn());
         
    }
    public void Result()
    {
        ColumnScript[] columnScripts = ColumnManager.instance.columnScripts;
        for (int i = 0; i < columnScripts.Length; i++)
        {
          //  Debug.Log("Working Here");
            foreach (SlotItem slotItem in columnScripts[i].slotItems)
            {
              //  Debug.Log("Sucessfully Found :" + (Mathf.RoundToInt(slotItem.transform.localPosition.y )== -2));
                if (Mathf.RoundToInt(slotItem.transform.localPosition.y) == -2)
                {
                   // Debug.Log("Position Matched");
                    resutItems[i] = slotItem;
                    this.Wait(1.22f,()=> Check());
                }
            }
        }
        
    }
    void Check()
    {
       
        for (int index = 0; index < 11; index++)
        {
              // Debug.Log("Phase 1 "+());
             //  Debug.Log("Phase 2 "+ ());
             //  Debug.Log("Phase 3 "+ ());
             //  Debug.Log("Phase 4 "+(resutItems[2].animationIndex == index && resutItems[0].indexInColumn == index && resutItems[1].indexInColumn != index));
            if (resutItems[0].animationIndex == index && resutItems[1].animationIndex == index && resutItems[2].animationIndex == index)
            {
                UiManager.instance.MachineTextPopUp(remarks[index], new Vector3(0.01f, 0.01f, 0.01f), 1);
                if (index >1)
                    UiManager.instance.InstaniateEffect(index,new Vector2(0,0));
                
                UiManager.instance.Particle();
                break;
            }
            else if ((resutItems[0].animationIndex == index) && (resutItems[2].animationIndex == index) && (resutItems[1].animationIndex != index))
            {
                UiManager.instance.MachineTextPopUp(remarks[index], new Vector3(0.01f, 0.01f, 0.01f), 1);
                if (index > 1)
                    UiManager.instance.InstaniateEffect(index,new Vector2(0, 0));
               
                UiManager.instance.Particle();
                break;
            }
            else if ((resutItems[1].animationIndex == index) && (resutItems[2].animationIndex == index) && (resutItems[0].animationIndex != index))
            {
                UiManager.instance.MachineTextPopUp(remarks[index], new Vector3(0.01f, 0.01f, 0.01f), 1);
                if (index > 1)
                    UiManager.instance.InstaniateEffect(index, new Vector2(0, 0));
                
                UiManager.instance.Particle();
                break;
            }
            else if ((resutItems[0].animationIndex == index) && (resutItems[1].animationIndex == index) && (resutItems[2].animationIndex != index))
            {
                UiManager.instance.MachineTextPopUp(remarks[index], new Vector3(0.01f, 0.01f, 0.01f), 1);
                if (index > 1)
                    UiManager.instance.InstaniateEffect(index, new Vector2(0, 0));
                
                UiManager.instance.Particle();
                break;
            }
            else
            {

            }
        }

    }
    /// Call Back When Spining Complete..
    internal void OnSpinComplete()
    {
        isSpinning = false;
        if (Random.Range(0,1001) <= probality*1000)
        {
           

        //    Invoke("_StopSpinSound",.8f);
           
          //  Invoke("_SpinCompleted", 1f);
      //  AdsManagerNew.instance.OneSpinned();
            // Add call to bring gambling forward here
           // Invoke("startGambling", 2.25f);
		        //Invoke ("ShowAd", 2.5f); // Disabled so that the ad can appear after the gambling
    }

  /* void startGambling() {


        if(currentSpinWinningAmount>=minForTeasure)
        {
            StartCoroutine(ShowTerasurePannel());
           // tersurePannel.GetComponent<TersureScript>().InitBet(currentSpinWinningAmount);
        }
        else if(currentSpinWinningAmount>=minForWheel)
        {
            StartCoroutine(ShowWheelPannel());
          //  wheelPannel.GetComponent<WheelTeasure>().InitBet(currentSpinWinningAmount);
        }
        else if (currentSpinWinningAmount > 0) {
      // Disable Spin Button and set the gamblign window to active
      StartCoroutine(showGamblingPanel());
      spinButton.SetActive(false);
    //  gamblingWheel.GetComponent<WheelGame>().InitBet(currentSpinWinningAmount);
    }
    
  }

  public void endGambling() {
   // Invoke("showAd", .75f);
  }

  public IEnumerator showGamblingPanel() {
    gamblingCanvas.SetActive(true);
    while (gamblingPanel.transform.localPosition.y > 0) {
      gamblingPanel.transform.localPosition -= new Vector3(0, 60, 0);
      if (gamblingPanel.transform.localPosition.y < 0) {
        gamblingPanel.transform.localPosition =
          new Vector3(gamblingPanel.transform.localPosition.x, 0, gamblingPanel.transform.localPosition.z);
      }
      yield return null;
    }
  }


   public IEnumerator ShowWheelPannel()
    {
        wheelCanvas.SetActive(true);
        while (wheelPannel.transform.localPosition.y > 0)
        {
            wheelPannel.transform.localPosition -= new Vector3(0, 60, 0);
            if (wheelPannel.transform.localPosition.y < 0)
            {
                wheelPannel.transform.localPosition =
                  new Vector3(wheelPannel.transform.localPosition.x, 0, wheelPannel.transform.localPosition.z);
            }
            yield return null;
        }
    }

    public IEnumerator ShowTerasurePannel()
    {
        tersureCanvas.SetActive(true);
        while (tersurePannel.transform.localPosition.y > 0)
        {
            tersurePannel.transform.localPosition -= new Vector3(0, 60, 0);
            if (tersurePannel.transform.localPosition.y < 0)
            {
                tersurePannel.transform.localPosition =
                  new Vector3(tersurePannel.transform.localPosition.x, 0, tersurePannel.transform.localPosition.z);
            }
            yield return null;
        }
    }

    public IEnumerator HideTersurePannel()
    {
        while (tersurePannel.transform.localPosition.y < 640)
        {
            tersurePannel.transform.localPosition += new Vector3(0, 60, 0);
            if (tersurePannel.transform.localPosition.y > 640)
            {
                tersurePannel.transform.localPosition =
                  new Vector3(tersurePannel.transform.localPosition.x, 640, tersurePannel.transform.localPosition.z);

            }
            yield return null;
        }
        tersureCanvas.SetActive(false);
    }


    public IEnumerator HideWheelPannel()
    {
        while (wheelPannel.transform.localPosition.y < 640)
        {
            wheelPannel.transform.localPosition += new Vector3(0, 60, 0);
            if (wheelPannel.transform.localPosition.y > 640)
            {
                wheelPannel.transform.localPosition =
                  new Vector3(wheelPannel.transform.localPosition.x, 640, wheelPannel.transform.localPosition.z);

            }
            yield return null;
        }
        wheelCanvas.SetActive(false);
    }

  public IEnumerator hideGamblingPanel() {
        Debug.Log("Hide Gambling");
    while(gamblingPanel.transform.localPosition.y < 640) {
      gamblingPanel.transform.localPosition += new Vector3(0, 60, 0);
      if(gamblingPanel.transform.localPosition.y > 640) {
        gamblingPanel.transform.localPosition =
          new Vector3(gamblingPanel.transform.localPosition.x, 640, gamblingPanel.transform.localPosition.z);
        
      }
      yield return null;
    }
    gamblingCanvas.SetActive(false);
  }
  void ShowAd()
	  {
		 // GameObject.Find ("AdMobAds").GetComponent<GoogleMobileAdsDemoScript> ().ShowInterstitial ();
	  }

    void _StopSpinSound()
    {
        SoundFxManager.instance.spinSound.Stop();
    }

    void _SpinCompleted()
    {       

        LineManager.instance.SetLinesItems(); //keep references of slot items on each selected lines

        LineManager.instance.TraceForCombinations();

        CalculateWinningAmount();

        LineAnimationScript.instance.ShowLineAnimations();

        Game.currentGameState = GameState.isSpiningComplete;

        LineManager.instance.CheckForSpecialEffect();
 
        GameOperations.instance.TraceForScatterItem();
    }

  

 
    private void CalculateWinningAmount()
    {
        currentSpinWinningAmount = 0;

        for (int i = 0; i < LineManager.instance.lineItemScripts.Length; i++)
        {
            currentSpinWinningAmount += LineManager.instance.lineItemScripts[i].totalWin;
        }

        GUIManager.instance.UpdateWiningAmount();
    /*  This has been moved to account for the betting withthe roulette wheel game.
        The code below has been moved to the WheelGame.cs script.

        Game.noOfCoinsLeft += currentSpinWinningAmount;
        PlayerPrefs.SetInt("LastWinAmm", currentSpinWinningAmount);
        PlayerPrefs.Save();
        Game.SaveGameSettings();
        GUIManager.instance.UpdateGUI();
        

      //  SalesScript.instance.AddAmounts(totalBetAmount, currentSpinWinningAmount);
    }

    internal void ResetAll()
    {
        LineManager.instance.ResetAllLines();
        LineAnimationScript.instance.StopAllAnimationAndEffect();
    }

    internal void ResetAllAmount()
    {
        countElement = 0;
        currentSpinWinningAmount = 0;
       // if (GameOperations.instance.noOfFreeSpin == 0)
       
       GUIManager.instance.UpdateGUI();
        GUIManager.instance.UpdateWiningAmount();
        
    }

    internal GameObject GetPopUpObject()
    {
        return(GameObject.FindGameObjectWithTag("EffectPop"));
    }
*/
    }

} // End Script..
