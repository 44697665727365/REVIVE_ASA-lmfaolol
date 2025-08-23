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
	 * 		Name   -> PredefinedFunction ALeftClimbing_ImpactEffect_Leaves_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALeftClimbing_ImpactEffect_Leaves_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LeftClimbing_ImpactEffect_Leaves.LeftClimbing_ImpactEffect_Leaves_C");
		return ptr;
	}

}


