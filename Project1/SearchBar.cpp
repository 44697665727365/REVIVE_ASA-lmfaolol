#include "pch.h"
#include "SearchBar.h"
#include "Menu.h"
#include "MenuHelper.h"
void SearchBar::DrawSearchBar()
{
	Renderer::RenderFilledRoundedRectangle(&Menu::State->SearchBarPosition, Menu::State->SearchBarSize.X, Menu::State->SearchBarSize.Y, Menu::State->ItemRounding, Menu::Colors->Item_Background_Active);

	FVector2D TextStartPos = { Menu::State->SearchBarPosition.X + (5.f * Menu::State->MenuScale), Menu::State->SearchBarPosition.Y + (Menu::State->SearchBarSize.Y / 2) };


	FString draw = (SearchText.c_str());
	FVector2D TextSize = Renderer::canvas->K2_TextSize(Renderer::Font, draw, FVector2D{ (0.8f * Menu::State->MenuScale), (0.8f * Menu::State->MenuScale) });
	if (TextSize.X < 0.1f)
		TextSize.X = 1.f;
	if (TextSize.Y < 0.1f)
		TextSize.Y = (0.8f * Menu::State->MenuScale);
	
	this->CursorOffset = GuiLerp(this->CursorOffset, (float)TextSize.X * 1.1f, Menu::State->DeltaTime * 10.f);

	if (Tab::OpenTabID == 0xABCDEF)
	{
		Renderer::canvas->K2_DrawText(Renderer::Font, SearchText.c_str(), TextStartPos, FVector2D{ (0.8f * Menu::State->MenuScale), (0.8f * Menu::State->MenuScale) }, Menu::Colors->Text_Active, 2.f, { 0,0,0,0 }, { 0,0 }, false, true, false, { 0,0,0,0 });

		Renderer::DrawLine2D(FVector2D{ TextStartPos.X + this->CursorOffset + 1.f, TextStartPos.Y + (TextSize.Y * 0.8f) }, FVector2D{ TextStartPos.X + this->CursorOffset + 1.f, TextStartPos.Y - (TextSize.Y * 0.8f) }, 2.f, Menu::Colors->Text_Active);
	}
	else
	{
		if (SearchText.empty() || !SearchText.c_str())
		{
			Renderer::canvas->K2_DrawText(Renderer::Font, L"Search", TextStartPos, FVector2D{ (0.8f * Menu::State->MenuScale), (0.8f * Menu::State->MenuScale) }, Menu::Colors->Text_Active, 2.f, { 0,0,0,0 }, { 0,0 }, false, true, false, { 0,0,0,0 });
		}
		else
		{
			Renderer::canvas->K2_DrawText(Renderer::Font, SearchText.c_str(), TextStartPos, FVector2D{ (0.8f * Menu::State->MenuScale), (0.8f * Menu::State->MenuScale) }, Menu::Colors->Text_Active, 2.f, { 0,0,0,0 }, { 0,0 }, false, true, false, { 0,0,0,0 });
		}
	}


}
void SearchBar::DrawSearchTab()
{
	int sumDistance = 0;
	std::vector<std::pair<int, MenuItemBase*>> DrawnVars;

	for (auto& TabGroup : Menu::TabGroups)
	{
		for (auto& Tab : TabGroup->Tabs)
		{
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					auto Item = Tab->Grid->Items[i][j];
					if (Item)
					{
						if (!Item->Name.empty() && Item->ItemEnabled)
						{
							std::wstring namestr = Item->Name;
							int idx = FindFirstIndex(namestr, SearchText, namestr.size(), SearchText.size());
							if (idx != -1)
								DrawnVars.push_back({ idx,Item });
						}
					}
				}
			}
		}
	}

	std::qsort(DrawnVars.data(), DrawnVars.size(), sizeof(std::pair<int, MenuItemBase*>),
		[](const void* a, const void* b)
		{
			return ((std::pair<int, MenuItemBase*>*)a)->first - ((std::pair<int, MenuItemBase*>*)b)->first;
		}
	);

	int leftCol = 0;
	int rightCol = 0;

	for (int i = 0; i < DrawnVars.size() && i < 16;i++)
	{
		auto Item = DrawnVars[i].second;
		if (i % 2 == 0)
		{
			Item->Bounds.TL.X = Menu::State->ContentBounds.TL.X + Menu::State->ItemPadding.X;
		}
		else
		{
			Item->Bounds.TL.X = Menu::State->ContentBounds.TL.X + (Menu::State->ItemPadding.X * 2.f) + Menu::State->ItemSize.X;
		}
		Item->Bounds.TL.Y = Menu::State->ContentBounds.TL.Y + (Menu::State->ItemSize.Y * (i % 2 == 0 ? leftCol : rightCol)) + (Menu::State->ItemPadding.Y * (i % 2 == 0 ? leftCol : rightCol));
		Item->Bounds.BR = Item->Bounds.TL + Menu::State->ItemSize;
		Item->Draw();

		if (i % 2 == 0)
			leftCol++;
		else
			rightCol++;
	}
	if (Menu::State->SelectedItem != -1 && Menu::State->SelectedItem < Menu::State->MenuItems.size())
	{
		MenuItemPopup* PopupItem = ((MenuItemPopup*)Menu::State->MenuItems[Menu::State->SelectedItem]);
		if (PopupItem && PopupItem->PopupItem && PopupItem->MyPopup)
		{
			PopupItem->DrawPopup();
		}
	}
	std::wstring Title = Xors(L"Search Tab");
	if(!this->SearchText.empty())
	Title = Xors(L"Search Tab: ") + this->SearchText;
	FVector2D textPos = { Menu::State->ContentBounds.TL.X + Menu::State->ItemPadding.X + (20.f * Menu::State->MenuScale), Menu::State->ContentBounds.TL.Y - (24.f * Menu::State->MenuScale) };
	Renderer::DrawString(Title.c_str(), textPos, { (0.8f * Menu::State->MenuScale),(0.8f * Menu::State->MenuScale) }, Menu::Colors->Accent, true);
}
void SearchBar::UpdateInputText()
{
	Keyboard::DisableTextMode();
	if (Keyboard::MenuGetState(VK_BACK, 0) && Keyboard::MenuGetState(VK_LCONTROL, 1))
	{
		if (this->SearchText.size() > 0) {
			int lastIndex = this->SearchText.size() - 1;
			for (int i = this->SearchText.size() - 1; i >= 0; i--)
			{
				lastIndex = i;
				if (this->SearchText.at(i) == L' ')
				{
					break;
				}
			}
			this->SearchText.erase(this->SearchText.begin() + lastIndex, this->SearchText.end());
		}
	}
	else if (Keyboard::MenuGetState(VK_BACK, 0))
	{
		if (this->SearchText.size() > 0)
			this->SearchText.pop_back();
	}
	else if (this->SearchText.size() < 25)
	{
		Keyboard::EnableTextMode();
		wchar_t LastKey = Keyboard::GetLastKeyTextModeOnly(InputType_Alphabet | InputType_Numbers);
		if (LastKey != -1 && LastKey != 0xffff) {
			this->SearchText.append(1, LastKey);
		}
		Keyboard::DisableTextMode();
	}
}
void SearchBar::Draw()
{
	this->Update();

	this->DrawSearchBar();
	
	if (Tab::OpenTabID != 0xABCDEF)
	{
		return;
	}
	
	this->DrawSearchTab();
}

void SearchBar::Update()
{
	bool Hovered = Menu::State->AmIHovered({ Menu::State->SearchBarPosition,Menu::State->SearchBarPosition + Menu::State->SearchBarSize });

	if (Hovered && Menu::State->LClickPressed())
	{
		Tab::OpenTabID = 0xABCDEF;
	}

	if (Tab::OpenTabID != 0xABCDEF)
	{
		return;
	}

	this->UpdateInputText();
}
