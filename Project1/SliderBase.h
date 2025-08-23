#pragma once
#include "MenuItemBase.h"
#include "Menu.h"
#include "MenuHelper.h"

class SliderBase : public MenuItemPopup
{
public:
	std::wstring ValueFormat;
	static SliderBase* DraggingSlider;
	SliderBase(std::wstring name, std::wstring description, bool UsePopup = false, std::vector<MenuItemBase*> PopupItems = {}, std::wstring format = L"%.2f")
	{
		this->ItemEnabled = true;
		this->Name = name;
		this->Description = description;
		this->Type = MenuItemType::SliderFloat;
		this->IsHovered = false;
		this->ItemID = -1;
		this->ValueFormat = format;
		this->PopupItem = UsePopup;
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
	SliderBase() = default;
};
