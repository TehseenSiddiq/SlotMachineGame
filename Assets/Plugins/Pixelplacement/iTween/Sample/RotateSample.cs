using UnityEngine;
using DG.Tweening;

public class RotateSample : MonoBehaviour
{
    [SerializeField] float ran = 0.5f;
	void Start(){
        ran = Random.Range(0, 1.5f);
		iTween.RotateBy(gameObject, iTween.Hash("x", .25, "easeType", "easeInOutBack", "loopType", "pingPong", "delay", ran));
        
	}
    private void LateUpdate()
    {
        //  iTween.RotateBy(this.gameObject, new Vector3(0, 0, 1), 50);
        transform.RotateAround(transform.position, transform.forward, Time.deltaTime * 10f);
    }
}

