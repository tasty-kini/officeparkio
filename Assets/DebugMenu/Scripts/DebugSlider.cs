using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Tastypill.Debug
{
    public class DebugSlider : MonoBehaviour
    {
        [HideInInspector]
        public DebugFloat floatValue;

        public TMPro.TextMeshProUGUI titleLabel, valueLabel;
        public Image sliderHandle, sliderBG;
        public Slider slider;

        private JSONData jsonData;

        public JSONData GetJSON
        {
            get
            {
                return new JSONData(titleLabel.text, floatValue);
            }
        }

        public void LoadJSON(JSONData data)
        {
            slider.value = data.sliderValue;
        }

        public void Init(string titleText, Color sliderColor, DebugFloat floatValue, float maxValue, float minValue)
        {
            //UnityEngine.Debug.Log("Creating Debug Slider: " + titleText + ", " + floatValue);
            titleLabel.text = titleText;
            sliderBG.color = new Color(sliderColor.r / 2f, sliderColor.g / 2f, sliderColor.b / 2f);
            sliderHandle.color = sliderColor;
            slider.maxValue = maxValue;
            slider.minValue = minValue;
            this.floatValue = floatValue;
            if (PlayerPrefs.HasKey("DEBUG_"+ titleLabel.text))
            {
                float value = PlayerPrefs.GetFloat("DEBUG_" + titleLabel.text);
                //UnityEngine.Debug.Log("Loaded saved value " + value + " with key: " + "DEBUG_" + titleLabel.text);
                slider.value = value;
                floatValue.UpdateValue(value);
                valueLabel.text = value.ToString();
            }
            else
            {
                slider.value = floatValue;
                valueLabel.text = floatValue.ToString();
            }
        }

        public void SaveFloatValue()
        {
            PlayerPrefs.SetFloat("DEBUG_" + titleLabel.text, floatValue);
        }

        public void HandleSliderChanged(System.Single value)
        {
            if (floatValue == null) return;
            DebugMenu.instance.OverrideDefaultData();
            valueLabel.text = value.ToString();
            floatValue.UpdateValue(value);
            //UnityEngine.Debug.Log(titleLabel.text + " changed: " + value);
        }

        [System.Serializable]
        public struct JSONData
        {
            public string sliderPref;
            public float sliderValue;

            public JSONData(string sliderPref, float sliderValue)
            {
                this.sliderPref = sliderPref;
                this.sliderValue = sliderValue;
            }
        }
    }

}