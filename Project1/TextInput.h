#pragma once
#include "MenuItemBase.h"
class TextInput :
	public MenuItemClickable
{
	float CursorOffset;
	void UpdateLerp();
	void UpdateCursor(float CursorPosition);
	void UpdateInput();
	void DrawInput();
public:
	TextInput(std::wstring name, std::wstring preView, std::wstring* value,InputType allowedInput = InputType_Alphabet | InputType_Numbers) : Value(value), PreView(preView), AllowedInput(allowedInput)
	{
		this->ItemEnabled = true;
		this->CursorOffset = 0;
		this->Name = name;
		this->Description = L"";
		this->Type = MenuItemType::TextInput;
		this->PopupItem = false;
		this->IsHovered = false;
		this->ItemID = -1;
	}

	void Draw() override;
	std::wstring* Value;
	std::wstring PreView;
	static TextInput* SelectedInput;
	InputType AllowedInput;
};