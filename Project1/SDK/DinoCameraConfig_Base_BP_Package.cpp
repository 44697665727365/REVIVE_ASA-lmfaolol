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
	 * 		Name   -> PredefinedFunction UDinoCameraConfig_Base_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoCameraConfig_Base_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoCameraConfig_Base_BP.DinoCameraConfig_Base_BP_C");
		return ptr;
	}

}


