/*
http://www.cgsoso.com/forum-211-1.html

CG搜搜 Unity3d 每日Unity3d插件免费更新 更有VIP资源！

CGSOSO 主打游戏开发，影视设计等CG资源素材。

插件如若商用，请务必官网购买！

daily assets update for try.

U should buy the asset from home store if u use it in your project!
*/

using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class SoundFxManager : MonoBehaviour 
{
    public static SoundFxManager instance;
    public AudioSource buttonTapSound;
    public AudioSource spinSound;
    public AudioSource columnSpinCompleteSound;
    public AudioSource scatterScound;
    public AudioSource freeSpinScound;
    public AudioSource bigWinSound;
    public AudioSource bonusRoundScound;
    public AudioSource WinSound;
    public AudioSource loseScound;
    public AudioSource MultiplierWinSound;
    public AudioSource above_2XMultiplierWinSound;
    public AudioSource BonusPopupSound;
    public AudioSource UseMagicSpinSound;
    public AudioSource LevelUpSound;
    public AudioSource MaxLineButtonSound;
    public AudioSource dailyRewardSound;
    public AudioSource specialPopupSound;
    public AudioSource jackpotPopupSound;
    public AudioSource singleLineIndicationSound;
    public AudioSource instructionChageSound;

	public List<AudioSource> allClips = new List<AudioSource>();
	
    void Awake()
    {
        instance = this;
    }

	void Start () {
        spinSound.Play();
		allClips.Add(buttonTapSound);
		allClips.Add(spinSound);
		allClips.Add(columnSpinCompleteSound);
		allClips.Add(scatterScound);
		allClips.Add(freeSpinScound);
		allClips.Add(bigWinSound);
		allClips.Add(bonusRoundScound);
		allClips.Add(WinSound);
		allClips.Add(loseScound);
		allClips.Add(MultiplierWinSound);
		allClips.Add(above_2XMultiplierWinSound);
		allClips.Add(BonusPopupSound);
		allClips.Add(UseMagicSpinSound);
		allClips.Add(LevelUpSound);
		allClips.Add(MaxLineButtonSound);
		allClips.Add(dailyRewardSound);
		allClips.Add(specialPopupSound);
		allClips.Add(jackpotPopupSound);
		allClips.Add(singleLineIndicationSound);
		allClips.Add(instructionChageSound);
	}
	
	
	public void MuteAllClips(){
		for(int i = 0; i < allClips.Count; i++){
			if(allClips[i])
				allClips[i].mute = !allClips[i].mute;
		}
	}
}
