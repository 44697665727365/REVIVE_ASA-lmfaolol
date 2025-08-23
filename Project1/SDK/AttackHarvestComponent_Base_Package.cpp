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
	 * 		Name   -> PredefinedFunction UAttackHarvestComponent_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAttackHarvestComponent_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AttackHarvestComponent_Base.AttackHarvestComponent_Base_C");
		return ptr;
	}

}


