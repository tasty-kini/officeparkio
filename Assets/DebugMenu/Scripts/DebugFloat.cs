using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Tastypill.Debug
{
    [System.Serializable]
    public class DebugFloat
    {
        [SerializeField]
        private float value;

        private DebugFloat(float value)
        {
            this.value = value;
        }

        public static implicit operator float(DebugFloat f)
        {
            return f.value;
        }

        public static implicit operator DebugFloat(float f)
        {
            return new DebugFloat(f);
        }

        public override string ToString()
        {
            return value.ToString();
        }

        public void UpdateValue(float newValue)
        {
            value = newValue;
        }
    }
}
