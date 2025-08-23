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
	 * 		Name   -> PredefinedFunction AUDS_Island_Weather_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUDS_Island_Weather_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass UDS_Island_Weather.UDS_Island_Weather_C");
		return ptr;
	}

}


