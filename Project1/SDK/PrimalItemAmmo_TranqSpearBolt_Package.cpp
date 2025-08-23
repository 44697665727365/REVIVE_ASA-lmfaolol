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
	 * 		Name   -> PredefinedFunction UPrimalItemAmmo_TranqSpearBolt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemAmmo_TranqSpearBolt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemAmmo_TranqSpearBolt.PrimalItemAmmo_TranqSpearBolt_C");
		return ptr;
	}

}


