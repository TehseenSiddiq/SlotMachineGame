using TMPro;
using UnityEngine;

public class UpdateSideNote : MonoBehaviour
{
    public int upgradeableNote = 0;
    public int wheelNote = 0;
    public TMP_Text mainText;
    public TMP_Text wheelText;
    public TMP_Text landUpgradeableText;

    private void Start()
    {
        InvokeRepeating("Function", 1, 1);
    }
    void Function()
    {
        mainText.text = (wheelNote+ upgradeableNote).ToString();
        wheelText.text = wheelNote.ToString();
        landUpgradeableText.text = upgradeableNote.ToString();
    }
}
