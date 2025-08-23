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
	 * 		Name   -> PredefinedFunction UToolTipWidgetPrimalStructure_Module_ItemsToDisplay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UToolTipWidgetPrimalStructure_Module_ItemsToDisplay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ToolTipWidgetPrimalStructure_Module_ItemsToDisplay.ToolTipWidgetPrimalStructure_Module_ItemsToDisplay_C");
		return ptr;
	}

}


