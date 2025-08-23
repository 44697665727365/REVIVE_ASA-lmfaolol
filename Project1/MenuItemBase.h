#pragma once
class Rect
{
public:
	FVector2D TL;
	FVector2D BR;
	Rect()
	{
		TL = FVector2D{ 0, 0 };
		BR = FVector2D{ 0, 0 };
	}
	Rect(FVector2D TL, FVector2D BR)
	{
		this->TL = TL;
		this->BR = BR;
	}
	Rect(float TLX, float TLY, float BRX, float BRY)
	{
		this->TL = FVector2D{ TLX, TLY };
		this->BR = FVector2D{ BRX, BRY };
	}
	Rect operator +(const Rect& other) const;
	Rect operator +(double scalar) const;
	Rect operator -(double scalar) const;
	Rect operator -(const FVector2D& other) const;
	Rect operator *(double scalar) const;
	Rect operator *(const FVector2D& other) const;
	Rect operator /(double scalar) const;
	Rect operator /(const FVector2D& other) const;
	Rect& operator =(const Rect& other);
	Rect& operator +=(double scalar);
	Rect& operator +=(const FVector2D& other);
	Rect& operator -=(double scalar);
	Rect& operator -=(const FVector2D& other);
	Rect& operator *=(const FVector2D& other);
	Rect& operator *=(double scalar);
};
enum class MenuItemType
{
	Button,
	CheckBox,
	SliderInt,
	SliderFloat,
	ComboBox,
	ColorPicker,
	Keybind,
	Separator,
	TextInput,
	TabGroup,
	Tab
};
class MenuItemBase
{
public:
	bool ItemEnabled;
	Rect Bounds;
	Rect ExtraBounds;
	int ItemID;
	FLinearColor BackgroundColor;
	FLinearColor TextColor;
	MenuItemType Type;
	int ParentItemID;
	bool PopupItem;
	bool PopupOpen;
	bool IsHovered;
	void DrawBG(bool PopupOpen);
	virtual void Draw() = 0;
	void UpdateItemID();
	void DebugDrawBounds();
	bool AmIHovered();
	MenuItemBase();
	std::wstring Name;
	std::wstring Description;
	virtual void DrawName();
	virtual void DrawDescription();
	MenuItemBase* AddToPopup(MenuItemBase* item);
	MenuItemBase* AddToPopup(std::vector<MenuItemBase*> items);
};

class MenuItemClickable : public MenuItemBase
{
public:
	virtual bool CanClick();
	//virtual void OnLClick() = 0;
	//virtual void OnRClick() = 0;
};
class Popup
{
public:
	Rect Bounds;
	std::vector<MenuItemBase*> Items;
	MenuItemBase* Parent;
};
class MenuItemPopup : public MenuItemClickable
{
	bool ShouldClose;
	virtual bool ShouldPopupClose();
	virtual void DelayedPopupClose();
	float PopupOpenPercentage;
public:
	virtual void SetShouldClose(bool shouldClose);
	virtual void UpdatePopupState();
	Popup* MyPopup;
	virtual void DrawPopup();
	bool AmISelected();
};