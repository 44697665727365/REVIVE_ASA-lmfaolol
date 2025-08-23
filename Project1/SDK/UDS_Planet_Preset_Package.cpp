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
	 * 		Name   -> PredefinedFunction UUDS_Planet_Preset_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUDS_Planet_Preset_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass UDS_Planet_Preset.UDS_Planet_Preset_C");
		return ptr;
	}

}


