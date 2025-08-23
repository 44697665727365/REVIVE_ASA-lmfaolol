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
	 * 		Name   -> PredefinedFunction AArtifactCrate_1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AArtifactCrate_1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ArtifactCrate_2.ArtifactCrate_1_C");
		return ptr;
	}

}


