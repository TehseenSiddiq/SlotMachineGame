using TMPro;
using UnityEngine;
using UnityEngine.UI;
using static iTween;

public class WheelManager : MonoBehaviour
{
    public bool spinning;
    [SerializeField]
    private float spinTime;
    [SerializeField]
    private float spinRate;
    [SerializeField]
    private float randomVal;
    public Transform wheel;
    private bool spun;
    public GameObject spinBtn, collectBtn;
    public float[] angles;
    public long[] prices;
   // public SlotItemType itemType = SlotItemType.Normal;
    [SerializeField] EaseType easeType;
    public Button SpinButton;
    bool effect = false;
    private bool isResulted;
    public TextMeshProUGUI text;

    public TextMeshProUGUI levelText;

    public ParticleSystem ps;
  //  public ParticleSystem ps2;

    [SerializeField]private float timeCount = 0;
    private int index;
    // Start is called before the first frame update
    void Start()
    {
        spinRate = Random.Range(250, 400);
        randomVal = Random.Range(100, 150);
        timeCount = ES3.Load("Time", timeCount);
        this.Wait(1, () => {
            //Debug.Log("Time Since App Closed : " + (float)DateTimeManager.timeSinceAppClosed);
            timeCount -= (float)DateTimeManager.timeSinceAppClosed;
        });
    }

    // Update is called once per frame
    void Update()
    {
        if(timeCount> 0)
        {
            timeCount -= Time.deltaTime;
            SpinButton.interactable = false;
            FindObjectOfType<UiManager>().DisplayTime(timeCount, text);
        }
        else if(timeCount <= 0 && RehabManager.InRehab())
        {
            SpinButton.interactable = false;
            FindObjectOfType<UiManager>().DisplayTime(RehabManager.rehabTimer, text);
        }
        else
        {
            FindObjectOfType<UpdateSideNote>().wheelNote = 1;
            SpinButton.interactable = true;
            text.text = "Spin";
        }
        //Debug.Log("Rotation: " + transform.eulerAngles.z);
        if (spinning)
        {
          //  iTween.Defaults.easeType = iTween.EaseType.easeInElastic;
           // iTween.MoveTo(gameObject, new Vector3(transform.position.x, 0.2f + SlotManager.instance.verticalGap + indexInColumn * (-SlotManager.instance.verticalGap), transform.position.z), 1f);
            wheel.Rotate(new Vector3(0, 0, spinRate * Time.deltaTime));
            spinTime += Time.deltaTime;

            if (spinTime > 7.0f)
            {
                spinRate -= Time.deltaTime * randomVal;
            }
            if (spinRate <= 0.0f && !spun)
            {
                foreach (var angle in angles)
                {
                    
                    if(angle - transform.eulerAngles.z <= 45 && angle - transform.eulerAngles.z > 0)
                    {
                       // iTween.Defaults.easeType = iTween.EaseType.easeInElastic;
                        iTween.RotateTo(gameObject, new Vector3(transform.eulerAngles.x, transform.eulerAngles.y, angle), 2);
                       // transform.eulerAngles = new Vector3(transform.eulerAngles.x, transform.eulerAngles.y,angle);
                        break;
                    }
                }
                this.Wait(2.1f, () => Result());

                FindObjectOfType<AudioManager>().Pause("SpinSound");
            }
        }
    }

    void Result()
    {
        collectBtn.SetActive(true);
        if (transform.eulerAngles.z == 180 || transform.eulerAngles.z == 90)
        {
           // ps2.Play();
            AudioManager.instance.Play("Losse");
            this.Wait(2.5f, () => FindObjectOfType<RehabManager>().StartRehab());
            if (!effect)
            {
                UiManager.instance.InstaniateEffect(5,new Vector2(0,11),SlotManager.instance.popUpDelay[5]);
                effect = true;
            }
        }
        else
        {
            ps.Play();
            AudioManager.instance.Play("JackPotSound");
            if (transform.eulerAngles.z == 45 || transform.eulerAngles.z == 315)
            {
                if (!isResulted)
                {
                    index = 0;
                    isResulted = true;
                }
            }
            else if(transform.eulerAngles.z == 135)
            {
                if (!isResulted)
                {
                    index = 2;
                    isResulted = true;
                }
            }
            else if (transform.eulerAngles.z == 225 || transform.eulerAngles.z == 270 || transform.eulerAngles.z == 360)
            {
                if (!isResulted)
                {
                    index = 3;
                    isResulted = true;
                }
            }

            Game.instance.SaveGame();
        }
        spun = true;
        spinning = false;
        spinRate = Random.Range(250, 400);
        randomVal = Random.Range(100, 150);
        spinTime = 0;
    }
    public void Spin()
    {
        spinning = true;
        spinBtn.SetActive(false);
        FindObjectOfType<AudioManager>().Play("SpinSound");
        timeCount = 86400;
    }
    public void Collect()
    {

        if (ps.isPlaying)
            ps.Stop();
        //else
        //ps2.Stop();
        Game.instance.SetCash(Game.instance.GetCash() + prices[index]);
        CoinAnimater.instance.AddCoins(new Vector3(0, 5f, 0), 100);
        spun = false;
        collectBtn.SetActive(false);
        spinBtn.SetActive(true);
        Game.instance.SaveGame();
    }
   
    public void AnimateCoin()
    {
        CoinAnimater.instance.AddCoins(new Vector3(0, 6.5f, 0), 100);
    }
    private void OnApplicationQuit()
    {
        ES3.Save("Time", timeCount);
    }
}
