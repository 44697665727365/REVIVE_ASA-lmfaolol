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
	 * 		Name   -> PredefinedFunction AServerSidePoint_Huge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AServerSidePoint_Huge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ServerSidePoint_Huge.ServerSidePoint_Huge_C");
		return ptr;
	}

}


