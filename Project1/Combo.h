#pragma once
#include "MenuItemBase.h"
class Combo : public MenuItemClickable
{
private:
	void UpdateComboOpen();
	void UpdateLerp();
	void DrawPreview();
	FVector2D ComboStartPos;
	FVector2D ComboSize;
public:
	static Combo* SelectedCombo;
	std::vector<std::wstring> Items;
	std::vector<std::wstring>* ItemsPtr;
	int* SelectedIndex;
	Combo(std::wstring name, std::wstring description, int* SelectedItem, std::vector<std::wstring>* Items) : SelectedIndex(SelectedItem), ItemsPtr(Items)
	{
		this->ItemEnabled = true;
		this->Name = name;
		this->Description = description;
		this->Type = MenuItemType::ComboBox;
		this->IsHovered = false;
		this->ItemID = -1;
		this->PopupItem = false;
	}
	Combo(std::wstring name, std::wstring description, int* SelectedItem, std::vector<std::wstring> Items) : SelectedIndex(SelectedItem)
	{
		this->ItemEnabled = true;
		this->Name = name;
		this->Description = description;
		this->Type = MenuItemType::ComboBox;
		this->IsHovered = false;
		this->ItemID = -1;
		this->PopupItem = false;
		this->Items = Items;
		this->ItemsPtr = &this->Items;
	}
	void DrawComboItems();
	void Draw() override;
};