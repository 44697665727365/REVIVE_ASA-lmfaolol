#include "pch.h"
#include "Toggle.h"
#include "Menu.h"
#include "MenuHelper.h"
void Toggle::UpdateLerp(bool Selected)
{
	this->TextColor = GuiLerp(this->TextColor, *this->Value ? Menu::Colors->Accent : this->IsHovered ? Menu::Colors->Text_Hov : Menu::Colors->Text_Active, Menu::State->DeltaTime * 8);
	this->Percentage = GuiLerp(this->Percentage, *this->Value ? 0.f : 1.f, Menu::State->DeltaTime * 6);
	this->CheckBoxColor = GuiLerp(this->CheckBoxColor, *this->Value ? Menu::Colors->Accent : Menu::Colors->Text_Hov, Menu::State->DeltaTime * 6);

	if (Menu::State->WasClosed)
	{
		this->TextColor = *this->Value ? Menu::Colors->Accent : this->IsHovered ? Menu::Colors->Text_Hov : Menu::Colors->Text_Active;
		this->Percentage = *this->Value ? 0.f : 1.f;
		this->CheckBoxColor = *this->Value ? Menu::Colors->Accent : Menu::Colors->Text_Hov;
	}
}

void Toggle::DrawCheckBox()
{
	float CircleOffset = this->Percentage * (-40.f * Menu::State->MenuScale);
	FVector2D CheckDotMiddlePos = FVector2D{ this->Bounds.TL.X + Menu::State->ItemSize.X - (60.f * Menu::State->MenuScale), this->Bounds.TL.Y + ((double)Menu::State->ItemSize.Y / 2) };
	Renderer::DrawFilledCircle({ CheckDotMiddlePos.X - (20.f * Menu::State->MenuScale),CheckDotMiddlePos.Y }, (20.f * Menu::State->MenuScale), Menu::Colors->ToggleBackGround);
	Renderer::DrawFilledRectangleSize({ CheckDotMiddlePos.X - (20.f * Menu::State->MenuScale),CheckDotMiddlePos.Y - (21.f * Menu::State->MenuScale) }, { (40.f * Menu::State->MenuScale),(42.f * Menu::State->MenuScale) }, Menu::Colors->ToggleBackGround);
	Renderer::DrawFilledCircle({ CheckDotMiddlePos.X + (20.f * Menu::State->MenuScale),CheckDotMiddlePos.Y }, (20.f * Menu::State->MenuScale), Menu::Colors->ToggleBackGround);

	Renderer::DrawFilledCircle({ CheckDotMiddlePos.X + (20.f * Menu::State->MenuScale) + CircleOffset,CheckDotMiddlePos.Y }, (10.f * Menu::State->MenuScale), this->CheckBoxColor);
}


void Toggle::Draw()
{
	this->UpdateItemID();

	bool Selected = this->PopupOpen;
	if (Selected)
	{
		this->UpdatePopupState();
	}
	else {
		Selected = this->AmISelected();
	}

	this->UpdateLerp(false);

	this->DrawBG(Selected);
	
	this->DrawName();

	this->DrawDescription();

	this->DrawCheckBox();

	if (this->CanClick() && Menu::State->LClickPressed())
	{
		*this->Value = !*this->Value;
	}
}
