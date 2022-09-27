using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SettingManager : MonoBehaviour
{
    public bool music = true;
    public bool sound = true;
    public Image soundImage, musicImage;
    public Sprite[] OnOffSpirte;

    private void Start()
    {
        music = ES3.Load("Music", music);
        sound = ES3.Load("Sound", sound);
        if (music)
            musicImage.sprite = OnOffSpirte[0];
        else
            musicImage.sprite = OnOffSpirte[1];
        if (sound)
            soundImage.sprite = OnOffSpirte[0];
        else
            soundImage.sprite = OnOffSpirte[1];
    }

    public void MusicToggle()
    {
        music = !music;
        if (music)
        {
            musicImage.sprite = OnOffSpirte[0];
            FindObjectOfType<AudioManager>().Play("Theme");
        }
        else
        {
            musicImage.sprite = OnOffSpirte[1];
            FindObjectOfType<AudioManager>().Pause("Theme");
        }
           

    }
    public void SoundToggle()
    {
        sound = !sound;
        if (sound)
            soundImage.sprite = OnOffSpirte[0];
        else
            soundImage.sprite = OnOffSpirte[1];
    }
    private void OnApplicationQuit()
    {
        ES3.Save("Music", music);
        ES3.Save("Sound", sound);
    }
}
