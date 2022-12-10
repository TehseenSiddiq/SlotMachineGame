using DG.Tweening;
using UnityEngine;

public class FlashAnimation : MonoBehaviour
{
    public Transform child;
    [SerializeField] float speed;
    public float delay = 7;

    
    void Start()
    {
        transform.DOScale(new Vector3(.35f, .35f, .35f), 1f);
        child.transform.DOScale(new Vector3(2, 2, 2), 1f);

        this.Wait(delay, () =>
        {
            transform.DOScale(new Vector3(0, 0, 0), 1.5f);
            child.transform.DOScale(new Vector3(0, 0, 0), 1.5f);
            
        });
        this.Wait(delay+2, () => Destroy(gameObject));


    }

    private void LateUpdate()
    {
        child.transform.RotateAround(transform.position, transform.forward, Time.deltaTime * speed);
    }
}
