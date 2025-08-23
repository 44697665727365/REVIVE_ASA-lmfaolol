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
	 * 		Name   -> PredefinedFunction ABossArenaManager_Dragon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABossArenaManager_Dragon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BossArenaManager_Dragon.BossArenaManager_Dragon_C");
		return ptr;
	}

}


