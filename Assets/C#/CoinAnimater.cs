using UnityEngine;
using UnityEngine.UI;
using TMPro;
using DG.Tweening;
using System.Collections.Generic;

public class CoinAnimater : MonoBehaviour
{
    //References
    [Header("UI references")]
    [SerializeField] TMP_Text coinUIText;
    [SerializeField] GameObject animatedCoinPrefab;
    [SerializeField] Transform target;

    [Space]
    [Header("Available coins : (coins to pool)")]
    [SerializeField] int maxCoins;
    Queue<GameObject> coinsQueue = new Queue<GameObject>();


    [Space]
    [Header("Animation settings")]
    [SerializeField] [Range(0.5f, 2f)] float minAnimDuration;
    [SerializeField] [Range(0.9f, 5f)] float maxAnimDuration;

    [SerializeField] Ease easeType;
    [SerializeField] float spread;

    Vector3 targetPosition;


    private int _c = 0;

    public static CoinAnimater instance;

    void Awake()
    {
        targetPosition = target.position;
        instance = this;
        //prepare pool
        PrepareCoins();
    }

    void PrepareCoins()
    {
        GameObject coin;
        for (int i = 0; i < maxCoins; i++)
        {
            coin = Instantiate(animatedCoinPrefab);
            coin.transform.parent = transform;
            coin.SetActive(false);
            coinsQueue.Enqueue(coin);
        }
    }

    void Animate(Vector3 collectedCoinPosition, int amount)
    {
        for (int i = 0; i < amount; i++)
        {
            this.Wait(0.1f, () => { });
           
            //check if there's coins in the pool
            if (coinsQueue.Count > 0)
            {
               // FindObjectOfType<AudioManager>().Play("Coin");
                //extract a coin from the pool
                GameObject coin = coinsQueue.Dequeue();
               // FindObjectOfType<AudioManager>().Play("Coin");
                coin.SetActive(true);

                //move coin to the collected coin pos
                coin.transform.position = collectedCoinPosition + new Vector3(Random.Range(-spread, spread), 0f, -10f);

                //animate coin to target position
                float duration = Random.Range(minAnimDuration, maxAnimDuration);
                coin.transform.DOMove(targetPosition, duration)

                .SetEase(easeType)
                .OnComplete(() => {
                    //executes whenever coin reach target position
                    coin.SetActive(false);
                    coinsQueue.Enqueue(coin);
                  //  FindObjectOfType<AudioManager>().Play("Coin");
                  //  Coins++;
                });
            }
        }
    }

    public void AddCoins(Vector3 collectedCoinPosition, int amount)
    {
        Animate(collectedCoinPosition, amount);
    }
    
}