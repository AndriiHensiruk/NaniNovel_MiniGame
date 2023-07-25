using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Naninovel;
using Naninovel.Commands;

namespace Naninovel.UI
{
    [CommandAlias("questMapClose")]
    public class questMapClose : Command
    {
        private QuestLog questMap;

        public override UniTask ExecuteAsync(AsyncToken asyncToken = default)
        {
            if (questMap == null)
            {
                questMap = Engine.GetService<IUIManager>().GetUI<QuestLog>();
            }
            questMap?.Hide();
            return UniTask.CompletedTask;
        }

    }
}
