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
	 * 		Name   -> PredefinedFunction UClimber_ImpactCameraShake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClimber_ImpactCameraShake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Climber_ImpactCameraShake.Climber_ImpactCameraShake_C");
		return ptr;
	}

}


