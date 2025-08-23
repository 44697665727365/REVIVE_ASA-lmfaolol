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
	 * 		Name   -> PredefinedFunction UHUDPointsOfInterestContainerWidgetBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUDPointsOfInterestContainerWidgetBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDPointsOfInterestContainerWidgetBP.HUDPointsOfInterestContainerWidgetBP_C");
		return ptr;
	}

}


