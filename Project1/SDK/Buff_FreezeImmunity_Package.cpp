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
	 * 		Name   -> PredefinedFunction ABuff_FreezeImmunity_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_FreezeImmunity_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_FreezeImmunity.Buff_FreezeImmunity_C");
		return ptr;
	}

}


