using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SizeAdjustment : MonoBehaviour
{
    [SerializeField]public Camera camera;
    // Start is called before the first frame update
    void Start()
    {
        //  transform.localScale = new Vector3(Screen.width , Screen.height , 1);
        //  camera.orthographicSize = Screen.height / 2;
        ResizeSpriteToScreen();
    }

    void ResizeSpriteToScreen()
    {
        var sr = GetComponent<SpriteRenderer>();
        if (sr == null) return;

        transform.localScale =new Vector3(1, 1, 1);

        float width = sr.sprite.bounds.size.x;
        float height = sr.sprite.bounds.size.y;

        var worldScreenHeight = Camera.main.orthographicSize * 2.0;
        var worldScreenWidth = worldScreenHeight / Screen.height * Screen.width;

        //  transform.localScale =new Vector3(, transform.localScale.y, transform.localScale.z);
        Debug.Log("Size : " + ((float)(worldScreenWidth / width)) / 1080);
        transform.localScale = new Vector3(((float)(worldScreenWidth / width)), ((float)worldScreenHeight / height), transform.localScale.z);

        
    }
}
