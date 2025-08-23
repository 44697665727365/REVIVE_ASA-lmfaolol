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
	 * 		Name   -> PredefinedFunction ADeathItemCache_PlayerDeath_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADeathItemCache_PlayerDeath_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DeathItemCache_PlayerDeath.DeathItemCache_PlayerDeath_C");
		return ptr;
	}

}


