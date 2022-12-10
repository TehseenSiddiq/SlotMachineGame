using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class BlastEffect : MonoBehaviour
{
    [SerializeField]ParticleSystem ps;
    [SerializeField] Transform parent;

    public void PlayParticleSystem()
    {
        ps.Play();
    }
    public void CloseParent()
    {
        parent.DOScale(0, .5f);
    }
}
