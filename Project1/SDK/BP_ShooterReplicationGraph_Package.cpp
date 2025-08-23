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
	 * 		Name   -> PredefinedFunction UBP_ShooterReplicationGraph_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ShooterReplicationGraph_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShooterReplicationGraph.BP_ShooterReplicationGraph_C");
		return ptr;
	}

}


