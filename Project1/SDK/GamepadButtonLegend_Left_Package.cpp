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
	 * 		Name   -> PredefinedFunction UGamepadButtonLegend_Left_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGamepadButtonLegend_Left_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GamepadButtonLegend_Left.GamepadButtonLegend_Left_C");
		return ptr;
	}

}


