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
	 * 		Name   -> PredefinedFunction UDinoSpawnEntriesCave1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoSpawnEntriesCave1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesCave1.DinoSpawnEntriesCave1_C");
		return ptr;
	}

}


