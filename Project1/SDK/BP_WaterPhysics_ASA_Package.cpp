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
	 * 		Name   -> PredefinedFunction ABP_WaterPhysics_ASA_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_WaterPhysics_ASA_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_WaterPhysics_ASA.BP_WaterPhysics_ASA_C");
		return ptr;
	}

}


