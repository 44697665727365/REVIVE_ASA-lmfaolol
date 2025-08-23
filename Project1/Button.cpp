#include "pch.h"
#include "Button.h"
#include "Menu.h"
#include "MenuHelper.h"
static double deg2rad(double degrees) {
	return degrees * 4.0 * atan(1.0) / 180.0;
}
void Button::DrawNameAndDesc()
{
	this->DrawName();
	this->DrawDescription();
}
static void DrawFilledProgressCircle(FVector2D pos, float radius, float percentage, int numSides, float thickness, FLinearColor Color)
{
	double Step = (2 * PI) / numSides;

	for (double angle = 0;angle < (2 * PI) * percentage;angle += Step)
	{
		FVector2D point = { pos.X + radius * cos(angle), pos.Y + radius * sin(angle) };
		globals::rendering::canvas->K2_DrawLine(point, pos, thickness, Color);
	}

}
void Button::UpdateLerp(bool Hovered)
{
	bool Clicked = !this->CoolDownOver();



	this->TextColor = GuiLerp(this->TextColor, Clicked ? Menu::Colors->Accent : this->IsHovered ? Menu::Colors->Text_Hov : Menu::Colors->Text_Active, Menu::State->DeltaTime * 20);

	if (this->HoveredLongEnoughForClick() && !Clicked)
	{
		this->TextColor = {1.f,1.f,1.f,1.f};
	}
	if (Menu::State->WasClosed)
	{
		this->TextColor = Clicked ? Menu::Colors->Accent : this->IsHovered ? Menu::Colors->Text_Hov : Menu::Colors->Text_Active;
	}
}

void Button::DrawBackground()
{
	this->DrawBG(false);
	if (this->Percentage > 0.01f && this->HoveredTimeToClickMillis > 0) {
		FVector2D CircleMiddle = { this->Bounds.TL.X + ((this->Bounds.BR.X - this->Bounds.TL.X) * 0.9f), (this->Bounds.TL.Y / 2.f) + (this->Bounds.BR.Y / 2.f) };
		DrawFilledProgressCircle(CircleMiddle, 10.f * Menu::State->MenuScale, (this->Percentage), 200, 1.f, Menu::Colors->Accent);
	}
}

bool Button::CoolDownOver()
{
	return GetMillisSinceLastClick() > this->ClickCooldownMillis;
}

double Button::GetMillisSinceLastClick()
{
	return std::chrono::duration_cast<std::chrono::milliseconds>(timeNow() - this->LastClickTime).count();
}

bool Button::HoveredLongEnoughForClick()
{
	return this->Percentage > 0.95f;
}

void Button::UpdatePercentage()
{
	if (this->IsHovered) {

		this->Percentage = 1.f;

		if (this->HoveredTimeToClickMillis > 0.f) {

			this->Percentage = min(this->CurrentHoveredTimeMillis / this->HoveredTimeToClickMillis, 1.f);

		}
	}
	else
		this->Percentage = GuiLerp(this->Percentage, 0.f, Menu::State->DeltaTime * 8);
}

void Button::Draw()
{
	this->UpdateItemID();

	bool Hovered = this->AmIHovered();

	if (Hovered)
	{
		this->CurrentHoveredTimeMillis += (1000 * Menu::State->DeltaTime);
	}
	else
	{
		this->CurrentHoveredTimeMillis = 0;
	}

	this->UpdatePercentage();

	bool Clicked = this->WasClicked();

	if (Clicked && this->CoolDownOver() && this->HoveredLongEnoughForClick())
	{
		this->LastClickTime = timeNow();
		this->OnClick();
	}

	this->UpdateLerp(Hovered);

	this->DrawBackground();

	this->DrawNameAndDesc();
}

bool Button::WasClicked()
{
	return this->CanClick() && Menu::State->LClickPressed();
}
