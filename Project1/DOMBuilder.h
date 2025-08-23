#pragma once
#include "TabGroup.h"
#include "Toggle.h"
class DOMBuilder
{
	static MenuItemBase* CreateItem(VarBase* Var);
	static void InitStructureTabs();
	static void UpdateLevelPresetItem(Toggle* toggle);
	static void UpdateStructureTab(int TabIndex = -1, bool Enemy = false);
public:
	static std::vector<TabGroup*> CreateMenu();
};