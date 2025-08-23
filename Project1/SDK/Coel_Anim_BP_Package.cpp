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
	 * 		Name   -> PredefinedFunction UCoel_Anim_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoel_Anim_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Coel_Anim_BP.Coel_Anim_BP_C");
		return ptr;
	}

}


