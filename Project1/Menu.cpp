#include "pch.h"
#include "Menu.h"
#include "Rendering.h"
#include "ActorBase.h"
#include "MenuVars.h"
#include "settings.h"
#include "MenuHelper.h"
#include "TabGroup.h"
#include "Toggle.h"
#include "Keybind.h"
#include "Button.h"
#include "SliderFloat.h"
#include "SliderInt.h"
#include "TextInput.h"
#include "Combo.h"
#include "LocalModule.h"
#include "Config.h"
#include "ColorPicker.h"
#include "UserModule.h"
#include "AimbotModule.h"

#include "DOMBuilder.h"

MenuState* Menu::State;
UCanvas* Menu::Canvas;
MenuColors* Menu::Colors;
SearchBar* Menu::MenuSearchBar;
std::vector<TabGroup*> Menu::TabGroups;
Tab* Menu::EnemyStructuresTab;
Tab* Menu::TeamStructuresTab;
std::vector<std::vector<std::pair<MenuItemBase*, MenuItemBase*>>> Menu::StructureItems;

void Menu::InitializeContent()
{
	TabGroups = DOMBuilder::CreateMenu();
}

void Menu::DrawMenu()
{
	if (!State)
		return;		

	UpdateScaling();

	if (!CanDraw())
		return;

	UpdateOpen();

	if (!State->Open)
		return;

	Renderer::PushFont(Renderer::MenuFont);

	UpdateState();

	DrawBackground();

	DrawMenuTitle();

	DoWindowDragging();

	MenuSearchBar->Draw();

	State->TabGroupPos = { State->SearchBarPosition.X + 20 * State->MenuScale,  State->SearchBarPosition.Y + 60 * State->MenuScale };

	for (auto& TabGroup : TabGroups)
		TabGroup->Draw();

	if (Combo::SelectedCombo)
		Combo::SelectedCombo->DrawComboItems();

	if (ColorPicker::SelectedColorPicker)
		ColorPicker::SelectedColorPicker->DrawColorPickerPopup();

	State->WasClosed = false;
}

FVector2D GetCustomCursorPos()
{
	FVector2D Custom = GetCursorPos();

	Custom.X = Custom.X / 1;
	Custom.Y = Custom.Y / 1;

	return Custom;
}

void Menu::UpdateState()
{
	State->DeltaTime = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - State->LastFrameTime).count() / 1000.f;
	State->LastFrameTime = std::chrono::high_resolution_clock::now();
	State->MousePos = GetCustomCursorPos();
	State->Draggable = InBounds(State->MousePos, Rect(State->Position, State->Position + State->Size));
	State->ContentBounds.TL.X = State->Position.X + (250 * State->MenuScale);
	State->ContentBounds.TL.Y = State->Position.Y + (40 * State->MenuScale);
	State->ContentBounds.BR = State->Position + State->Size;
	State->LeftClickState = -1;

	Key* key = Keyboard::KeyMap[VK_LBUTTON];
	if (!key)
	{
		//nlog(Xors("Failed to find key for VK_LBUTTON"));
		return;
	}
	if (globals::local::PC->WasInputKeyJustPressed(*key->UEKey))
	{
		key->State = 0;
		State->LeftClickState = 0;
	}
	else if (globals::local::PC->IsInputKeyDown(*key->UEKey))
	{
		key->State = 1;
		State->LeftClickState = 1;
	}
	else
	{
		key->State = -1;
		State->LeftClickState = -1;
	}
	key = Keyboard::KeyMap[VK_RBUTTON];
	if (!key)
	{
		//nlog(Xors("Failed to find key for VK_RBUTTON"));
		return;
	}
	if (globals::local::PC->WasInputKeyJustPressed(*key->UEKey))
	{
		key->State = 0;
		State->RightClickState = 0;
	}
	else if (globals::local::PC->IsInputKeyDown(*key->UEKey))
	{
		key->State = 1;
		State->RightClickState = 1;
	}
	else 
	{
		State->RightClickState = -1;
		key->State = -1;
	}
	Canvas = globals::rendering::canvas;
	State->MenuScale = ((Renderer::GetCanvasSize().X / 2560.f) * 0.5f) + ((Renderer::GetCanvasSize().Y / 1440.f) * 0.5f);

	if (Keyboard::MenuGetState(VK_OEM_6, 0))
	{
		State->ExtraUserScale += 0.05f;
	}

	if (Keyboard::MenuGetState(VK_OEM_4, 0))
	{
		State->ExtraUserScale -= 0.05f;
	}

	State->MenuScale += State->ExtraUserScale;

	State->Size = { 1085 * State->MenuScale, 693 * State->MenuScale};
	State->ItemPadding = { 5 * State->MenuScale, 5 * State->MenuScale };
	State->ItemRounding = 6.f * State->MenuScale;
	State->WindowRounding = 8.f * State->MenuScale;
	State->ItemSize = { 410 * State->MenuScale, 60 * State->MenuScale };
	State->TabSize = { 200 * State->MenuScale, 30 * State->MenuScale };
	State->TabPadding = { 5 * State->MenuScale, 5 * State->MenuScale };
	State->TabTextSize = 0.8f * State->MenuScale;
	State->TabGroupSize = { 240 * State->MenuScale, 35 * State->MenuScale };
	State->TabGroupPadding = { 5 * State->MenuScale, 10 * State->MenuScale };
	State->TabGroupTextSize = 0.8f * State->MenuScale;
	State->SliderWidth = 200.f * State->MenuScale;
	State->ComboItemHeight = 30.f * State->MenuScale;
	State->SearchBarSize = { 240 * State->MenuScale, 40 * State->MenuScale };
	State->SearchBarPosition = { State->Position.X + (5 * State->MenuScale), State->Position.Y + (60 * State->MenuScale) };
}

void Menu::Initialize()
{
	State = new MenuState();
	State->Position = { 100, 100 };
	State->Size = { 1085, 693 };
	State->Open = true;
	State->Initialized = false;
	State->WasClosed = false;
	State->Typing = false;
	State->Draggable = true;
	State->DraggingMenu = false;
	State->MousePos = { 0, 0 };
	State->LeftClickState = 0;
	State->RightClickState = 0;
	State->HoveredItem = -1;
	State->SelectedItem = -1;
	State->TabGroupPos = { 0, 0 };
	State->ItemPadding = { 5, 5 };
	State->ItemSize = { 410, 60 };
	State->TabSize = { 200, 35 };
	State->TabPadding = { 5, 5 };
	State->TabTextSize = 0.8f;
	State->TabGroupSize = { 240, 40 };
	State->TabGroupPadding = { 5, 10 };
	State->TabGroupTextSize = 0.8f;
	State->CurrentlyDrawingPopup = false;
	State->SliderWidth = 200.f;
	State->ContentBounds.TL.X = State->Position.X + (250 * State->MenuScale);
	State->ContentBounds.TL.Y = State->Position.Y + (40 * State->MenuScale);
	State->ContentBounds.BR = State->Position + State->Size;
	State->ExtraUserScale = 0.f;
	State->ItemRounding = 6.f;
	State->WindowRounding = 8.f;
	State->DeltaTime = 0;
	State->LastFrameTime = std::chrono::high_resolution_clock::now();
	State->ComboItemHeight = 30.f;
	State->MenuScale = 1.f;
	State->SearchBarSize = { 240, 40 };
	Colors = new MenuColors();
	Colors->Text = FLinearColor::FromRGB(49, 53, 65);
	Colors->Text_Hov = FLinearColor::FromRGB(200, 200, 200);
	Colors->Text_Active = FLinearColor::FromRGB(85, 90, 104);
	Colors->ToggleBackGround = FLinearColor::FromRGB(38, 42, 40);
	Colors->Window_Background = FLinearColor::FromRGB(15, 15, 15);
	Colors->Window_Border = FLinearColor::FromRGB(18, 19, 20);
	Colors->Accent = FLinearColor::FromRGB(151, 115, 255);
	Colors->Item_Background_Hovered = FLinearColor::FromRGB(17, 17, 18);
	Colors->Item_Background_Active = FLinearColor::FromRGB(12, 13, 14);
	Colors->Item_Background_Default = FLinearColor::FromRGB(22, 23, 26);
	Colors->Shadow = FLinearColor(0, 0, 0);
	Menu::MenuSearchBar = new SearchBar();
	Menu::InitializeContent();
	//Config::Refresh();
}

void Menu::Uninitialize()
{
	for (auto& Item : Menu::EnemyStructuresTab->Grid->Items[1])
	{
		if (Item)
		{
			delete Item;
			Item = nullptr;
		}
	}
	for (auto& Item : Menu::TeamStructuresTab->Grid->Items[1])
	{
		if (Item)
		{
			delete Item;
			Item = nullptr;
		}
	}
	for (auto& Structure : StructureItems)
	{
		if (Structure.empty())
			continue;
		for (auto& Item : Structure)
		{
			Item.first = nullptr;
			Item.second = nullptr;
		}
	}
	for (auto& TabGroup : TabGroups)
	{
		if (TabGroup)
		{
			for (auto& Tab : TabGroup->Tabs)
			{
				if (Tab)
				{
					for (int i = 0;i < 2;i++)
					{
						for (int j = 0; j < 10;j++)
						{
							auto Item = Tab->Grid->Items[i][j];
							if (Item)
							{
								if (Item->PopupItem) {
									MenuItemPopup* PPItem = (MenuItemPopup*)Item;
									if (PPItem->MyPopup)
									{
										for (auto& PopupItem : PPItem->MyPopup->Items)
										{
											delete PopupItem;
										}
										delete PPItem->MyPopup;
									}
								}
								delete Item;
							}
						}
					}
					delete Tab->Grid;
					delete Tab;
				}
			}
		}
		delete TabGroup;
	}
	delete State;
	State = nullptr;
	delete Colors;
	Colors = nullptr;
	delete MenuSearchBar;
	MenuSearchBar = nullptr;
}

bool Menu::CanDraw()
{
	if (!State || !Colors || !MenuSearchBar)
	{
		//nlog(Xors("Menu::CanDraw() Failed 1"));
		return false;
	}
	if (!State->Initialized)
	{
		//nlog(Xors("Menu::CanDraw() Failed 2"));
		return false;
	}
	if (!globals::local::PC || !globals::local::LP || !globals::libs::MathLib || !Renderer::canvas || !Renderer::Font || !globals::rendering::canvas)
	{
		//nlog(Xors("Menu::CanDraw() Failed 3"));
		return false;
	}
	return true;
}

void Menu::DrawBackground()
{
	Renderer::RenderFilledRoundedRectangle(&State->Position, (float)State->Size.X, (float)State->Size.Y, State->WindowRounding, Colors->Window_Background);
	Renderer::RenderFilledRoundedRectangle(&State->Position, (250 * State->MenuScale), (float)State->Size.Y, State->WindowRounding, Colors->Window_Border, RoundedRectFlags_NoRoundingTopRight | RoundedRectFlags_NoRoundingBottomRight);
}

MenuItemBase* Menu::GetItemByID(int ID)
{
	for (auto& TabGroup : TabGroups)
	{
		for (auto& Tab : TabGroup->Tabs)
		{
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					auto Item = Tab->Grid->Items[i][j];
					if (Item)
					{
						if (Item->ItemID == ID)
						{
							return Item;
						}
					}
				}
			}
		}
	}
	return nullptr;
}

MenuItemBase* Menu::GetItemByName(std::wstring Name)
{
	for (auto& TabGroup : TabGroups)
	{
		for (auto& Tab : TabGroup->Tabs)
		{
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					auto Item = Tab->Grid->Items[i][j];
					if (Item)
					{
						if (Item->Name == Name)
						{
							return Item;
						}
					}
				}
			}
		}
	}
	return nullptr;
}

bool MenuState::AmIHovered(Rect Bounds, bool StopDragging)
{
	if (Combo::SelectedCombo || ColorPicker::SelectedColorPicker)
		return false;
	bool Hovered = InBounds(Menu::State->MousePos, Bounds);
	if (Hovered && StopDragging)
	{
		this->Draggable = false;
		this->DraggingMenu = false;
		this->DragOffset = { 0,0 };
	}
	return Hovered;
}

bool MenuState::AmISelected(Rect Bounds, int ItemID)
{
	if ((ItemID == -1) || ItemID > this->MenuItems.size())
	{
		return false;
	}
	if (ItemID == this->SelectedItem && !AmIHovered(Bounds) && (RClickPressed() || LClickPressed()))
	{
		this->SelectedItem = -1;
		return false;
	}
	if (AmIHovered(Bounds) && this->SelectedItem == -1)
	{
		if (RClickPressed())
		{
			this->SelectedItem = ItemID;
			((MenuItemPopup*)this->MenuItems[ItemID])->SetShouldClose(false);
			return true;
		}
	}
	else if (this->SelectedItem == ItemID)
	{
		return true;
	}
	return false;
}

bool MenuState::AmIStillSelected(Rect Bounds, int ItemID)
{
	if (this->SelectedItem != ItemID)
	{
		return false;
	}
	if (!AmIHovered(Bounds) && (LClickPressed() || RClickPressed()))
	{
		this->SelectedItem = -1;
		return false;
	}
	return true;
}

bool MenuState::LClickHeld()
{
	return this->LeftClickState == 1;
}

bool MenuState::LClickPressed()
{
	if (this->LeftClickState == 0)
	{
		return true;
	}
	return false;
}

bool MenuState::RClickHeld()
{
	return this->RightClickState == 1;
}

bool MenuState::RClickPressed()
{
	if (this->RightClickState == 0)
	{
		return true;
	}
	return false;
}

bool OpenBefore = false;
UWidgetBlueprintLibrary* WidgetLib = nullptr;

APawn* CharacterPawn = nullptr;

UInputComponent* Comp = nullptr;

void Menu::UpdateOpen()
{
	if (!WidgetLib) 
	{
		WidgetLib = (UWidgetBlueprintLibrary*)UWidgetBlueprintLibrary::StaticClass();
	}
	globals::local::PC->bShowMouseCursor = settings::menu::ShowMenu.Enabled;
	if (!settings::menu::ShowMenu.Enabled)
	{
		State->WasClosed = true;
	}
	if (settings::menu::ShowMenu.Enabled && !OpenBefore) {

		OpenBefore = true;

		if (WidgetLib) 
		{
			WidgetLib->STATIC_SetInputMode_GameAndUIEx(globals::local::PC, nullptr, EMouseLockMode::DoNotLock, false, false);
		}

		
		Comp = globals::local::PC->InputComponent;
		globals::local::PC->InputComponent = nullptr;
		globals::local::LP->bForcePreventAllInput = true;
	}
	else if (!settings::menu::ShowMenu.Enabled && OpenBefore) {

		OpenBefore = false;

		if (WidgetLib)
		{
			WidgetLib->STATIC_SetInputMode_GameAndUIEx(globals::local::PC, nullptr, EMouseLockMode::LockAlways,true, false);
			WidgetLib->STATIC_SetInputMode_GameOnly(globals::local::PC, false);
		}

		globals::local::PC->InputComponent = Comp;
		globals::local::LP->bForcePreventAllInput = false;
	}
	State->Open = settings::menu::ShowMenu.Enabled;
}

void Menu::DrawMenuTitle()
{
	std::wstring Name = Xors(L"Code of Conduct");
	FVector2D titlePos = FVector2D{ State->Position.X + (20.f * State->MenuScale), State->Position.Y + (20.f * State->MenuScale) };
	Renderer::DrawString(Name, titlePos, { (1 * State->MenuScale), (1 * State->MenuScale) }, Colors->Accent);

	wchar_t buffer[255] = {};
	Format(buffer, Xors(L"Scale: %.2f"), State->MenuScale);
	Renderer::DrawString(buffer, { titlePos.X,(State->Position.Y + State->Size.Y) - (40.f * State->MenuScale) }, { (0.8f * State->MenuScale), (0.8f * State->MenuScale) }, Colors->Accent);

	std::string build = Xors("Build: ") + std::string(Xors(__DATE__));
	Renderer::DrawString(std::wstring(build.begin(), build.end()), { titlePos.X,(State->Position.Y + State->Size.Y) - (20.f * State->MenuScale) }, { (0.8f * State->MenuScale), (0.8f * State->MenuScale) }, Colors->Accent);

	double SecondsInjected = globals::libs::VictoryCore->STATIC_GetRealWorldUtcTimeInSeconds() - globals::rendering::InjectTimeSeconds;

	FString buffer2 = globals::libs::VictoryCore->STATIC_FormatAsTime(SecondsInjected, true, true, true);

	FVector2D TextScale = { (0.8f * State->MenuScale), (0.8f * State->MenuScale) };

	std::wstring Online = Xors(L"Online: ");

	FVector2D TimeSize = Renderer::canvas->K2_TextSize(Renderer::Font, buffer2, TextScale * 1.2f);

	FVector2D TopRightPos = { State->Position.X + State->Size.X - (TimeSize.X + (20.f * State->MenuScale)), State->Position.Y + (20.f * State->MenuScale)};

	FVector2D OnlineSize = Renderer::canvas->K2_TextSize(Renderer::Font, Online.c_str(), TextScale * 1.2f);

	FVector2D OnlinePosition = { TopRightPos.X - OnlineSize.X, TopRightPos.Y };

	Renderer::DrawString(Online, OnlinePosition, TextScale, Colors->Accent);
	Renderer::DrawString(buffer2.wc_str(), TopRightPos, TextScale, Colors->Text_Hov);
}

void Menu::UpdateScaling()
{
	if (!globals::rendering::canvas || State->Initialized)
		return;

	State->Initialized = true;

	State->MenuScale = (float)((Renderer::GetCanvasSize().X / 2560.f) * 0.5f) + (float)((Renderer::GetCanvasSize().Y / 1440.f) * 0.5f);

	State->Size *= State->MenuScale;

	State->TabSize *= State->MenuScale;
	State->TabPadding *= State->MenuScale;
	State->TabTextSize *= State->MenuScale;

	State->TabGroupSize *= State->MenuScale;
	State->TabGroupPadding *= State->MenuScale;
	State->TabGroupTextSize *= State->MenuScale;

	State->ItemSize *= State->MenuScale;
	State->ItemPadding *= State->MenuScale;

}

void Menu::DoWindowDragging()
{
	State->Draggable = State->HoveredItem == -1 && State->SelectedItem == -1 && State->AmIHovered(Rect(State->Position, State->Position + State->Size), false);
	if (State->Draggable)
	{
		if (State->LClickHeld() && State->AmIHovered(Rect(State->Position, State->Position + State->Size), false) && !State->DraggingMenu)
		{
			State->DraggingMenu = true;
			State->DragOffset = State->MousePos - State->Position;
		}
		else if (State->DraggingMenu && !State->LClickHeld())
		{
			State->DraggingMenu = false;
		}
	}
	else
	{
		State->DraggingMenu = false;
	}

	if (State->DraggingMenu)
	{
		State->Position = State->MousePos - State->DragOffset;
	}
}
