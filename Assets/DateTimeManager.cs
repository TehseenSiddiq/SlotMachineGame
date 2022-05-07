using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DateTimeManager : MonoBehaviour
{
    DateTime dt1, dt2,DateNow,DateLast;
    public static double timeSinceAppClosed,dateSinceLast;
    // Start is called before the first frame update
    void Start()
    {
        dt1 = DateTime.Now;
        dt2 = ES3.Load("dateQuit", dt2);
        TimeSpan timeSpan = dt1 - dt2;
        timeSinceAppClosed = timeSpan.TotalSeconds;
        Debug.Log("TimePassed " + timeSpan.TotalSeconds);
        DateNow = DateTime.Now.Date;
        DateLast = ES3.Load("DateLast", DateLast);
        TimeSpan datepass = DateNow - DateLast;
        dateSinceLast = datepass.TotalDays;
        Debug.Log("Time Passed : " + dateSinceLast);

    }


    private void OnApplicationQuit()
    {
        DateTime dateQuit = DateTime.Now;
        ES3.Save("dateQuit", dateQuit);
        if(dateSinceLast <= 0)
        {
            DateLast = DateTime.Now.Date;
            ES3.Save("DateLast", DateLast);
        }
     

    }
}
