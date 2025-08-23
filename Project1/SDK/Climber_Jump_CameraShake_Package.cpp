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
	 * 		Name   -> PredefinedFunction UClimber_Jump_CameraShake_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClimber_Jump_CameraShake_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Climber_Jump_CameraShake.Climber_Jump_CameraShake_C");
		return ptr;
	}

}


