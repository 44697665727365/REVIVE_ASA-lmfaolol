#include "pch.h"
#include "MenuItemBase.h"
#include "MenuHelper.h"
#include "Menu.h"
#include "Combo.h"
#include "ColorPicker.h"
void MenuItemBase::DrawBG(bool PopupOpen)
{
	if(!PopupOpen)
		Renderer::RenderFilledRoundedRectangle(&this->Bounds.TL, GetWidth(this->Bounds), GetHeight(this->Bounds),Menu::State->ItemRounding,this->BackgroundColor,RoundedRectFlags_None);
	else
		Renderer::RenderFilledRoundedRectangle(&this->Bounds.TL, GetWidth(this->Bounds), GetHeight(this->Bounds), Menu::State->ItemRounding, this->BackgroundColor, RoundedRectFlags_NoRoundingBottomLeft | RoundedRectFlags_NoRoundingBottomRight);
}

void MenuItemBase::UpdateItemID()
{
	if (this->ItemID == -1)
	{
		this->ItemID = Menu::State->MenuItems.size();
		Menu::State->MenuItems.push_back(this);
	}
}
MenuItemBase* MenuItemBase::AddToPopup(MenuItemBase* item)
{
	MenuItemPopup* popup = nullptr;
	if(this->PopupItem)
		popup = static_cast<MenuItemPopup*>(this);
	else {
		//nlog(Xors("MenuItem: %lS is not a popupitem"),this->Name.c_str());
		return this;
	}
	if (!popup->MyPopup)
		popup->MyPopup = new Popup();
	item->ParentItemID = this->ItemID;
	popup->MyPopup->Items.push_back(item);

	return this;
}
MenuItemBase* MenuItemBase::AddToPopup(std::vector<MenuItemBase*> items)
{
	MenuItemPopup* popup = nullptr;
	if (this->PopupItem)
		popup = static_cast<MenuItemPopup*>(this);
	else {
		//(Xors("MenuItem: %lS is not a popupitem"), this->Name.c_str());
		return this;
	}
	if (!popup->MyPopup)
		popup->MyPopup = new Popup();

	for (auto item : items)
	{
		item->ParentItemID = this->ItemID;
		popup->MyPopup->Items.push_back(item);
	}

	return this;
}
MenuItemBase::MenuItemBase()
{
	this->PopupOpen = false;
	this->BackgroundColor = FLinearColor::FromRGB(22, 23, 26);
	this->TextColor = FLinearColor::FromRGB(85, 90, 104);
	this->Type = MenuItemType::Separator;
	this->PopupItem = false;
	this->IsHovered = false;
	this->ItemID = Menu::State->MenuItems.size();
	this->Name = L"";
	this->Description = L"";
	this->ItemEnabled = true;
	Menu::State->MenuItems.push_back(this);
}
void MenuItemBase::DrawName()
{
	if (this->Name.c_str() && !this->Name.empty())
	{
		FVector2D textPos = FVector2D{ this->Bounds.TL.X + (20.0f * Menu::State->MenuScale), this->Bounds.TL.Y + (7.0f * Menu::State->MenuScale) };
		Renderer::canvas->K2_DrawText(Renderer::Font, this->Name.c_str(), textPos, FVector2D{ (0.8f * Menu::State->MenuScale), (0.8f * Menu::State->MenuScale) }, this->TextColor, 2.f, { 0,0,0,0 }, { 0,0 }, false, false, false, { 0,0,0,0 });
	}
}
void MenuItemBase::DrawDescription()
{
	if (this->Description.c_str() && !this->Description.empty())
	{
		FVector2D descPos = FVector2D{ this->Bounds.TL.X + (21.0f * Menu::State->MenuScale), this->Bounds.TL.Y + (30.0f * Menu::State->MenuScale) };
		Renderer::canvas->K2_DrawText(Renderer::Font, this->Description.c_str(), descPos, FVector2D{ (0.6f * Menu::State->MenuScale), (0.6f * Menu::State->MenuScale) }, this->TextColor, 2.f, { 0,0,0,0 }, { 0,0 }, false, false, false, { 0,0,0,0 });
	}
}
void MenuItemBase::DebugDrawBounds()
{
	Renderer::DrawLine2D(this->Bounds.TL, { this->Bounds.BR.X, this->Bounds.TL.Y }, 1, { 1, 0, 0, 1 });
	Renderer::DrawLine2D(this->Bounds.TL, { this->Bounds.TL.X, this->Bounds.BR.Y }, 1, { 1, 0, 0, 1 });
	Renderer::DrawLine2D(this->Bounds.BR, { this->Bounds.TL.X, this->Bounds.BR.Y }, 1, { 1, 0, 0, 1 });
	Renderer::DrawLine2D(this->Bounds.BR, { this->Bounds.BR.X, this->Bounds.TL.Y }, 1, { 1, 0, 0, 1 });
}

bool MenuItemBase::AmIHovered()
{
	return this->IsHovered = Menu::State->AmIHovered(this->Bounds);
}

bool MenuItemClickable::CanClick()
{
	return (AmIHovered() && (Menu::State->CurrentlyDrawingPopup || (Menu::State->SelectedItem == -1 || Menu::State->SelectedItem == this->ItemID)));
}

Rect Rect::operator+(const Rect& other) const
{
	return Rect(this->TL + other.TL, this->BR + other.BR);
}

Rect Rect::operator+(double scalar) const
{
	return Rect(this->TL,this->BR + scalar);
}

Rect Rect::operator-(double scalar) const
{
	return Rect(this->TL,this->BR - scalar);
}

Rect Rect::operator-(const FVector2D& other) const
{
	return Rect(this->TL,this->BR - other);
}

Rect Rect::operator*(double scalar) const
{
	return Rect(this->TL,this->BR * scalar);
}

Rect Rect::operator*(const FVector2D& other) const
{
	return Rect(this->TL,this->BR * other);
}

Rect Rect::operator/(double scalar) const
{
	return Rect(this->TL,this->BR / scalar);
}

Rect Rect::operator/(const FVector2D& other) const
{
	return Rect(this->TL,this->BR / other);
}

Rect& Rect::operator=(const Rect& other)
{
	this->TL = other.TL;
	this->BR = other.BR;
	return *this;
}

Rect& Rect::operator+=(double scalar)
{
	this->BR += scalar;
	return *this;
}

Rect& Rect::operator+=(const FVector2D& other)
{
	this->BR += other;
	return *this;
}

Rect& Rect::operator-=(double scalar)
{
	this->BR -= scalar;
	return *this;
}

Rect& Rect::operator-=(const FVector2D& other)
{
	this->BR -= other;
	return *this;
}

Rect& Rect::operator*=(const FVector2D& other)
{
	this->BR *= other;
	return *this;
}

Rect& Rect::operator*=(double scalar)
{
	this->BR *= scalar;
	return *this;
}

bool MenuItemPopup::AmISelected()
{
	return Menu::State->AmISelected(this->Bounds, this->ItemID) && this->PopupItem && this->MyPopup->Items.size() > 0;
}

bool MenuItemPopup::ShouldPopupClose()
{
	if (!this->MyPopup)
		return true;
	if (!this->PopupOpen)
		return true;
	if ((Menu::State->LClickPressed() || Menu::State->RClickPressed()) && !InBounds(Menu::State->MousePos,this->ExtraBounds) && !Combo::SelectedCombo && !ColorPicker::SelectedColorPicker)
	{
		return true;
		Combo::SelectedCombo = nullptr;
		ColorPicker::SelectedColorPicker = nullptr;
	}
	return false;
}

void MenuItemPopup::DelayedPopupClose()
{
	if (this->ShouldClose && this->PopupOpen && this->PopupOpenPercentage < 0.1f)
	{
		this->ShouldClose = false;
		this->PopupOpen = false;
		Menu::State->SelectedItem = -1;
		Combo::SelectedCombo = nullptr;
		ColorPicker::SelectedColorPicker = nullptr;
	}

}

void MenuItemPopup::SetShouldClose(bool shouldClose)
{
	this->ShouldClose = shouldClose;
	if (shouldClose)
	{
		this->DelayedPopupClose();
		Combo::SelectedCombo = nullptr;
		ColorPicker::SelectedColorPicker = nullptr;
	}
}

void MenuItemPopup::UpdatePopupState()
{
	this->ExtraBounds.TL = { this->Bounds.TL.X, this->Bounds.BR.Y };
	float PopupHeight = (Menu::State->ItemPadding.Y + Menu::State->ItemSize.Y) * this->MyPopup->Items.size() + Menu::State->ItemPadding.Y;
	this->ExtraBounds.BR = this->ExtraBounds.TL + FVector2D(Menu::State->ItemSize.X, PopupHeight);
	if (this->ShouldClose)
	{
		this->DelayedPopupClose();
		return;
	}
	if (this->ShouldPopupClose())
	{
		this->ShouldClose = true;
		Combo::SelectedCombo = nullptr;
		ColorPicker::SelectedColorPicker = nullptr;
	}
	else
	{
		this->ShouldClose = false;
	}
}

void MenuItemPopup::DrawPopup()
{
	Menu::State->CurrentlyDrawingPopup = true;
	this->PopupOpenPercentage = GuiLerp(this->PopupOpenPercentage, this->ShouldClose ? 0.f : 1.f, Menu::State->DeltaTime * 8.f);

	if (!this->MyPopup)
		return;
	this->PopupOpen = true;
	float PopupHeight = (Menu::State->ItemPadding.Y + Menu::State->ItemSize.Y) * this->MyPopup->Items.size() + Menu::State->ItemPadding.Y;
	PopupHeight *= this->PopupOpenPercentage;
	if (this->PopupOpenPercentage > 0.1f && PopupHeight > 20.f) {

		FVector2D PopupStartPos = { this->Bounds.TL.X, this->Bounds.BR.Y };
		Renderer::RenderFilledRoundedRectangle(&PopupStartPos, Menu::State->ItemSize.X, PopupHeight, Menu::State->ItemRounding, Menu::Colors->Accent, RoundedRectFlags_NoRoundingTopLeft | RoundedRectFlags_NoRoundingTopRight);
	}
	if (this->PopupOpenPercentage > 0.75f) {
		for (int i = 0; i < this->MyPopup->Items.size();i++)
		{
			MenuItemBase* item = this->MyPopup->Items[i];
			if (!item)
				continue;
			Rect ItemBounds;
			ItemBounds.TL = { this->Bounds.TL.X, this->Bounds.BR.Y + Menu::State->ItemPadding.Y + ((Menu::State->ItemPadding.Y + Menu::State->ItemSize.Y) * i) };
			ItemBounds.BR = ItemBounds.TL + Menu::State->ItemSize;
			item->Bounds = ItemBounds;
			item->PopupItem = false;
			item->Draw();
		}
	}
	Menu::State->CurrentlyDrawingPopup = false;
}