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
	 * 		Name   -> PredefinedFunction ABP_Emitter_Master_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Emitter_Master_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Emitter_Master.BP_Emitter_Master_C");
		return ptr;
	}

}


