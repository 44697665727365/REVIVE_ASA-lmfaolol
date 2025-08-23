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
	 * 		Name   -> PredefinedFunction ABuff_TrikeRivalry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_TrikeRivalry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TrikeRivalry.Buff_TrikeRivalry_C");
		return ptr;
	}

}


