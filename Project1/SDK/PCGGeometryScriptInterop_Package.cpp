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
	 * 		Name   -> PredefinedFunction UPCGMeshSamplerSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPCGMeshSamplerSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class PCGGeometryScriptInterop.PCGMeshSamplerSettings");
		return ptr;
	}

}


