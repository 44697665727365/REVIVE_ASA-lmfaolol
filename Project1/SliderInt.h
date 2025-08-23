#pragma once
#include "SliderBase.h"
class SliderInt : public SliderBase
{
	void UpdateLerp();

	void DrawSlider();

	void HandleSlider();

	FVector2D GetSliderBeginPos();
	int* Value;
	int minValue;
	int maxValue;
public:
	SliderInt(std::wstring name, std::wstring description, int* value, int minValue, int maxValue, bool UsePopup = false, std::vector<MenuItemBase*> PopupItems = {}, std::wstring format = L"%d")
	{
		this->ItemEnabled = true;
		this->Name = name;
		this->Description = description;
		this->Value = value;
		this->minValue = minValue;
		this->maxValue = maxValue;
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
	void Draw() override;
};
