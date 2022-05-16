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
        Debug.Log(dt1+" : " + dt2+" = "+timeSpan);
        timeSinceAppClosed = timeSpan.TotalSeconds;
       // Debug.Log("TimePassed " + timeSpan.TotalSeconds);
       // Debug.Log("Time Passed : " + dateSinceLast);

    }


    private void OnApplicationQuit()
    {

        ES3.Save("dateQuit", DateTime.Now);
    }
}
