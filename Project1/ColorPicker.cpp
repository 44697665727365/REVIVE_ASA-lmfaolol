#include "pch.h"
#include "ColorPicker.h"
#include "Menu.h"
#include "MenuHelper.h"
ColorPicker* ColorPicker::SelectedColorPicker = nullptr;
std::vector<FLinearColor> ColorPicker::RecentColors = { };
bool ColEquals(FLinearColor a, FLinearColor b)
{
	return abs(a.R - b.R) < 0.1f && abs(a.G - b.G) < 0.1f && abs(a.B - b.B) < 0.1f && abs(a.A - b.A) < 0.1f;
}
void ColorPicker::UpdateRecentColors()
{
	for (int i = 0; i < RecentColors.size();i++)
	{
		if (ColEquals(RecentColors.at(i), *this->Value))
		{
			RecentColors.erase(RecentColors.begin() + i);
			break;
		}
	}
	RecentColors.insert(RecentColors.begin(), *this->Value);
}

void ColorPicker::UpdatePickerOpen()
{
	bool Hovered = Hovered = InBounds(Menu::State->MousePos, this->Bounds);

	if (Hovered && (Menu::State->LClickPressed() || Menu::State->RClickPressed()))
	{
		if (ColorPicker::SelectedColorPicker == this) {
			this->UpdateRecentColors();
			ColorPicker::SelectedColorPicker = nullptr;
		}
		else if (!ColorPicker::SelectedColorPicker)
			ColorPicker::SelectedColorPicker = this;
	}
	else if (ColorPicker::SelectedColorPicker == this)
	{
		FVector2D PopupStartPos = { this->Bounds.TL.X,this->Bounds.BR.Y };

		float PopupWidth = this->Bounds.BR.X - this->Bounds.TL.X;
		float PopupHeight = 500.f * Menu::State->MenuScale;

		Rect ExtraSize = { PopupStartPos,{PopupStartPos.X + PopupWidth,PopupStartPos.Y + PopupHeight} };
		Hovered = Hovered = InBounds(Menu::State->MousePos, ExtraSize);

		if (!Hovered && (Menu::State->LClickPressed() || Menu::State->RClickPressed()))
		{
			this->UpdateRecentColors();
			ColorPicker::SelectedColorPicker = nullptr;
		}
	}
}

void ColorPicker::DrawColorPreview()
{
	FVector2D MiddlePos = FVector2D{ this->Bounds.TL.X + Menu::State->ItemSize.X - (60.f * Menu::State->MenuScale), this->Bounds.TL.Y + ((double)Menu::State->ItemSize.Y / 2) };
	//FVector2D Size = { 80.f * Menu::State->MenuScale, 35.f * Menu::State->MenuScale };
	//FVector2D StartPos = { MiddlePos.X - (Size.X / 2),MiddlePos.Y - (Size.Y / 2) };
	//Renderer::RenderFilledRoundedRectangle(&StartPos, Size.X, Size.Y, (8.f * Menu::State->MenuScale), *this->Value, RoundedRectFlags_None);
	Renderer::DrawFilledCircle({ MiddlePos.X,MiddlePos.Y }, (20.f * Menu::State->MenuScale), *this->Value);
}

void ColorPicker::UpdateLerp(bool Selected)
{
	this->CursorWidth = GuiLerp(this->CursorWidth, this->DraggingSVBox ? (10.f * Menu::State->MenuScale) : (7.f * Menu::State->MenuScale), Menu::State->DeltaTime * 8);
}

void DrawHSVBox(FVector2D StartPos, float Width, float Height,FLinearColor Color)
{
	float Hue = Renderer::RGBtoHSV(Color).h;
	for (int y = 0; y < Height - 2; y+=3) {
		for (int x = 0; x < Width; ++x) {
			double saturation = (double)x / Width;
			double value = 1.f - ((double)y / Height);
			HSVColor hsv_color = { Hue, saturation, value };
			FLinearColor rgb_color = Renderer::HSVtoRGB(hsv_color);
			Renderer::DrawLine2D({ StartPos.X + x,StartPos.Y + y }, { StartPos.X + x,StartPos.Y + y + 2 }, 1.f, rgb_color);
		}
	}
}

void ColorPicker::DrawColorPickerPopup()
{
	FVector2D PopupStartPos = { this->Bounds.TL.X,this->Bounds.BR.Y };
	float PopupWidth = this->Bounds.BR.X - this->Bounds.TL.X;
	float PopupHeight = 500.f * Menu::State->MenuScale;

	Renderer::RenderFilledRoundedRectangle(&PopupStartPos, PopupWidth, PopupHeight, (8.f * Menu::State->MenuScale), this->BackgroundColor, RoundedRectFlags_NoRoundingTopLeft | RoundedRectFlags_NoRoundingTopRight);
	
	this->DrawSVBox(PopupStartPos, PopupWidth, PopupHeight);
	
	this->DrawHueLine(PopupStartPos, PopupWidth, PopupHeight);
	
	this->DrawValueLine(PopupStartPos, PopupWidth, PopupHeight);
	
	this->DrawRecentColors(PopupStartPos, PopupWidth, PopupHeight);
}

void ColorPicker::Draw()
{
	if(ColorPicker::SelectedColorPicker != this)
		this->Color = Renderer::RGBtoHSV(*this->Value);

	this->UpdateItemID();

	this->UpdateLerp(false);

	this->UpdatePickerOpen();

	this->DrawBG(ColorPicker::SelectedColorPicker == this);

	this->DrawName();

	this->DrawColorPreview();

	*this->Value = Renderer::HSVtoRGB(this->Color);
}

void ColorPicker::DrawValueLine(FVector2D PopupStartPos, float PopupWidth, float PopupHeight)
{
	Rect ValueLineBounds = { {PopupStartPos.X + 10.f, PopupStartPos.Y + (PopupHeight * 0.75f) - (10.f * Menu::State->MenuScale)},{PopupStartPos.X + PopupWidth - (10.f * Menu::State->MenuScale), PopupStartPos.Y + (PopupHeight * 0.75f) + (10.f * Menu::State->MenuScale)} };

	Renderer::DrawValueLine(ValueLineBounds.TL, PopupWidth - 20.f, 10.f * Menu::State->MenuScale, this->Color.h, this->Color.s);

	if (InBounds(Menu::State->MousePos, ValueLineBounds) && !this->DraggingSVBox && !this->DraggingHueLine)
	{
		if (Menu::State->LClickHeld())
		{
			this->DraggingValueLine = true;
		}
	}

	if (this->DraggingValueLine)
	{
		FVector2D ClampedMousePos;
		ClampedMousePos.X = std::clamp(Menu::State->MousePos.X, ValueLineBounds.TL.X, ValueLineBounds.BR.X);
		ClampedMousePos.Y = std::clamp(Menu::State->MousePos.Y, ValueLineBounds.TL.Y, ValueLineBounds.BR.Y);

		if (!Menu::State->LClickHeld())
		{
			this->DraggingValueLine = false;
		}
		else
		{
			float Value = ((ClampedMousePos.X - ValueLineBounds.TL.X) / (ValueLineBounds.BR.X - ValueLineBounds.TL.X));
			this->Color.v = Value;
		}
	}

	float ValuePercentage = this->Color.v;
	FVector2D ValueTriangleTopLeft = { ValueLineBounds.TL.X + (ValueLineBounds.BR.X - ValueLineBounds.TL.X) * ValuePercentage - (5.f * Menu::State->MenuScale),ValueLineBounds.TL.Y - 10.f * Menu::State->MenuScale };
	FVector2D ValueTriangleTopRight = { ValueTriangleTopLeft.X + 10.f * Menu::State->MenuScale,ValueTriangleTopLeft.Y };
	FVector2D ValueTriangleBottom = { ValueTriangleTopLeft.X + 5.f * Menu::State->MenuScale,ValueTriangleTopLeft.Y + 10.f * Menu::State->MenuScale };
	Renderer::DrawLine2D(ValueTriangleTopLeft, ValueTriangleTopRight, 2.f, { 1,1,1,1 });
	Renderer::DrawLine2D(ValueTriangleTopRight, ValueTriangleBottom, 2.f, { 1,1,1,1 });
	Renderer::DrawLine2D(ValueTriangleBottom, ValueTriangleTopLeft, 2.f, { 1,1,1,1 });
}

void ColorPicker::DrawHueLine(FVector2D PopupStartPos, float PopupWidth, float PopupHeight)
{
	Rect HueLineBounds = { {PopupStartPos.X + 10.f, PopupStartPos.Y + (PopupHeight * 0.65f) - (10.f * Menu::State->MenuScale)},{PopupStartPos.X + PopupWidth - (10.f * Menu::State->MenuScale), PopupStartPos.Y + (PopupHeight * 0.65f) + (10.f * Menu::State->MenuScale)} };

	Renderer::DrawHueLine(HueLineBounds.TL, PopupWidth - 20.f, 10.f * Menu::State->MenuScale);

	if (InBounds(Menu::State->MousePos, HueLineBounds) && !this->DraggingSVBox && !this->DraggingValueLine)
	{
		if (Menu::State->LClickHeld())
		{
			this->DraggingHueLine = true;
		}
	}

	if (this->DraggingHueLine)
	{
		FVector2D ClampedMousePos;
		ClampedMousePos.X = std::clamp(Menu::State->MousePos.X, HueLineBounds.TL.X, HueLineBounds.BR.X);
		ClampedMousePos.Y = std::clamp(Menu::State->MousePos.Y, HueLineBounds.TL.Y, HueLineBounds.BR.Y);

		if (!Menu::State->LClickHeld())
		{
			this->DraggingHueLine = false;
		}
		else
		{
			float Hue = Renderer::GetHueUnderMousePos(ClampedMousePos, { PopupStartPos.X + (10.f * Menu::State->MenuScale), PopupStartPos.Y + (PopupHeight * 0.65f) - (10.f * Menu::State->MenuScale) }, PopupWidth - (20.f * Menu::State->MenuScale), 20.f * Menu::State->MenuScale);
			this->Color.h = Hue;
		}
	}

	float HuePercentage = this->Color.h / 360.f;
	FVector2D TriangleTopLeft = { HueLineBounds.TL.X + (HueLineBounds.BR.X - HueLineBounds.TL.X) * HuePercentage - (5.f * Menu::State->MenuScale),HueLineBounds.TL.Y - 10.f * Menu::State->MenuScale };
	FVector2D TriangleTopRight = { TriangleTopLeft.X + 10.f * Menu::State->MenuScale,TriangleTopLeft.Y };
	FVector2D TriangleBottom = { TriangleTopLeft.X + 5.f * Menu::State->MenuScale,TriangleTopLeft.Y + 10.f * Menu::State->MenuScale };
	Renderer::DrawLine2D(TriangleTopLeft, TriangleTopRight, 2.f, { 1,1,1,1 });
	Renderer::DrawLine2D(TriangleTopRight, TriangleBottom, 2.f, { 1,1,1,1 });
	Renderer::DrawLine2D(TriangleBottom, TriangleTopLeft, 2.f, { 1,1,1,1 });
}

void ColorPicker::DrawRecentColors(FVector2D PopupStartPos, float PopupWidth, float PopupHeight)
{
	Renderer::DrawString(Xors(L"Recent"), { PopupStartPos.X + (PopupWidth / 2.f),PopupStartPos.Y + (PopupHeight * 0.8f) }, { 0.6f * Menu::State->MenuScale, 0.6f * Menu::State->MenuScale }, { 1,1,1,1 }, false, { 0,0,0,0 }, true, true);

	FVector2D RecentColorsStartPos = { PopupStartPos.X + (25.f * Menu::State->MenuScale),PopupStartPos.Y + (PopupHeight * 0.85f) };
	FVector2D RecentColorsSize = { PopupWidth / 8, 0 };
	for (int i = 0; i < RecentColors.size() && i < 6;i++)
	{
		FLinearColor color = RecentColors.at(i);
		Renderer::RenderFilledRoundedRectangle(&RecentColorsStartPos, RecentColorsSize.X, RecentColorsSize.X, (8.f * Menu::State->MenuScale), color, RoundedRectFlags_None);
		if (InBounds(Menu::State->MousePos, { RecentColorsStartPos,{RecentColorsStartPos.X + RecentColorsSize.X,RecentColorsStartPos.Y + RecentColorsSize.X} }) && Menu::State->LClickPressed())
		{
			this->Color = Renderer::RGBtoHSV(color);
			RecentColors.erase(RecentColors.begin() + i);
			RecentColors.insert(RecentColors.begin(), color);
		}
		RecentColorsStartPos.X += RecentColorsSize.X * 1.2f;
	}
}
void ColorPicker::DrawSVBox(FVector2D PopupStartPos, float PopupWidth, float PopupHeight)
{
	DrawHSVBox({ PopupStartPos.X + (10.f * Menu::State->MenuScale), PopupStartPos.Y + (10.f * Menu::State->MenuScale) }, PopupWidth - (20.f * Menu::State->MenuScale), (PopupHeight * 0.6f) - (20.f * Menu::State->MenuScale), *this->Value);

	Rect SVBoxBounds = { {PopupStartPos.X + (10.f * Menu::State->MenuScale), PopupStartPos.Y + (10.f * Menu::State->MenuScale)},{PopupStartPos.X + PopupWidth - (10.f * Menu::State->MenuScale), PopupStartPos.Y + (PopupHeight * 0.6f) - (10.f * Menu::State->MenuScale)} };

	if (InBounds(Menu::State->MousePos, SVBoxBounds) && !this->DraggingHueLine && !this->DraggingValueLine)
	{
		if (Menu::State->LClickHeld())
		{
			this->DraggingSVBox = true;
		}
	}

	if (this->DraggingSVBox)
	{
		FVector2D ClampedMousePos;
		ClampedMousePos.X = std::clamp(Menu::State->MousePos.X, SVBoxBounds.TL.X, SVBoxBounds.BR.X);
		ClampedMousePos.Y = std::clamp(Menu::State->MousePos.Y, SVBoxBounds.TL.Y, SVBoxBounds.BR.Y);

		if (!Menu::State->LClickHeld())
		{
			this->DraggingSVBox = false;
		}
		else
		{
			float Saturation = (ClampedMousePos.X - SVBoxBounds.TL.X) / (SVBoxBounds.BR.X - SVBoxBounds.TL.X);
			float Value = 1.f - ((ClampedMousePos.Y - SVBoxBounds.TL.Y) / (SVBoxBounds.BR.Y - SVBoxBounds.TL.Y));
			this->Color.s = Saturation;
			this->Color.v = Value;
		}
	}
	Renderer::DrawCircle({ SVBoxBounds.TL.X + (SVBoxBounds.BR.X - SVBoxBounds.TL.X) * this->Color.s,SVBoxBounds.TL.Y + (SVBoxBounds.BR.Y - SVBoxBounds.TL.Y) * (1.f - this->Color.v) }, this->CursorWidth, 20, 2.f, { 0,0,0,1 });
}