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
	 * 		Name   -> PredefinedFunction UDinoSpawnEntriesTinyCave_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoSpawnEntriesTinyCave_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesTinyCave.DinoSpawnEntriesTinyCave_C");
		return ptr;
	}

}


