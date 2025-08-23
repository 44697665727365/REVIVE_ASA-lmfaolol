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
	 * 		Name   -> PredefinedFunction UDataListEntryWidgetPrimalItem_Empty_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataListEntryWidgetPrimalItem_Empty_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEntryWidgetPrimalItem_Empty.DataListEntryWidgetPrimalItem_Empty_C");
		return ptr;
	}

}


