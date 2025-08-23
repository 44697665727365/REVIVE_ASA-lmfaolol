#include "pch.h"
#include "MenuGUI.h"

std::vector<std::wstring> AutoArmorType = { Xors(L"Swap All"), Xors(L"Swap Tek"), Xors(L"Swap Flak") };

float Gui::MenuScale;

bool Gui::hover_element;
FVector2D Gui::menu_pos;
float Gui::offset_x;
float Gui::offset_y;
std::map<int, check_state*> Gui::CheckStates;
int Gui::ActiveKey;
bool Gui::CanSelectKey;
std::map<int, key_state*> Gui::KeyStates;
FVector2D Gui::first_element_pos;
std::map<int, combo_state*> Gui::ComboStates;
std::map<int, tabgroup_state*> Gui::TabStates;
std::map<int, input_state*> Gui::InputStates;
FVector2D Gui::last_element_pos;
FVector2D Gui::last_element_size;

int Gui::CurrentPopup;
std::map<int, popup_state*> Gui::PopupStates;
float Gui::oldoffsetYForPopup;
float Gui::offsetYFromLambdaForPopUp;
VarBase* Gui::VarForPopupLambda;

bool Gui::ColorPickerOpen;
std::map<int, colorpicker_state*> Gui::ColorPickerStates;

int Gui::current_element;
FVector2D Gui::current_element_pos;
FVector2D Gui::current_element_size;
int Gui::elements_count;
float Gui::WindowRounding;
bool Gui::sameLine;
bool Gui::Draggable;
bool Gui::DraggingSlider;
int Gui::currentTabgroup;
int Gui::PopupElementID;
bool Gui::InputFocused;
int Gui::FocusedInputID;
int Gui::SubTab;
bool Gui::ComboOpen;
bool Gui::pushY;
float Gui::pushYvalue;
FVector2D Gui::dragPos;
float Gui::deltaTime;
bool Gui::DarkMode;
int Gui::TabIndex;
UCanvas* Gui::canvas;
Gui::Colors;
FLinearColor Gui::Colors::Button_Active;
FLinearColor Gui::Colors::Button_Hovered;
FLinearColor Gui::Colors::Button_Idle;
FLinearColor Gui::Colors::Checkbox_Enabled;
FLinearColor Gui::Colors::Checkbox_Hovered;
FLinearColor Gui::Colors::Checkbox_Idle;
FLinearColor Gui::Colors::ColorPicker_Background;
FLinearColor Gui::Colors::Combobox_Elements;
FLinearColor Gui::Colors::Combobox_Hovered;
FLinearColor Gui::Colors::Combobox_Idle;
FLinearColor Gui::Colors::Slider_Button;
FLinearColor Gui::Colors::Slider_Hovered;
FLinearColor Gui::Colors::Slider_Idle;
FLinearColor Gui::Colors::Slider_Progress;
FLinearColor Gui::Colors::Text;
FLinearColor Gui::Colors::Text_Hov;
FLinearColor Gui::Colors::Text_Active;
FLinearColor Gui::Colors::Window_Background;
FLinearColor Gui::Colors::Window_Border;
FLinearColor Gui::Colors::Accent;
FLinearColor Gui::Colors::Shadow;
FLinearColor Gui::Colors::Item_Background_Default;
FLinearColor Gui::Colors::Item_Background_Inactive;
FLinearColor Gui::Colors::Item_Background_Active;
FLinearColor Gui::Colors::Tabs_Background;

namespace Gui{
	
	void Format(wchar_t* Buffer, const wchar_t* format, ...)
	{
		va_list args;
		va_start(args, format);
		int len = _vscwprintf(format, args) + 1;
		vswprintf_s(Buffer, len, format, args);
		va_end(args);
	};
	
	FVector2D CursorPos()
	{
		float x, y;
		APlayerController::Singleton()->GetMousePosition(&x, &y, true);
		return { x,y };
	}
	
	bool IsLClickPressed()
	{
		return Keyboard::GetState(VK_LBUTTON, 0);
	}
	
	bool IsLClickHeld()
	{
		return Keyboard::GetState(VK_LBUTTON, 1);
	}
	
	bool IsRClickPressed()
	{
		return Keyboard::GetState(VK_RBUTTON, 0);
	}
	
	bool IsRClickHeld()
	{
		return Keyboard::GetState(VK_RBUTTON, 1);
	}
	
	bool IsInitialized()
	{
		return canvas;
	}
	
	void Initialize(UCanvas* _canvas)
	{
		hover_element = false;
		menu_pos = FVector2D{ 0, 0 };
		deltaTime = 0.f;
		offset_x = 0.0f;
		offset_y = 0.0f;
		first_element_pos = FVector2D{ 0, 0 };
		last_element_pos = FVector2D{ 0, 0 };
		last_element_size = FVector2D{ 0, 0 };
		current_element = -1;
		current_element_pos = FVector2D{ 0, 0 };
		current_element_size = FVector2D{ 0, 0 };
		elements_count = 0;
		sameLine = false;
		pushY = false;
		pushYvalue = 0.0f;
		canvas = _canvas;
		Colors::Text = FLinearColor{ 49,53,65 };
		Colors::Text_Hov = FLinearColor{ 108, 116, 134 };
		Colors::Text_Active = FLinearColor{ 255, 255, 255 };
		Colors::Window_Background = FLinearColor{ 50, 50 , 50 };
		Colors::Window_Border = FLinearColor{ 100, 100, 100 };
		Colors::Accent = FLinearColor{ 45, 104, 255 };
		Colors::Item_Background_Default = FLinearColor{ 40, 40, 40 };
		Colors::Item_Background_Active = FLinearColor{ 237, 239, 242 };
		Colors::Item_Background_Inactive = FLinearColor{ 232, 235, 240 };
		Colors::Tabs_Background = FLinearColor{ 0.17f, 0.16f, 0.23f, 1.0f };
		Colors::Shadow = FLinearColor{ 60, 60, 60 };
		DarkMode = true;
		WindowRounding = 6.0f;
		ActiveKey = 0;
		DraggingSlider = false;
		PopupElementID = -1;
		currentTabgroup = -1;
		MenuScale = ((_canvas->SizeX / 2560.f) * 0.5f) + ((_canvas->SizeY / 1440.f) * 0.5f); //Set initial scale based on monitor res.// 1920.f; / 2560.f = 0.75f scale
		offsetYFromLambdaForPopUp = 0;
		VarForPopupLambda = nullptr;
	}
	
	void Uninitialize()
	{
		for (std::map<int, check_state*>::iterator it = CheckStates.begin(); it != CheckStates.end(); it++)
		{
			delete it->second;
		}
		for (std::map<int, key_state*>::iterator it = KeyStates.begin(); it != KeyStates.end(); it++)
		{
			delete it->second;
		}
		for (std::map<int, combo_state*>::iterator it = ComboStates.begin(); it != ComboStates.end(); it++)
		{
			delete it->second;
		}
		for (std::map<int, tabgroup_state*>::iterator it = TabStates.begin(); it != TabStates.end(); it++)
		{
			delete it->second;
		}
		for (std::map<int, input_state*>::iterator it = InputStates.begin(); it != InputStates.end(); it++)
		{
			delete it->second;
		}
		for (std::map<int, popup_state*>::iterator it = PopupStates.begin(); it != PopupStates.end(); it++)
		{
			delete it->second;
		}
		for (std::map<int, colorpicker_state*>::iterator it = ColorPickerStates.begin(); it != ColorPickerStates.end(); it++)
		{
			delete it->second;
		}
	}
	
	bool MouseInZone(FVector2D pos, FVector2D size)
	{
		FVector2D cursor_pos = CursorPos();
		if (cursor_pos.X > pos.X
			&& cursor_pos.X < pos.X + size.X
			&& cursor_pos.Y > pos.Y
			&& cursor_pos.Y < pos.Y + size.Y)
			return true;

		return false;
	}
	
	bool MouseInCoords(FVector2D TopLeft, FVector2D BottomRight)
	{
		FVector2D cursor_pos = CursorPos();
		if (cursor_pos.X > TopLeft.X
			&& cursor_pos.X < BottomRight.X
			&& cursor_pos.Y > TopLeft.Y
			&& cursor_pos.Y < BottomRight.Y)
			return true;

		return false;
	}
	
	void SameLine()
	{
		sameLine = true;
	}
	
	void PushNextElementY(float y, bool from_last_element )
	{
		pushY = true;
		if (from_last_element)
			pushYvalue = (float)last_element_pos.Y + (float)last_element_size.Y + y;
		else
			pushYvalue = y;
	}
	
	void NextColumn(float x)
	{
		offset_x = x;
		PushNextElementY((float)first_element_pos.Y, false);
	}
	
	void UpdateColors()
	{
		Colors::Accent = DarkMode ? FLinearColor::FromRGB(151, 115, 255) : FLinearColor::FromRGB(92, 138, 255);
		Colors::Shadow = DarkMode ? FLinearColor(0, 0, 0) : FLinearColor::FromRGB(212, 216, 227);
		Colors::Window_Background = DarkMode ? FLinearColor::FromRGB(15, 15, 15) : FLinearColor::FromRGB(255, 255, 255);
		Colors::Window_Border = DarkMode ? FLinearColor::FromRGB(18, 19, 20) : FLinearColor::FromRGB(255, 255, 255);

		Colors::Item_Background_Default = DarkMode ? FLinearColor::FromRGB(17, 17, 18) : FLinearColor::FromRGB(247, 248, 250);
		Colors::Item_Background_Active = DarkMode ? FLinearColor::FromRGB(24, 25, 29) : FLinearColor::FromRGB(237, 239, 242);
		Colors::Item_Background_Inactive = DarkMode ? FLinearColor::FromRGB(22, 23, 26) : FLinearColor::FromRGB(232, 235, 240);

		Colors::Text_Active = DarkMode ? FLinearColor::FromRGB(85, 90, 104) : FLinearColor::FromRGB(0, 0, 0);
		Colors::Text_Hov = DarkMode ? FLinearColor::FromRGB(68, 71, 81) : FLinearColor::FromRGB(108, 116, 134);
		Colors::Text = DarkMode ? FLinearColor::FromRGB(49, 53, 65) : FLinearColor::FromRGB(49, 53, 65);
	}
	
	void SetContentPos(float x , float y )
	{
		x *= MenuScale;
		y *= MenuScale;
		offset_x = x;
		offset_y = y;
		first_element_pos = FVector2D{ x, y };
		current_element_pos = FVector2D{ x, y };
		current_element_size = FVector2D{ x, y };
	}

	int frameCounter = 0;
	
	bool Window(const wchar_t* name, FVector2D* pos, FVector2D Size, bool isOpen)
	{
		
		frameCounter++;
		
		if (frameCounter > 500) {
			frameCounter = 0;
			dragPos.X = 0;
			dragPos.Y = 0;
			hover_element = 0;
			Draggable = true;
			DraggingSlider = false;
		}

		elements_count = 0;

		if (!isOpen)
			return false;

		FVector2D size = Size * MenuScale;
		
		bool isHovered = MouseInZone(FVector2D{ pos->X, pos->Y }, size);

		if (current_element != -1 && !IsLClickPressed() && !DraggingSlider)
		{
			current_element = -1;
		}
		else if ((isHovered || (dragPos.X != 0 && dragPos.Y != 0)) && !hover_element && Draggable && !DraggingSlider)
		{
			if (IsLClickHeld())
			{
				FVector2D cursorPos = CursorPos();

				cursorPos.X -= size.X;
				cursorPos.Y -= size.Y;

				if (dragPos.X == 0)
				{
					dragPos.X = (cursorPos.X - pos->X);
					dragPos.Y = (cursorPos.Y - pos->Y);
				}
				pos->X = cursorPos.X - dragPos.X;
				pos->Y = cursorPos.Y - dragPos.Y;
			}
			else
			{
				dragPos = FVector2D{ 0, 0 };
			}
		}
		else
		{
			hover_element = false;
		}


		offset_x = 0.0f; offset_y = 0.0f;
		menu_pos = FVector2D{ pos->X, pos->Y };
		first_element_pos = FVector2D{ 0, 0 };
		current_element_pos = FVector2D{ 0, 0 };
		current_element_size = FVector2D{ 0, 0 };

		UpdateColors();
		FVector2D TabsStartPos = FVector2D{ pos->X + (150 * MenuScale), pos->Y };



		Renderer::RenderFilledRoundedRectangle(pos, (float)size.X, (float)size.Y, WindowRounding, Colors::Window_Background);



		Renderer::RenderFilledRoundedRectangle(pos, (250 * MenuScale), (float)size.Y, WindowRounding, Colors::Window_Border, RoundedRectFlags_NoRoundingTopRight | RoundedRectFlags_NoRoundingBottomRight);


		FVector2D UserStartPos = { pos->X, pos->Y + size.Y - (100 * MenuScale) };
		Renderer::RenderFilledRoundedRectangle(&UserStartPos, (250 * MenuScale), (100 * MenuScale), WindowRounding, Colors::Item_Background_Default, RoundedRectFlags_NoRoundingTopRight | RoundedRectFlags_NoRoundingBottomRight | RoundedRectFlags_NoRoundingTopLeft);

		//Offset for tabs to start at
		offset_y += (120.0f * MenuScale);


		FVector2D titlePos = FVector2D{ pos->X + (20.f * MenuScale), pos->Y + (20.f * MenuScale) };
		Renderer::DrawString(name, titlePos, { (1 * MenuScale), (1 * MenuScale) }, {1.f,1.f,1.f,1.f});
		Draggable = true;
		return true;
	}

	void Text(const wchar_t* text, bool center, bool outline)
	{
		elements_count++;
		float size = (25 * MenuScale);
		FVector2D padding = FVector2D{ 10, 10 };
		padding *= MenuScale;
		FVector2D pos = FVector2D{ menu_pos.X + padding.X + offset_x, menu_pos.Y + padding.Y + offset_y };

		if (sameLine)
		{
			pos.X = last_element_pos.X + last_element_size.X + padding.X;
			pos.Y = last_element_pos.Y;
		}
		if (pushY)
		{
			pos.Y = pushYvalue;
			pushY = false;
			pushYvalue = 0.0f;
			offset_y = pos.Y - (float)menu_pos.Y;
		}

		if (!sameLine)
			offset_y += size + (float)padding.Y;


		FVector2D textPos = FVector2D{ pos.X + (5.0f * MenuScale), pos.Y + size / 2 };
		if (center)
			Renderer::DrawString(text, textPos, { (0.65 * MenuScale), (0.65 * MenuScale) }, FLinearColor{ 1.0f, 1.0f, 1.0f, 1.0f });

		//else
		//	TextLeft(text, textPos, FLinearColor{ 1.0f, 1.0f, 1.0f, 1.0f }, outline);

		sameLine = false;
		last_element_pos = pos;

		if (first_element_pos.X == 0.0f)
			first_element_pos = pos;
	}
	bool ButtonTab(const wchar_t* name, FVector2D Size, bool active, FVector2D offset)
	{
		elements_count++;
		FVector2D size = Size * MenuScale;
		FVector2D padding = FVector2D{ 5, 5 };
		padding *= MenuScale;
		FVector2D pos = FVector2D{ menu_pos.X + padding.X + offset_x + offset.X, menu_pos.Y + padding.Y + offset_y + offset.Y };

		if (pos.Y + size.Y > menu_pos.Y + (680 * MenuScale))
			return false;

		if (sameLine)
		{
			pos.X = last_element_pos.X + last_element_size.X + padding.X;
			pos.Y = last_element_pos.Y;
		}
		if (pushY)
		{
			pos.Y = pushYvalue;
			pushY = false;
			pushYvalue = 0.0f;
			offset_y = pos.Y - (float)menu_pos.Y;
		}
		bool isHovered = MouseInZone(FVector2D{ pos.X, pos.Y }, size);
		if (isHovered)
			Draggable = false;
		FVector2D textPos = FVector2D{ pos.X + (20.f * MenuScale), pos.Y + ((double)size.Y / 2) };
		if (active)
		{
			Renderer::RenderFilledRoundedRectangle(&pos, (float)size.X, (float)size.Y, WindowRounding, Colors::Item_Background_Active, RoundedRectFlags_None);
			Renderer::DrawString(name, textPos, { (0.8f * MenuScale), (0.8f * MenuScale) }, Colors::Text_Active, false, false, { 0, 0, 0, 0 });
		}
		else if (isHovered)
		{
			Renderer::RenderFilledRoundedRectangle(&pos, (float)size.X, (float)size.Y, WindowRounding, Colors::Item_Background_Default, RoundedRectFlags_None);
			Renderer::DrawString(name, textPos, { (0.8f * MenuScale), (0.8f * MenuScale) }, Colors::Text_Hov, false, false, { 0, 0, 0, 0 });
			hover_element = true;
		}
		else
		{
			Renderer::DrawString(name, textPos, { (0.8f * MenuScale), (0.8f * MenuScale) }, Colors::Text, false, false, { 0, 0, 0, 0 });
		}


		if (!sameLine)
			offset_y += size.Y + (float)padding.Y;

		//Text


		sameLine = false;
		last_element_pos = pos;
		last_element_size = size;
		if (first_element_pos.X == 0.0f)
			first_element_pos = pos;

		if (isHovered && IsLClickPressed())
			return true;

		return false;
	}
	bool TabGroup(const wchar_t* name, FVector2D Size, bool selected, std::vector<std::wstring> TabNames)
	{
		elements_count++;
		FVector2D size = Size * MenuScale;
		FVector2D padding = FVector2D{ 5, 10 };
		padding *= MenuScale;
		FVector2D pos = FVector2D{ menu_pos.X + padding.X + offset_x, menu_pos.Y + padding.Y + offset_y };
		float oldffsetX = offset_x;

		if (pos.Y + size.Y > menu_pos.Y + (680 * MenuScale))
			return false;

		if (sameLine)
		{
			pos.X = last_element_pos.X + last_element_size.X + padding.X;
			pos.Y = last_element_pos.Y;
		}
		if (pushY)
		{
			pos.Y = pushYvalue;
			pushY = false;
			pushYvalue = 0.0f;
			offset_y = pos.Y - (float)menu_pos.Y;
		}

		tabgroup_state* state = TabStates[elements_count];
		if (!state)
		{
			state = new tabgroup_state();
			TabStates[elements_count] = state;
		}

		bool isHovered = MouseInZone(FVector2D{ pos.X, pos.Y }, size);
		bool clicked = IsLClickPressed();
		state->open = selected;
		if (isHovered) {
			if (clicked && selected) {
				state->open = false;
				Gui::currentTabgroup = -1;
			}
			if (clicked && !selected) {
				state->open = true;
			}
			if (!clicked && !selected) {
				state->open = false;
			}
			Draggable = false;
		}

		state->elements = TabNames;
		FVector2D elementSize = { size.X * 0.8,size.Y * 0.8 };
		FVector2D elementBeginPos = { pos.X + (size.X * 0.1),pos.Y + size.Y };
		FVector2D textPos = FVector2D{ pos.X + (10.f * MenuScale), pos.Y + ((double)size.Y / 2) };
		FVector2D FullSize = { size.X,size.Y + (elementSize.Y * TabNames.size()) };
		state->size.X = elementSize.X;
		state->size.Y = GuiLerp(state->size.Y, state->open ? FullSize.Y : 0, 0.12f);
		state->textColor = GuiLerp(state->textColor, state->open ? Colors::Accent : Colors::Text_Hov, 0.1f);

		sameLine = false;
		last_element_pos = pos;
		if (first_element_pos.X == 0.0f)
			first_element_pos = pos;


		if (state->open && state->size.Y / FullSize.Y > 0.75f)
		{
			offset_y = pos.Y + size.Y - menu_pos.Y;
			offset_x += elementBeginPos.X - menu_pos.X;
			for (int i = 0; i < TabNames.size(); i++)
			{
				FVector2D elementPos = { elementBeginPos.X,elementBeginPos.Y + (elementSize.Y * i) };
				if (ButtonTab(TabNames[i].c_str(), elementSize, SubTab == i)) {
					SubTab = i;
					PopupElementID = -1;
				}
			}
		}
		if (state->size.Y > 0)
		{
			offset_y = pos.Y + size.Y + state->size.Y - menu_pos.Y;
			//Renderer::RenderFilledRoundedRectangle(&elementBeginPos, (float)state->size.X, (float)state->size.Y, min((float)state->size.Y / 2.f, WindowRounding), Colors::Item_Background_Default, RoundedRectFlags_None);
		}
		else
		{
			offset_y = (pos.Y + size.Y) - (float)menu_pos.Y;
		}
		offset_x = oldffsetX;
		//Renderer::RenderFilledRoundedRectangle(&pos, (float)size.X, (float)size.Y, WindowRounding, Colors::Item_Background_Active, RoundedRectFlags_None);
		Renderer::DrawString(name, textPos, { (0.8f * MenuScale), (0.8f * MenuScale) }, state->textColor, false, false, { 0, 0, 0, 0 });

		return state->open;
	}
	bool Button(const wchar_t* name)
	{
		elements_count++;

		FVector2D size = FVector2D{ 410, 60 };
		size *= MenuScale;
		FVector2D padding = FVector2D{ 5, 5 };
		padding *= MenuScale;
		FVector2D pos = FVector2D{ menu_pos.X + padding.X + offset_x, menu_pos.Y + padding.Y + offset_y };

		if (sameLine)
		{
			pos.X = last_element_pos.X + last_element_size.X + padding.X;
			pos.Y = last_element_pos.Y;
		}
		if (pushY)
		{
			pos.Y = pushYvalue;
			pushY = false;
			pushYvalue = 0.0f;
			offset_y = pos.Y - (float)menu_pos.Y;
		}
		if (!sameLine)
			offset_y += size.Y + (float)padding.Y;

		bool isHovered = MouseInZone(FVector2D{ pos.X, pos.Y }, size);
		bool clk = IsLClickPressed();
		if (isHovered && !ComboOpen)
		{
			Draggable = false;
		}



		Renderer::RenderFilledRoundedRectangle(&pos, size.X, size.Y, WindowRounding, Colors::Item_Background_Default, RoundedRectFlags_None);

		
		if (name) {
			FVector2D textPos = FVector2D{ pos.X + (20.0f * MenuScale), pos.Y + (7.0f * MenuScale) };
			Renderer::canvas->K2_DrawText(Renderer::Font, name, textPos, FVector2D{ (0.8f * MenuScale), (0.8f * MenuScale) }, Colors::Text_Active, 2.f, { 0,0,0,0 }, { 0,0 }, false, false, false, { 0,0,0,0 });
		}

		sameLine = false;
		last_element_pos = pos;
		if (first_element_pos.X == 0.0f)
			first_element_pos = pos;

		if (isHovered && clk && !ComboOpen) {
			return true;
		}
		return false;
	}
	bool Checkbox(const wchar_t* name, const wchar_t* desc, bool* value, bool usePopupOnRC)
	{
		elements_count++;

		FVector2D size = FVector2D{ 410, 60 };
		size *= MenuScale;
		FVector2D padding = FVector2D{ 5, 5 };
		padding *= MenuScale;
		FVector2D pos = FVector2D{ menu_pos.X + padding.X + offset_x, menu_pos.Y + padding.Y + offset_y };

		if (sameLine)
		{
			pos.X = last_element_pos.X + last_element_size.X + padding.X;
			pos.Y = last_element_pos.Y;
		}
		if (pushY)
		{
			pos.Y = pushYvalue;
			pushY = false;
			pushYvalue = 0.0f;
			offset_y = pos.Y - (float)menu_pos.Y;
		}
		if (!sameLine)
			offset_y += size.Y + (float)padding.Y;

		bool isHovered = MouseInZone(FVector2D{ pos.X, pos.Y }, size);
		bool clk = IsLClickPressed();
		bool rclk = IsRClickPressed();
		if (isHovered && !ComboOpen)
		{
			Draggable = false;
			Colors::Slider_Idle = FLinearColor{ 1.f, 0.f, 0.f, 1.0f };
			if (clk)
			{
				Colors::Slider_Idle = FLinearColor{ 0.f, 1.f, 0.f, 1.0f };
			}

		}
		if (isHovered && rclk && !ComboOpen) {
			if (PopupElementID == elements_count) {
				PopupElementID = -1;
				ComboOpen = false;
				Draggable = true;
			}
			else
			{
				PopupElementID = elements_count;
				popup_state* state = PopupStates[elements_count];
				if (!state)
				{
					state = new popup_state();
					state->max_size_y = 0.f;
					state->size_y = 0.f;
					PopupStates[elements_count] = state;
				}
				state->owningElement = elements_count;
				state->PosAtTheTime = pos;
				state->size_x = size.X;
				state->OffsetAtTheTime = { offset_x ,offset_y };
				ComboOpen = true;
				Draggable = false;
			}
		}
		check_state* state = CheckStates[elements_count];
		if (!state)
		{
			state = new check_state();
			CheckStates[elements_count] = state;
		}
		//state->background_opticaly = GuiLerp(state->background_opticaly, *value ? 0.2f : 1.0f, 0.1f);
		state->circle_offset = GuiLerp(state->circle_offset, *value ? 0 : (-40.f * MenuScale), 0.1f);
		state->background = GuiLerp(state->background, *value ? Colors::Item_Background_Inactive : Colors::Item_Background_Inactive, 0.1f);
		state->circle = GuiLerp(state->circle, *value ? Colors::Accent : Colors::Text_Hov, 0.1f);
		state->text = GuiLerp(state->text, *value ? Colors::Text_Active : isHovered ? Colors::Text_Hov : Colors::Text, 0.1f);


		if(PopupElementID != elements_count)
			Renderer::RenderFilledRoundedRectangle(&pos, size.X, size.Y, WindowRounding, Colors::Item_Background_Default, RoundedRectFlags_None);
		else
			Renderer::RenderFilledRoundedRectangle(&pos, size.X, size.Y, WindowRounding, Colors::Item_Background_Default, RoundedRectFlags_NoRoundingBottomLeft | RoundedRectFlags_NoRoundingBottomRight);

		FVector2D CheckDotMiddlePos = FVector2D{ pos.X + size.X - (60.f * MenuScale), pos.Y + ((double)size.Y / 2) };

		Renderer::DrawFilledCircle({ CheckDotMiddlePos.X - (20.f * MenuScale),CheckDotMiddlePos.Y }, (20.f * MenuScale), state->background);
		Renderer::DrawFilledRectangleSize({ CheckDotMiddlePos.X - (20.f * MenuScale),CheckDotMiddlePos.Y - (21.f * MenuScale) }, { (40.f * MenuScale),(41.f * MenuScale) }, state->background);
		Renderer::DrawFilledCircle({ CheckDotMiddlePos.X + (20.f * MenuScale),CheckDotMiddlePos.Y }, (20.f * MenuScale), state->background);
		Renderer::DrawFilledCircle({ CheckDotMiddlePos.X + (20.f * MenuScale) + state->circle_offset,CheckDotMiddlePos.Y }, (10.f * MenuScale), state->circle);
		if (name) {
			FVector2D textPos = FVector2D{ pos.X + (20.0f * MenuScale), pos.Y + (7.0f * MenuScale) };
			Renderer::canvas->K2_DrawText(Renderer::Font, name, textPos, FVector2D{ (0.8f * MenuScale), (0.8f * MenuScale) }, state->text, 2.f, { 0,0,0,0 }, { 0,0 }, false, false, false, { 0,0,0,0 });
		}
		if (desc) {
			FVector2D descPos = FVector2D{ pos.X + (21.0f * MenuScale), pos.Y + (30.0f * MenuScale) };
			Renderer::canvas->K2_DrawText(Renderer::Font, desc, descPos, FVector2D{ (0.6f * MenuScale), (0.6f * MenuScale) }, state->text, 2.f, { 0,0,0,0 }, { 0,0 }, false, false, false, { 0,0,0,0 });
		}
		sameLine = false;
		last_element_pos = pos;
		if (first_element_pos.X == 0.0f)
			first_element_pos = pos;

		if (isHovered && clk && !ComboOpen) {
			*value = !(*value);
			return true;
		}
		return false;
	}
	bool Keybind(const wchar_t* name, int* key)
	{
		elements_count++;

		FVector2D size = FVector2D{ 410, 60 };
		size *= MenuScale;
		FVector2D padding = FVector2D{ 5, 5 };
		padding *= MenuScale;
		FVector2D pos = FVector2D{ menu_pos.X + padding.X + offset_x, menu_pos.Y + padding.Y + offset_y };

		if (sameLine)
		{
			pos.X = last_element_pos.X + last_element_size.X + padding.X;
			pos.Y = last_element_pos.Y;
		}
		if (pushY)
		{
			pos.Y = pushYvalue;
			pushY = false;
			pushYvalue = 0.0f;
			offset_y = pos.Y - (float)menu_pos.Y;
		}
		bool isHovered = MouseInZone(FVector2D{ pos.X, pos.Y }, size);
		bool clk = IsLClickPressed();
		bool rclk = IsRClickPressed();

		if (isHovered && !ComboOpen)
		{
			Draggable = false;
			Colors::Slider_Idle = FLinearColor{ 1.f, 0.f, 0.f, 1.0f };
			if (clk)
			{
				CanSelectKey = false;
				Colors::Slider_Idle = FLinearColor{ 0.f, 1.f, 0.f, 1.0f };
			}
			else
				CanSelectKey = true;
			if (rclk)
			{
				PopupElementID = elements_count;
			}
		}

		std::wstring buf_display = Xors(L"None");


		bool value_changed = false;

		std::wstring active_key = Xors(L"");

		auto k = Keyboard::KeyMap[*key];

		if (k && k->Name.c_str() && !k->Name.empty())
			active_key.append(k->Name);
		else
			active_key.append(Xors(L"Not Found"));

		if (*key != 0 && ActiveKey != elements_count) {
			buf_display = Xors(L"");
			buf_display.append(active_key);
		}
		else if (ActiveKey == elements_count) {
			buf_display = Xors(L"...");
		}
		else if (*key == 0) {
			buf_display = Xors(L"None");
		}
		else
			buf_display = Xors(L"key error");
		key_state* state = KeyStates[elements_count];
		if (!state)
		{
			state = new key_state();
			KeyStates[elements_count] = state;
		}

		state->background = Colors::Item_Background_Inactive;
		state->text = GuiLerp(state->text, ActiveKey == elements_count ? Colors::Text_Active : Colors::Text, 0.1f);
		state->bindText = GuiLerp(state->bindText, ActiveKey == elements_count ? Colors::Accent : Colors::Text_Active, 0.1f);


		Renderer::RenderFilledRoundedRectangle(&pos, size.X, size.Y, WindowRounding, Colors::Item_Background_Default, RoundedRectFlags_None);

		FVector2D KeyBindMiddlePos = FVector2D{ pos.X + size.X - (60 * MenuScale), pos.Y + ((double)size.Y / 2) };
		FVector2D KeyBindStartPos = { KeyBindMiddlePos.X - (50.f * MenuScale),KeyBindMiddlePos.Y - (20.f * MenuScale) };
		Renderer::RenderFilledRoundedRectangle(&KeyBindStartPos, (100.f * MenuScale), (40.f * MenuScale), 4.f, state->background, RoundedRectFlags_None);

		if (buf_display.c_str())
		{
			FVector2D textPos = FVector2D{ KeyBindMiddlePos };
			Renderer::canvas->K2_DrawText(Renderer::Font, buf_display.c_str(), textPos, FVector2D{ (0.6f * MenuScale), (0.6f * MenuScale) }, state->bindText, 2.f, { 0,0,0,0 }, { 0,0 }, true, true, false, { 0,0,0,0 });
		}
		else
		{
			FVector2D textPos = FVector2D{ KeyBindMiddlePos };
			Renderer::canvas->K2_DrawText(Renderer::Font, Xors(L"ERROR"), textPos, FVector2D{ (0.6f * MenuScale),(0.6f * MenuScale) }, { 1.f,0.f,0.f,1.f }, 2.f, { 0,0,0,0 }, { 0,0 }, true, true, false, { 0,0,0,0 });
		}
		if (name) {
			FVector2D textPos = FVector2D{ pos.X + (20.0f * MenuScale), pos.Y + (7.0f * MenuScale) };
			Renderer::canvas->K2_DrawText(Renderer::Font, name, textPos, FVector2D{ (0.8f * MenuScale), (0.8f * MenuScale) }, state->text, 2.f, { 0,0,0,0 }, { 0,0 }, false, false, false, { 0,0,0,0 });
		}

		if (!sameLine)
			offset_y += size.Y + (float)padding.Y;

		sameLine = false;

		last_element_pos = pos;

		if (first_element_pos.X == 0.0f)
			first_element_pos = pos;

		if (isHovered && clk && ActiveKey != elements_count && !ComboOpen)
		{
			ActiveKey = elements_count;
		}
		if (ActiveKey == elements_count && CanSelectKey && !ComboOpen)
		{
			if (Keyboard::Keys.size() < 1)
			{
				nlog(Xors("No keys found"));
				ActiveKey = 0;
				return false;
			}
			for (int i = 0;i < Keyboard::Keys.size(); i++)
			{
				int KeyID = Keyboard::Keys[i];
				if (KeyID < 1 || KeyID > 0x500)
					continue;
				if (Keyboard::GetState(KeyID, 0) && KeyID != 0)
				{
					if (KeyID != VK_ESCAPE && KeyID != VK_LBUTTON && KeyID != VK_RBUTTON) {
						*key = KeyID;
						ActiveKey = -1;
						return true;
					}
					else if(KeyID == VK_LBUTTON)
					{
						CanSelectKey = false;
						ActiveKey = -1;
						return false;
					}
					else
					{
						*key = 0;
						CanSelectKey = false;
						ActiveKey = -1;
						return false;
					}
					
				}
			}
		}
		return false;
	}
	void SliderInt(const wchar_t* name, const wchar_t* desc, int* value, int min, int max)
	{
		elements_count++;

		FVector2D size = FVector2D{ 410, 60 };
		size *= MenuScale;
		FVector2D slider_size = FVector2D{ 200, 2 };
		slider_size *= MenuScale;
		//FVector2D adjust_zone = FVector2D{ 0, 20 };
		FVector2D padding = FVector2D{ 5, 5 };
		padding *= MenuScale;
		FVector2D pos = FVector2D{ menu_pos.X + padding.X + offset_x, menu_pos.Y + padding.Y + offset_y };
		FVector2D sliderBeginPos = FVector2D{ pos.X + size.X - slider_size.X - (10.f * MenuScale), pos.Y + (size.Y * 0.75f * MenuScale) };
		if (sameLine)
		{
			pos.X = last_element_pos.X + last_element_size.X + padding.X;
			pos.Y = last_element_pos.Y;
		}
		if (pushY)
		{
			pos.Y = pushYvalue;
			pushY = false;
			pushYvalue = 0.0f;
			offset_y = pos.Y - (float)menu_pos.Y;
		}
		bool isHovered = MouseInZone(FVector2D{ pos.X + size.X - slider_size.X, pos.Y }, FVector2D{ slider_size.X, size.Y });

		if (!sameLine)
			offset_y += size.Y + (float)padding.Y;
		if (isHovered)
			Draggable = false;
		//Bg
		Renderer::RenderFilledRoundedRectangle(&pos, size.X, size.Y, WindowRounding, Colors::Item_Background_Default, RoundedRectFlags_None);
		bool ClickHeld = IsLClickHeld();
		if (!ClickHeld)
			DraggingSlider = false;
		bool rclk = IsRClickPressed();
		if ((isHovered || current_element == elements_count) && !ComboOpen)
		{
			//Drag
			if (ClickHeld)
			{
				current_element = elements_count;
				DraggingSlider = true;
				FVector2D cursorPos = CursorPos();
				//(cursorpos - (position + offset) / slidersize) * (max - min) + min
				*value = ((cursorPos.X - sliderBeginPos.X) / slider_size.X) * (max - min) + min;
				//*value = ((cursorPos.X - pos.X) * ((max - min) / (int)slider_size.X)) + min;
				if (*value < min) *value = min;
				if (*value > max) *value = max;
			}
			hover_element = true;
			if (rclk)
			{
				PopupElementID = elements_count;

			}
		}
		if (name) {
			FVector2D textPos = FVector2D{ pos.X + (20.0f * MenuScale), pos.Y + (7.0f * MenuScale) };
			Renderer::canvas->K2_DrawText(Renderer::Font, name, textPos, FVector2D{ (0.8f * MenuScale), (0.8f * MenuScale) }, Colors::Text, 2.f, { 0,0,0,0 }, { 0,0 }, false, false, false, { 0,0,0,0 });
		}
		if (desc) {
			FVector2D descPos = FVector2D{ pos.X + (21.0f * MenuScale), pos.Y + (30.0f * MenuScale) };
			Renderer::canvas->K2_DrawText(Renderer::Font, desc, descPos, FVector2D{ (0.6f * MenuScale), (0.6f * MenuScale) }, Colors::Text, 2.f, { 0,0,0,0 }, { 0,0 }, false, false, false, { 0,0,0,0 });
		}

		//Value
		int oneP = (int)slider_size.X / (max - min);
		Renderer::RenderFilledRectangle(sliderBeginPos, (float)slider_size.X, 2.f, Colors::Item_Background_Inactive);
		Renderer::RenderFilledRectangle(sliderBeginPos, oneP * (*value - min), 2.f, Colors::Accent);
		Renderer::DrawFilledCircle(FVector2D{ sliderBeginPos.X + oneP * (*value - min), sliderBeginPos.Y }, (8.f * MenuScale), Colors::Item_Background_Inactive);
		Renderer::DrawFilledCircle(FVector2D{ sliderBeginPos.X + oneP * (*value - min), sliderBeginPos.Y }, (6.5f * MenuScale), Colors::Accent);

		wchar_t buffer[255] = {};
		Format(buffer, Xors(L"%i"), *value);
		FVector2D valueTxtSize = Renderer::canvas->K2_TextSize(Renderer::Font, buffer, FVector2D{ (0.6f * MenuScale), (0.6f * MenuScale) });
		FVector2D valuePos = FVector2D{ pos.X + size.X - (17.f * MenuScale) - valueTxtSize.X, pos.Y + (7.f * MenuScale) };
		Renderer::canvas->K2_DrawText(Renderer::Font, buffer, valuePos, FVector2D{ (0.6f * MenuScale), (0.6f * MenuScale) }, Colors::Text_Active, 2.f, { 0,0,0,0 }, { 0,0 }, false, false, false, { 0,0,0,0 });


		sameLine = false;
		last_element_pos = pos;
		last_element_size = size;
		if (first_element_pos.X == 0.0f)
			first_element_pos = pos;
	}
	void SliderFloat(const wchar_t* name, const wchar_t* desc, float* value, float min, float max, const wchar_t* format)
	{
		elements_count++;

		FVector2D size = FVector2D{ 410, 60 };
		size *= MenuScale;
		FVector2D slider_size = FVector2D{ 200, 2 };
		slider_size *= MenuScale;
		//FVector2D adjust_zone = FVector2D{ 0, 20 };
		FVector2D padding = FVector2D{ 5, 5 };
		padding *= MenuScale;
		FVector2D pos = FVector2D{ menu_pos.X + padding.X + offset_x, menu_pos.Y + padding.Y + offset_y };
		FVector2D sliderBeginPos = FVector2D{ pos.X + size.X - slider_size.X - (10.f * MenuScale), pos.Y + (size.Y * 0.75f) };
		if (sameLine)
		{
			pos.X = last_element_pos.X + last_element_size.X + padding.X;
			pos.Y = last_element_pos.Y;
		}
		if (pushY)
		{
			pos.Y = pushYvalue;
			pushY = false;
			pushYvalue = 0.0f;
			offset_y = pos.Y - (float)menu_pos.Y;
		}
		bool isHovered = MouseInZone(FVector2D{ pos.X + size.X - slider_size.X, pos.Y }, FVector2D{ slider_size.X, size.Y });

		if (!sameLine)
			offset_y += size.Y + (float)padding.Y;
		if (isHovered)
			Draggable = false;
		//Bg
		Renderer::RenderFilledRoundedRectangle(&pos, size.X, size.Y, WindowRounding, Colors::Item_Background_Default, RoundedRectFlags_None);
		bool ClickHeld = IsLClickHeld();
		bool rclk = IsRClickPressed();
		if (!ClickHeld)
			DraggingSlider = false;

		if ((isHovered || current_element == elements_count) && !ComboOpen)
		{
			//Drag
			if (ClickHeld)
			{
				current_element = elements_count;
				DraggingSlider = true;
				FVector2D cursorPos = CursorPos();
				//(cursorpos - (position + offset) / slidersize) * (max - min) + min
				*value = ((cursorPos.X - sliderBeginPos.X) / slider_size.X) * (max - min) + min;
				//*value = ((cursorPos.X - pos.X) * ((max - min) / (int)slider_size.X)) + min;
				if (*value < min) *value = min;
				if (*value > max) *value = max;
			}
			if (rclk)
			{
				PopupElementID = elements_count;

			}
			hover_element = true;
		}
		if (name) {
			FVector2D textPos = FVector2D{ pos.X + (20.0f * MenuScale), pos.Y + (7.0f * MenuScale) };
			Renderer::canvas->K2_DrawText(Renderer::Font, name, textPos, FVector2D{ (0.8f * MenuScale), (0.8f * MenuScale) }, Colors::Text, 2.f, { 0,0,0,0 }, { 0,0 }, false, false, false, { 0,0,0,0 });
		}
		if (desc) {
			FVector2D descPos = FVector2D{ pos.X + (21.0f * MenuScale), pos.Y + (30.0f * MenuScale) };
			Renderer::canvas->K2_DrawText(Renderer::Font, desc, descPos, FVector2D{ (0.6f * MenuScale), (0.6f * MenuScale) }, Colors::Text, 2.f, { 0,0,0,0 }, { 0,0 }, false, false, false, { 0,0,0,0 });
		}

		//Value
		float oneP = (float)slider_size.X / (max - min);
		Renderer::RenderFilledRectangle(sliderBeginPos, (float)slider_size.X, 2.f, Colors::Item_Background_Inactive);
		Renderer::RenderFilledRectangle(sliderBeginPos, oneP * (*value - min), 2.f, Colors::Accent);
		Renderer::DrawFilledCircle(FVector2D{ sliderBeginPos.X + oneP * (*value - min), sliderBeginPos.Y }, (8.f * MenuScale), Colors::Item_Background_Inactive);
		Renderer::DrawFilledCircle(FVector2D{ sliderBeginPos.X + oneP * (*value - min), sliderBeginPos.Y }, (6.5f * MenuScale), Colors::Accent);

		wchar_t buffer[255] = {};
		Format(buffer, format, *value);
		FVector2D valueTxtSize = Renderer::canvas->K2_TextSize(Renderer::Font, buffer, FVector2D{ (0.6f * MenuScale), (0.6f * MenuScale) });
		FVector2D valuePos = FVector2D{ pos.X + size.X - (17.f * MenuScale) - valueTxtSize.X, pos.Y + (7.f * MenuScale) };
		Renderer::canvas->K2_DrawText(Renderer::Font, buffer, valuePos, FVector2D{ (0.6f * MenuScale), (0.6f * MenuScale) }, Colors::Text_Active, 2.f, { 0,0,0,0 }, { 0,0 }, false, false, false, { 0,0,0,0 });


		sameLine = false;
		last_element_pos = pos;
		last_element_size = size;
		if (first_element_pos.X == 0.0f)
			first_element_pos = pos;
	}
	bool Selectable(const wchar_t* name, FVector2D pos, FVector2D size, FLinearColor TextColor, FVector2D textSize )
	{
		bool isHovered = MouseInZone(FVector2D{ pos.X, pos.Y }, size);
		if (isHovered)
		{
			Draggable = false;
			Renderer::RenderFilledRectangle(FVector2D{ pos.X, pos.Y }, (float)size.X, (float)size.Y, Colors::Item_Background_Active);
			hover_element = true;
		}
		else
		{
			Renderer::RenderFilledRectangle(FVector2D{ pos.X, pos.Y }, (float)size.X, (float)size.Y, Colors::Item_Background_Inactive);
		}
		FVector2D textPos = FVector2D{ pos.X + size.X / 2 , pos.Y };
		if (name)
			Renderer::canvas->K2_DrawText(Renderer::Font, name, textPos, textSize * MenuScale, TextColor, 2.f, { 0,0,0,0 }, { 0,0 }, true, false, false, { 0,0,0,0 });
		if (isHovered && IsLClickPressed())
			return true;

		return false;
	}
	void DrawOverlays()
	{
		bool anyActive = false;
		for (std::map<int, combo_state*>::iterator it = ComboStates.begin(); it != ComboStates.end(); it++)
		{
			if (it->second->active)
			{
				anyActive = true;
				Renderer::RenderFilledRoundedRectangle(&it->second->pos, it->second->size.X, it->second->size.Y, WindowRounding, Colors::Item_Background_Default, RoundedRectFlags_NoRoundingTopLeft | RoundedRectFlags_NoRoundingTopRight);
				for (int i = 0;i < it->second->numElements;i++)
				{
					if (!it->second->elements.at(i).c_str())
						continue;
					if (Selectable(it->second->elements.at(i).c_str(), { it->second->pos.X, it->second->pos.Y + ((30.f * MenuScale) * i) }, { it->second->size.X, (30.f * MenuScale) }, *it->second->selectedElement == i ? Colors::Accent : Colors::Text, { (0.6f * MenuScale),(0.6f * MenuScale) }))
					{
						it->second->active = false;
						*it->second->selectedElement = i;
					}
				}
			}
		}
		for (std::map<int, popup_state*>::iterator it = PopupStates.begin(); it != PopupStates.end(); it++)
		{
			if (!it->second)
				continue;
			it->second->size_y = GuiLerp(it->second->size_y, it->second->owningElement == PopupElementID ? it->second->max_size_y : 0.f, 0.18f);

			if(it->second->size_y / it->second->max_size_y < 0.1f && it->second->max_size_y != 0.f)
				continue;
			last_element_pos = it->second->PosAtTheTime;

			last_element_size = FVector2D{ it->second->size_x, 60.f * MenuScale };

			offset_x = it->second->OffsetAtTheTime.X;
			offset_y = it->second->OffsetAtTheTime.Y;

			auto pos = FVector2D{ it->second->PosAtTheTime.X, it->second->PosAtTheTime.Y + last_element_size.Y };
			
			if (it->second->owningElement == PopupElementID) {
				ComboOpen = false;
				Draggable = false;
				if (Keyboard::GetState(VK_LBUTTON, 0) && !MouseInZone(pos, { it->second->size_x,it->second->size_y})) {
					PopupElementID = -1;
					Draggable = true;
				}
			}
			auto outerPos = FVector2D{ it->second->PosAtTheTime.X - 1.f, it->second->PosAtTheTime.Y + last_element_size.Y };
			Renderer::RenderFilledRoundedRectangle(&outerPos, it->second->size_x + 2.f, it->second->size_y, WindowRounding, Colors::Accent, RoundedRectFlags_NoRoundingTopLeft | RoundedRectFlags_NoRoundingTopRight);

			//pos.Y = it->second->PosAtTheTime.Y;
			//Renderer::DrawLine2D(FVector2D{ pos.X - 1.f, pos.Y }, FVector2D{ pos.X - 1.f, pos.Y + last_element_size.Y + it->second->size_y - WindowRounding  }, 2.f, Colors::Accent);
			//Renderer::DrawLine2D(FVector2D{ pos.X + it->second->size_x + 1.f, pos.Y }, FVector2D{ pos.X + it->second->size_x + 1.f, pos.Y + last_element_size.Y + it->second->size_y - WindowRounding}, 2.f, Colors::Accent);

			if (it->second->size_y / it->second->max_size_y < 0.9f)
				continue;
			VarForPopupLambda = it->second->var;
			
			DrawOverlay(it->second->var, it->second);

			it->second->max_size_y = offsetYFromLambdaForPopUp + 5.f;

			
		}
		ComboOpen = anyActive;
	}
	void Combo(const wchar_t* name, int* selectedElement, std::vector<std::wstring> elements, int numElements)
	{
		if (!selectedElement || elements.empty() || numElements < 1)
			return;
		elements_count++;
		FVector2D size = FVector2D{ 410, 60 };
		size *= MenuScale;
		FVector2D padding = FVector2D{ 5, 5 };
		padding *= MenuScale;
		FVector2D pos = FVector2D{ menu_pos.X + padding.X + offset_x, menu_pos.Y + padding.Y + offset_y };

		if (sameLine)
		{
			pos.X = last_element_pos.X + last_element_size.X + padding.X;
			pos.Y = last_element_pos.Y;
		}
		if (pushY)
		{
			pos.Y = pushYvalue;
			pushY = false;
			pushYvalue = 0.0f;
			offset_y = pos.Y - (float)menu_pos.Y;
		}
		bool isHovered = MouseInZone(FVector2D{ pos.X, pos.Y }, { size.X,size.Y + 5.f });
		bool clk = IsLClickPressed();
		bool rclk = IsRClickPressed();
		if (isHovered)
		{
			Draggable = false;
			Colors::Slider_Idle = FLinearColor{ 1.f, 0.f, 0.f, 1.0f };
			if (clk)
			{
				CanSelectKey = false;
				Colors::Slider_Idle = FLinearColor{ 0.f, 1.f, 0.f, 1.0f };
			}
			else
				CanSelectKey = true;
			if (rclk)
			{
				PopupElementID = elements_count;
			}
		}

		std::wstring previewElement = Xors(L"None");

		combo_state* state = ComboStates[elements_count];
		if (!state)
		{
			state = new combo_state();
			ComboStates[elements_count] = state;
		}

		if (*selectedElement < numElements && *selectedElement >= 0 && elements[*selectedElement].c_str())
			previewElement = elements[*selectedElement];

		state->selectedColor = Colors::Accent;
		state->unselectedColor = Colors::Text;


		Renderer::RenderFilledRoundedRectangle(&pos, size.X, size.Y, WindowRounding, Colors::Item_Background_Default, RoundedRectFlags_None);
		FVector2D PreviewSize = { 300.f * MenuScale, 40.f * MenuScale };
		FVector2D PreviewMiddlePos = FVector2D{ pos.X + size.X - (PreviewSize.X / 2) - (10 * MenuScale), pos.Y + ((double)size.Y / 2) };
		FVector2D PreviewStartPos = { PreviewMiddlePos.X - (PreviewSize.X / 2),PreviewMiddlePos.Y - (PreviewSize.Y / 2) };
		Renderer::RenderFilledRoundedRectangle(&PreviewStartPos, PreviewSize.X, PreviewSize.Y, 4.f, Colors::Item_Background_Inactive, state->active ? RoundedRectFlags_NoRoundingBottomLeft | RoundedRectFlags_NoRoundingBottomRight : RoundedRectFlags_None);

		if (previewElement.c_str())
		{
			FVector2D textPos = FVector2D{ PreviewMiddlePos };
			Renderer::canvas->K2_DrawText(Renderer::Font, previewElement.c_str(), textPos, FVector2D{ (0.6f * MenuScale), (0.6f * MenuScale) }, state->selectedColor, 2.f, { 0,0,0,0 }, { 0,0 }, true, true, false, { 0,0,0,0 });
		}
		else
		{
			FVector2D textPos = FVector2D{ PreviewMiddlePos };
			Renderer::canvas->K2_DrawText(Renderer::Font, Xors(L"ERROR"), textPos, FVector2D{ (0.6f * MenuScale), (0.6f * MenuScale) }, { 1.f,1.f,1.f,1.f }, 2.f, { 0,0,0,0 }, { 0,0 }, true, true, false, { 0,0,0,0 });
		}

		if (name) {
			FVector2D textPos = FVector2D{ pos.X + (20.0f * MenuScale), pos.Y + (7.0f * MenuScale) };
			Renderer::canvas->K2_DrawText(Renderer::Font, name, textPos, FVector2D{ (0.8f * MenuScale), (0.8f * MenuScale) }, Colors::Text, 2.f, { 0,0,0,0 }, { 0,0 }, false, false, false, { 0,0,0,0 });
		}

		if (!sameLine)
			offset_y += size.Y + (float)padding.Y;

		sameLine = false;

		last_element_pos = pos;

		if (first_element_pos.X == 0.0f)
			first_element_pos = pos;

		if (!state->active && isHovered && clk)
		{
			ComboOpen = true;
			state->active = true;
		}
		if (state->active) {
			FVector2D comboStartPos = { PreviewStartPos.X + 1,PreviewStartPos.Y + PreviewSize.Y };
			state->pos = comboStartPos;
			FVector2D comboSize = { PreviewSize.X - 1, (30.f * MenuScale) * numElements };
			state->size = comboSize;
			if (!MouseInZone(comboStartPos, comboSize) && !isHovered) {
				ComboOpen = false;
				state->active = false;
			}
			state->elements = elements;
			state->numElements = numElements;
			state->selectedElement = selectedElement;
		}
		return;
	}
	void InputText(const wchar_t* name, const wchar_t* preview, std::wstring* value, InputType Type, size_t maxLen )
	{
		elements_count++;
		FVector2D size = FVector2D{ 410, 60 };
		size *= MenuScale;
		FVector2D padding = FVector2D{ 5, 5 };
		padding *= MenuScale;
		FVector2D pos = FVector2D{ menu_pos.X + padding.X + offset_x, menu_pos.Y + padding.Y + offset_y };

		if (sameLine)
		{
			pos.X = last_element_pos.X + last_element_size.X + padding.X;
			pos.Y = last_element_pos.Y;
		}
		if (pushY)
		{
			pos.Y = pushYvalue;
			pushY = false;
			pushYvalue = 0.0f;
			offset_y = pos.Y - (float)menu_pos.Y;
		}
		bool isHovered = MouseInZone(FVector2D{ pos.X, pos.Y }, size);
		bool clk = IsLClickPressed();
		if (isHovered)
		{
			Draggable = false;
			if (clk)
			{
				InputFocused = true;
				FocusedInputID = elements_count;
			}
		}
		//Background
		Renderer::RenderFilledRoundedRectangle(&pos, size.X, size.Y, WindowRounding, Colors::Item_Background_Default, RoundedRectFlags_None);

		Keyboard::DisableTextMode();
		if (InputFocused && FocusedInputID == elements_count && (Keyboard::GetState(VK_ESCAPE, 0) || (!isHovered && clk)))
		{
			InputFocused = false;
			FocusedInputID = -1;
		}

		input_state* state = InputStates[elements_count];
		if (!state)
		{
			state = new input_state();
			InputStates[elements_count] = state;
		}
		FVector2D InputSize = { (size.X * 0.5f), (50.f * MenuScale) };
		FVector2D InputStartPos = { pos.X + (size.X * 0.4f), pos.Y + (size.Y / 2) - (InputSize.Y / 2) };

		//Input Background
		Renderer::RenderFilledRoundedRectangle(&InputStartPos, InputSize.X, InputSize.Y, 4.f, Colors::Item_Background_Inactive, RoundedRectFlags_None);
		FVector2D textStartPos = FVector2D{ InputStartPos.X + (5.f * MenuScale), InputStartPos.Y + (InputSize.Y / 2) };
		state->cursorPos.Y = textStartPos.Y;
		if (InputFocused && FocusedInputID == elements_count)
		{
			FString draw = (value->c_str());
			FVector2D TextSize = Renderer::canvas->K2_TextSize(Renderer::Font, draw, FVector2D{ (0.6f * MenuScale), (0.6f * MenuScale) });
			if (TextSize.X < 0.1f)
				TextSize.X = 1.f;
			if (TextSize.Y < 0.1f)
				TextSize.Y = (0.6f * MenuScale);
			state->cursorPos.X = GuiLerp(state->cursorPos.X, textStartPos.X + (TextSize.X * 1.1f), 0.2f);
			//Draw Text
			Renderer::canvas->K2_DrawText(Renderer::Font, value->c_str(), textStartPos, FVector2D{ (0.6f * MenuScale), (0.6f * MenuScale) }, Colors::Text_Active, 2.f, { 0,0,0,0 }, { 0,0 }, false, true, false, { 0,0,0,0 });
			//Draw Cursor line
			Renderer::DrawLine2D(FVector2D{ state->cursorPos.X + 1.f, state->cursorPos.Y + (TextSize.Y * 0.6f) }, FVector2D{ state->cursorPos.X + 1.f, state->cursorPos.Y - (TextSize.Y * 0.6f) }, 2.f, Colors::Text_Active);

			Keyboard::EnableTextMode();
			wchar_t lastKey = Keyboard::GetLastKeyTextModeOnly(Type);
			if (value->size() < maxLen && lastKey != -1 && lastKey != 0xffff) {
				value->append(1, lastKey);
			}
			Keyboard::DisableTextMode();
			if (Keyboard::GetState(VK_BACK, 0) && Keyboard::GetState(VK_LCONTROL, 1) && value->size() > 0)
				while (value->size() > 0 && value->back() != L' ')
					value->pop_back();
			else if (Keyboard::GetState(VK_BACK, 0) && value->size() > 0)
				value->pop_back();
		}
		else
		{
			if (value->size() > 0)
			{
				Renderer::canvas->K2_DrawText(Renderer::Font, value->c_str(), textStartPos, FVector2D{ (0.6f * MenuScale), (0.6f * MenuScale) }, Colors::Text, 2.f, { 0,0,0,0 }, { 0.5f,0.5f }, false, true, false, { 0,0,0,0 });
			}
			else if (preview)
			{
				Renderer::canvas->K2_DrawText(Renderer::Font, preview, textStartPos, FVector2D{ (0.6f * MenuScale), (0.6f * MenuScale) }, Colors::Text, 2.f, { 0,0,0,0 }, { 0.5f,0.5f }, false, true, false, { 0,0,0,0 });
			}
		}
		if (name) {
			FVector2D textPos = FVector2D{ pos.X + (20.0f * MenuScale), pos.Y + (7.0f * MenuScale) };
			Renderer::canvas->K2_DrawText(Renderer::Font, name, textPos, FVector2D{ (0.8f * MenuScale), (0.8f * MenuScale) }, Colors::Text, 2.f, { 0,0,0,0 }, { 0,0 }, false, false, false, { 0,0,0,0 });
		}

		if (!sameLine)
			offset_y += size.Y + (float)padding.Y;
		sameLine = false;
		last_element_pos = pos;
		if (first_element_pos.X == 0.0f)
			first_element_pos = pos;
	}
	bool SearchBar(const wchar_t* preview, std::wstring* value, InputType Type, size_t maxLen)
	{
		FVector2D size = FVector2D{ 240, 40 };
		size *= MenuScale;
		FVector2D padding = FVector2D{ 5, 5 };
		padding *= MenuScale;
		FVector2D pos = FVector2D{ menu_pos.X + padding.X , menu_pos.Y + padding.Y + (70.f * MenuScale) };

		bool isHovered = MouseInZone(FVector2D{ pos.X, pos.Y }, size);
		bool clk = IsLClickPressed();
		if (isHovered)
		{
			Draggable = false;
			if (clk)
			{
				InputFocused = true;
				FocusedInputID = 69;
			}
		}
		//Background
		Renderer::RenderFilledRoundedRectangle(&pos, size.X, size.Y, WindowRounding, Colors::Item_Background_Default, RoundedRectFlags_None);

		Keyboard::DisableTextMode();
		if (InputFocused && FocusedInputID == 69 && (Keyboard::GetState(VK_ESCAPE, 0) || (!isHovered && clk)))
		{
			InputFocused = false;
			FocusedInputID = -1;
		}

		input_state* state = InputStates[69];
		if (!state)
		{
			state = new input_state();
			InputStates[69] = state;
		}
		FVector2D InputSize = { (size.X * 0.9f), (40.f * MenuScale) };
		FVector2D InputStartPos = { pos.X , pos.Y + (size.Y / 2) - (InputSize.Y / 2) };

		//Input Background
		FVector2D textStartPos = FVector2D{ InputStartPos.X + (5.f * MenuScale), InputStartPos.Y + (InputSize.Y / 2) };
		state->cursorPos.Y = textStartPos.Y;
		if (InputFocused && FocusedInputID == 69)
		{
			if (value->size() > 0)
				currentTabgroup = 69;
			FString draw = (value->c_str());
			FVector2D TextSize = Renderer::canvas->K2_TextSize(Renderer::Font, draw, FVector2D{ (0.6f * MenuScale), (0.6f * MenuScale) });
			if (TextSize.X < 0.1f)
				TextSize.X = 1.f;
			if (TextSize.Y < 0.1f)
				TextSize.Y = (0.6f * MenuScale);
			state->cursorPos.X = GuiLerp(state->cursorPos.X, textStartPos.X + (TextSize.X * 1.1f), 0.2f);
			//Draw Text
			Renderer::canvas->K2_DrawText(Renderer::Font, value->c_str(), textStartPos, FVector2D{ (0.6f * MenuScale), (0.6f * MenuScale) }, Colors::Text_Active, 2.f, { 0,0,0,0 }, { 0,0 }, false, true, false, { 0,0,0,0 });
			//Draw Cursor line
			Renderer::DrawLine2D(FVector2D{ state->cursorPos.X + 1.f, state->cursorPos.Y + (TextSize.Y * 0.6f) }, FVector2D{ state->cursorPos.X + 1.f, state->cursorPos.Y - (TextSize.Y * 0.6f) }, 2.f, Colors::Text_Active);

			Keyboard::EnableTextMode();
			wchar_t lastKey = Keyboard::GetLastKeyTextModeOnly(Type);
			if (value->size() < maxLen && lastKey != -1 && lastKey != 0xffff) {
				value->append(1, lastKey);
			}
			Keyboard::DisableTextMode();
			if (Keyboard::GetState(VK_BACK, 0) && Keyboard::GetState(VK_LCONTROL, 1) && value->size() > 0)
				while (value->size() > 0 && value->back() != L' ')
					value->pop_back();
			else if (Keyboard::GetState(VK_BACK, 0) && value->size() > 0)
				value->pop_back();
		}
		else
		{
			if (value->size() > 0)
			{
				Renderer::canvas->K2_DrawText(Renderer::Font, value->c_str(), textStartPos, FVector2D{ (0.6f * MenuScale), (0.6f * MenuScale) }, Colors::Text, 2.f, { 0,0,0,0 }, { 0.5f,0.5f }, false, true, false, { 0,0,0,0 });
			}
			else if (preview)
			{
				Renderer::canvas->K2_DrawText(Renderer::Font, preview, textStartPos, FVector2D{ (0.6f * MenuScale), (0.6f * MenuScale) }, Colors::Text, 2.f, { 0,0,0,0 }, { 0.5f,0.5f }, false, true, false, { 0,0,0,0 });
			}
		}
		return 1;//value->size() > 0;
	}
	void DrawVar(VarBase* Var)
	{
		if (!Var)
			return;
		switch (Var->Type)
		{
		case VarT::KeyBind:
		{
			auto KBVar = (KeyBindVar*)Var;

			Checkbox(KBVar->GetName(), KBVar->GetDesc(), &KBVar->Enabled, true);
			auto state = PopupStates[elements_count];
			if (state)
			{
				state->var = Var;

			}
			break;
		};
		case VarT::KeyBindOptional:
		{
			auto KBOVar = (KeyBindOptionalVar*)Var;

			Checkbox(KBOVar->GetName(), KBOVar->GetDesc(), &KBOVar->Enabled, true);

			auto state = PopupStates[elements_count];
			if (state)
			{
				state->var = Var;

			}
			break;
		};
		case VarT::MultiVec:
		{
			auto MultiV = (MultiVarVec*)Var;

			Checkbox(MultiV->GetName(), MultiV->GetDesc(), &MultiV->Enabled, true);

			auto state = PopupStates[elements_count];
			if (state)
			{
				state->var = Var;

			}

			break;
		};
		case VarT::MultiVBFV:
		{
			auto MultiV = (MultiVarVBFV*)Var;

			Checkbox(MultiV->GetName(), MultiV->GetDesc(), &MultiV->Enabled, true);

			auto state = PopupStates[elements_count];
			if (state)
			{
				state->var = Var;

			}
			break;
		};
		case VarT::MultiVBFVCV:
		{
			auto MultiV = (MultiVarVBFVCV*)Var;

			Checkbox(MultiV->GetName(), MultiV->GetDesc(), &MultiV->Enabled, true);

			auto state = PopupStates[elements_count];
			if (state)
			{
				state->var = Var;

			}
			break;
		};
		case VarT::NoToggleColor:
		{
			auto VarC = (ColorVar*)Var;
			ColorPicker(VarC->GetName(), &VarC->Color);
			auto state = PopupStates[elements_count];
			if (state)
			{
				state->var = Var;
			}
			break;
		};
		case VarT::Color:
		{
			auto VarC = (ColorVar*)Var;
			Checkbox(VarC->GetName(), VarC->GetDesc(), &VarC->Enabled, true);
			//ColorPicker(VarC->GetName(), &VarC->Color);
			auto state = PopupStates[elements_count];
			if (state)
			{
				state->var = Var;
			}
			break;
		};
		case VarT::Int:
		{
			auto VarI = (IntVar*)Var;
			Checkbox(VarI->GetName(), VarI->GetDesc(), &VarI->Enabled, true);

			auto state = PopupStates[elements_count];
			if (state)
			{
				state->var = Var;
			}
			break;
		};
		case VarT::Float:
		{
			auto VarF = (FloatVar*)Var;

			Checkbox(VarF->GetName(), VarF->GetDesc(), &VarF->Enabled, true);

			auto state = PopupStates[elements_count];
			if (state)
			{
				state->var = Var;
			}
			break;
		};
		case VarT::NoToggleInt:
		{
			auto VarI = (IntVar*)Var;
			SliderInt(VarI->GetName(), VarI->GetDesc(), &VarI->Val, VarI->Min, VarI->Max);
			break;
		};
		case VarT::NoToggleFloat:
		{
			auto VarF = (FloatVar*)Var;
			SliderFloat(VarF->GetName(), VarF->GetDesc(), &VarF->Val, VarF->Min, VarF->Max);
			break;
		};
		case VarT::MColor:
		{
			auto VarC = (MultiColorVar*)Var;
			Checkbox(VarC->GetName(), VarC->GetDesc(), &VarC->Enabled, true);

			auto state = PopupStates[elements_count];
			if (state)
			{
				state->var = Var;
			}
			break;
		};
		case VarT::Structure:
		{
			auto VarS = (StructureVar*)Var;
			Checkbox(VarS->GetName(), VarS->GetDesc(), &VarS->Enabled, true);

			auto state = PopupStates[elements_count];
			if (state)
			{
				state->var = Var;
			}
			break;
		};
		case VarT::Toggle:
		{
			Checkbox(Var->GetName(), Var->GetDesc(), &Var->Enabled, true);
			auto state = PopupStates[elements_count];
			if (state)
			{
				state->var = Var;
			}
			break;
		};
		default:
			break;
		};
		//Var->Tick();
	}
	void DrawOverlay(VarBase* Var, popup_state* state)
	{
		if (!Var)
			return;
		switch (Var->Type)
		{
		case VarT::KeyBind:
		{
			auto KBVar = (KeyBindVar*)VarForPopupLambda;
			if (!VarForPopupLambda) {
				nlog(Xors("VarForPopupLambda is null"));
				return;
			}
			oldoffsetYForPopup = offset_y;
			Keybind(Xors(L"Execute Keybind"), &KBVar->KeyBindForVar);
			Keybind(Xors(L"Toggle Keybind"), &KBVar->keyBindForToggle);
			offsetYFromLambdaForPopUp = offset_y - oldoffsetYForPopup;

			break;
		};
		case VarT::KeyBindOptional:
		{

			auto KBOVar = (KeyBindOptionalVar*)VarForPopupLambda;
			if (!VarForPopupLambda) {
				nlog(Xors("VarForPopupLambda is null"));
				return;
			}
			oldoffsetYForPopup = offset_y;
			Checkbox(Xors(L"Only activate on key"), Xors(L"Only activates when holding keybind"), &KBOVar->UseKeyBind);
			Keybind(Xors(L"Only activate on keypress:"), &KBOVar->KeyBindForVar);
			Keybind(Xors(L"Toggle Keybind"), &KBOVar->keyBindForToggle);
			offsetYFromLambdaForPopUp = offset_y - oldoffsetYForPopup;


			break;
		};
		case VarT::MultiVec:
		{

			auto MultiV = (MultiVarVec*)VarForPopupLambda;
			if (!VarForPopupLambda) {
				nlog(Xors("VarForPopupLambda is null"));
				return;
			}
			oldoffsetYForPopup = offset_y;
			for (int i = 0; i < MultiV->Vars.size();i++)
			{
				DrawVar(&MultiV->Vars[i]);
			};
			Keybind(Xors(L"Toggle Keybind"), &MultiV->keyBindForToggle);
			offsetYFromLambdaForPopUp = offset_y - oldoffsetYForPopup;



			break;
		};
		case VarT::MultiVBFV:
		{

			auto MultiV = (MultiVarVBFV*)VarForPopupLambda;
			if (!VarForPopupLambda) {
				nlog(Xors("VarForPopupLambda is null"));
				return;
			}
			oldoffsetYForPopup = offset_y;
			DrawVar(&MultiV->VB);
			DrawVar(&MultiV->FV);

			Keybind(Xors(L"Toggle Keybind"), &MultiV->keyBindForToggle);
			offsetYFromLambdaForPopUp = offset_y - oldoffsetYForPopup;

			break;
		};
		case VarT::MultiVBFVCV:
		{
			auto MultiV = (MultiVarVBFVCV*)VarForPopupLambda;
			if (!VarForPopupLambda) {
				nlog(Xors("VarForPopupLambda is null"));
				return;
			}
			oldoffsetYForPopup = offset_y;
			DrawVar(&MultiV->VB);
			DrawVar(&MultiV->FV);
			DrawVar(&MultiV->CV);

			Keybind(Xors(L"Toggle Keybind"), &MultiV->keyBindForToggle);
			offsetYFromLambdaForPopUp = offset_y - oldoffsetYForPopup;

			break;
		};
		case VarT::NoToggleColor:
		{
			auto VarC = (ColorVar*)Var;
			oldoffsetYForPopup = offset_y;
			DrawColorPickerPopup({menu_pos.X + state->OffsetAtTheTime.X , menu_pos.Y + state->OffsetAtTheTime.Y},state);
			//Keybind(L"Toggle Keybind", &VarC->keyBindForToggle);
			offsetYFromLambdaForPopUp = 500.f;
			break;
		};
		case VarT::Color:
		{

			auto VarC = (ColorVar*)VarForPopupLambda;
			if (!VarForPopupLambda) {
				nlog(Xors("VarForPopupLambda is null"));
				return;
			}
			oldoffsetYForPopup = offset_y;
			//ColorPicker(VarC->GetName(), &VarC->Color);
			//DrawColorPickerPopup({menu_pos.X + state->OffsetAtTheTime.X , menu_pos.Y + state->OffsetAtTheTime.Y},state);
			//Keybind(L"Toggle Keybind", &VarC->keyBindForToggle);
			offsetYFromLambdaForPopUp = 500.f;


			break;
		};
		case VarT::Int:
		{

			auto VarI = (IntVar*)VarForPopupLambda;
			if (!VarForPopupLambda) {
				nlog(Xors("VarForPopupLambda is null"));
				return;
			}
			oldoffsetYForPopup = offset_y;
			SliderInt(VarI->GetName(), VarI->GetDesc(), &VarI->Val, VarI->Min, VarI->Max);

			Keybind(Xors(L"Toggle Keybind"), &VarI->keyBindForToggle);
			offsetYFromLambdaForPopUp = offset_y - oldoffsetYForPopup;


			break;
		};
		case VarT::Float:
		{

			auto VarF = (FloatVar*)VarForPopupLambda;
			if (!VarForPopupLambda) {
				nlog(Xors("VarForPopupLambda is null"));
				return;
			}
			oldoffsetYForPopup = offset_y;
			SliderFloat(VarF->GetName(), VarF->GetDesc(), &VarF->Val, VarF->Min, VarF->Max);

			Keybind(Xors(L"Toggle Keybind"), &VarF->keyBindForToggle);
			offsetYFromLambdaForPopUp = offset_y - oldoffsetYForPopup;

			break;
		};
		case VarT::NoToggleInt:
		{
			auto VarI = (IntVar*)Var;
			SliderInt(VarI->GetName(), VarI->GetDesc(), &VarI->Val, VarI->Min, VarI->Max);
			break;
		};
		case VarT::NoToggleFloat:
		{
			auto VarF = (FloatVar*)Var;
			SliderFloat(VarF->GetName(), VarF->GetDesc(), &VarF->Val, VarF->Min, VarF->Max);
			break;
		};
		case VarT::MColor:
		{

			auto VarC = (MultiColorVar*)VarForPopupLambda;
			if (!VarForPopupLambda) {
				nlog(Xors("VarForPopupLambda is null"));
				return;
			}
			oldoffsetYForPopup = offset_y;
			for (auto& Color : VarC->Colors)
			{
				float col[4] = { (float)Color.R,(float)Color.G,(float)Color.B,(float)Color.A };
				//ColorEdit4("Color", col, ImGuiColorEditFlags_NoInputs);
				Color.R = col[0];
				Color.G = col[1];
				Color.B = col[2];
				Color.A = col[3];
			};

			Keybind(Xors(L"Toggle Keybind"), &VarC->keyBindForToggle);
			offsetYFromLambdaForPopUp = offset_y - oldoffsetYForPopup;


			break;
		};
		case VarT::Structure:
		{
			auto VarS = (StructureVar*)VarForPopupLambda;
			if (!VarForPopupLambda) {
				nlog(Xors("VarForPopupLambda is null"));
				return;
			}
			oldoffsetYForPopup = offset_y;

			Keybind(Xors(L"Toggle Keybind"), &VarS->keyBindForToggle);
			Checkbox(Xors(L"Chams"), Xors(L"See structure through walls"), &VarS->Chams);
			Checkbox(Xors(L"Draw Name"), Xors(L"Shows the structure`s name"), &VarS->DrawName);
			Checkbox(Xors(L"Distance"), Xors(L"Shows the distance to structure"), &VarS->Distance);
			Checkbox(Xors(L"Slots"), Xors(L"Shows structures inventory slots"), &VarS->Slots);
			Checkbox(Xors(L"Tribe Name"), Xors(L"Shows the owning tribes name"), &VarS->TribeName);

			offsetYFromLambdaForPopUp = offset_y - oldoffsetYForPopup;

			break;
		};
		case VarT::Toggle:
		{
			oldoffsetYForPopup = offset_y;
			if (!VarForPopupLambda) {
				nlog(Xors("VarForPopupLambda is null"));
				return;
			}

			&VarForPopupLambda->keyBindForToggle;
			Keybind(Xors(L"Toggle Keybind"), &VarForPopupLambda->keyBindForToggle);
			offsetYFromLambdaForPopUp = offset_y - oldoffsetYForPopup;
			break;
		};
		case VarT(42):
		{
			auto KBOVar = (KeyBindOptionalVar*)VarForPopupLambda;
			if (!VarForPopupLambda) {
				nlog(Xors("VarForPopupLambda is null"));
				return;
			}
			oldoffsetYForPopup = offset_y;

			Keybind(Xors(L"Toggle Keybind"), &KBOVar->keyBindForToggle);
			Checkbox(Xors(L"Auto Popcorn Players"), Xors(L"Auto Popcorns Players"), &settings::autoMation::AutoPopcornPlayers);
			Checkbox(Xors(L"Auto Popcorn Structures"), Xors(L"Auto Popcorns Structures"), &settings::autoMation::AutoPopcornStructures);
			Checkbox(Xors(L"Auto Popcorn Turrets"), Xors(L"Auto Popcorns Turrets"), &settings::autoMation::AutoPopcornTurrets);
			Checkbox(Xors(L"Auto Popcorn Bags"), Xors(L"Auto Popcorns Bags"), &settings::autoMation::AutoPopcornBags);
			offsetYFromLambdaForPopUp = offset_y - oldoffsetYForPopup;
			break;
		};
		case VarT(43):
		{
			auto KBOVar = (KeyBindOptionalVar*)VarForPopupLambda;
			if (!VarForPopupLambda) {
				nlog(Xors("VarForPopupLambda is null"));
				return;
			}
			oldoffsetYForPopup = offset_y;
			Keybind(Xors(L"Toggle Keybind"), &KBOVar->keyBindForToggle);
			Checkbox(Xors(L"Auto Loot Players"), Xors(L"Auto Loots Players"), &settings::autoMation::AutoTakePlayers);
			Checkbox(Xors(L"Auto Loot Structures"), Xors(L"Auto Loots Structures"), &settings::autoMation::AutoTakeStructures);
			Checkbox(Xors(L"Auto Loot Turrets"), Xors(L"Auto Loots Turrets"), &settings::autoMation::AutoTakeTurrets);
			Checkbox(Xors(L"Auto Loot Bags"), Xors(L"Auto Loots Bags"), &settings::autoMation::AutoTakeBags);
			offsetYFromLambdaForPopUp = offset_y - oldoffsetYForPopup;
			break;
		};
		case VarT(44):
		{
			auto SEV = (StructureExtraVar*)VarForPopupLambda;
			if (!VarForPopupLambda) {
				nlog(Xors("VarForPopupLambda is null"));
				return;
			}
			oldoffsetYForPopup = offset_y;
			Keybind(Xors(L"Toggle Keybind"), &SEV->keyBindForToggle);
			Checkbox(Xors(L"Chams"), Xors(L"See structure through walls"), &SEV->Chams);
			Checkbox(Xors(L"Draw Name"), Xors(L"Shows the structure`s name"), &SEV->DrawName);
			Checkbox(Xors(L"Distance"), Xors(L"Shows the distance to structure"), &SEV->Distance);
			Checkbox(Xors(L"Slots"), Xors(L"Shows structures inventory slots"), &SEV->Slots);
			Checkbox(Xors(L"Tribe Name"), Xors(L"Shows the owning tribes name"), &SEV->TribeName);
			Checkbox(Xors(L"Turret Target"), Xors(L"Shows the turrets targeting settings"), &SEV->ExtraOption1);
			Checkbox(Xors(L"Turret Range"), Xors(L"Shows the turrets range settings"), &SEV->ExtraOption2);
			//Checkbox(Xors(L"Turret Range Bubble"), Xors(L"Draws accurate range bubble"), &SEV->ExtraOption3);
			offsetYFromLambdaForPopUp = offset_y - oldoffsetYForPopup;
			break;
		};
		case VarT(45):
		{
			auto SEV = (StructureExtraVar*)VarForPopupLambda;
			if (!VarForPopupLambda) {
				nlog(Xors("VarForPopupLambda is null"));
				return;
			}
			oldoffsetYForPopup = offset_y;
			Keybind(Xors(L"Toggle Keybind"), &SEV->keyBindForToggle);
			Checkbox(Xors(L"Metal"), Xors(L"Enable Metal Esp"), &settings::resourceStructure::Metal);
			Checkbox(Xors(L"Crystal"), Xors(L"Enable Crystal Esp"), &settings::resourceStructure::Crystal);
			Checkbox(Xors(L"Pearls"), Xors(L"Enable Pearls Esp"), &settings::resourceStructure::Pearls);
			Checkbox(Xors(L"Obsidian"), Xors(L"Enable Obsidian Esp"), &settings::resourceStructure::Obsidian);
			Checkbox(Xors(L"Oil"), Xors(L"Enable Oil Esp"), &settings::resourceStructure::Oil);
			SliderInt(Xors(L"Render Distance"), Xors(L"Meters"), &settings::resourceStructure::Distance, 100, 600);
			offsetYFromLambdaForPopUp = offset_y - oldoffsetYForPopup;
			break;
		};
		case VarT(46):
		{
			auto KBOVar = (KeyBindOptionalVar*)VarForPopupLambda;
			if (!VarForPopupLambda) {
				nlog(Xors("VarForPopupLambda is null"));
				return;
			}
			oldoffsetYForPopup = offset_y;

			Keybind(Xors(L"Toggle Keybind"), &KBOVar->keyBindForToggle);
			Checkbox(Xors(L"Auto Popcorn Team Players"), Xors(L"Auto Popcorns Players"), &settings::autoMation::TeamAutoPopcornPlayers);
			Checkbox(Xors(L"Auto Popcorn Team Structures"), Xors(L"Auto Popcorns Structures"), &settings::autoMation::TeamAutoPopcornStructures);
			Checkbox(Xors(L"Auto Popcorn Team Bags"), Xors(L"Auto Popcorns Bags"), &settings::autoMation::TeamAutoPopcornBags);
			offsetYFromLambdaForPopUp = offset_y - oldoffsetYForPopup;
			break;
		};
		case VarT(47):
		{
			auto KBOVar = (KeyBindOptionalVar*)VarForPopupLambda;
			if (!VarForPopupLambda) {
				nlog(Xors("VarForPopupLambda is null"));
				return;
			}
			oldoffsetYForPopup = offset_y;
			Keybind(Xors(L"Toggle Keybind"), &KBOVar->keyBindForToggle);
			Checkbox(Xors(L"Auto Loot Team Players"), Xors(L"Auto Loots Players"), &settings::autoMation::TeamAutoTakePlayers);
			Checkbox(Xors(L"Auto Loot Team Structures"), Xors(L"Auto Loots Structures"), &settings::autoMation::TeamAutoTakeStructures);
			Checkbox(Xors(L"Auto Loot Team Turrets"), Xors(L"Auto Loots Turrets"), &settings::autoMation::TeamAutoTakeTurrets);
			Checkbox(Xors(L"Auto Loot Team Bags"), Xors(L"Auto Loots Bags"), &settings::autoMation::TeamAutoTakeBags);
			offsetYFromLambdaForPopUp = offset_y - oldoffsetYForPopup;
			break;
		};
		case VarT(420):
		{
			auto KBOVar = (KeyBindOptionalVar*)VarForPopupLambda;
			if (!VarForPopupLambda) {
				nlog(Xors("VarForPopupLambda is null"));
				return;
			}
			oldoffsetYForPopup = offset_y;
			//Checkbox(L"Only activate on key", L"Only activates when holding keybind", &KBOVar->UseKeyBind);
			Keybind(Xors(L"Toggle Type Keybind"), &KBOVar->KeyBindForVar);
			Keybind(Xors(L"Toggle Keybind"), &KBOVar->keyBindForToggle);
			Checkbox(Xors(L"Ignore Gaunts"), Xors(L"Dont Swap Gaunts"), &settings::autoMation::IgnoreGaunts);
			Checkbox(Xors(L"Ignore Chest"), Xors(L"Dont Swap Chest"), &settings::autoMation::IgnoreChest);
			Checkbox(Xors(L"Legit Auto Armor"), Xors(L"Only Swap When Inventory Is Open"), &settings::autoMation::LegitAutoFlak);
			Combo(Xors(L"Auto Armor Type"), &settings::autoMation::AutoArmorType, AutoArmorType, 3);
			offsetYFromLambdaForPopUp = offset_y - oldoffsetYForPopup;
			break;
		};
		default:
			break;
		};
		//Var->Tick();
	}
	int Levenshtein(const std::wstring& str1, const std::wstring& str2, int m, int n)
	{
		if (m == 0) {
			return n;
		}
		if (n == 0) {
			return m;
		}
		if (str1[m - 1] == str2[n - 1]) {
			return Levenshtein(str1, str2, m - 1, n - 1);
		}
		return 1 + min(Levenshtein(str1, str2, m, n - 1), min(Levenshtein(str1, str2, m - 1, n), Levenshtein(str1, str2, m - 1, n - 1)));
	}
	int FindFirstIndex(std::wstring source, std::wstring substring, size_t sourceLen, size_t substrLen)
	{


		std::transform(
			source.begin(), source.end(),
			source.begin(),
			towlower);

		std::transform(
			substring.begin(), substring.end(),
			substring.begin(),
			towlower);

		int index = -1;
		for (int i = 0; i < sourceLen; i++)
		{
			if (source[i] == substring[0])
			{
				bool found = true;
				for (int j = 0; j < substrLen; j++)
				{
					if (source[i + j] != substring[j])
					{
						found = false;
						break;
					}
				}
				if (found)
				{
					index = i;
					break;
				}
			}
		}
		return index;

	}
	void DrawSearchTab(std::wstring* searchStr, std::vector<VarBase*>* MenuVars)
	{
		int sumDistance = 0;
		std::vector<std::pair<int, VarBase*>> DrawnVars;

		for (int i = 0; i < MenuVars->size();i++)
		{
			VarBase* Var = MenuVars->at(i);
			auto name = Var->GetName();
			if (!name)
				continue;
			std::wstring namestr = name;
			int idx = FindFirstIndex(namestr, *searchStr, namestr.size(), searchStr->size());
			if (idx != -1)
				DrawnVars.push_back({ idx,Var });
		}
		std::qsort(DrawnVars.data(), DrawnVars.size(), sizeof(std::pair<int, VarBase*>), [](const void* a, const void* b)
			{
				return ((std::pair<int, VarBase*>*)a)->first - ((std::pair<int, VarBase*>*)b)->first;
			});
		float oldOffset = offset_y;
		offset_x = (250.f * MenuScale);
		offset_y = (0.f * MenuScale);
		bool SL = false;
		for (int i = 0; i < min(DrawnVars.size(), 20); i++)
		{
			auto var = DrawnVars[i].second;
			if (!var)
				continue;
			if (!SL)
			{
				offset_x = (250.f * MenuScale);
			}
			else
			{
				if ((int)offset_y - (int)oldOffset != 0)
					offset_y -= (65.f * MenuScale);
				offset_x = ((250 /*Tabs width*/ + 410 /*First column width*/ + 5 /*Spacing*/) * MenuScale);
				oldOffset = offset_y;
			}
			SL = !SL;
			DrawVar(var);
		}
	}
	void ColorPicker(const wchar_t* name, FLinearColor* color)
	{
		elements_count++;

		FVector2D size = FVector2D{ 410, 60 };
		size *= MenuScale;
		FVector2D padding = FVector2D{ 5, 5 };
		padding *= MenuScale;
		FVector2D pos = FVector2D{ menu_pos.X + padding.X + offset_x, menu_pos.Y + padding.Y + offset_y };

		if (sameLine)
		{
			pos.X = last_element_pos.X + last_element_size.X + padding.X;
			pos.Y = last_element_pos.Y;
		}
		if (pushY)
		{
			pos.Y = pushYvalue;
			pushY = false;
			pushYvalue = 0.0f;
			offset_y = pos.Y - (float)menu_pos.Y;
		}
		if (!sameLine)
			offset_y += size.Y + (float)padding.Y;

		bool isHovered = MouseInZone(FVector2D{ pos.X, pos.Y }, size);
		bool clk = IsLClickPressed();
		bool rclk = IsRClickPressed();
		if (isHovered && !ComboOpen)
		{
			Draggable = false;
		}
		if (isHovered && clk) {
			if (PopupElementID == elements_count) {
				PopupElementID = -1;
				ComboOpen = false;
				Draggable = true;
			}
			else
			{
				PopupElementID = elements_count;
				popup_state* state = PopupStates[elements_count];
				if (!state)
				{
					state = new popup_state();
					state->max_size_y = 0.f;
					state->size_y = 0.f;
					PopupStates[elements_count] = state;
				}
				state->owningElement = elements_count;
				state->PosAtTheTime = pos;
				state->size_x = size.X;
				state->OffsetAtTheTime = { offset_x ,offset_y };
				ComboOpen = true;
				Draggable = false;
			}
		}
		colorpicker_state* state = ColorPickerStates[elements_count];
		if (!state)
		{
			state = new colorpicker_state();
			ColorPickerStates[elements_count] = state;
			state->color = color;
		}

		if (PopupElementID != elements_count)
			Renderer::RenderFilledRoundedRectangle(&pos, size.X, size.Y, WindowRounding, Colors::Item_Background_Default, RoundedRectFlags_None);
		else
			Renderer::RenderFilledRoundedRectangle(&pos, size.X, size.Y, WindowRounding, Colors::Item_Background_Default, RoundedRectFlags_NoRoundingBottomLeft | RoundedRectFlags_NoRoundingBottomRight);

		FVector2D ColorRectMiddlePos = FVector2D{ pos.X + size.X - (60.f * MenuScale), pos.Y + ((double)size.Y / 2) };
		FVector2D ColorRectPos = FVector2D{ ColorRectMiddlePos.X - (20.f * MenuScale), ColorRectMiddlePos.Y - (21.f * MenuScale) };

		Renderer::RenderFilledRoundedRectangle(&ColorRectPos,  (40.f * MenuScale),(41.f * MenuScale), 2.f, *state->color, RoundedRectFlags_None);
		
		if (name) {
			FVector2D textPos = FVector2D{ pos.X + (20.0f * MenuScale), pos.Y + (7.0f * MenuScale) };
			Renderer::canvas->K2_DrawText(Renderer::Font, name, textPos, FVector2D{ (0.8f * MenuScale), (0.8f * MenuScale) }, Colors::Text_Active, 2.f, { 0,0,0,0 }, { 0,0 }, false, false, false, { 0,0,0,0 });
		}
		sameLine = false;
		last_element_pos = pos;
		if (first_element_pos.X == 0.0f)
			first_element_pos = pos;
		return;
	}
	void DrawHueLine(CG::FVector2D top_left,colorpicker_state* state)
	{
		for (float i = 0; i < 359; ++i)
		{
			Renderer::DrawLine2D({ top_left.X, top_left.Y + i / 3.6f }, { top_left.X + 10, top_left.Y + i / 3.6f }, 1.f, HSBColor{ i ,100, 100 }.ToRgb());
		}
		bool clicked = IsLClickHeld();
		bool hovered = MouseInZone({ top_left.X, top_left.Y }, { 10, 101 });
		CG::FVector2D cursor_pos = CursorPos();
		if ((clicked && hovered) || state->hueBarClicked)
		{
			state->HSBcolor = HSBColor{ static_cast<float>((cursor_pos.Y - top_left.Y) * 3.6), 100, 100 };
			state->lastHuePos.Y = cursor_pos.Y - top_left.Y;

			state->hueBarClicked = IsLClickHeld();
			state->lastHuePos.Y = min(100.0, max(state->lastHuePos.Y, 0.0));
		}
		state->lastHuePos.X = top_left.X;
		Renderer::DrawRectangleSize({ top_left.X - 1, top_left.Y + state->lastHuePos.Y - 2 }, { 11, 3 }, 1.f,{0,0,0,1});
	}
	void DrawHSBColorBox(HSBColor lpc, CG::FVector2D top_left, colorpicker_state* state)
	{
		for (int saturation = 0; saturation < 101; ++saturation)
		{
			Renderer::DrawLine2D({ top_left.X, top_left.Y + saturation }, { top_left.X + 100, top_left.Y + saturation }, 1.f, HSBColor(lpc.h, saturation, 100).ToRgb());
		}
		for (int brightness = 0; brightness < 101; ++brightness)
		{
			Renderer::DrawRectangleSize({ top_left.X - 1, top_left.Y + brightness }, { 101, 1 }, 1.f, {0.f,0.f,0.f,(float)brightness * 0.01f});
		}
		bool hovered = MouseInZone(top_left, { 100, 100 });
		bool held = IsLClickHeld();
		if (hovered && held)
		{
			CG::FVector2D mouse_pos = CursorPos();
			state->cursorPos.X = mouse_pos.X - top_left.X;
			state->cursorPos.Y = 100 - (mouse_pos.Y - top_left.Y);
		}

		if (state->cursorPos.X != 0 && state->cursorPos.Y != 0)
		{
			*state->color = HSBColor(lpc.h, state->cursorPos.X, state->cursorPos.Y).ToRgb();
		}
		Renderer::DrawCircle({ top_left.X + state->cursorPos.X, top_left.Y + 100 - state->cursorPos.Y },held ? 8 : 5, 30, 1, {1.f,1.f,1.f,1.f});
	}
	void DrawColorPickerPopup(FVector2D top_left,popup_state* popupstate)
	{
		if (!popupstate)
			return;
		colorpicker_state* state = ColorPickerStates[popupstate->owningElement];
		if (!state)
			return;
		FVector2D size = FVector2D{ 125, 110 };
		size *= MenuScale;
		Renderer::DrawFilledRectangleSize({ top_left.X + 35, top_left.Y + 5 }, size, *state->color);
		DrawHueLine({ top_left.X + 110 + 35, top_left.Y + 10 }, state);
		DrawHSBColorBox(state->HSBcolor, { top_left.X + 40, top_left.Y + 10 },state);
	}
}