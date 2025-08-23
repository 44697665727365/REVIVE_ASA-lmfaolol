#pragma once
#include "MenuItemBase.h"
#include "TabGroup.h"
typedef struct MenuGrid
{
    MenuItemBase* Items[2][10];
} MenuGrid;
class Tab : public MenuItemClickable
{
    void DrawName();
    void DrawGrid();
    void DrawTabContents();
    void UpdateLerp(bool Selected);
    void UpdateSelectedTab();
    void DrawBackground();
    void DrawTabTitle();
    float BackGroundWidth;
public:
    static int OpenTabID;
    class TabGroup* Parent;
    std::wstring TabName;
    int TabID;
    std::function<void()> DrawTab;
    MenuGrid* Grid;
    void Draw() override;

    Tab(std::wstring TabName, std::function<void()> DrawTab, std::vector<MenuItemBase*> LeftSide = {}, std::vector<MenuItemBase*> RightSide = {}) : TabName(TabName), DrawTab(DrawTab)
	{
		this->Type = MenuItemType::Tab;
        this->Grid = new MenuGrid();
        for (int i = 0; i < 8; i++)
        {
            this->Grid->Items[0][i] = nullptr;
            this->Grid->Items[1][i] = nullptr;
        }
        if (LeftSide.size() > 0) {
            for (int i = 0; i < 10 && i < LeftSide.size(); i++)
            {
                if(LeftSide[i])
                this->Grid->Items[0][i] = LeftSide[i];
            }
        }
        if (RightSide.size() > 0) {
            for(int i = 0; i < 10 && i < RightSide.size(); i++)
			{
                if (RightSide[i])
				this->Grid->Items[1][i] = RightSide[i];
			}
        }
		this->PopupItem = false;
		this->IsHovered = false;
		this->ItemID = -1;	
        this->ItemEnabled = true;
    }
};

