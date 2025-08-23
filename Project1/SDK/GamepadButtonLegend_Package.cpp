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
	 * 		Name   -> PredefinedFunction UGamepadButtonLegend_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGamepadButtonLegend_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GamepadButtonLegend.GamepadButtonLegend_C");
		return ptr;
	}

}


