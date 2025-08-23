/**
 * Name: Ark_Survival_Ascended
 * Version: 0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UToolTipWidgetDinoItem_Inventory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UToolTipWidgetDinoItem_Inventory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ToolTipWidgetDinoItem_Inventory.ToolTipWidgetDinoItem_Inventory_C");
		return ptr;
	}

}


