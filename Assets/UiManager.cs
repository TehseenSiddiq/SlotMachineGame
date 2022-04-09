using DG.Tweening;
using UnityEngine;
using TMPro;

public class UiManager : MonoBehaviour
{
    public static UiManager instance;

    private Vector3 fp;   //First touch position
    private Vector3 lp;   //Last touch position
    private float dragDistance;  //minimum distance for a swipe to be registered
    [SerializeField] GameObject camera;
    [SerializeField] float cameraSpeed;

    [SerializeField] RectTransform sidePanel;

    [SerializeField] GameObject slotEffect;
    public Sprite[] effectImages;
    public ParticleSystem ps;

    [SerializeField] TextMeshProUGUI tagText;

    private void Awake()
    {
        instance = this;
    }

    void Start()
    {
        dragDistance = Screen.height * 15 / 100; //dragDistance is 15% height of the screen
    }

    void Update()
    {
        DragCamera();
        //Debug.Log(Time.);
    }

    public void SidePanel(int index)
    {
        sidePanel.DOAnchorPos(new Vector3(index, 0, 0), 0.4f);
    }
    void DragCamera()
    {
        if (Input.touchCount == 1) // user is touching the screen with a single touch
        {
            Touch touch = Input.GetTouch(0); // get the touch
            if (touch.phase == TouchPhase.Began) //check for the first touch
            {
                fp = touch.position;
                lp = touch.position;
            }
            else if (touch.phase == TouchPhase.Moved) // update the last position based on where they moved
            {
                lp = touch.position;
            }
            else if (touch.phase == TouchPhase.Ended) //check if the finger is removed from the screen
            {
                lp = touch.position;  //last touch position. Ommitted if you use list

                //Check if drag distance is greater than 20% of the screen height
                if (Mathf.Abs(lp.x - fp.x) > dragDistance || Mathf.Abs(lp.y - fp.y) > dragDistance)
                {
                    //It's a drag
                    //check if the drag is vertical or horizontal
                    /* if (Mathf.Abs(lp.x - fp.x) > Mathf.Abs(lp.y - fp.y))
                     {   //If the horizontal movement is greater than the vertical movement...
                         if ((lp.x > fp.x))  //If the movement was to the right)
                         {   //Right swipe
                             Debug.Log("Right Swipe");
                         }
                         else
                         {   //Left swipe
                             Debug.Log("Left Swipe");
                         }*/
                }
                else
                    {   //the vertical movement is greater than the horizontal movement
                        if (lp.y > fp.y)  //If the movement was up
                        {   //Up swipe
                            Debug.Log("Up Swipe");
                            if (camera.transform.position.y == -12)
                                return;
                            else if (camera.transform.position.y == 0)
                                camera.transform.DOMove(new Vector3(0, -12, camera.transform.position.z), cameraSpeed, false);
                            else if (camera.transform.position.y == 12)
                                camera.transform.DOMove(new Vector3(0, 0, camera.transform.position.z), cameraSpeed, false);
                        }
                        else
                        {   //Down swipe
                            Debug.Log("Down Swipe");
                            if (camera.transform.position.y == 12)
                                return;
                            else if (camera.transform.position.y == 0)
                                camera.transform.DOMove(new Vector3(0, 12, camera.transform.position.z), cameraSpeed, false);
                            else if (camera.transform.position.y == -12)
                                camera.transform.DOMove(new Vector3(0, 0, camera.transform.position.z), cameraSpeed, false);
                        }
                    }
                }
                else
                {   //It's a tap as the drag distance is less than 20% of the screen height
                    Debug.Log("Tap");
                }
            
        }
    }

    public void InstaniateEffect(int i,Vector2 pos)
    {  
        GameObject a = Instantiate(slotEffect, pos, Quaternion.identity);
        a.GetComponent<SpriteRenderer>().sprite = effectImages[i];
        
    }
    public void Particle()
    {
        ps.Play();
        this.Wait(2, () => ps.Stop());
    }
    public void MachineTagText()
    {
        tagText.text = SlotItem.itemName;
    }
}
