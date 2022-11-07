using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DateTimeManager : MonoBehaviour
{
    DateTime dt1, dt2,DateLast;
    public static double timeSinceAppClosed;
    public static bool dayPassed;
    public static float totalTime;
    // Start is called before the first frame update
    void Start()
    {
        totalTime = ES3.Load("TotalTime",totalTime);
        dt1 = DateTime.Now;
        dt2 = ES3.Load("dateQuit", dt2);
        DateLast = ES3.Load("dateLast", dt2);
        TimeSpan timeSpan = dt1 - dt2;
       // Debug.Log(dt1+" : " + dt2+" = "+timeSpan);
        timeSinceAppClosed = timeSpan.TotalSeconds;
        float timeRemaining = (float)Math.Abs(((DateLast - dt1).TotalSeconds));
        totalTime += timeRemaining;
        Debug.Log(timeRemaining);
        
        if (Math.Abs((DateLast - dt1).TotalDays) > 0)
            dayPassed = true;
    }
    private void LateUpdate()
    {
        totalTime += Time.deltaTime;
        DisplayTime();
    }
    public void SetTotalTime(float amount)
    {
        totalTime = amount;
    }
    public string DisplayTime()
    {
       // Debug.Log(System.TimeSpan.FromSeconds(86400 - totalTime).ToString("hh':'mm':'ss"));
        if (86400 - totalTime <= 0)
            return "New Tasks Avaible";
        return "New Task Will Be Avaible In: \n"+System.TimeSpan.FromSeconds(86400 - totalTime).ToString("hh':'mm':'ss");
    }
    public static void SaveDayInfo()
    {
        ES3.Save("dateLast", DateTime.Now);
    }
    private void OnApplicationQuit()
    {

        ES3.Save("dateQuit", DateTime.Now);
        ES3.Save("TotalTime", totalTime);

       
    }
    
}
