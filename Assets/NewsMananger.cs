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


    private void Start()
    {
        if(Random.Range(0,4) < 2)
            CreateNews();
    }
    public void CreateNews()
    {
        for (int i = 0; i < Random.Range(0,10); i++)
        {
            GameObject news = Instantiate(NewsPrefab, content);
            news.GetComponent<News>().SetUpNews(image[Random.Range(0, image.Length)], username[Random.Range(0, username.Length)], newsTitle[Random.Range(0, newsTitle.Length)]);
        }
        newsRoom.SetActive(true);
    }
    
}
