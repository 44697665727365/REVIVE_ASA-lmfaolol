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
	 * 		Name   -> PredefinedFunction ATek_DinoLaser_TrailEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATek_DinoLaser_TrailEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Tek_DinoLaser_TrailEmitter.Tek_DinoLaser_TrailEmitter_C");
		return ptr;
	}

}


