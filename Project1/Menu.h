#pragma once
#include "pch.h"
#include "MenuItemBase.h"
#include "TabGroup.h"
#include "SearchBar.h"
#include "DOMBuilder.h"
class MenuColors
{
	public:
	FLinearColor Text;
	FLinearColor Text_Hov;
	FLinearColor Text_Active;

	FLinearColor ToggleBackGround;

	FLinearColor Window_Background;
	FLinearColor Window_Border;
	FLinearColor Accent;
	FLinearColor Shadow;
	FLinearColor Item_Background_Hovered;
	FLinearColor Item_Background_Active;
	FLinearColor Item_Background_Default;
};


class MenuState
{
public:
	bool WasClosed;
	FVector2D Position;
	FVector2D Size;
	bool Open;
	bool Initialized;
	std::vector<MenuItemBase*> MenuItems;
	bool Typing;
	bool Draggable;
	FVector2D DragOffset;
	bool DraggingMenu;
	FVector2D MousePos;
	int LeftClickState;
	int RightClickState;
	int HoveredItem;
	int SelectedItem;
	Rect ContentBounds;
	FVector2D TabGroupPos;
	FVector2D ItemPadding;
	FVector2D ItemSize;
	FVector2D TabGroupSize;
	FVector2D TabGroupPadding;
	float TabGroupTextSize;
	FVector2D TabSize;
	FVector2D TabPadding;
	float TabTextSize;
	float ComboItemHeight;
	float ItemRounding;
	float WindowRounding;
	float SliderWidth;
	TimeVar LastFrameTime;
	double DeltaTime;
	float MenuScale;
	float ExtraUserScale;
	bool CurrentlyDrawingPopup;
	FVector2D SearchBarSize;
	FVector2D SearchBarPosition;
	bool AmIHovered(Rect Bounds,bool StopDragging = true);
	bool AmISelected(Rect Bounds, int ItemID);
	bool AmIStillSelected(Rect Bounds, int ItemID);
	bool LClickHeld();
	bool LClickPressed();
	bool RClickHeld();
	bool RClickPressed();
};
class Menu
{
	friend class DOMBuilder;
private:
	static SearchBar* MenuSearchBar;
	static void DrawMenuTitle();
	static void UpdateScaling();
	static void DoWindowDragging();
	static UCanvas* Canvas;
	static void UpdateOpen();
	static void UpdateState();
	static bool CanDraw();
	static void DrawBackground();
	static MenuItemBase* GetItemByID(int ID);
	static MenuItemBase* GetItemByName(std::wstring Name);
	static void InitializeContent();
	static Tab* EnemyStructuresTab;
	static std::vector<std::vector<std::pair<MenuItemBase*,MenuItemBase*>>> StructureItems;
	static Tab* TeamStructuresTab;
public:
	static MenuState* State;
	static MenuColors* Colors;
	static void Initialize();
	static void Uninitialize();
	static void DrawMenu();
	static std::vector<TabGroup*> TabGroups;
};

