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
	 * 		Name   -> PredefinedFunction UDinoSpawnEntriesCave3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoSpawnEntriesCave3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesCave3.DinoSpawnEntriesCave3_C");
		return ptr;
	}

}


