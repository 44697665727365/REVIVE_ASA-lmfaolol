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
	 * 		Name   -> PredefinedFunction UMultiUseActionWidget_UI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiUseActionWidget_UI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MultiUseActionWidget_UI.MultiUseActionWidget_UI_C");
		return ptr;
	}

}


