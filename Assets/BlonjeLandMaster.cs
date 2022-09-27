using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlonjeLandMaster : MonoBehaviour
{
    public LandManager[] landManagers;
    public int points = 0;
    public LandCompleteScript LandCompleteScript;
    bool isOpened = false;

    private void Start()
    {
        InvokeRepeating("CheckLevel", 0.2f, 0.1f);
    }

    public void CheckLevel()
    {
        if (!isOpened)
        {
            points = 0;
            foreach (LandManager landManager in landManagers)
            {

                if (landManager.completed)
                {
                    points++;
                }
                if (points >= 4)
                {
                    // LandCompleteScript.gameObject.SetActive(true);
                    LandCompleteScript.Open();
                    isOpened = true;
                }
            }
        }
    }
    public void ResetLand()
    {
        foreach (LandManager landManager in landManagers)
        {
            landManager.SetLevel();
            landManager.state = 0;
        }
    }
}
