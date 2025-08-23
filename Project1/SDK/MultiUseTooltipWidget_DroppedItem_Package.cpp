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
	 * 		Name   -> PredefinedFunction UMultiUseTooltipWidget_DroppedItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiUseTooltipWidget_DroppedItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MultiUseTooltipWidget_DroppedItem.MultiUseTooltipWidget_DroppedItem_C");
		return ptr;
	}

}


