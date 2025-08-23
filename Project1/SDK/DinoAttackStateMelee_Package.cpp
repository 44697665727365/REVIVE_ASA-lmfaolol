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
	 * 		Name   -> PredefinedFunction UDinoAttackStateMelee_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAttackStateMelee_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateMelee.DinoAttackStateMelee_C");
		return ptr;
	}

}


