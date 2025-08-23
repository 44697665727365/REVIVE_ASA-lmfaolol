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
	 * 		Name   -> PredefinedFunction ATekArmorShieldImpactEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATekArmorShieldImpactEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TekArmorShieldImpactEmitter.TekArmorShieldImpactEmitter_C");
		return ptr;
	}

}


