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
	 * 		Name   -> PredefinedFunction AThatchDoorPlacementEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AThatchDoorPlacementEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ThatchDoorPlacementEmitter.ThatchDoorPlacementEmitter_C");
		return ptr;
	}

}


