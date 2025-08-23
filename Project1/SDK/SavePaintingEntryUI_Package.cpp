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
	 * 		Name   -> PredefinedFunction USavePaintingEntryUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USavePaintingEntryUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SavePaintingEntryUI.SavePaintingEntryUI_C");
		return ptr;
	}

}


