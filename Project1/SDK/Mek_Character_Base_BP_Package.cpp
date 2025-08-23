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
	 * 		Name   -> PredefinedFunction AMek_Character_Base_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMek_Character_Base_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Mek_Character_Base_BP.Mek_Character_Base_BP_C");
		return ptr;
	}

}


