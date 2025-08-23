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
	 * 		Name   -> Function PrimalBuff_ChangeMaterialScalarParamOverTime.PrimalBuff_ChangeMaterialScalarParamOverTime_C.Set Param Value
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMeshComponent*                              Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrimalBuff_ChangeMaterialScalarParamOverTime_C::SetParamValue(class UMeshComponent* Mesh, double Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalBuff_ChangeMaterialScalarParamOverTime.PrimalBuff_ChangeMaterialScalarParamOverTime_C.Set Param Value");
		
		APrimalBuff_ChangeMaterialScalarParamOverTime_C_SetParamValue_Params params {};
		params.Mesh = Mesh;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalBuff_ChangeMaterialScalarParamOverTime.PrimalBuff_ChangeMaterialScalarParamOverTime_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void APrimalBuff_ChangeMaterialScalarParamOverTime_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalBuff_ChangeMaterialScalarParamOverTime.PrimalBuff_ChangeMaterialScalarParamOverTime_C.BPSetupForInstigator");
		
		APrimalBuff_ChangeMaterialScalarParamOverTime_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalBuff_ChangeMaterialScalarParamOverTime.PrimalBuff_ChangeMaterialScalarParamOverTime_C.ParamTimeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void APrimalBuff_ChangeMaterialScalarParamOverTime_C::ParamTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalBuff_ChangeMaterialScalarParamOverTime.PrimalBuff_ChangeMaterialScalarParamOverTime_C.ParamTimeline__FinishedFunc");
		
		APrimalBuff_ChangeMaterialScalarParamOverTime_C_ParamTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalBuff_ChangeMaterialScalarParamOverTime.PrimalBuff_ChangeMaterialScalarParamOverTime_C.ParamTimeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void APrimalBuff_ChangeMaterialScalarParamOverTime_C::ParamTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalBuff_ChangeMaterialScalarParamOverTime.PrimalBuff_ChangeMaterialScalarParamOverTime_C.ParamTimeline__UpdateFunc");
		
		APrimalBuff_ChangeMaterialScalarParamOverTime_C_ParamTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalBuff_ChangeMaterialScalarParamOverTime.PrimalBuff_ChangeMaterialScalarParamOverTime_C.StartTimeline
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Forward                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrimalBuff_ChangeMaterialScalarParamOverTime_C::StartTimeline(bool Forward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalBuff_ChangeMaterialScalarParamOverTime.PrimalBuff_ChangeMaterialScalarParamOverTime_C.StartTimeline");
		
		APrimalBuff_ChangeMaterialScalarParamOverTime_C_StartTimeline_Params params {};
		params.Forward = Forward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalBuff_ChangeMaterialScalarParamOverTime.PrimalBuff_ChangeMaterialScalarParamOverTime_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void APrimalBuff_ChangeMaterialScalarParamOverTime_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalBuff_ChangeMaterialScalarParamOverTime.PrimalBuff_ChangeMaterialScalarParamOverTime_C.ReceiveBeginPlay");
		
		APrimalBuff_ChangeMaterialScalarParamOverTime_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalBuff_ChangeMaterialScalarParamOverTime.PrimalBuff_ChangeMaterialScalarParamOverTime_C.SetValues
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrimalBuff_ChangeMaterialScalarParamOverTime_C::SetValues(double Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalBuff_ChangeMaterialScalarParamOverTime.PrimalBuff_ChangeMaterialScalarParamOverTime_C.SetValues");
		
		APrimalBuff_ChangeMaterialScalarParamOverTime_C_SetValues_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalBuff_ChangeMaterialScalarParamOverTime.PrimalBuff_ChangeMaterialScalarParamOverTime_C.ExecuteUbergraph_PrimalBuff_ChangeMaterialScalarParamOverTime
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APrimalBuff_ChangeMaterialScalarParamOverTime_C::ExecuteUbergraph_PrimalBuff_ChangeMaterialScalarParamOverTime(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalBuff_ChangeMaterialScalarParamOverTime.PrimalBuff_ChangeMaterialScalarParamOverTime_C.ExecuteUbergraph_PrimalBuff_ChangeMaterialScalarParamOverTime");
		
		APrimalBuff_ChangeMaterialScalarParamOverTime_C_ExecuteUbergraph_PrimalBuff_ChangeMaterialScalarParamOverTime_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APrimalBuff_ChangeMaterialScalarParamOverTime_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APrimalBuff_ChangeMaterialScalarParamOverTime_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalBuff_ChangeMaterialScalarParamOverTime.PrimalBuff_ChangeMaterialScalarParamOverTime_C");
		return ptr;
	}

}


