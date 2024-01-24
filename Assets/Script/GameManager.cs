using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class GameManager : MonoBehaviour
{
    public static GameManager instance;
    public GameObject shopUI;

    [SerializeField] TMP_Text[] allCoinsUIText;

    public int coins;



    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }

    private void Start()
    {
        UpdateAllCoinsUIText();
    }

    public void ToggleShopUI()
    {
        shopUI.SetActive(!shopUI.activeSelf);
    }

    public void UseCoins(int amount)
    {
        coins -= amount;
    }

    public bool HasEnoughCoins(int amount)
    {
        return (coins >= amount);
    }

    public void UpdateAllCoinsUIText()
    {
        // Calculate total voting power from assets and coins
        int totalVotingPowerFromAssets = AssetManager.instance.GetTotalVotingPower();

        for (int i = 0; i < allCoinsUIText.Length; i++)
        {
            allCoinsUIText[i].text = allCoinsUIText[i].text = "Coins: " + coins.ToString();
        }
    }
}
