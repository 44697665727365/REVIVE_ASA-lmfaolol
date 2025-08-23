#include "pch.h"
#include "Keybind.h"
#include "Menu.h"
#include "MenuHelper.h"

Keybind* Keybind::SelectedKeybind;
std::vector<int> Keybind::BlackListedKeys = { VK_LBUTTON };

void Keybind::UpdateLerp(bool Selected)
{
	this->TextColor = GuiLerp(this->TextColor, *this->key > 0 ? Menu::Colors->Accent : this->IsHovered ? Menu::Colors->Text_Hov : Menu::Colors->Text_Active, Menu::State->DeltaTime * 8);
	this->BindTextColor = GuiLerp(this->BindTextColor, SelectedKeybind == this ? Menu::Colors->Accent : Menu::Colors->Text_Active, Menu::State->DeltaTime * 8);
	if (Menu::State->WasClosed)
	{
		this->TextColor = *this->key > 0 ? Menu::Colors->Accent : this->IsHovered ? Menu::Colors->Text_Hov : Menu::Colors->Text_Active;
		this->BindTextColor = SelectedKeybind == this ? Menu::Colors->Accent : Menu::Colors->Text_Active;
	}
}

void Keybind::DrawKeybind()
{
	std::wstring buf_display = Xors(L"None");

	std::wstring active_key = Xors(L"");

	auto k = Keyboard::KeyMap[*this->key];

	if (k && this->GetKeyName(*this->key).c_str() && !this->GetKeyName(*this->key).empty())
		active_key.append(this->GetKeyName(*this->key));
	else
		active_key.append(Xors(L"Not Found"));

	if (*key != 0 && SelectedKeybind != this) {
		buf_display = Xors(L"");
		buf_display.append(active_key);
	}
	else if (SelectedKeybind == this) {
		buf_display = Xors(L"...");
	}
	else if (*key == 0) {
		buf_display = Xors(L"None");
	}
	else
		buf_display = Xors(L"key error");

	FVector2D KeyBindMiddlePos = FVector2D{ this->Bounds.BR.X - (60 * Menu::State->MenuScale), this->Bounds.TL.Y + ((double)Menu::State->ItemSize.Y / 2) };
	FVector2D KeyBindStartPos = { KeyBindMiddlePos.X - (40.f * Menu::State->MenuScale),KeyBindMiddlePos.Y - (20.f * Menu::State->MenuScale) };
	Renderer::RenderFilledRoundedRectangle(&KeyBindStartPos, (80.f * Menu::State->MenuScale), (40.f * Menu::State->MenuScale), (6.f * Menu::State->MenuScale), Menu::Colors->ToggleBackGround);
	if (buf_display.c_str())
	{
		FVector2D textPos = FVector2D{ KeyBindMiddlePos.X - (3.f * Menu::State->MenuScale) ,KeyBindMiddlePos.Y };
		Renderer::canvas->K2_DrawText(Renderer::Font, buf_display.c_str(), textPos, FVector2D{ (0.6f * Menu::State->MenuScale), (0.6f * Menu::State->MenuScale) }, this->BindTextColor, 2.f, { 0,0,0,0 }, { 0,0 }, true, true, false, { 0,0,0,0 });
	}
	else
	{
		FVector2D textPos = FVector2D{ KeyBindMiddlePos.X - (3.f * Menu::State->MenuScale) ,KeyBindMiddlePos.Y };
		Renderer::canvas->K2_DrawText(Renderer::Font, Xors(L"ERROR"), textPos, FVector2D{ (0.6f * Menu::State->MenuScale),(0.6f * Menu::State->MenuScale) }, { 1.f,0.f,0.f,1.f }, 2.f, { 0,0,0,0 }, { 0,0 }, true, true, false, { 0,0,0,0 });
	}
}

int Keybind::GetPressedKey()
{
	return Keyboard::MenuGetLastPressedKey();
}

std::wstring Keybind::GetKeyName(int key)
{
	switch (key) {
	case VK_LBUTTON:
		return L"LMB";
	case VK_RBUTTON:
		return L"RMB";
	case VK_MBUTTON:
		return L"MMB";
	case VK_XBUTTON1:
		return L"Thumb1";
	case VK_XBUTTON2:
		return L"Thumb2";
	default:
		return Keyboard::KeyNameMap[key];
	}
}

void Keybind::UpdateKeybind()
{
	if (this->SelectingKey && SelectedKeybind == this)
	{
		int PressedKey = this->GetPressedKey();
		if (PressedKey > 0)
		{
			if (PressedKey == VK_ESCAPE)
			{
				*this->key = 0;
				this->SelectingKey = false;
				SelectedKeybind = nullptr;
				return;
			}
			if (std::find(BlackListedKeys.begin(), BlackListedKeys.end(), PressedKey) != BlackListedKeys.end())
			{
				return;
			}
			*this->key = PressedKey;
			this->SelectingKey = false;
			SelectedKeybind = nullptr;
		}
	}
	else
	{
		if (this->CanClick() && Menu::State->LClickPressed())
		{
			this->SelectingKey = true;
			SelectedKeybind = this;
		}
	}
}

void Keybind::Draw()
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

	this->UpdateKeybind();

	this->DrawKeybind();
}
