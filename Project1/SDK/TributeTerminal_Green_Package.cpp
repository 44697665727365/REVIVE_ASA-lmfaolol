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
	 * 		Name   -> PredefinedFunction ATributeTerminal_Green_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATributeTerminal_Green_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TributeTerminal_Green.TributeTerminal_Green_C");
		return ptr;
	}

}


