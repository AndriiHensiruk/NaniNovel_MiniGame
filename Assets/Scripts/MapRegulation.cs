using System.Collections;
using System.Collections.Generic;
using Naninovel;
using Naninovel.Commands;
using UnityEngine;
using UnityEngine.UI;
using Naninovel.Runtime.UI;

namespace Naninovel.UI
{
    [CommandAlias("MapRegulation")]
    public class MapRegulation : Command
    {
        private GameObject questTextHolder;
        
        private Text questText;
        public StringParameter missionName;


        public override UniTask ExecuteAsync(AsyncToken asyncToken = default)
        {
            if (Assigned(missionName))
            {
                if (questText == null)
                {
                    questTextHolder = GameObject.Find("TextOfQuest");
                    questText = questTextHolder.GetComponent<Text>();
                }
                
                questText.text = missionName;
                
            }
            return UniTask.CompletedTask;
        }

    }

}