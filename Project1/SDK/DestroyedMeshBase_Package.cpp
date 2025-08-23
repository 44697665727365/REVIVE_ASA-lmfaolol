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
	 * 		Name   -> PredefinedFunction ADestroyedMeshBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADestroyedMeshBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DestroyedMeshBase.DestroyedMeshBase_C");
		return ptr;
	}

}


