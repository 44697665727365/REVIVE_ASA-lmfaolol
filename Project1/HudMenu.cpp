#include "HudMenu.h"
#include "Menu.h"
#include "Button.h"
#include "Toggle.h"
#include "MenuHelper.h"

FVector2D HudMenu::MenuPos = {20.f,100.f};
FVector2D HudMenu::ItemPadding = {10.f,5.f};
FVector2D HudMenu::ItemSize = { 150.f,20.f };
FLinearColor HudMenu::TabGroupColor = {0.f,0.2f,0.9f,1.f};
FLinearColor HudMenu::SelectedTabGroupColor = {0.1f,0.4f,1.f,1.f};
FLinearColor HudMenu::TabColor = {0.f,0.f,1.f,1.f};
FLinearColor HudMenu::SelectedTabColor = {0.1f,0.2f,1.f,1.f};
FLinearColor HudMenu::ItemColorDisabled = {1.f,0.f,0.f,1.f};
FLinearColor HudMenu::ItemColorEnabled = { 0.f,1.f,0.f,1.f };
FLinearColor HudMenu::CursorColor = {0.f,1.f,1.f,1.f};
FVector2D HudMenu::TextScale = {0.6f,0.6f};
int HudMenu::CursorX = 0;
int HudMenu::CursorY[3] = {};
FVector2D HudMenu::CursorPos = {0.f,0.f};
TabGroup* HudMenu::SelectedTabGroup = nullptr;
Tab* HudMenu::SelectedTab = nullptr;
MenuItemBase* HudMenu::SelectedItem = nullptr;
double HudMenu::DeltaTime = 0.0;
TimeVar HudMenu::LastFrameTime = TimeVar();

int GetLastItemInGrid(MenuGrid* grid)
{
	int Count = 16;
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 10; j++)
			if (!grid->Items[i][j])
				Count--;
	return Count;
}

void HudMenu::DrawMenu()
{
	if (!settings::menu::HudMenu.Enabled || !Menu::State->Initialized)
		return;

	FVector2D Pos = HudMenu::MenuPos + HudMenu::ItemPadding;
	for (size_t i = 0; i < Menu::TabGroups.size(); i++)
	{
		TabGroup* tabGroup = Menu::TabGroups[i];
		FLinearColor Color = HudMenu::TabColor;
		if (HudMenu::SelectedTabGroup == tabGroup) {
			HudMenu::DrawTabGroup(tabGroup);
			Color = HudMenu::SelectedTabColor;
		}
		Renderer::DrawString(tabGroup->GroupName, Pos, HudMenu::TextScale, Color, true);
		Pos.Y += HudMenu::ItemSize.Y + HudMenu::ItemPadding.Y;
	}
	HudMenu::Update();
	HudMenu::UpdateSelectedItem();
	HudMenu::DrawCursor();
}

void HudMenu::Update()
{

	HudMenu::DeltaTime = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - LastFrameTime).count() / 1000.f;
	HudMenu::LastFrameTime = std::chrono::high_resolution_clock::now();
	if (Keyboard::GetState(settings::menu::DownKey.KeyBindForVar, 0))
	{
		switch (HudMenu::CursorX)
		{
		case 0:
			HudMenu::CursorY[0] -= 1;
			if (HudMenu::CursorY[0] < 0)
				HudMenu::CursorY[0] = Menu::TabGroups.size() - 1;
			break;
		case 1:
			HudMenu::CursorY[1] -= 1;
			if (HudMenu::CursorY[1] < 0)
				HudMenu::CursorY[1] = HudMenu::SelectedTabGroup->Tabs.size() - 1;
			break;
		case 2:
			HudMenu::CursorY[2] -= 1;
			if (HudMenu::CursorY[2] < 0)
				HudMenu::CursorY[2] = GetLastItemInGrid(HudMenu::SelectedTab->Grid) - 1;
			break;
		}
	}
	if (Keyboard::GetState(settings::menu::UpKey.KeyBindForVar, 0))
	{
		switch (HudMenu::CursorX)
		{
		case 0:
			HudMenu::CursorY[0] += 1;
			if (HudMenu::CursorY[0] >= Menu::TabGroups.size())
				HudMenu::CursorY[0] = 0;
			break;
		case 1:
			HudMenu::CursorY[1] += 1;
			if (HudMenu::CursorY[1] >= HudMenu::SelectedTabGroup->Tabs.size())
				HudMenu::CursorY[1] = 0;
			break;
		case 2:
			HudMenu::CursorY[2] += 1;
			if (HudMenu::CursorY[2] >= GetLastItemInGrid(HudMenu::SelectedTab->Grid))
				HudMenu::CursorY[2] = 0;
			break;
		}
	}
	if (Keyboard::GetState(settings::menu::BackwardKey.KeyBindForVar, 0))
	{
		switch (HudMenu::CursorX)
		{
		case 0:
			HudMenu::CursorY[1] = 0;
			HudMenu::CursorY[2] = 0;
			break;
		case 1:
			HudMenu::CursorX = 0;
			HudMenu::CursorY[1] = 0;
			HudMenu::CursorY[2] = 0;
			HudMenu::SelectedTab = nullptr;
			break;
		case 2:
			HudMenu::CursorX = 1;
			HudMenu::CursorY[2] = 0;
			HudMenu::SelectedItem = nullptr;
			break;
		default:
			break;
		}
	}
	if (Keyboard::GetState(settings::menu::ForwardKey.KeyBindForVar, 0))
	{
		if (HudMenu::CursorX == 0) {
			HudMenu::SelectedTabGroup = Menu::TabGroups[HudMenu::CursorY[0]];
			HudMenu::CursorY[1] = 0;
			HudMenu::CursorX = 1;
		}
		else if (HudMenu::CursorX == 1) {
			HudMenu::SelectedTab = Menu::TabGroups[HudMenu::CursorY[0]]->Tabs[HudMenu::CursorY[1]];
			HudMenu::CursorY[2] = 0;
			HudMenu::CursorX = 2;
		}
	}
	if (HudMenu::CursorX == 2) {
		HudMenu::SelectedItem = Menu::TabGroups[HudMenu::CursorY[0]]->Tabs[HudMenu::CursorY[1]]->Grid->Items[HudMenu::CursorY[2] / 10][HudMenu::CursorY[2] % 10];
	}
	double X = HudMenu::MenuPos.X + HudMenu::ItemPadding.X + HudMenu::ItemSize.X;
	double Y = HudMenu::MenuPos.Y + HudMenu::ItemPadding.Y;
	X += HudMenu::CursorX * (HudMenu::ItemSize.X + HudMenu::ItemPadding.X);
	Y += HudMenu::CursorY[HudMenu::CursorX] * (HudMenu::ItemSize.Y + HudMenu::ItemPadding.Y);
	HudMenu::CursorPos.X = X;
	HudMenu::CursorPos.Y = GuiLerp(HudMenu::CursorPos.Y,Y,HudMenu::DeltaTime * 10.f);
}

void HudMenu::UpdateSelectedItem()
{
	if (HudMenu::SelectedItem) {
		if (HudMenu::SelectedItem->Type == MenuItemType::CheckBox) {
			Toggle* toggle = (Toggle*)(HudMenu::SelectedItem);
			if (Keyboard::GetState(settings::menu::ForwardKey.KeyBindForVar, 0))
				*toggle->Value = !*toggle->Value;
		}
	}
}

void HudMenu::DrawTab(Tab* tab)
{
	FVector2D Pos = HudMenu::MenuPos + (HudMenu::ItemSize * 2) + (HudMenu::ItemPadding * 3);
	for (size_t i = 0; i < 2;i++) {
		for (size_t j = 0; j < 10;j++) {
			MenuItemBase* Item = tab->Grid->Items[i][j];
			if (!Item || !Item->ItemEnabled || !HudMenu::CanDrawItem(Item))
				continue;
			HudMenu::DrawItem(Item, Pos);
			Pos.Y += HudMenu::ItemSize.Y + HudMenu::ItemPadding.Y;
		}
	}
}

void HudMenu::DrawTabGroup(TabGroup* tabGroup)
{
	FVector2D Pos = HudMenu::MenuPos + HudMenu::ItemSize + (HudMenu::ItemPadding * 2);
	for (size_t i = 0; i < tabGroup->Tabs.size(); i++)
	{
		Tab* tab = tabGroup->Tabs[i];
		FLinearColor Color = HudMenu::TabColor;
		if (HudMenu::SelectedTab == tab) {
			HudMenu::DrawTab(tab);
			Color = HudMenu::SelectedTabColor;
		}
		Renderer::DrawString(tab->TabName, Pos, HudMenu::TextScale, Color, true);
		Pos.Y += HudMenu::ItemSize.Y + HudMenu::ItemPadding.Y;
	}
}

void HudMenu::DrawItem(MenuItemBase* item, FVector2D Position)
{
	FLinearColor Color = HudMenu::ItemColorDisabled;
	Toggle* toggle = (Toggle*)(item);
	if (*toggle->Value)
		Color = HudMenu::ItemColorEnabled;
	Renderer::DrawString(item->Name, Position, HudMenu::TextScale, Color, true);
}

void HudMenu::DrawCursor()
{
	Renderer::DrawString(Xors(L"<--"), HudMenu::CursorPos, {1.f,1.f}, HudMenu::CursorColor, true);
}

bool HudMenu::CanDrawItem(MenuItemBase* item)
{
	if (!item || !item->ItemEnabled)
		return false;
	switch (item->Type)
	{
	case MenuItemType::CheckBox:
		return true;
	default:
		return false;
	}
	return false;
}
