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
	 * 		Name   -> PredefinedFunction ABuff_CrateBoosting_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_CrateBoosting_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_CrateBoosting_Base.Buff_CrateBoosting_Base_C");
		return ptr;
	}

}


