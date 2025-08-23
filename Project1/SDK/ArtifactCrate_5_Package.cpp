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
	 * 		Name   -> PredefinedFunction AArtifactCrate_4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AArtifactCrate_4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ArtifactCrate_5.ArtifactCrate_4_C");
		return ptr;
	}

}


