using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Game : MonoBehaviour
{
    public static Game instance;

    private int cash = 10000;
    private int spins = 50;
    private int level = 0;


    private void Awake()
    {
        instance = this;
    }
    private void Start()
    {
        LoadGame();
    }

    public void SetCash(int cash)
    {
        this.cash = cash;
    }
    public void SetSpins(int spins)
    {
        this.spins -= spins;
    }
    public void SetLevel(int level)
    {
        this.level = level;
    }
    public int GetCash()
    {
        return cash;
    }
    public int GetSpins()
    {
        return spins;

    }
    public int GetLevel()
    {
        return level;
    }
    public void SaveGame()
    {
        ES3.Save("Cash", cash);
        ES3.Save("Spins", spins);
        ES3.Save("Level", level);
    }
    public void LoadGame()
    {
        cash = ES3.Load("Cash", cash);
        spins = ES3.Load("Spins", spins);
        level = ES3.Load("Level", level);
    }
}
