using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RehabManager : MonoBehaviour
{
    public static float rehabTimer = 0;
    public float rehabMaxTime = 360;
    public GameObject blonjeBible,video,endRehabScreen;
    public float videoTime;
    

    private void Start()
    {
        rehabTimer = ES3.Load("RehabTime", rehabTimer);
        rehabTimer -= (float)DateTimeManager.timeSinceAppClosed;
     //   StartRehab();
    }
    private void LateUpdate()
    {
        if (video.activeSelf)
        {
            videoTime -= Time.deltaTime;

        }
        else
            videoTime = 397;
        if(videoTime <= 0)
        {
            endRehabScreen.SetActive(true);
            rehabTimer = 0;
        }
    }
    public static bool InRehab()
    {
        if (rehabTimer > 0)
        {
            rehabTimer -= Time.deltaTime;
            return true;
        }
        return false;     
    }
    public void StartRehab()
    {
        blonjeBible.SetActive(true);
        rehabTimer = rehabMaxTime;
    }

    private void OnApplicationQuit()
    {
        ES3.Save("RehabTime", rehabTimer);
    }
}
