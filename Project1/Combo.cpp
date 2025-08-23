#include "pch.h"
#include "Combo.h"
#include "Menu.h"
#include "MenuHelper.h"

Combo* Combo::SelectedCombo;

void Combo::UpdateComboOpen()
{
	bool Hovered = Hovered = InBounds(Menu::State->MousePos, this->Bounds);

	if (Hovered && Menu::State->LClickPressed() && (Menu::State->SelectedItem == -1 || Menu::State->SelectedItem == this->ParentItemID))
	{
		if (Combo::SelectedCombo == this)
			Combo::SelectedCombo = nullptr;
		else if (Combo::SelectedCombo == nullptr)
			Combo::SelectedCombo = this;
	}
	else if (Combo::SelectedCombo == this)
	{
		Rect ExtraSize = { this->ComboStartPos,{this->Bounds.BR.X,this->Bounds.BR.Y + (Menu::State->ComboItemHeight * this->ItemsPtr->size()) } };

		;
		Hovered = Hovered = InBounds(Menu::State->MousePos, ExtraSize);

		if (!Hovered && Menu::State->LClickPressed())
		{
			Combo::SelectedCombo = nullptr;
		}
	}
}

void Combo::UpdateLerp()
{
	this->TextColor = GuiLerp(this->TextColor, this->IsHovered ? Menu::Colors->Text_Hov : (Combo::SelectedCombo == this) ? Menu::Colors->Text_Hov : Menu::Colors->Text_Active, Menu::State->DeltaTime * 8);
	if (Menu::State->WasClosed)
	{
		this->TextColor = this->IsHovered ? Menu::Colors->Text_Hov : (Combo::SelectedCombo == this) ? Menu::Colors->Text_Hov : Menu::Colors->Text_Active;
	}
}

void Combo::DrawPreview()
{
	FVector2D PreviewSize = { 200.f * Menu::State->MenuScale, 40.f * Menu::State->MenuScale };

	FVector2D PreviewMiddlePos = FVector2D{ this->Bounds.BR.X - (PreviewSize.X / 2) - (10 * Menu::State->MenuScale), this->Bounds.TL.Y + ((double)Menu::State->ItemSize.Y / 2) };

	FVector2D PreviewStartPos = { PreviewMiddlePos.X - (PreviewSize.X / 2),PreviewMiddlePos.Y - (PreviewSize.Y / 2) };

	Renderer::RenderFilledRoundedRectangle(&PreviewStartPos, PreviewSize.X, PreviewSize.Y, 4.f, Menu::Colors->ToggleBackGround, Combo::SelectedCombo == this ? RoundedRectFlags_NoRoundingBottomLeft | RoundedRectFlags_NoRoundingBottomRight : RoundedRectFlags_None);

	std::wstring previewElement = Xors(L"None");

	if (*this->SelectedIndex < this->ItemsPtr->size() && *this->SelectedIndex >= 0 && this->ItemsPtr->at(*this->SelectedIndex).c_str())
		previewElement = this->ItemsPtr->at(*this->SelectedIndex);

	if (previewElement.c_str())
	{
		FVector2D textPos = FVector2D{ PreviewMiddlePos };

		Renderer::canvas->K2_DrawText(Renderer::Font, previewElement.c_str(), textPos, FVector2D{ (0.6f * Menu::State->MenuScale), (0.6f * Menu::State->MenuScale) }, Menu::Colors->Accent, 2.f, { 0,0,0,0 }, { 0,0 }, true, true, false, { 0,0,0,0 });
	}
	else
	{
		FVector2D textPos = FVector2D{ PreviewMiddlePos };

		Renderer::canvas->K2_DrawText(Renderer::Font, Xors(L"ERROR"), textPos, FVector2D{ (0.6f * Menu::State->MenuScale), (0.6f * Menu::State->MenuScale) }, { 1.f,1.f,1.f,1.f }, 2.f, { 0,0,0,0 }, { 0,0 }, true, true, false, { 0,0,0,0 });
	}

	this->ComboStartPos = { PreviewStartPos.X,PreviewStartPos.Y + PreviewSize.Y };

	this->ComboSize = { PreviewSize.X, (Menu::State->ComboItemHeight) * this->ItemsPtr->size() };
}

void Combo::DrawComboItems()
{
	for (int i = 0; i < this->ItemsPtr->size(); i++)
	{
		FVector2D ItemStartPos = { this->ComboStartPos.X, this->ComboStartPos.Y + (Menu::State->ComboItemHeight * i) };

		FVector2D ItemSize = { this->ComboSize.X, Menu::State->ComboItemHeight };

		Renderer::RenderFilledRoundedRectangle(&ItemStartPos, ItemSize.X, ItemSize.Y, 4.f, Menu::Colors->ToggleBackGround, i == this->ItemsPtr->size() - 1 ? RoundedRectFlags_NoRoundingTopLeft | RoundedRectFlags_NoRoundingTopRight : RoundedRectFlags_NoRoundingTopLeft | RoundedRectFlags_NoRoundingTopRight | RoundedRectFlags_NoRoundingBottomLeft | RoundedRectFlags_NoRoundingBottomRight);

		std::wstring ItemName = this->ItemsPtr->at(i);

		FVector2D textPos = FVector2D{ ItemStartPos.X + (ItemSize.X / 2),ItemStartPos.Y + (ItemSize.Y / 2) };

		Renderer::canvas->K2_DrawText(Renderer::Font, ItemName.c_str(), textPos, FVector2D{ (0.6f * Menu::State->MenuScale), (0.6f * Menu::State->MenuScale) }, *this->SelectedIndex == i ? Menu::Colors->Accent : Menu::Colors->Text_Active, 2.f, { 0,0,0,0 }, { 0.5f,0.5f }, true, true, false, { 0,0,0,0 });
		
		if (InBounds(Menu::State->MousePos, { ItemStartPos,ItemStartPos + ItemSize }))
		{
			if (Menu::State->LClickPressed())
			{
				*this->SelectedIndex = i;
			}
		}
	}
}

void Combo::Draw()
{
	if (!this->ItemsPtr) {
		this->ItemsPtr = &this->Items;
	}

	this->UpdateItemID();

	this->UpdateLerp();

	this->UpdateComboOpen();

	this->DrawBG(false);

	this->DrawName();

	this->DrawDescription();

	this->DrawPreview();
}
