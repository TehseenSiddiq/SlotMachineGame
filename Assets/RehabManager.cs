using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RehabManager : MonoBehaviour
{
    public static float rehabTimer = 0;
    public float rehabMaxTime = 360;

    public bool InRehab()
    {
        if (rehabTimer > 0)
        {
            rehabTimer -= Time.deltaTime;
            return true;
        }
        return false;     
    }
}
