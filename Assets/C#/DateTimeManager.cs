using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DateTimeManager : MonoBehaviour
{
    DateTime dt1, dt2,DateLast;
    public static double timeSinceAppClosed;
    public static bool dayPassed;
    // Start is called before the first frame update
    void Start()
    {
        dt1 = DateTime.Now;
        dt2 = ES3.Load("dateQuit", dt2);
        DateLast = ES3.Load("dateLast", dt2);
        TimeSpan timeSpan = dt1 - dt2;
       // Debug.Log(dt1+" : " + dt2+" = "+timeSpan);
        timeSinceAppClosed = timeSpan.TotalSeconds;

        if (Math.Abs((DateLast - dt1).TotalDays) > 0)
            dayPassed = true;
    }

    public static void SaveDayInfo()
    {
        ES3.Save("dateLast", DateTime.Now);
    }
    private void OnApplicationQuit()
    {

        ES3.Save("dateQuit", DateTime.Now);

       
    }
    
}
