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
	 * 		Name   -> PredefinedFunction ABPP_UnderWater_CaveBig_Exterior_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPP_UnderWater_CaveBig_Exterior_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPP_UnderWater_CaveBig_Exterior.BPP_UnderWater_CaveBig_Exterior_C");
		return ptr;
	}

}


