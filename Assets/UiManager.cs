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
    public ParticleSystem ps;

    public TextMeshProUGUI machineRewardText;
    [SerializeField] TextMeshProUGUI tagText;
    [SerializeField] TextMeshProUGUI cashText;
    [SerializeField] TextMeshProUGUI spinsText, extraSpinsText;
    public Image sliderImage;
    public Sprite[] sliderSprite;
    public Slider spinsSliders;


    public Transform PopUpPanel;


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
            PopUpPanel.DOScale(1, 0.8f);
            PopUpPanel.GetComponent<Image>().DOFade(0.3f, 0.2f);
            for (int i = 0; i < PopUpPanel.transform.childCount; i++)
            {
                PopUpPanel.GetChild(i).GetComponent<Image>().DOFade(1, 0.2f);
            }
        }
    }

    void Update()
    {
        DragCamera();
        //Debug.Log(Time.);
       // Swipe();
    }
   
    
    private void LateUpdate()
    {
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
      
    }
    public void SidePanel(int index)
    {
        sidePanel.DOAnchorPos(new Vector3(index, 0, 0), 0.4f);
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
                    //It's a drag
                    //check if the drag is vertical or horizontal
                    /* if (Mathf.Abs(lp.x - fp.x) > Mathf.Abs(lp.y - fp.y))
                     {   //If the horizontal movement is greater than the vertical movement...
                         if ((lp.x > fp.x))  //If the movement was to the right)
                         {   //Right swipe
                             Debug.Log("Right Swipe");
                         }
                         else
                         {   //Left swipe
                             Debug.Log("Left Swipe");
                         }*/
                    if (lp.y > fp.y)  //If the movement was up
                    {   //Up swipe
                        Debug.Log("Up Swipe");
                        SwipeUp();
                    }
                    else
                    {   //Down swipe
                        Debug.Log("Down Swipe");
                        SwipeDown();
                    }
                }
            }
            
        }
    }

    public void SwipeButton(int index)
    {
       
       camera.transform.DOMove(new Vector3(0, index, camera.transform.position.z), cameraSpeed, false);
      
    }

    public void SwipeUp()
    {
        if (camera.transform.position.y == -10)
            return;
        else if (camera.transform.position.y == 0)
            camera.transform.DOMove(new Vector3(0, -10, camera.transform.position.z), cameraSpeed, false);
        else if (camera.transform.position.y == 10)
            camera.transform.DOMove(new Vector3(0, 0, camera.transform.position.z), cameraSpeed, false);
    }
    public void SwipeDown()
    {
        if (camera.transform.position.y == 10)
            return;
        else if (camera.transform.position.y == 0)
            camera.transform.DOMove(new Vector3(0, 10, camera.transform.position.z), cameraSpeed, false);
        else if (camera.transform.position.y == -10)
            camera.transform.DOMove(new Vector3(0, 0, camera.transform.position.z), cameraSpeed, false);
    }
    public void InstaniateEffect(int i,Vector2 pos)
    {  
        GameObject a = Instantiate(slotEffect, pos, Quaternion.identity);
        a.GetComponent<SpriteRenderer>().sprite = effectImages[i];
        
    }
    public void Particle()
    {
        ps.Play();
        this.Wait(2, () => ps.Stop());
    }
    public void MachineTagText()
    {
        tagText.text = SlotItem.itemName;
    }

    public void MachineTextPopUp(string content,Vector3 scaleTo,float duration)
    {
        machineRewardText.text = content;
        machineRewardText.transform.DOScale(scaleTo, duration);
        this.Wait(4, () => machineRewardText.transform.DOScale(Vector3.zero, duration));
    }
    public void CollectPopup()
    {
        CoinAnimater.instance.AddCoins(new Vector3(0, 0, 0), 100);
        AudioManager.instance.Play("DailyReward");
        PopUpPanel.DOScale(0, 0.5f);
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
    void DisplayTime(float timeToDisplay,TextMeshProUGUI text)
    {
        float minutes = Mathf.FloorToInt(timeToDisplay / 60);
        float seconds = Mathf.FloorToInt(timeToDisplay % 60);
        text.text = string.Format("{0:00}:{1:00}", minutes, seconds);
    }
}
