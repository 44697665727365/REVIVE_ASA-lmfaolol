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
	 * 		Name   -> Function WaterInteractionBP.WaterInteractionBP_C.CheckHalfSize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWaterInteractionBP_C::CheckHalfSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaterInteractionBP.WaterInteractionBP_C.CheckHalfSize");
		
		AWaterInteractionBP_C_CheckHalfSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function WaterInteractionBP.WaterInteractionBP_C.CheckDisable
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWaterInteractionBP_C::CheckDisable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaterInteractionBP.WaterInteractionBP_C.CheckDisable");
		
		AWaterInteractionBP_C_CheckDisable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function WaterInteractionBP.WaterInteractionBP_C.StagePrint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Note                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AWaterInteractionBP_C::StagePrint(const class FString& Note, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaterInteractionBP.WaterInteractionBP_C.StagePrint");
		
		AWaterInteractionBP_C_StagePrint_Params params {};
		params.Note = Note;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function WaterInteractionBP.WaterInteractionBP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AWaterInteractionBP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaterInteractionBP.WaterInteractionBP_C.ReceiveBeginPlay");
		
		AWaterInteractionBP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function WaterInteractionBP.WaterInteractionBP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWaterInteractionBP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaterInteractionBP.WaterInteractionBP_C.ReceiveTick");
		
		AWaterInteractionBP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function WaterInteractionBP.WaterInteractionBP_C.GDF_RT_Update
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWaterInteractionBP_C::GDF_RT_Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaterInteractionBP.WaterInteractionBP_C.GDF_RT_Update");
		
		AWaterInteractionBP_C_GDF_RT_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function WaterInteractionBP.WaterInteractionBP_C.GDF_RT_Init
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AWaterInteractionBP_C::GDF_RT_Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaterInteractionBP.WaterInteractionBP_C.GDF_RT_Init");
		
		AWaterInteractionBP_C_GDF_RT_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function WaterInteractionBP.WaterInteractionBP_C.LiveActivation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ParamName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             FadeTimeOfBrush                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             FadeTimeOfCanvas                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWaterInteractionBP_C::LiveActivation(const class FName& ParamName, double FadeTimeOfBrush, double FadeTimeOfCanvas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaterInteractionBP.WaterInteractionBP_C.LiveActivation");
		
		AWaterInteractionBP_C_LiveActivation_Params params {};
		params.ParamName = ParamName;
		params.FadeTimeOfBrush = FadeTimeOfBrush;
		params.FadeTimeOfCanvas = FadeTimeOfCanvas;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function WaterInteractionBP.WaterInteractionBP_C.LiveFluidParams
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             BrushSize                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWaterInteractionBP_C::LiveFluidParams(double BrushSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaterInteractionBP.WaterInteractionBP_C.LiveFluidParams");
		
		AWaterInteractionBP_C_LiveFluidParams_Params params {};
		params.BrushSize = BrushSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function WaterInteractionBP.WaterInteractionBP_C.ExecuteUbergraph_WaterInteractionBP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWaterInteractionBP_C::ExecuteUbergraph_WaterInteractionBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaterInteractionBP.WaterInteractionBP_C.ExecuteUbergraph_WaterInteractionBP");
		
		AWaterInteractionBP_C_ExecuteUbergraph_WaterInteractionBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWaterInteractionBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWaterInteractionBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WaterInteractionBP.WaterInteractionBP_C");
		return ptr;
	}

}


