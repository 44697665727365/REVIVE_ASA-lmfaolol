#pragma once
#include "MenuItemBase.h"
class Keybind : public MenuItemPopup
{
private:
	void UpdateLerp(bool Selected);
	void DrawKeybind();
	int GetPressedKey();
	std::wstring GetKeyName(int key);
	void UpdateKeybind();
	FLinearColor BindTextColor;
	
public:
	Keybind(std::wstring name, int* key, bool UsePopup = false, std::vector<MenuItemBase*> PopupItems = {}) : key(key)
	{
		this->ItemEnabled = true;
		this->Name = name;
		this->Description = Xors(L"");
		this->Type = MenuItemType::CheckBox;
		this->PopupItem = UsePopup;
		this->SelectingKey = false;
		this->BindTextColor = FLinearColor::FromRGB(85, 90, 104);
		if (this->PopupItem)
		{
			this->MyPopup = new Popup();
			this->MyPopup->Parent = this;
			this->MyPopup->Items = PopupItems;
			for(auto item : this->MyPopup->Items)
			{
				item->ParentItemID = this->ItemID;
			}
		}
	}
	void Draw() override;
	int* key;
	bool SelectingKey;
	static Keybind* SelectedKeybind;
	static std::vector<int> BlackListedKeys;
};

