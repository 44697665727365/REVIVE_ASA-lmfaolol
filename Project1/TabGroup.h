#pragma once
#include "MenuItemBase.h"
#include "Tab.h"
class TabGroup : MenuItemClickable
{
	Rect GetBounds();
	void UpdateSelectedTab(bool Selected);
	void UpdateLerp(bool Selected);
	void DrawName();
	void UpdateSelectedTabGroup();
	float OffsetX;
public:
	static class TabGroup* OpenTabGroup;
	std::vector <class Tab*> Tabs;
	std::wstring GroupName;
	UTexture* Icon;
	int SizeMax;
	int SizeMin;
	int SizeCurrent;
	void Draw() override;

	TabGroup(std::wstring GroupName, UTexture* Icon) : GroupName(GroupName), Icon(Icon)
	{
		this->Type = MenuItemType::TabGroup;
		this->SizeMax = 0;
		this->SizeMin = 0;
		this->SizeCurrent = 0;
		this->PopupItem = false;
		this->IsHovered = false;
		this->ItemID = -1;
		this->OffsetX = 0;
		this->ItemEnabled = true;
	}
};

