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
	 * 		Name   -> PredefinedFunction AWaterSplashEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWaterSplashEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WaterSplashEmitter.WaterSplashEmitter_C");
		return ptr;
	}

}


