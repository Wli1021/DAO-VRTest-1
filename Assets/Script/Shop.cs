using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using TMPro;

public class Shop : MonoBehaviour
{
    public static Shop instance;

    public void Awake()
    {
        if (instance == null)
            instance = this;
        else
            Destroy(gameObject);
    }

    public MessageBox messageBox;
    public enum ItemType
    {
        Land,
        LandForRent,
        Collection
    }

    [System.Serializable]
    public class ShopItem
    {
        public Sprite image;
        public int price;
        public string drp;
        public GameObject percentageBarPrefab;
        public float distancePercentage;
        public bool isPurchased = false;
        public ItemType itemType;
    }

    public List<ShopItem> ShopItemList;
    [SerializeField] GameObject ItemTemplate;
    GameObject g;
    [SerializeField] Transform ShopScrollView;
    [SerializeField] GameObject ShopPanel;
    Button buyBtn;

    void Start()
    {
        int len = ShopItemList.Count;
        for (int i = 0; i < len; i++)
        {
            g = Instantiate(ItemTemplate, ShopScrollView);
            g.transform.GetChild(0).GetComponent<Image>().sprite = ShopItemList[i].image;
            g.transform.GetChild(1).GetChild(0).GetComponent<TMP_Text>().text = ShopItemList[i].price.ToString();
            buyBtn = g.transform.GetChild(2).GetComponent<Button>();
            g.transform.GetChild(3).GetComponent<TMP_Text>().text = ShopItemList[i].drp.ToString();

            // Set the item type based on its position in the list
            if (i < 6)
            {
                ShopItemList[i].itemType = ItemType.Land;
            }
            else if (i < 12)
            {
                ShopItemList[i].itemType = ItemType.LandForRent;
            }
            else
            {
                ShopItemList[i].itemType = ItemType.Collection;
            }

            // Check if the item requires a percentage bar
            if (ShopItemList[i].itemType == ItemType.Land || ShopItemList[i].itemType == ItemType.LandForRent)
            {
                if (ShopItemList[i].percentageBarPrefab != null)
                {
                    // Instantiate percentage bar prefab as a child of the item
                    GameObject percentageBar = Instantiate(ShopItemList[i].percentageBarPrefab, g.transform);

                    // Set the position of the percentage bar relative to the item
                    percentageBar.transform.localPosition = new Vector3(12f, -28f, 0f); // Adjust the values as needed

                    // Find the "Percentage" and "Percentage Distance BG" objects within the percentageBar
                    Transform percentageTransform = percentageBar.transform.Find("Percentage");
                    Transform percentageDistanceBGTransform = percentageBar.transform.Find("Percentage Distance BG");

                    // Set the fill amount based on the distance percentage
                    if (percentageTransform != null)
                    {
                        Image percentageImage = percentageTransform.GetComponent<Image>();
                        if (percentageImage != null)
                        {
                            percentageImage.fillAmount = ShopItemList[i].distancePercentage;
                        }
                        else
                        {
                            Debug.LogError("Image component not found on 'Percentage' within the 'Percentage Bar Prefab'.");
                        }
                    }
                }
            }

            buyBtn.AddEventListener(i, OnShopItemBtnClicked);
            if (ShopItemList[i].isPurchased)
            {
                DisableBuyButton(buyBtn);
            }
        }
    }

    void OnShopItemBtnClicked(int itemIndex)
    {
        Button clickedButton = ShopScrollView.GetChild(itemIndex).GetChild(2).GetComponent<Button>();

        if (GameManager.instance.HasEnoughCoins(ShopItemList[itemIndex].price))
        {
            GameManager.instance.UseCoins(ShopItemList[itemIndex].price);

            ShopItemList[itemIndex].isPurchased = true;

            // Handle item type-specific logic
            switch (ShopItemList[itemIndex].itemType)
            {
                case ItemType.Land:
                    AssetManager.instance.PurchaseLand(ShopItemList[itemIndex].price);
                    break;
                case ItemType.LandForRent:
                    AssetManager.instance.PurchaseRentedLand(ShopItemList[itemIndex].price);
                    break;
                case ItemType.Collection:
                    AssetManager.instance.PurchaseCollection(ShopItemList[itemIndex].price);
                    break;
            }

            DisableBuyButton(clickedButton);

            GameManager.instance.UpdateAllCoinsUIText();
        }
        else
        {
            messageBox.ShowMessageBox("You don't have enough coins!");
            Debug.Log("You don't have enough coins!");
        }
    }

    void DisableBuyButton(Button clickedButton)
    {
        // Disable the clicked button
        clickedButton.interactable = false;
        clickedButton.transform.GetChild(0).GetComponent<TMP_Text>().text = "PURCHASED";
    }
}
