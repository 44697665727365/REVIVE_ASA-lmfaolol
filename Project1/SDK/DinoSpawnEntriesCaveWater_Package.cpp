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
	 * 		Name   -> PredefinedFunction UDinoSpawnEntriesCaveWater_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoSpawnEntriesCaveWater_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesCaveWater.DinoSpawnEntriesCaveWater_C");
		return ptr;
	}

}


