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
	 * 		Name   -> Function BP_BindFluidSimBuffer_Global.BP_BindFluidSimBuffer_Global_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_BindFluidSimBuffer_Global_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BindFluidSimBuffer_Global.BP_BindFluidSimBuffer_Global_C.ReceiveBeginPlay");
		
		ABP_BindFluidSimBuffer_Global_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_BindFluidSimBuffer_Global.BP_BindFluidSimBuffer_Global_C.SyncWaterInteraction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_BindFluidSimBuffer_Global_C::SyncWaterInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BindFluidSimBuffer_Global.BP_BindFluidSimBuffer_Global_C.SyncWaterInteraction");
		
		ABP_BindFluidSimBuffer_Global_C_SyncWaterInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_BindFluidSimBuffer_Global.BP_BindFluidSimBuffer_Global_C.TryResyncNinjaLiveComponent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_BindFluidSimBuffer_Global_C::TryResyncNinjaLiveComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BindFluidSimBuffer_Global.BP_BindFluidSimBuffer_Global_C.TryResyncNinjaLiveComponent");
		
		ABP_BindFluidSimBuffer_Global_C_TryResyncNinjaLiveComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_BindFluidSimBuffer_Global.BP_BindFluidSimBuffer_Global_C.ExecuteUbergraph_BP_BindFluidSimBuffer_Global
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BindFluidSimBuffer_Global_C::ExecuteUbergraph_BP_BindFluidSimBuffer_Global(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BindFluidSimBuffer_Global.BP_BindFluidSimBuffer_Global_C.ExecuteUbergraph_BP_BindFluidSimBuffer_Global");
		
		ABP_BindFluidSimBuffer_Global_C_ExecuteUbergraph_BP_BindFluidSimBuffer_Global_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BindFluidSimBuffer_Global_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BindFluidSimBuffer_Global_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BindFluidSimBuffer_Global.BP_BindFluidSimBuffer_Global_C");
		return ptr;
	}

}


