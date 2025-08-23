#include "Menu.h"

class HudMenu
{
private:
    static FVector2D MenuPos;
    static FVector2D ItemPadding;
    static FVector2D ItemSize;
    static FLinearColor TabGroupColor;
    static FLinearColor SelectedTabGroupColor;
    static FLinearColor TabColor;
    static FLinearColor SelectedTabColor;
    static FLinearColor ItemColorDisabled;
    static FLinearColor ItemColorEnabled;
    static FLinearColor CursorColor;
    static FVector2D TextScale;
    static int CursorX;
    static int CursorY[3];
    static FVector2D CursorPos;
    static void DrawCursor();
    static bool CanDrawItem(MenuItemBase* item);
    static void DrawTab(Tab* tab);
    static void DrawTabGroup(TabGroup* tabGroup);
    static void DrawItem(MenuItemBase* item, FVector2D Position);
    static void Update();
    static void UpdateSelectedItem();
    static TabGroup* SelectedTabGroup;
    static Tab* SelectedTab;
    static MenuItemBase* SelectedItem;
    static double DeltaTime;
    static TimeVar LastFrameTime;
public:
    static void DrawMenu();
};