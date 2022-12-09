using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BlastEffect : MonoBehaviour
{
    [SerializeField]ParticleSystem ps;

    public void PlayParticleSystem()
    {
        ps.Play();
    }
}
