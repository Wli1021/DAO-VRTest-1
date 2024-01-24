using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class MessageBox : MonoBehaviour
{
    public TMP_Text messageText;
    public Button closeButton;
    public GameObject messagePanel;

    void Start()
    {
        // Hide the message box initially
        HideMessageBox();

        // Set up the close button click event
        closeButton.onClick.AddListener(HideMessageBox);
    }

    public void ShowMessageBox(string message)
    {
        messageText.text = message;
        messagePanel.SetActive(true);
    }

    public void HideMessageBox()
    {
        messagePanel.SetActive(false);
    }
}
