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
	 * 		Name   -> PredefinedFunction AShooterSpectator_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShooterSpectator_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ShooterSpectator_BP.ShooterSpectator_BP_C");
		return ptr;
	}

}


