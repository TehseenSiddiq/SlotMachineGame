using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

public class LandObject : MonoBehaviour
{
    public int value;
    public ParticleSystem ps,blastEffect;
    public GameObject targetImage;
    public LevelBuilding[] buildings;
    private SpriteRenderer image;
    public LevelBuilding[] destroyedBuildings;
    public int state;
    [SerializeField] EnemyLandManager enemyLandManager;
    private void Start()
    {
        image = GetComponent<SpriteRenderer>();
        
    }
    private void OnEnable()
    {
        value = Random.Range(20000, 99999999);
        if (!targetImage.activeSelf && !enemyLandManager.isLooted)
        {
            targetImage.SetActive(true);
        }
        state = Random.Range(0, 3);
        this.Wait(0.2f, () => SetLevel());
        
    }
    public UnityEvent interactEvent;
    private void OnMouseDown()
    {
       // Debug.Log(gameObject.name + " Pressed.");
        interactEvent.Invoke();
    }
    public void Pressed()
    {
        if (!enemyLandManager.isLooted)
        {
            if (enemyLandManager.bodyGurad)
            {
                enemyLandManager.CaugthByBodygurad();
                return;
            }
            if (targetImage.activeSelf)
            {
                targetImage.SetActive(false);
            }
            //Debug.Log(gameObject.name + " Pressed.");
            blastEffect.Play();
            ps.Play();
            enemyLandManager.amountLooted += value;
            this.Wait(1, ps.Stop);
            enemyLandManager.isLooted = true;
            image.sprite = destroyedBuildings[Game.instance.GetLevel() - 1].buildings[state].image;
            enemyLandManager.Successfull();
           // FindObjectOfType<UiManager>().CurtainEffect();
        }
    }
    public void SetLevel()
    {
      //  transform.DOScale(0.7f, 0.5f).SetEase(Ease.OutBack);
        image.sprite = buildings[Game.instance.GetLevel() - 1].buildings[state].image;
    }
}
