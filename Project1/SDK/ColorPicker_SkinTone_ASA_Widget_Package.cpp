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
	 * 		Name   -> PredefinedFunction UColorPicker_SkinTone_ASA_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UColorPicker_SkinTone_ASA_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ColorPicker_SkinTone_ASA_Widget.ColorPicker_SkinTone_ASA_Widget_C");
		return ptr;
	}

}


