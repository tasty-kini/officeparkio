using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Tastypill.Debug
{
    public class DebugLabel : MonoBehaviour
    {
        public TMPro.TextMeshProUGUI label;
        public UnityEngine.UI.Image bgImage;

        public void Initialize(string labelText, Color bgColor)
        {
            label.text = labelText;
            bgImage.color = bgColor;
        }
    }
}