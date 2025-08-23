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
	 * 		Name   -> PredefinedFunction UStructureSettings_BrokenByExplosives_WeakMetalDmg_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStructureSettings_BrokenByExplosives_WeakMetalDmg_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StructureSettings_BrokenByExplosives_WeakMetalDmg.StructureSettings_BrokenByExplosives_WeakMetalDmg_C");
		return ptr;
	}

}


