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
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ArtifactCrate_Instantaneous_Alt.ArtifactCrate_Instantaneous_Alt_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AArtifactCrate_Instantaneous_Alt_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArtifactCrate_Instantaneous_Alt.ArtifactCrate_Instantaneous_Alt_C.UserConstructionScript");
		
		AArtifactCrate_Instantaneous_Alt_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AArtifactCrate_Instantaneous_Alt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AArtifactCrate_Instantaneous_Alt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ArtifactCrate_Instantaneous_Alt.ArtifactCrate_Instantaneous_Alt_C");
		return ptr;
	}

}


