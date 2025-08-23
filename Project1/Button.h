#pragma once
#include "MenuItemBase.h"
class Button :
    public MenuItemClickable
{
private:
	float Percentage;
	double CurrentHoveredTimeMillis;
	double ClickCooldownMillis;
	TimeVar LastClickTime;
	double HoveredTimeToClickMillis;
    void DrawNameAndDesc();
	void UpdateLerp(bool Hovered);
	void DrawBackground();
	bool CoolDownOver();
	double GetMillisSinceLastClick();
	bool HoveredLongEnoughForClick();
	void UpdatePercentage();
public:
	std::function<void()> OnClick;
	void Draw() override;
	bool WasClicked();
	Button(std::wstring name,std::wstring description, std::function<void()> OnClick,double HoldTimeToClickMilliseconds) : OnClick(OnClick), HoveredTimeToClickMillis(HoldTimeToClickMilliseconds)
	{
		this->ItemEnabled = true;
		this->Name = name;
		if(description.c_str())
			this->Description = description;
		else
			this->Description = Xors(L"");
		this->Type = MenuItemType::Button;
		this->PopupItem = false;
		this->IsHovered = false;
		this->ItemID = -1;
		this->Percentage = 0;
		this->CurrentHoveredTimeMillis = 0;
		this->LastClickTime = TimeVar();
		this->ClickCooldownMillis = 500;
	}
};

