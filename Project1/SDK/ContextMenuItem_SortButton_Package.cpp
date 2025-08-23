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
	 * 		Name   -> PredefinedFunction UContextMenuItem_SortButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UContextMenuItem_SortButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ContextMenuItem_SortButton.ContextMenuItem_SortButton_C");
		return ptr;
	}

}


