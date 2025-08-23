#pragma once
#include "pch.h"
#include "MenuItemBase.h"

class ColorPicker :
	public MenuItemBase
{
private:
	HSVColor Color;
	bool DraggingHueLine = false;
	bool DraggingSVBox = false;
	bool DraggingValueLine = false;
	void UpdateLerp(bool Selected);
	void UpdatePickerOpen();
	void DrawColorPreview();
	void UpdateRecentColors();
	float CursorWidth = 7.f;
	void DrawRecentColors(FVector2D PopupStartPos, float PopupWidth, float PopupHeight);
	void DrawSVBox(FVector2D PopupStartPos, float PopupWidth, float PopupHeight);
	void DrawHueLine(FVector2D PopupStartPos, float PopupWidth, float PopupHeight);
	void DrawValueLine(FVector2D PopupStartPos, float PopupWidth, float PopupHeight);
public:
	static ColorPicker* SelectedColorPicker;
	static std::vector<FLinearColor> RecentColors;
	void DrawColorPickerPopup();
	ColorPicker(std::wstring name, FLinearColor* value) : Value(value)
	{
		this->Name = name;
		this->Type = MenuItemType::ColorPicker;
		this->ItemEnabled = true;
		this->ItemID = -1;
		this->Color = Renderer::RGBtoHSV(*value);
	}
	void Draw() override;
	FLinearColor* Value;

};

