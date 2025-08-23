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
	 * 		Name   -> PredefinedFunction AWeapMiningDrill_Impacts_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapMiningDrill_Impacts_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapMiningDrill_Impacts.WeapMiningDrill_Impacts_C");
		return ptr;
	}

}


