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
	 * 		Name   -> PredefinedFunction UASAUIWidget_Button_Style1A_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASAUIWidget_Button_Style1A_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ASAUIWidget_Button_Style1A.ASAUIWidget_Button_Style1A_C");
		return ptr;
	}

}


