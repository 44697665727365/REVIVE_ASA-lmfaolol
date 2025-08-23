#include "pch.h"
#include "TabGroup.h"
#include "Menu.h"
#include "MenuHelper.h"
TabGroup* TabGroup::OpenTabGroup;

Rect TabGroup::GetBounds()
{
	Rect NewBounds;
	NewBounds.TL = { Menu::State->TabGroupPos.X, Menu::State->TabGroupPos.Y };
	NewBounds.BR = { Menu::State->TabGroupPos.X + Menu::State->TabGroupSize.X, Menu::State->TabGroupPos.Y + Menu::State->TabGroupSize.Y };
	return NewBounds;
}

void TabGroup::UpdateSelectedTab(bool Selected)
{
	if (Selected)
	{
		TabGroup::OpenTabGroup = this;
	}
}

void TabGroup::UpdateLerp(bool Selected)
{
	
	this->SizeMax = this->Tabs.size() * (Menu::State->TabSize.Y + Menu::State->TabPadding.Y);

	this->SizeCurrent = GuiLerp(this->SizeCurrent, Selected ? this->SizeMax : 0, Menu::State->DeltaTime * 12);

	this->TextColor = GuiLerp(this->TextColor, Selected ? Menu::Colors->Accent : this->IsHovered ? Menu::Colors->Text_Hov : Menu::Colors->Text_Active, Menu::State->DeltaTime * 8);

	this->OffsetX = GuiLerp(this->OffsetX, Selected ? (5.f * Menu::State->MenuScale) : this->IsHovered ? (5.f * Menu::State->MenuScale) : 0, Menu::State->DeltaTime * 12);

	this->Bounds.TL.X = Menu::State->TabGroupPos.X + this->OffsetX;

	this->Bounds.BR.X = this->Bounds.TL.X + Menu::State->TabGroupSize.X;

	this->ExtraBounds = Rect(this->Bounds.TL, { this->Bounds.BR.X, this->Bounds.BR.Y + this->SizeCurrent });

}

void TabGroup::DrawName()
{
	if (!this->GroupName.c_str())
	{
		return;
	}
	FVector2D textPos = FVector2D{ this->Bounds.TL.X, (this->Bounds.TL.Y / 2.f) + (this->Bounds.BR.Y / 2.f) };

	Renderer::DrawString((this->GroupName).c_str(), textPos, {Menu::State->TabGroupTextSize , Menu::State->TabGroupTextSize}, this->TextColor, false, false, {0, 0, 0, 0});
}

void TabGroup::UpdateSelectedTabGroup()
{
	if (Menu::State->AmIHovered(this->Bounds) && Menu::State->LClickPressed())
	{
		if (TabGroup::OpenTabGroup != this) {
			TabGroup::OpenTabGroup = this;
			Tab::OpenTabID = -1;
		}
		else {
			Tab::OpenTabID = -1;
			TabGroup::OpenTabGroup = nullptr;
		}
	}
}

void TabGroup::Draw()
{
	this->Bounds = this->GetBounds();

	this->UpdateSelectedTabGroup();

	bool Selected = TabGroup::OpenTabGroup == this;

	this->IsHovered = Menu::State->AmIHovered(this->Bounds);

	this->UpdateSelectedTab(Selected);

	this->UpdateLerp(Selected);

	this->DrawName();

	Menu::State->TabGroupPos.Y += GetHeight(this->Bounds) + Menu::State->TabGroupPadding.Y + this->SizeCurrent;

	if (this->SizeCurrent != this->SizeMin)
	{
		FVector2D LineStart = { this->Bounds.TL.X - 3.f, this->Bounds.BR.Y };
		FVector2D LineEnd = { this->Bounds.TL.X - 3.f,this->Bounds.TL.Y + GetHeight(this->Bounds) + Menu::State->TabGroupPadding.Y + this->SizeCurrent };
		Renderer::DrawLine2D(LineStart, LineEnd, 2.f,Menu::Colors->Accent);
	}

	if (Selected && ((float)this->SizeCurrent / (float)this->SizeMax) > 0.75f)
	{
		if (this->Tabs.size() == 0)
		{
			return;
		}

		for (int i = 0; i < this->Tabs.size(); i++)
		{
			Tab* Tab = this->Tabs[i];

			if (!Tab)
				continue;

			Tab->Parent = this;
			Tab->Bounds.TL.X = this->Bounds.TL.X + (Menu::State->TabPadding.X * 2.f);
			Tab->Bounds.TL.Y = this->Bounds.TL.Y + Menu::State->TabGroupSize.Y + (i * (Menu::State->TabSize.Y + Menu::State->TabPadding.Y));
			Tab->Bounds.BR = Tab->Bounds.TL + Menu::State->TabSize;
			Tab->TabID = i;
			Tab->Draw();
		}
	}

}
