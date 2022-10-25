using DG.Tweening;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class UiManager : MonoBehaviour
{
    public static UiManager instance;

    private Vector3 fp;   //First touch position
    private Vector3 lp;   //Last touch position
    [SerializeField]private float dragDistance;  //minimum distance for a swipe to be registered
    [SerializeField] GameObject camera;
    [SerializeField] float cameraSpeed;

    [SerializeField] RectTransform sidePanel;

    [SerializeField] GameObject slotEffect;
    public Sprite[] effectImages;
    public ParticleSystem ps,ps2;

    public TextMeshProUGUI machineRewardText;
    [SerializeField] TextMeshProUGUI tagText;
    [SerializeField] TextMeshProUGUI cashText;
    [SerializeField] TextMeshProUGUI spinsText, extraSpinsText;
    [SerializeField] TMP_Text levelText;
    public Image sliderImage;
    public Sprite[] sliderSprite;
    public Slider spinsSliders;

    public GameObject[] guardsImage;

    public Transform PopUpPanel;
    public GameObject blonjeLandPanel;
    public Ease commonEase = Ease.OutBack;
    private bool canSwipe = true;
   

    [Space]
    [Header("Curtain")]
    public RectTransform[] curtains;
    public GameObject conservatorScreen;
    public RectTransform enemyInfoScreen;
    public RectTransform endInfo; 
    public GameObject machine,podium;
    public GameObject header;


    private void Awake()
    {
        instance = this;
        PopUpPanel.localScale = Vector3.zero;
       
    }

    void Start()
    {
        dragDistance = Screen.height * 30 / 100; //dragDistance is 15% height of the screen 
        if (Random.Range(0, 2) == 0)
        {
            AudioManager.instance.Play("BonusPopup");
            PopUpPanel.DOScale(1, 0.3f);
            PopUpPanel.GetComponent<Image>().DOFade(0.3f, 0.2f);
            for (int i = 0; i < PopUpPanel.transform.childCount; i++)
            {
                PopUpPanel.GetChild(i).GetComponent<Image>().DOFade(1, 0.2f);
            }
        }
        InvokeRepeating("GuardManager", 0.2f, 0.2f);
        InvokeRepeating("CheckCameraPosition", 0.2f, 0.05f);
    }

    void Update()
    {
        DragCamera();
       
    }
   
    void CheckCameraPosition()
    {
        if (camera.transform.position.y == -20)
        {
            blonjeLandPanel.SetActive(true);
            levelText.gameObject.SetActive(false);
        }
        else if (camera.transform.position.y == 20)
        {
            blonjeLandPanel.SetActive(false);
            levelText.gameObject.SetActive(true);
        }
        else
        {
            levelText.gameObject.SetActive(false);
            blonjeLandPanel.SetActive(false);
        }
    }
    private void LateUpdate()
    {
        if (conservatorScreen.activeSelf)
        {
            podium.SetActive(false);
            machine.SetActive(false);
            header.SetActive(false);
        }
        else if(!conservatorScreen.activeSelf && camera.transform.position.y == 0)
        {
            podium.SetActive(true);
            machine.SetActive(true);
            header.SetActive(true);
        }
       // Game game = new Game();
        cashText.text = Game.instance.GetCash().ToString();
        if (RehabManager.InRehab())
        {
            spinsText.text = "Rehab";
            sliderImage.sprite = sliderSprite[0];
            spinsSliders.value = spinsSliders.maxValue;
            DisplayTime(RehabManager.rehabTimer, extraSpinsText);
        }
        else
        {
            sliderImage.sprite = sliderSprite[1];
           // Debug.Log(Game.instance.spins);
            if (Game.instance.spins < 50)
            {
                spinsText.text = Game.instance.spins.ToString() + "/50";
                spinsSliders.value = Game.instance.spins;
                extraSpinsText.text = 0 + " Spins";
            }

            else
            {
                // Debug.Log(game.GetSpins())
                spinsText.text = "50/50";
                extraSpinsText.text = "+" + (Game.instance.spins - 50) + " Spins";
                spinsSliders.value = 50;
            }
        } 
        levelText.text = "HIGH ROLLER ROOM\n" + Game.instance.GetLevel();
    }
    void GuardManager()
    {
      
        foreach (GameObject guardImage in guardsImage)
        {
            guardImage.SetActive(false);
        }
        if (Game.guards > 3)
        {
            Game.guards = 3;
            Game.instance.SaveGame();
        }
           
        for (int i = 0; i < Game.guards; i++)
        {
                guardsImage[i].SetActive(true);
        }
        
       
    }
    public void CurtainEffect()
    {
        curtains[0].DOAnchorPosX(-0, 4);
        curtains[1].DOAnchorPosX(0, 4);
        if (conservatorScreen.activeSelf)
        {
            this.Wait(4,()=> conservatorScreen.SetActive(false));
            this.Wait(6, () =>
            {
                curtains[0].DOAnchorPosX(-1800, 4);
                curtains[1].DOAnchorPosX(1800, 4);
                enemyInfoScreen.DOAnchorPosY(300, 2);
                endInfo.DOAnchorPosY(-330, 2);
            });
        }
        else
        {
            this.Wait(4, () => {
                conservatorScreen.SetActive(true);
                enemyInfoScreen.GetComponent<AttackLand>().SetInfo();
                enemyInfoScreen.DOAnchorPosY(0, 2);
            });
            this.Wait(6, () =>
            {
                curtains[0].DOAnchorPosX(-1800, 4);
                curtains[1].DOAnchorPosX(1800, 4);
            });
        }

    }
    public void SidePanel(int index)
    {
        sidePanel.DOAnchorPos(new Vector3(index, 0, 0), 0.2f).SetEase(Ease.OutBack);
    }
    void DragCamera()
    {
        if (Input.touchCount == 1) // user is touching the screen with a single touch
        {
            Touch touch = Input.GetTouch(0); // get the touch
            if (touch.phase == TouchPhase.Began) //check for the first touch
            {
                fp = touch.position;
                lp = touch.position;
            }
            else if (touch.phase == TouchPhase.Moved) // update the last position based on where they moved
            {
                lp = touch.position;
            }
            else if (touch.phase == TouchPhase.Ended) //check if the finger is removed from the screen
            {
                lp = touch.position;  //last touch position. Ommitted if you use list

                //Check if drag distance is greater than 20% of the screen height
                if (Mathf.Abs(lp.y - fp.y) > dragDistance)
                {

                    if (lp.y > fp.y)  //If the movement was up
                    {   //Up swipe
                        Debug.Log("Up Swipe");
                        if(canSwipe)
                             SwipeUp();
                    }
                    else
                    {   //Down swipe
                        Debug.Log("Down Swipe");
                        if(canSwipe)
                            SwipeDown();
                    }
                }
            }
            
        }
    }
    public void SwipeButton(int index)
    {  
       camera.transform.DOMove(new Vector3(0, index, camera.transform.position.z), cameraSpeed, false).SetEase(commonEase);
    }
    public void SwipeUp()
    {
        if (camera.transform.position.y == -20)
            return;
        else if (camera.transform.position.y == 0)
            camera.transform.DOMove(new Vector3(0, -20, camera.transform.position.z), cameraSpeed, false).SetEase(commonEase);
        else if (camera.transform.position.y == 20)
            camera.transform.DOMove(new Vector3(0, 0, camera.transform.position.z), cameraSpeed, false).SetEase(commonEase);
    }
    public void SwipeDown()
    {
        if (camera.transform.position.y == 20)
            return;
        else if (camera.transform.position.y == 0)
        {
            camera.transform.DOMove(new Vector3(0, 20, camera.transform.position.z), cameraSpeed, false).SetEase(commonEase);
            
        }  
        else if (camera.transform.position.y == -20)
        {
            camera.transform.DOMove(new Vector3(0, 0, camera.transform.position.z), cameraSpeed, false).SetEase(commonEase);
           
        }
          
    }

    public void SwipeXIndex(float index)
    {
        if (camera.transform.position.y != -20)
            return;
     
            camera.transform.DOMove(new Vector3(index * FindObjectOfType<LandPosition>().pos, -20, camera.transform.position.z), cameraSpeed, false).SetEase(commonEase);
    }
    public void InstaniateEffect(int i,Vector2 pos)
    {  
        GameObject a = Instantiate(slotEffect, pos, Quaternion.identity);
        a.GetComponent<SpriteRenderer>().sprite = effectImages[i];
        
    }
    public void Particle(int index)
    {
        if(index == 0)
        {
            ps.Play();
            this.Wait(2, () => ps.Stop());
        }
        else
        {
            ps2.Play();
            this.Wait(2, () => ps2.Stop());
        }
       
    }
    public void MachineTagText()
    {
        tagText.text = SlotItem.itemName;
    }

    public void MachineTextPopUp(string content,Vector3 scaleTo,float duration)
    {
        machineRewardText.text = content;
        machineRewardText.transform.DOScale(scaleTo, duration).SetEase(Ease.OutBounce);
      //  this.Wait(12, () => );
    }
    public void HideMachineText()
    {
        machineRewardText.transform.DOScale(Vector3.zero, 0.5f).SetEase(Ease.InBack);
    }
    public void CollectPopup()
    {
        Game.instance.SetCash(Game.instance.GetCash() + 22550000);
        Game.instance.spins += 100;
        Game.instance.SaveGame();
        CoinAnimater.instance.AddCoins(new Vector3(0, 0, 0), 60);
        FindObjectOfType<SpinAnimator>().AddSpins(new Vector3(0, .5f, 0), 15);
        AudioManager.instance.Play("DailyReward");
        PopUpPanel.DOScale(0, 0.2f).SetEase(commonEase);
        PopUpPanel.GetComponent<Image>().DOFade(0, 0.2f);
        for (int i = 0; i < PopUpPanel.transform.childCount; i++)
        {
            PopUpPanel.GetChild(i).GetComponent<Image>().DOFade(0, 0.2f);
        }
       
    }
    public void OpenURL(string url)
    {
        Application.OpenURL(url);
    }
    public void DisplayTime(float timeToDisplay,TextMeshProUGUI text)
    {
        //float hours = Mathf.FloorToInt(timeToDisplay / 60);
        // float minutes = Mathf.FloorToInt(hours / 60);
        //float seconds = Mathf.FloorToInt(timeToDisplay % 60);
        //text.text = string.Format("{0:00}:{1:00}:{2:00}",hours, minutes, seconds);
        var timeSpan = System.TimeSpan.FromSeconds(timeToDisplay);
        text.text = timeSpan.Hours.ToString("00") + ":" +
                    timeSpan.Minutes.ToString("00") + ":" +
                    timeSpan.Seconds.ToString("00");
    }
}
