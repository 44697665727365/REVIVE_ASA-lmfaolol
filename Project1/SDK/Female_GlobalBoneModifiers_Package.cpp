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
	 * 		Name   -> PredefinedFunction UFemale_GlobalBoneModifiers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFemale_GlobalBoneModifiers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Female_GlobalBoneModifiers.Female_GlobalBoneModifiers_C");
		return ptr;
	}

}


