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
	 * 		Name   -> PredefinedFunction UBaseHumanAnimBP_Fists_Female_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseHumanAnimBP_Fists_Female_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BaseHumanAnimBP_Fists_Female.BaseHumanAnimBP_Fists_Female_C");
		return ptr;
	}

}


