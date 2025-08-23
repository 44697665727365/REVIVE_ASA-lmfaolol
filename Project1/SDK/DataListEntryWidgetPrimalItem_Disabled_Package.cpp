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
	 * 		Name   -> PredefinedFunction UDataListEntryWidgetPrimalItem_Disabled_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataListEntryWidgetPrimalItem_Disabled_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEntryWidgetPrimalItem_Disabled.DataListEntryWidgetPrimalItem_Disabled_C");
		return ptr;
	}

}


