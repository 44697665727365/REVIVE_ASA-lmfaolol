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
	 * 		Name   -> PredefinedFunction ABossArenaManager_Spider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABossArenaManager_Spider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BossArenaManager_Spider.BossArenaManager_Spider_C");
		return ptr;
	}

}


