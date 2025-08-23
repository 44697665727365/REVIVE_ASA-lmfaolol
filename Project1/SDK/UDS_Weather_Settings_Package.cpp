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
	 * 		Name   -> PredefinedFunction UUDS_Weather_Settings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUDS_Weather_Settings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass UDS_Weather_Settings.UDS_Weather_Settings_C");
		return ptr;
	}

}


