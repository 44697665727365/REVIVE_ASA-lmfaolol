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
	 * 		Name   -> PredefinedFunction UAdvancedEggToolTipWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdvancedEggToolTipWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AdvancedEggToolTipWidget.AdvancedEggToolTipWidget_C");
		return ptr;
	}

}


