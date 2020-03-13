using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace Tastypill.Debug
{
    public class DebugButton : MonoBehaviour
    {
        public Image buttonImage;
        public TMPro.TextMeshProUGUI buttonText;
        public Button button;

        public void Init(string label, UnityAction buttonClick, Color buttonColor)
        {
            button.onClick.AddListener(buttonClick);
            buttonText.text = label;
            buttonImage.color = buttonColor;
        }
    }
}