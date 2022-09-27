using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class LevelBuilding
{
    public Building[] buildings;
}
[System.Serializable]
public class Building
{
    public int price;
    public Sprite image;
}
