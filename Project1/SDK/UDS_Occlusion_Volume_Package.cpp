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
	 * 		Name   -> Function UDS_Occlusion_Volume.UDS_Occlusion_Volume_C.Get Occlusion Result
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Weather                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Occluded                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUDS_Occlusion_Volume_C::GetOcclusionResult(bool Weather, bool* Occluded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UDS_Occlusion_Volume.UDS_Occlusion_Volume_C.Get Occlusion Result");
		
		AUDS_Occlusion_Volume_C_GetOcclusionResult_Params params {};
		params.Weather = Weather;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Occluded != nullptr)
			*Occluded = params.Occluded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function UDS_Occlusion_Volume.UDS_Occlusion_Volume_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUDS_Occlusion_Volume_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UDS_Occlusion_Volume.UDS_Occlusion_Volume_C.UserConstructionScript");
		
		AUDS_Occlusion_Volume_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUDS_Occlusion_Volume_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUDS_Occlusion_Volume_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass UDS_Occlusion_Volume.UDS_Occlusion_Volume_C");
		return ptr;
	}

}


