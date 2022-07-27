#pragma once

enum SelectableBitFlags
{
	SELECTABLE_DUMMY				= 1,	// Placeholder.
	SELECTABLE_DISABLED				= 2,	// The selectable is disabled, if the Select key is pressed on the selectable a message appears informing the user about the disabled state. When using this flag saving is also blocked (use of SELECTABLE_DISABLE_SAVE not needed).
	SELECTABLE_DISABLE_SAVE			= 4,	// The selectable state won't be saved when the 'save' key is pressed.
	SELECTABLE_CENTER_TEXT			= 8,	// Text will be centered relative to menu GUI. This currently only applies to the Break selectable.
	SELECTABLE_RETURN_VALUE_CHANGE	= 16,	// Function will also return when a value is changed (e.g. left or right is pressed). Currently used by Float, StringVector and Int selectable.
	SELECTABLE_HIDE_INFO_BOX		= 32,	// Forcefully (ignoring other settings) hides the Selectable Information Box for a given Selectable.
};

typedef struct VECTOR2		{ float x, y; };
typedef struct VECTOR2_2	{ float w, h; };
typedef struct RGBAF		{ int r, g, b, a, f; };
typedef struct RGBA			{ int r, g, b, a; };
typedef struct RGB			{ int r, g, b; };

namespace Cheat
{
	namespace GUI
	{
		void LoadTextureFile();
		void DrawTextInGame(std::string text, RGBAF rgbaf, VECTOR2 position, VECTOR2_2 size, bool center, bool Outline = false);
		void DrawRectInGame(RGBA rgba, VECTOR2 position, VECTOR2_2 size);
		void DrawSpriteInGame(std::string Streamedtexture, std::string textureName, float x, float y, float width, float height, float rotation, int r, int g, int b, int a);

		extern const float SelectableInfoBoxY_Default;
		extern const float SelectableInfoBoxX_Default;
		extern const float guiWidth_Default;
		extern const float guiY_Default;
		extern const float guiX_Default;
		extern float guiX;
		extern float guiY;
		extern float guiWidth;
		extern float SelectableInfoBoxX;
		extern float SelectableInfoBoxY;
		extern float SelectableHeight;
		extern std::vector <std::string> ThemeFilesVector;
		extern bool ShowHeaderBackground;
		extern bool ShowHeaderTexture;
		extern bool HideGUIElements;
		extern bool CheatGUIHasBeenOpened;
		extern bool CurrentOptionIsSavable;
		extern std::string CurrentTheme;
		extern std::string CurrentSubmenu;
		extern bool RestorePreviousSubmenu;
		extern int maxVisOptions;
		extern int currentOption;
		extern int currentOptionVisible;
		extern int previousOption;
		extern int optionCount;
		extern int optionCountVisible;
		extern int TotalOptionsCount;
		extern void* currentMenu;
		extern int menuLevel;
		extern int PreviousMenuLevel;
		extern void* PreviousMenu;
		extern int optionsArray[1000];
		extern void* menusArray[1000];
		extern RGBA PrimaryColor;
		extern RGBAF TextColorAndFont;
		extern int SelectableTransparency;
		extern int HeaderBackgroundTransparency;
		extern int TitleAndEndTransparency;
		extern int ToggleSelectableTransparency;
		extern int HeaderTextureTransparency;
		extern int EndSmallLogoTransparency;
		extern int OnlinePlayerPictureTransparency;
		extern int MenuArrowAnimationDelay;
		extern bool MenuOptionArrowAnimationState;
		extern void DeleteLoadedTheme();
		void MoveMenu(void* Submenu);
		void BackMenu();
		void CloseMenuGUI();
		void MenuGUIBottom();
		void LoadTheme(std::string ThemeFileName, bool StartUp);
		void SaveTheme(std::string ThemeFileName);

		void Title(std::string TitleName);
		void AddPlayerInfoBoxTextEntry(std::string text, int Row1 = NULL, int Row2 = NULL, int Row3 = NULL, int Row4 = NULL);
		bool Break(std::string option, int BitFlags = NULL);
		bool Option(std::string option, std::string InformationText, int BitFlags = NULL);
		bool VehicleOption(std::string VehicleModel, std::string ModelName);
		bool MenuOption(std::string option, void* NewSubmenu, int BitFlags = NULL);
		bool MenuOptionPlayerList(std::string PlayerName, int BitFlags = NULL);
		bool Toggle(std::string option, bool& TargetBool, std::string InformationText, int BitFlags = NULL);
		bool Int(std::string option, int& _int, int min, int max, int step, std::string InformationText = "Select to change", int BitFlags = NULL);
		bool Float(std::string option, float& _float, float min, float max, float steps, std::string InformationText = "", std::streamsize FloatPrecision = 3, int BitFlags = NULL);
		bool IntVector(std::string option, std::vector<int> Vector, int& position, int BitFlags = NULL);
		bool FloatVector(std::string option, std::vector<float> Vector, int& position, int BitFlags = NULL);
		bool StringVector(std::string option, std::vector<std::string> Vector, int& position, std::string InformationText, int BitFlags = NULL);
	}
}