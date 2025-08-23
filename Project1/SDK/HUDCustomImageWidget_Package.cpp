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
	 * 		Name   -> PredefinedFunction UHUDCustomImageWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUDCustomImageWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDCustomImageWidget.HUDCustomImageWidget_C");
		return ptr;
	}

}


