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
	 * 		Name   -> PredefinedFunction APlayerPawnTest_Child_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlayerPawnTest_Child_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawnTest_Child.PlayerPawnTest_Child_C");
		return ptr;
	}

}


