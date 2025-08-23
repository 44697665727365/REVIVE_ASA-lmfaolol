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
	 * 		Name   -> PredefinedFunction UToolTipWidgetMiniHelp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UToolTipWidgetMiniHelp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ToolTipWidgetMiniHelp.ToolTipWidgetMiniHelp_C");
		return ptr;
	}

}


