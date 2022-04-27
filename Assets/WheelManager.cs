using System.Collections;
using System.Collections.Generic;
using UnityEngine;
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
   // public SlotItemType itemType = SlotItemType.Normal;
    [SerializeField] EaseType easeType;

    public ParticleSystem ps;
    // Start is called before the first frame update
    void Start()
    {
        spinRate = Random.Range(250, 400);
        randomVal = Random.Range(100, 150);
    }

    // Update is called once per frame
    void Update()
    {
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
                this.Wait(2, () => Result());
                
                // GetComponent<BoxCollider>().enabled = true;
                //GetComponent<BoxCollider>().isTrigger = true;
                // SoundFxManager.instance.spinSound.Stop();
                // StartCoroutine(EndBonusGame());
            

            }
          
        }
      
        else
        {
            
            
        }
    }
    bool effect = false;
    void Result()
    {
       
        collectBtn.SetActive(true);
        if (transform.eulerAngles.z == 180 || transform.eulerAngles.z == 90)
        {
            if (!effect)
            {
                UiManager.instance.InstaniateEffect(5,new Vector2(0,11));
                effect = true;
            }
            
            
        }
        else
            ps.Play();
      
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
    }
    public void Collect()
    {
        ps.Stop();
        CoinAnimater.instance.AddCoins(new Vector3(0, 0, 0), 100);
        spun = false;
        collectBtn.SetActive(false);
        spinBtn.SetActive(true);
    }
}
