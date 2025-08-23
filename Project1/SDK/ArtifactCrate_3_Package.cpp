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
	 * 		Name   -> PredefinedFunction AArtifactCrate_2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AArtifactCrate_2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ArtifactCrate_3.ArtifactCrate_2_C");
		return ptr;
	}

}


