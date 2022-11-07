using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class NewsMananger : MonoBehaviour
{
    public Sprite[] image;
    public string[] username;
    public string[] newsTitle;

    public GameObject NewsPrefab;
    public Transform content;
    public GameObject newsRoom;
    public static bool taskBlocked = false;

    private void Start()
    {
        if(Random.Range(0,5) < 2)
            CreateNews();
    }
    public void CreateNews()
    {
        taskBlocked = true;
        for (int i = 0; i < Random.Range(1,10); i++)
        {
            GameObject news = Instantiate(NewsPrefab, content);
            news.GetComponent<News>().SetUpNews(image[Random.Range(0, image.Length)], username[Random.Range(0, username.Length)], newsTitle[Random.Range(0, newsTitle.Length)]);
        }
        newsRoom.SetActive(true);
    }
    public void UnblockTask()
    {
        if(Game.instance.GetCash() >= 5000000)
        {
            taskBlocked = false;
            Game.instance.SetCash(Game.instance.GetCash() - 5000000);
        }
        
    }
    
}
