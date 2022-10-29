using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class News : MonoBehaviour
{
    public TMP_Text name;
    public TMP_Text newsTitle;
    public Image image;
    public void SetUpNews(Sprite image, string name, string newsTitle)
    {
        this.image.sprite = image;
        this.name.text = name;
        this.newsTitle.text = newsTitle;
    }

}
