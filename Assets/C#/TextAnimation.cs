using DG.Tweening;
using UnityEngine;

public class TextAnimation : MonoBehaviour
{
    public void Anim(string text)
    {
        GetComponent<TextMesh>().text = text;
        transform.DOScale(new Vector3(1, 1, 1), 1);
        this.Wait(5,()=>transform.DOScale(Vector3.zero, 1));
        
    }
}
