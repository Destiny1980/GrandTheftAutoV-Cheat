#pragma once

namespace Cheat
{
	namespace Controls
	{
		void Loop();
		void ChangeControlsState(bool State);
		void MenuGUIFadeFunction(int Type, bool FadeIn);
		void DoMenuGUIFade(bool FadeIn);
		extern bool ControlsDisabled;
		extern int GUIKeyPressDelay;
		extern int KeyPressPreviousTick;
		extern int OpenGUIKey;
		extern int GUINavigationKey;
		extern int SaveSelectableKey;
		extern bool SelectPressed;
		extern bool LeftPressed;
		extern bool RightPressed;
	}
}