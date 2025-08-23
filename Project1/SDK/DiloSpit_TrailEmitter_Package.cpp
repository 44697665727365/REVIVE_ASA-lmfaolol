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
	 * 		Name   -> PredefinedFunction ADiloSpit_TrailEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADiloSpit_TrailEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DiloSpit_TrailEmitter.DiloSpit_TrailEmitter_C");
		return ptr;
	}

}


