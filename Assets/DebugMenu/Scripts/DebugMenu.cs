using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Diagnostics;
using UnityEngine.Events;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

namespace Tastypill.Debug
{
    public class DebugMenu : MonoBehaviour
    {
        /// <summary>
        /// Instance variable used for singleton reference
        /// </summary>
        public static DebugMenu instance;

        /// <summary>
        /// local variable for whether or not the menu is open
        /// </summary>
        private bool debugMenuOpen;

        /// <summary>
        /// Toggle this to disable the debug menu in releases
        /// TODO: How can we make this more automatic??
        /// </summary>
        public bool DISABLE_FOR_RELEASE = false;

        /// <summary>
        /// The default JSON string for default balance in the game
        /// </summary>
        public string defaultJSONObject;

        /// <summary>
        /// Toggle this to default to the 'defaultJSONObject' string
        /// Otherwise, it will load from PlayerPrefs
        /// </summary>
        public bool useDefaultData;

        /// <summary>
        /// This SliderData struct object stores the default data as parsed
        /// from the 'defaultJSONObject' string
        /// </summary>
        private SliderData defaultData;

        /// <summary>
        /// Set the JSON data in the structs in the inspector to automatically
        /// map new data to specific AB splits
        /// </summary>
        public List<ABGroupData> abTestGroups;

        /// <summary>
        /// If the user updates the debug values (and we are using default
        /// data parsed from the 'defaultJSONObject') during a session, then this
        /// flag is set to ensure the default isn't automatically reloaded
        /// </summary>
        private static bool defaultDataOveridden;

        [Header("References")]
        /// <summary>
        /// Public reference to the vertical layout component in the prefab
        /// This is used to add objects to the appropriate parent
        /// </summary>
        public Transform vertLayout;

        /// <summary>
        /// Public reference to the overlay and wipe rect transforms for some
        /// animation when opening and closing the menu
        /// </summary>
        public RectTransform menuOverlay, menuWipe;

        /// <summary>
        /// Prefab references for various types of debug inputs
        /// </summary>
        [Header("Prefabs")]
        public GameObject buttonPrefab;
        public GameObject colorPrefab, labelPrefab, sliderPrefab;

        private List<DebugSlider> sliders;
        private List<string> registeredSliders;

        private SliderData sliderData;

        private Canvas canvas;
        private CanvasGroup cGroup;
        private RectTransform canvasRect;

        public delegate void DebugMenuEvent();
        public static DebugMenuEvent debugMenuOpened, debugMenuClosed, debugMenuCreated;

        private void OnEnable()
        {
            instance = this;
            sliders = new List<DebugSlider>();
        }

        private IEnumerator Start()
        {
            canvas = GetComponent<Canvas>();
            canvasRect = GetComponent<RectTransform>();
            cGroup = GetComponent<CanvasGroup>();

            CreateDebugButton("Crash Game", ForceCrash, Color.red);
            CreateDebugButton("Clear Save Data", ClearSaveData, Color.white);
            CreateDebugButton("SAVE Settings To Clipboard", CopySettingsToClipboard, Color.green);
            CreateDebugButton("LOAD Settings From Clipboard", LoadSettingsFromClipboard, Color.cyan);

            cGroup.interactable = false;
            canvas.enabled = false;

            debugMenuCreated?.Invoke();

            yield return null;

            bool overrideDataUsed = false;
            for (int i = 0; i < abTestGroups.Count; i++)
            {
                if (abTestGroups[i].testGroup == ABManager.CurrentABGroup)
                {
                    LoadSettingsFromJSON(abTestGroups[i].JSONData, out defaultData);
                    SetSliderToData(defaultData);
                    overrideDataUsed = true;
                }
            }
            if (!overrideDataUsed)
            {
                if (useDefaultData && !defaultDataOveridden)
                {
                    LoadSettingsFromJSON(defaultJSONObject, out defaultData);
                    SetSliderToData(defaultData);
                }
            }

            yield break;
        }

        public void OverrideDefaultData()
        {
            if (!debugMenuOpen) return;
            defaultDataOveridden = true;
        }

        public void ToggleDebugMenu()
        {
            if (DISABLE_FOR_RELEASE) return;
            if (!debugMenuOpen && !canvas.enabled) canvas.enabled = true;
            debugMenuOpen = !debugMenuOpen;
            cGroup.interactable = debugMenuOpen;
            if (debugMenuOpen)
            {
                debugMenuOpened?.Invoke();
            }
            else
            {
                SaveSliderValues();
                debugMenuClosed?.Invoke();
            }
        }

        public void SaveSliderValues()
        {
            foreach (DebugSlider s in sliders)
            {
                s.SaveFloatValue();
            }
        }

        private void Update()
        {
            if (debugMenuOpen)
            {
                menuOverlay.sizeDelta = Vector2.Lerp(menuOverlay.sizeDelta, Vector2.zero, Time.deltaTime * 5f);
                menuWipe.sizeDelta = Vector2.Lerp(menuWipe.sizeDelta, new Vector2(menuWipe.sizeDelta.x, 50f), Time.deltaTime * 5f);
            }
            else
            {
                menuOverlay.sizeDelta = Vector2.Lerp(menuOverlay.sizeDelta, Vector2.down * canvasRect.sizeDelta.y, Time.deltaTime * 10f);
                menuWipe.sizeDelta = Vector2.Lerp(menuWipe.sizeDelta, new Vector2(menuWipe.sizeDelta.x, 5000f), Time.deltaTime * 10f);
            }
        }

        public void CreateDebugButton(string label, UnityAction buttonAction, Color buttonColor)
        {
            GameObject newButton = Instantiate(buttonPrefab, vertLayout);
            newButton.GetComponent<DebugButton>().Init(label, buttonAction, buttonColor);
            newButton.transform.SetAsFirstSibling();
        }

        public void CreateDebugSlider(string titleText, Color sliderColor, DebugFloat floatValue, float maxValue, float minValue)
        {
            if (registeredSliders == null) registeredSliders = new List<string>();
            if (registeredSliders.Contains(titleText))
            {
                return;
            }
            registeredSliders.Add(titleText);
            GameObject newSlider = Instantiate(sliderPrefab, vertLayout);
            DebugSlider slider = newSlider.GetComponent<DebugSlider>();
            slider.Init(titleText, sliderColor, floatValue, maxValue, minValue);
            sliders.Add(slider);
            newSlider.transform.SetAsFirstSibling();
        }

        public void CreateDebugLabel(string labelText, Color bgColor)
        {
            GameObject newLabel = Instantiate(labelPrefab, vertLayout);
            DebugLabel label = newLabel.GetComponent<DebugLabel>();
            label.Initialize(labelText, bgColor);
            label.transform.SetAsFirstSibling();
        }

        public void CopySettingsToClipboard()
        {
            string clipboardText = "";
            List<DebugSlider.JSONData> sliderJsons = new List<DebugSlider.JSONData>();
            for (int i = 0; i < sliders.Count; i++)
            {
                sliderJsons.Add(sliders[i].GetJSON);
            }
            sliderData = new SliderData(sliderJsons);
            clipboardText = JsonUtility.ToJson(sliderData);
            UnityEngine.Debug.Log(clipboardText);
            UniClipboard.SetText(clipboardText);
        }

        public void LoadSettingsFromClipboard()
        {
            string clipboardText = UniClipboard.GetText();
            LoadSettingsFromJSON(clipboardText, out sliderData);
            SetSliderToData(sliderData);
        }

        private void LoadSettingsFromJSON(string json, out SliderData data)
        {
            try
            {
                data = JsonUtility.FromJson<SliderData>(json);
            }
            catch (Exception)
            {
                UnityEngine.Debug.Log("Couldnt load JSON!\nClipboard text: " + json);
                data = new SliderData();
                return;
            }
        }

        private void SetSliderToData(SliderData data)
        {
            for (int i = 0; i < sliders.Count; i++)
            {
                for (int j = 0; j < data.sliderData.Count; j++)
                {
                    if (registeredSliders[i].Equals(data.sliderData[j].sliderPref))
                    {
                        sliders[i].slider.value = data.sliderData[j].sliderValue;
                    }
                }
            }
        }

        public void ForceCrash()
        {
            Utils.ForceCrash(ForcedCrashCategory.Abort);
        }

        public void ClearSaveData()
        {
            PlayerPrefs.DeleteAll();
            SceneManager.LoadScene(0);
        }

        [System.Serializable]
        private struct SliderData
        {
            public SliderData(List<DebugSlider.JSONData> sliderData)
            {
                this.sliderData = sliderData;
            }

            public List<DebugSlider.JSONData> sliderData;
        }

        [System.Serializable]
        public struct ABGroupData
        {
            public string JSONData;
            public ABManager.ABTESTGROUP testGroup;
        }
    }
}