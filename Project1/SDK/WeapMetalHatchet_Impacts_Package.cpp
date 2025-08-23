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
	 * 		Name   -> PredefinedFunction AWeapMetalHatchet_Impacts_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeapMetalHatchet_Impacts_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WeapMetalHatchet_Impacts.WeapMetalHatchet_Impacts_C");
		return ptr;
	}

}


