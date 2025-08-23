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
	 * 		Name   -> PredefinedFunction APlayerPawnTest_Male_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlayerPawnTest_Male_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawnTest_Male.PlayerPawnTest_Male_C");
		return ptr;
	}

}


