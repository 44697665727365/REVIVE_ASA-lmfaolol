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
	 * 		Name   -> PredefinedFunction ABossArenaManager_Gorilla_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABossArenaManager_Gorilla_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BossArenaManager_Gorilla.BossArenaManager_Gorilla_C");
		return ptr;
	}

}


