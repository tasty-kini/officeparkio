using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ABManager : MonoBehaviour
{
    private static ABManager instance;

    public static ABManager Instance
    {
        get
        {
            if(instance == null)
            {
                instance = new GameObject("ABManager").AddComponent<ABManager>();
            }
            return instance;
        }
    }

    public enum ABTESTGROUP
    {
        BOUNCY_FLOOR,
        LOSE_STATE,
        CONTROL_1_1,
        NEW_BONUS_LOSE,
        NEW_BONUS_BOUNCE,
        COUNT
    };

    private static ABTESTGROUP currentGroup;

    public static ABTESTGROUP CurrentABGroup
    {
        get
        {
            return currentGroup;
        }
    }

    public string Initialize()
    {
        List<string> dimensions = new List<string>();

        for (int i = 0; i < (int)ABTESTGROUP.COUNT; i++)
        {
            dimensions.Add(((ABTESTGROUP)i).ToString());
        }

        string groupName;
        if (!PlayerPrefs.HasKey("GroupID"))
        {
            int randomIndex = System.DateTime.Now.Second % dimensions.Count;
            PlayerPrefs.SetString("GroupID", dimensions[randomIndex]);
            groupName = dimensions[randomIndex];
            currentGroup = (ABTESTGROUP)randomIndex;
        }
        else
        {
            groupName = PlayerPrefs.GetString("GroupID");

            try
            {
                currentGroup = (ABTESTGROUP)System.Enum.Parse(typeof(ABTESTGROUP), groupName);
            }
            catch (System.Exception)
            {
                Debug.LogError("COULD NOT PARSE GROUP!!");
            }
        }

        return groupName;
    }

    public void NextABGroup()
    {
        currentGroup = (ABTESTGROUP)((((int)currentGroup) + 1) % (int)ABTESTGROUP.COUNT);
        PlayerPrefs.SetString("GroupID", currentGroup.ToString());
        UnityEngine.SceneManagement.SceneManager.LoadScene(0);
    }
}
