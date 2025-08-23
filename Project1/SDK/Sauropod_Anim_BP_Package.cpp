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
	 * 		Name   -> PredefinedFunction USauropod_Anim_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USauropod_Anim_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Sauropod_Anim_BP.Sauropod_Anim_BP_C");
		return ptr;
	}

}


