using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LandManager : MonoBehaviour
{
    public LevelBuilding[] buildings;
    // public MultiDimensionalGameObject[]
    public SpriteRenderer image;
    public GameObject buildParticles;
  //  [SerializeField]
    public int state;
    public Ease ease = Ease.OutElastic;
    public GameObject buyButton;
    public bool completed = false;

    private void Start()
    {
      //  Game.instance.SetCash(100000000);
        SetLevel();
        //   image.sprite = buildings[Game.instance.GetLevel()].buildings[state ].image;
        InvokeRepeating("BuildingNumber", 1, 1);
    }
    void BuildingNumber()
    {
        FindObjectOfType<UpdateSideNote>().upgradeableNote= 0;
        foreach (LevelBuilding building in buildings)
        {
            if(building.buildings.Length > state)
            {
                Debug.Log("PointIncreased");
                FindObjectOfType<UpdateSideNote>().upgradeableNote++;
            }
        }
       
    }
    private void LateUpdate()
    {
        
        if((buildings[Game.instance.GetLevel()-1].buildings.Length-1) <= state)
        {
            buyButton.SetActive(false);
            completed = true;
        }
        else
        {
            buyButton.SetActive(true);
            completed = false;
        }
    }

    public void Build()
    {
        bool temp = false;
        if(buildings[Game.instance.GetLevel()-1].buildings[state+1].price < Game.instance.GetCash() && !temp)
        {
            Game.instance.SetCash(Game.instance.GetCash()-buildings[Game.instance.GetLevel() - 1].buildings[state + 1].price);
            Game.instance.SaveGame();
            state++;
            GameObject a = Instantiate(buildParticles);
            a.transform.position = new Vector2(transform.position.x, transform.position.y+0.5f);
            a.transform.eulerAngles = new Vector3(-90,0,0);
            transform.DOScale(0f, 1f).SetEase(ease);
            this.Wait(1.5f,() => {
                SetLevel();
            });
            this.Wait(2.5f, () =>
            {
                a.GetComponent<ParticleSystem>().Stop();
                a.transform.DOScale(0, 1).SetEase(Ease.InBack);
            });
            temp = true;
            //Destroy(a,3f);
        }
    }
    public void SetLevel()
    {
        transform.DOScale(0.7f, 0.5f).SetEase(ease);
        image.sprite = buildings[Game.instance.GetLevel() - 1].buildings[state].image;
    }
}
