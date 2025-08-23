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
	 * 		Name   -> PredefinedFunction AWeapGun_Impacts_TekSword_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapGun_Impacts_TekSword_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapGun_Impacts_TekSword.WeapGun_Impacts_TekSword_C");
		return ptr;
	}

}


