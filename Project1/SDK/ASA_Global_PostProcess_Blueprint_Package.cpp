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
	 * 		Name   -> Function ASA_Global_PostProcess_Blueprint.ASA_Global_PostProcess_Blueprint_C.Apply Curve Exposure
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AASA_Global_PostProcess_Blueprint_C::ApplyCurveExposure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ASA_Global_PostProcess_Blueprint.ASA_Global_PostProcess_Blueprint_C.Apply Curve Exposure");
		
		AASA_Global_PostProcess_Blueprint_C_ApplyCurveExposure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ASA_Global_PostProcess_Blueprint.ASA_Global_PostProcess_Blueprint_C.Capture Settings
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AASA_Global_PostProcess_Blueprint_C::CaptureSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ASA_Global_PostProcess_Blueprint.ASA_Global_PostProcess_Blueprint_C.Capture Settings");
		
		AASA_Global_PostProcess_Blueprint_C_CaptureSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ASA_Global_PostProcess_Blueprint.ASA_Global_PostProcess_Blueprint_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AASA_Global_PostProcess_Blueprint_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ASA_Global_PostProcess_Blueprint.ASA_Global_PostProcess_Blueprint_C.ReceiveTick");
		
		AASA_Global_PostProcess_Blueprint_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ASA_Global_PostProcess_Blueprint.ASA_Global_PostProcess_Blueprint_C.ExecuteUbergraph_ASA_Global_PostProcess_Blueprint
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AASA_Global_PostProcess_Blueprint_C::ExecuteUbergraph_ASA_Global_PostProcess_Blueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ASA_Global_PostProcess_Blueprint.ASA_Global_PostProcess_Blueprint_C.ExecuteUbergraph_ASA_Global_PostProcess_Blueprint");
		
		AASA_Global_PostProcess_Blueprint_C_ExecuteUbergraph_ASA_Global_PostProcess_Blueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AASA_Global_PostProcess_Blueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AASA_Global_PostProcess_Blueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ASA_Global_PostProcess_Blueprint.ASA_Global_PostProcess_Blueprint_C");
		return ptr;
	}

}


