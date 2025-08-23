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
	 * 		Name   -> PredefinedFunction UToolTipWidgetGeneric_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UToolTipWidgetGeneric_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ToolTipWidgetGeneric.ToolTipWidgetGeneric_C");
		return ptr;
	}

}


