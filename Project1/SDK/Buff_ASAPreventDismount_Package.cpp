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
	 * 		Name   -> PredefinedFunction ABuff_ASAPreventDismount_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_ASAPreventDismount_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ASAPreventDismount.Buff_ASAPreventDismount_C");
		return ptr;
	}

}


