using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DateTimeManager : MonoBehaviour
{
    DateTime dt1, dt2;
    // Start is called before the first frame update
    void Start()
    {
        dt1 = DateTime.Now;
        dt2 = ES3.Load("dateQuit", dt2);
        TimeSpan timeSpan = dt1 - dt2;
        Debug.Log("TimePassed " + timeSpan.TotalSeconds);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private void OnApplicationQuit()
    {
        DateTime dateQuit = DateTime.Now;
        ES3.Save("dateQuit", dateQuit);
        
    }
}
