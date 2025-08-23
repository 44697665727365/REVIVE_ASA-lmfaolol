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
	 * 		Name   -> PredefinedFunction ATrikeDamageReflect_Emitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATrikeDamageReflect_Emitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TrikeDamageReflect_Emitter.TrikeDamageReflect_Emitter_C");
		return ptr;
	}

}


