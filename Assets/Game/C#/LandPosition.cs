using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LandPosition : MonoBehaviour
{
    public int index;
    public float pos;
    void Start()
    {
        this.Wait(1, () => { pos = transform.position.x; });

    }
    private void Update()
    {
        
    }

}
