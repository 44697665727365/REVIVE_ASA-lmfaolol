#include "pch.h"
#include "TextInput.h"
#include "Menu.h"
#include "MenuHelper.h"
TextInput* TextInput::SelectedInput = nullptr;
void TextInput::UpdateLerp()
{
	this->TextColor = GuiLerp(this->TextColor, TextInput::SelectedInput == this ? Menu::Colors->Accent : this->IsHovered ? Menu::Colors->Text_Hov : Menu::Colors->Text_Active, Menu::State->DeltaTime * 8.f);
	if (Menu::State->WasClosed)
	{
		this->TextColor = TextInput::SelectedInput == this ? Menu::Colors->Accent : this->IsHovered ? Menu::Colors->Text_Hov : Menu::Colors->Text_Active;
	}
}

void TextInput::UpdateCursor(float CursorPosition)
{

	this->CursorOffset = GuiLerp(this->CursorOffset, CursorPosition, Menu::State->DeltaTime * 10);
}

void TextInput::UpdateInput()
{
	Keyboard::DisableTextMode();
	if (TextInput::SelectedInput != this)
	{
		return;
	}
	if (Keyboard::GetState(VK_ESCAPE, 1))
	{
		TextInput::SelectedInput = nullptr;
		return;
	}
	if (Keyboard::MenuGetState(VK_BACK, 0) && Keyboard::MenuGetState(VK_LCONTROL, 1))
	{
		if (this->Value->size() > 0) 
		{
			int lastIndex = this->Value->size() - 1;

			for (int i = this->Value->size() - 1; i >= 0; i--)
			{
				lastIndex = i;
				if (this->Value->at(i) == L' ')
				{
					break;
				}
			}
			this->Value->erase(this->Value->begin() + lastIndex, this->Value->end());
		}
	}
	else if (Keyboard::MenuGetState(VK_BACK, 0))
	{
		if (this->Value->size() > 0)
			this->Value->pop_back();
	}
	else if (this->Value->size() < 50)
	{
		Keyboard::EnableTextMode();
		wchar_t LastKey = Keyboard::GetLastKeyTextModeOnly(this->AllowedInput);
		if (LastKey != -1 && LastKey != 0xffff) {
			this->Value->append(1, LastKey);
		}
		Keyboard::DisableTextMode();
	}
}

void TextInput::DrawInput()
{
	this->DrawName();

	FVector2D InputSize = { (Menu::State->ItemSize.X * 0.55f), (50.f * Menu::State->MenuScale) };

	FVector2D InputStartPos = { this->Bounds.TL.X + (Menu::State->ItemSize.X * 0.43f), this->Bounds.TL.Y + (Menu::State->ItemSize.Y / 2) - (InputSize.Y / 2) };

	FVector2D textStartPos = FVector2D{ InputStartPos.X + (5.f * Menu::State->MenuScale), InputStartPos.Y + (InputSize.Y / 2) };

	FVector2D RectPos = FVector2D(InputStartPos.X, InputStartPos.Y + InputSize.Y / 6.f);
	Renderer::RenderFilledRoundedRectangle(&RectPos, InputSize.X, InputSize.Y * (4.f/6.f), 4.f, Menu::Colors->ToggleBackGround, RoundedRectFlags_None);
	
	FString draw = (this->Value->c_str());
	FVector2D TextSize = Renderer::canvas->K2_TextSize(Renderer::Font, draw, FVector2D{ (0.6f * Menu::State->MenuScale), (0.6f * Menu::State->MenuScale) });
	if (TextSize.X < 0.1f)
		TextSize.X = 1.f;
	if (TextSize.Y < 0.1f)
		TextSize.Y = (0.6f * Menu::State->MenuScale);

	this->UpdateCursor((TextSize.X * 1.1f));

	if (TextInput::SelectedInput == this)
	{

		Renderer::canvas->K2_DrawText(Renderer::Font, this->Value->c_str(), textStartPos, FVector2D{ (0.6f * Menu::State->MenuScale), (0.6f * Menu::State->MenuScale) }, Menu::Colors->Text_Hov, 2.f, { 0,0,0,0 }, { 0,0 }, false, true, false, { 0,0,0,0 });

		Renderer::DrawLine2D(FVector2D{ textStartPos.X + this->CursorOffset + 1.f, textStartPos.Y + (TextSize.Y * 0.6f) }, FVector2D{ textStartPos.X + this->CursorOffset + 1.f, textStartPos.Y - (TextSize.Y * 0.6f) }, 2.f, Menu::Colors->Text_Active);
	}
	else
	{
		if (this->Value->size() > 0)
		{
			Renderer::canvas->K2_DrawText(Renderer::Font, this->Value->c_str(), textStartPos, FVector2D{ (0.6f * Menu::State->MenuScale), (0.6f * Menu::State->MenuScale) }, Menu::Colors->Text_Hov, 2.f, { 0,0,0,0 }, { 0.5f,0.5f }, false, true, false, { 0,0,0,0 });
		}
		else if (this->PreView.c_str())
		{
			Renderer::canvas->K2_DrawText(Renderer::Font, this->PreView.c_str(), textStartPos, FVector2D{ (0.6f * Menu::State->MenuScale), (0.6f * Menu::State->MenuScale) }, Menu::Colors->Text_Active, 2.f, { 0,0,0,0 }, { 0.5f,0.5f }, false, true, false, { 0,0,0,0 });
		}
	}
}

void TextInput::Draw()
{
	this->UpdateItemID();

	bool Hovered = this->AmIHovered();

	this->UpdateLerp();

	if (Hovered)
	{
		if(Menu::State->LClickPressed())
			TextInput::SelectedInput = this;
	}
	else
	{
		if (Menu::State->LClickPressed() && TextInput::SelectedInput == this)
			TextInput::SelectedInput = nullptr;
	}

	this->UpdateInput();

	this->DrawBG(false);

	this->DrawInput();
}
