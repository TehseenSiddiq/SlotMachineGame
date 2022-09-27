using TMPro;
using UnityEngine;

public class Store : MonoBehaviour
{
    public int[] prices;
    public int value;
    private int level;
    public TMP_Text BtnText;
    public string id;

    private void Start()
    {
        level = ES3.Load("Store " + id, level);
        prices = ES3.Load("Prices " + id, prices);

        BtnText.text = prices[value].ToString();
        if (prices[value] == 0)
        {
            BtnText.text = "Owned";
        }
        if (level == value)
        {
            BtnText.text = "Selected";
        }
    }
    public void setValue(int index)
    {
        value += index;
        if (value <= 0)
        {
            value = 0;
        }
     
        else if (value > prices.Length - 1) 
            value = prices.Length-1;

        
        BtnText.text = prices[value].ToString();
        if(prices[value] == 0)
        {
            BtnText.text = "Owned";
        }
        if(level == value)
        {
            BtnText.text = "Selected";
        }
    }
    public void Buy()
    {
        if(Game.instance.GetCash() >= prices[value])
        {
            Debug.Log("Woring");
            level = value;
            Game.instance.SetCash( Game.instance.GetCash()- prices[value]);
            prices[value] = 0;
            ES3.Save("Store " + id, level);
            if (level == value)
            {
                BtnText.text = "Selected";
            }

            Game.instance.SaveGame();
        }
    }
    private void LateUpdate()
    {
        if (prices[value] == 0 &&BtnText.text != "Selected")
        {
            BtnText.text = "Owned";
        }
       
    }
    private void OnApplicationQuit()
    {
        ES3.Save("Prices " + id, prices);
    }
}
