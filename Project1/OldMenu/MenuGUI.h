#include "pch.h"
#include "Rendering.h"
#include "ActorBase.h"
#include "MenuVars.h"
#include "ColorPicker.h"
struct check_state
{
	FLinearColor background, circle, text;
	float background_opticaly, circle_offset;
};
struct key_state
{
	FLinearColor background, text, bindText;
	bool active = false;
	bool hovered = false;
	float alpha = 0.f;
};
struct combo_state
{
	FLinearColor unselectedColor, selectedColor;
	FVector2D pos, size;
	bool active = false;
	int numElements = 0;
	std::vector<std::wstring> elements;
	int* selectedElement = 0;
};
struct tabgroup_state
{
	FLinearColor textColor;
	FVector2D pos, size;
	bool open = false;
	std::vector<std::wstring> elements;
};
struct input_state
{
	FLinearColor textColor;
	FVector2D cursorPos;
	bool focused = false;
	std::wstring* input;
};
struct popup_state
{
	FVector2D PosAtTheTime;
	float size_y;
	float size_x;
	float max_size_y;
	FVector2D OffsetAtTheTime;
	int owningElement;
	VarBase* var;
	std::function<void()> func;
};
struct colorpicker_state
{
	bool open = false;
	bool dragging = false;
	bool hueBarClicked = false;
	FVector2D lastHuePos;
	FVector2D cursorPos;
	HSBColor HSBcolor;
	FLinearColor* color;
};
namespace Gui
{

	extern float MenuScale;

	inline FVector2D GuiMin(const FVector2D& lhs, const FVector2D& rhs) { return FVector2D(lhs.X < rhs.X ? lhs.X : rhs.X, lhs.Y < rhs.Y ? lhs.Y : rhs.Y); }
	inline FVector2D GuiMax(const FVector2D& lhs, const FVector2D& rhs) { return FVector2D(lhs.X >= rhs.X ? lhs.X : rhs.X, lhs.Y >= rhs.Y ? lhs.Y : rhs.Y); }
	inline FVector2D GuiClamp(const FVector2D& v, const FVector2D& mn, FVector2D mx) { return FVector2D((v.X < mn.X) ? mn.X : (v.X > mx.X) ? mx.X : v.X, (v.Y < mn.Y) ? mn.Y : (v.Y > mx.Y) ? mx.Y : v.Y); }
	inline FVector2D GuiLerp(const FVector2D& a, const FVector2D& b, float t) { return FVector2D(a.X + (b.X - a.X) * t, a.Y + (b.Y - a.Y) * t); }
	inline FVector2D GuiLerp(const FVector2D& a, const FVector2D& b, const FVector2D& t) { return FVector2D(a.X + (b.X - a.X) * t.X, a.Y + (b.X - a.Y) * t.X); }
	inline FLinearColor GuiLerp(const FLinearColor& a, const FLinearColor& b, float t) { return FLinearColor(a.R + (b.R - a.R) * t, a.G + (b.G - a.G) * t, a.B + (b.B - a.B) * t, a.A + (b.A - a.A) * t); }
	template<typename T> static inline T GuiLerp(T a, T b, float t) { return (T)(a + (b - a) * t); }
	extern bool hover_element;
	extern FVector2D menu_pos;
	extern float offset_x;
	extern float offset_y;

	extern FVector2D first_element_pos;

	extern FVector2D last_element_pos;
	extern FVector2D last_element_size;
	
	extern int current_element;
	extern FVector2D current_element_pos;
	extern FVector2D current_element_size;
	extern int elements_count;
	extern bool Draggable;
	extern bool DraggingSlider;
	extern bool sameLine;

	extern bool pushY;
	extern float pushYvalue;
	extern FVector2D dragPos;

	extern int PopupElementID;

	extern bool InputFocused;
	extern int FocusedInputID;
	extern std::map<int, input_state*> InputStates;

	extern int SubTab;

	extern float deltaTime;
	extern std::map<int, check_state*> CheckStates;
	extern int ActiveKey;
	extern bool CanSelectKey;
	extern std::map<int, key_state*> KeyStates;

	extern bool ComboOpen;
	extern std::map<int, combo_state*> ComboStates;

	extern int currentTabgroup;
	extern std::map<int, tabgroup_state*> TabStates;

	extern bool ColorPickerOpen;
	extern std::map<int, colorpicker_state*> ColorPickerStates;


	extern int CurrentPopup;
	extern std::map<int, popup_state*> PopupStates;
	extern float oldoffsetYForPopup;
	extern float offsetYFromLambdaForPopUp;
	extern VarBase* VarForPopupLambda;
	extern float WindowRounding;
	extern bool DarkMode;
	extern UCanvas* canvas;
	extern int TabIndex;
	extern struct Colors
	{
		static FLinearColor Text;
		static FLinearColor Text_Hov;
		static FLinearColor Text_Active;

		static FLinearColor Window_Background;
		static FLinearColor Window_Border;
		static FLinearColor Accent;
		static FLinearColor Shadow;
		static FLinearColor Item_Background_Default;
		static FLinearColor Item_Background_Active;
		static FLinearColor Item_Background_Inactive;
		static FLinearColor Tabs_Background;

		static FLinearColor Button_Idle;
		static FLinearColor Button_Hovered;
		static FLinearColor Button_Active;

		static FLinearColor Checkbox_Idle;
		static FLinearColor Checkbox_Hovered;
		static FLinearColor Checkbox_Enabled;

		static FLinearColor Combobox_Idle;
		static FLinearColor Combobox_Hovered;
		static FLinearColor Combobox_Elements;

		static FLinearColor Slider_Idle;
		static FLinearColor Slider_Hovered;
		static FLinearColor Slider_Progress;
		static FLinearColor Slider_Button;

		static FLinearColor ColorPicker_Background;
	};

	void Format(wchar_t* Buffer, const wchar_t* format, ...);

	FVector2D CursorPos();

	bool IsLClickPressed();

	bool IsLClickHeld();

	bool IsRClickPressed();

	bool IsRClickHeld();

	bool IsInitialized();

	void Initialize(UCanvas* _canvas);

	void Uninitialize();

	bool MouseInZone(FVector2D pos, FVector2D size);

	bool MouseInCoords(FVector2D TopLeft, FVector2D BottomRight);

	void SameLine();

	void PushNextElementY(float y, bool from_last_element = true);

	void NextColumn(float x);

	void UpdateColors();

	void SetContentPos(float x = 250.f, float y = 0.f);

	bool Window(const wchar_t* name, FVector2D* pos, FVector2D Size, bool isOpen);

	void Text(const wchar_t* text, bool center = false, bool outline = false);

	bool ButtonTab(const wchar_t* name, FVector2D Size, bool active, FVector2D offset = { 0,0 });

	bool TabGroup(const wchar_t* name, FVector2D Size, bool selected, std::vector<std::wstring> TabNames);

	bool Button(const wchar_t* name);

	bool Checkbox(const wchar_t* name, const wchar_t* desc, bool* value, bool usePopupOnRC = false);

	bool Keybind(const wchar_t* name, int* key);

	void SliderInt(const wchar_t* name, const wchar_t* desc, int* value, int min, int max);

	void SliderFloat(const wchar_t* name, const wchar_t* desc, float* value, float min, float max, const wchar_t* format = (const wchar_t*)Xors(L"%.001f"));

	bool Selectable(const wchar_t* name, FVector2D pos, FVector2D size, FLinearColor TextColor = Colors::Text, FVector2D textSize = { 0.55f,0.55f });

	void DrawOverlays();

	void Combo(const wchar_t* name, int* selectedElement, std::vector<std::wstring> elements, int numElements);

	void InputText(const wchar_t* name, const wchar_t* preview, std::wstring* value, InputType Type, size_t maxLen = 50);

	bool SearchBar(const wchar_t* preview, std::wstring* value, InputType Type = InputType_Alphabet, size_t maxLen = 50);

	void DrawVar(VarBase* Var);

	void DrawOverlay(VarBase* Var, popup_state* state);

	int Levenshtein(const std::wstring& str1, const std::wstring& str2, int m, int n);

	int FindFirstIndex(std::wstring source, std::wstring substring, size_t sourceLen, size_t substrLen);

	void DrawSearchTab(std::wstring* searchStr, std::vector<VarBase*>* MenuVars);

	void ColorPicker(const wchar_t* name, FLinearColor* color);

	void DrawColorPickerPopup(FVector2D top_left, popup_state* popupstate);
};


