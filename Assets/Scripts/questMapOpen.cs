
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Naninovel;
using Naninovel.Commands;

namespace Naninovel.UI
{
    [CommandAlias("questMapOpen")]
    public class questMapOpen : Command
    {
        private QuestLog questMap;

        public override UniTask ExecuteAsync(AsyncToken asyncToken = default)
        {
            if (questMap == null)
            {
                questMap = Engine.GetService<IUIManager>().GetUI<QuestLog>();
            }
            questMap?.Show();
            return UniTask.CompletedTask;
        }

    }
}
