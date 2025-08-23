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
	 * 		Name   -> PredefinedFunction ANPCZoneManagerBlueprint_Land_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANPCZoneManagerBlueprint_Land_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NPCZoneManagerBlueprint_Land.NPCZoneManagerBlueprint_Land_C");
		return ptr;
	}

}


