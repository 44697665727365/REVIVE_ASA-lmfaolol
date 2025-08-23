#include "pch.h"
#include "SliderFloat.h"

void SliderFloat::UpdateLerp()
{
	this->TextColor = GuiLerp(this->TextColor, SliderBase::DraggingSlider == this ? Menu::Colors->Accent : this->IsHovered ? Menu::Colors->Text_Hov : Menu::Colors->Text_Active, (float)Menu::State->DeltaTime * 8.f);
	if (Menu::State->WasClosed)
	{
		this->TextColor = SliderBase::DraggingSlider == this ? Menu::Colors->Accent : this->IsHovered ? Menu::Colors->Text_Hov : Menu::Colors->Text_Active;
	}
}
void SliderFloat::DrawSlider()
{
	this->DrawName();
	this->DrawDescription();

	FVector2D sliderBeginPos = this->GetSliderBeginPos();

	float oneP = (float)((float)Menu::State->SliderWidth - (15.f * Menu::State->MenuScale)) / (this->maxValue - this->minValue);
	Renderer::RenderFilledRectangle(sliderBeginPos, (float)Menu::State->SliderWidth - (15.f * Menu::State->MenuScale), 2.f, Menu::Colors->ToggleBackGround);
	Renderer::RenderFilledRectangle(sliderBeginPos, oneP * (*this->Value - this->minValue), 2.f, Menu::Colors->Accent);
	Renderer::DrawFilledCircle(FVector2D{ sliderBeginPos.X + oneP * (*this->Value - this->minValue), sliderBeginPos.Y }, (8.f * Menu::State->MenuScale), Menu::Colors->Item_Background_Default);
	Renderer::DrawFilledCircle(FVector2D{ sliderBeginPos.X + oneP * (*this->Value - this->minValue), sliderBeginPos.Y }, (6.5f * Menu::State->MenuScale), Menu::Colors->Accent);


	wchar_t buffer[255] = {};
	Format(buffer, this->ValueFormat.c_str(), *this->Value);
	FVector2D valueTxtSize = Renderer::canvas->K2_TextSize(Renderer::Font, buffer, FVector2D{ (0.6f * Menu::State->MenuScale), (0.6f * Menu::State->MenuScale) });
	FVector2D valuePos = FVector2D{ this->Bounds.BR.X - (17.f * Menu::State->MenuScale) - valueTxtSize.X, this->Bounds.TL.Y + (7.f * Menu::State->MenuScale) };
	Renderer::canvas->K2_DrawText(Renderer::Font, buffer, valuePos, FVector2D{ (0.6f * Menu::State->MenuScale), (0.6f * Menu::State->MenuScale) }, Menu::Colors->Text_Active, 2.f, { 0,0,0,0 }, { 0,0 }, false, false, false, { 0,0,0,0 });
}

void SliderFloat::HandleSlider()
{
	FVector2D sliderBeginPos = this->GetSliderBeginPos();
	Rect sliderBounds = Rect{ {sliderBeginPos.X,this->Bounds.TL.Y},{sliderBeginPos.X + Menu::State->SliderWidth ,this->Bounds.BR.Y} };

	bool isHovered = Menu::State->AmIHovered(sliderBounds);

	FVector2D cursorPos = Menu::State->MousePos;

	if (isHovered && Menu::State->LClickHeld())
	{
		SliderBase::DraggingSlider = this;
	}
	else if (!Menu::State->LClickHeld())
	{
		SliderBase::DraggingSlider = nullptr;
	}

	if (SliderBase::DraggingSlider == this)
	{
		float oneP = (float)Menu::State->SliderWidth / (float)(this->maxValue - this->minValue);

		*this->Value = ((float)(cursorPos.X - sliderBeginPos.X) / (float)oneP) + this->minValue;

		*this->Value = std::clamp(*this->Value, this->minValue, this->maxValue);
	}
}

FVector2D SliderFloat::GetSliderBeginPos()
{
	return FVector2D{ this->Bounds.BR.X - Menu::State->SliderWidth, this->Bounds.TL.Y + (Menu::State->ItemSize.Y * 0.75f) };
}

void SliderFloat::Draw()
{
	this->UpdateItemID();

	bool Hovered = this->AmIHovered();

	this->HandleSlider();

	this->UpdateLerp();

	bool Selected = this->PopupOpen;
	if (Selected)
	{
		this->UpdatePopupState();
	}
	else {
		Selected = this->AmISelected();
	}

	this->DrawBG(Selected);

	this->DrawSlider();
}
