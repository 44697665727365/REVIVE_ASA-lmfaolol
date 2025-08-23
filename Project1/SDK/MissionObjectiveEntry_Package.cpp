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
	 * 		Name   -> PredefinedFunction UMissionObjectiveEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMissionObjectiveEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MissionObjectiveEntry.MissionObjectiveEntry_C");
		return ptr;
	}

}


