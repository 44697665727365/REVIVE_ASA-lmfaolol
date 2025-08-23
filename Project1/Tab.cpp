#include "pch.h"
#include "Tab.h"
#include "Menu.h"
#include "MenuHelper.h"
int Tab::OpenTabID;


void Tab::DrawName()
{
	if (!this->TabName.c_str() || this->TabName.empty())
	{
		return;
	}
	FVector2D textPos = { this->Bounds.TL.X,(this->Bounds.TL.Y / 2.f) + (this->Bounds.BR.Y / 2.f) };

	Renderer::DrawString(this->TabName.c_str(), textPos, {Menu::State->TabTextSize, Menu::State->TabTextSize}, this->TextColor);
}

void Tab::UpdateLerp(bool Selected)
{
	float MaxWidth = Menu::State->TabSize.X;

	if (!Selected) 
	{
		this->TextColor = GuiLerp(this->TextColor, this->IsHovered ? Menu::Colors->Text_Hov : Menu::Colors->Text_Active, Menu::State->DeltaTime * 8);
		this->BackGroundWidth = GuiLerp(this->BackGroundWidth, 0.f, Menu::State->DeltaTime * 6);
	}

	if (!this->IsHovered) 
	{
		this->TextColor = GuiLerp(this->TextColor, Selected ? Menu::Colors->Accent : Menu::Colors->Text_Active, Menu::State->DeltaTime * 8);
		this->BackGroundWidth = GuiLerp(this->BackGroundWidth, Selected ? MaxWidth : 0.f, Menu::State->DeltaTime * 6);
	}

	if (!Selected && !this->IsHovered) 
	{
		this->TextColor = GuiLerp(this->TextColor, Menu::Colors->Text_Active, Menu::State->DeltaTime * 8);
		this->BackGroundWidth = GuiLerp(this->BackGroundWidth, 0.f, Menu::State->DeltaTime * 6);
	}

	if (Selected && this->IsHovered) 
	{
		this->TextColor = GuiLerp(this->TextColor, Menu::Colors->Accent, Menu::State->DeltaTime * 8);
		this->BackGroundWidth = GuiLerp(this->BackGroundWidth, MaxWidth, Menu::State->DeltaTime * 6);
	}

	if (this->BackGroundWidth > 500)
		Selected ? this->BackGroundWidth = MaxWidth : this->BackGroundWidth = 0;
}

void Tab::UpdateSelectedTab()
{
	if (Menu::State->AmIHovered(this->Bounds) && Menu::State->LClickPressed())
	{
		if (Tab::OpenTabID != this->TabID) 
		{
			Tab::OpenTabID = this->TabID;
			if (Menu::State->SelectedItem != -1)
			{
				MenuItemPopup* PopupItem = ((MenuItemPopup*)Menu::State->MenuItems[Menu::State->SelectedItem]);
				if (PopupItem && PopupItem->PopupItem && PopupItem->MyPopup)
				{
					PopupItem->SetShouldClose(true);
					PopupItem->PopupOpen = false;
				}
			}
			Menu::State->SelectedItem = -1;
			Menu::State->HoveredItem = -1;
		}
		else {
			Tab::OpenTabID = -1;
			if (Menu::State->SelectedItem != -1)
			{
				MenuItemPopup* PopupItem = ((MenuItemPopup*)Menu::State->MenuItems[Menu::State->SelectedItem]);
				if (PopupItem && PopupItem->PopupItem && PopupItem->MyPopup)
				{
					PopupItem->SetShouldClose(true);
					PopupItem->PopupOpen = false;
				}
			}
			Menu::State->SelectedItem = -1;
			Menu::State->HoveredItem = -1;
		}
	}
}

void Tab::DrawBackground()
{
	if (this->BackGroundWidth < 2.f)
		return;

	FVector2D StartPos = { this->Bounds.TL.X - (5.f * Menu::State->MenuScale), (this->Bounds.TL.Y + (Menu::State->TabSize.Y / 8.f))};

	if (this->BackGroundWidth > 8.f)
		Renderer::RenderFilledRoundedRectangle(&StartPos, this->BackGroundWidth, (Menu::State->TabSize.Y - (Menu::State->TabSize.Y / 8.f)), (7.f * Menu::State->MenuScale), { 0.02f,0.02f,0.02f,1.f }, RoundedRectFlags_NoRoundingBottomLeft | RoundedRectFlags_NoRoundingTopLeft);
	else
		Renderer::RenderFilledRectangle(StartPos, this->BackGroundWidth, (Menu::State->TabSize.Y - (Menu::State->TabSize.Y / 8.f)), { 0.02f,0.02f,0.02f,1.f });
}

void Tab::DrawTabTitle()
{
	std::wstring Title = this->Parent->GroupName + Xors(L"->") + this->TabName;
	FVector2D textPos = { Menu::State->ContentBounds.TL.X + Menu::State->ItemPadding.X + (20.f * Menu::State->MenuScale), Menu::State->ContentBounds.TL.Y - (24.f * Menu::State->MenuScale)};
	Renderer::DrawString(Title.c_str(), textPos, { (0.8f * Menu::State->MenuScale),(0.8f * Menu::State->MenuScale) }, Menu::Colors->Accent, true);
}

void Tab::DrawGrid()
{
	if (this->Grid && this->Grid->Items)
	{
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				MenuItemBase* Item = this->Grid->Items[i][j];
				if (Item && Item->ItemEnabled)
				{
					Item->ParentItemID = -2;
					if (i == 0)
					{
						Item->Bounds.TL.X = Menu::State->ContentBounds.TL.X + Menu::State->ItemPadding.X;
					}
					else
					{
						Item->Bounds.TL.X = Menu::State->ContentBounds.TL.X + (Menu::State->ItemPadding.X * 2.f) + Menu::State->ItemSize.X;
					}
					Item->Bounds.TL.Y = Menu::State->ContentBounds.TL.Y + (Menu::State->ItemSize.Y * j) + (Menu::State->ItemPadding.Y * j);
					Item->Bounds.BR = Item->Bounds.TL + Menu::State->ItemSize;
					Item->Draw();
				}
			}
		}
		if (Menu::State->SelectedItem != -1 && Menu::State->SelectedItem < Menu::State->MenuItems.size())
		{
			MenuItemPopup* PopupItem = ((MenuItemPopup*)Menu::State->MenuItems[Menu::State->SelectedItem]);
			if (PopupItem && PopupItem->PopupItem && PopupItem->MyPopup)
			{
				PopupItem->DrawPopup();
			}
		}
	}
}

void Tab::DrawTabContents()
{
	this->DrawTabTitle();
	this->DrawGrid();
}

void Tab::Draw()
{	
	this->UpdateItemID();

	this->UpdateSelectedTab();

	bool Selected = Tab::OpenTabID == this->TabID;
	
	this->IsHovered = Menu::State->AmIHovered(this->Bounds);

	this->UpdateLerp(Selected);

	this->DrawTab();

	this->DrawBackground();
	
	this->DrawName();

	if (Selected)
		this->DrawTabContents();
}
