using DG.Tweening;
using UnityEngine;

public class FlashAnimation : MonoBehaviour
{
    public Transform child;
    [SerializeField] float speed;
    

    void Start()
    {
        transform.DOScale(new Vector3(1, 1, 1), 1f);
        child.transform.DOScale(new Vector3(2, 2, 2), 1f);

        this.Wait(4, () =>
        {
            transform.DOScale(new Vector3(0, 0, 0), 0.5f);
            child.transform.DOScale(new Vector3(0, 0, 0), 0.5f);      
        });
        this.Wait(5, () => Destroy(gameObject));

    }

    private void LateUpdate()
    {
        child.transform.RotateAround(transform.position, transform.forward, Time.deltaTime * speed);
    }
}
