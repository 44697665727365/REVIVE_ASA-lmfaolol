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
	 * 		Name   -> Function UDS_Occlusion_Volume_Interface.UDS_Occlusion_Volume_Interface_C.Get Occlusion Result
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Weather                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Occluded                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUDS_Occlusion_Volume_Interface_C::GetOcclusionResult(bool Weather, bool* Occluded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UDS_Occlusion_Volume_Interface.UDS_Occlusion_Volume_Interface_C.Get Occlusion Result");
		
		UUDS_Occlusion_Volume_Interface_C_GetOcclusionResult_Params params {};
		params.Weather = Weather;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Occluded != nullptr)
			*Occluded = params.Occluded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUDS_Occlusion_Volume_Interface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUDS_Occlusion_Volume_Interface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass UDS_Occlusion_Volume_Interface.UDS_Occlusion_Volume_Interface_C");
		return ptr;
	}

}


