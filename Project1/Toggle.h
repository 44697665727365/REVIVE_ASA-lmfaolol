#pragma once
#include "MenuItemBase.h"
class Toggle :
    public MenuItemPopup
{
private:
	float Percentage;
	FLinearColor CheckBoxColor;
	void UpdateLerp(bool Selected);
	void DrawCheckBox();
public:
	Toggle(std::wstring name, std::wstring description, bool* value, bool UsePopup = false, std::vector<MenuItemBase*> PopupItems = {}) : Value(value)
	{
		this->Name = name;
		this->Description = description;
		this->Type = MenuItemType::CheckBox;
		this->PopupItem = UsePopup;
		this->ItemEnabled = true;
		if (this->PopupItem)
		{
			this->MyPopup = new Popup();
			this->MyPopup->Parent = this;
			this->MyPopup->Items = PopupItems;
			for (auto item : this->MyPopup->Items)
			{
				item->ParentItemID = this->ItemID;
			}
		}
	}
	void Draw() override;
	bool* Value;

};

