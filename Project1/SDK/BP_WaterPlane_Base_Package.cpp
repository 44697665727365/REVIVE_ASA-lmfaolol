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
	 * 		Name   -> Function BP_WaterPlane_Base.BP_WaterPlane_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_WaterPlane_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WaterPlane_Base.BP_WaterPlane_Base_C.UserConstructionScript");
		
		ABP_WaterPlane_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_WaterPlane_Base.BP_WaterPlane_Base_C.BP_SetWaterLine
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_WaterPlane_Base_C::BP_SetWaterLine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WaterPlane_Base.BP_WaterPlane_Base_C.BP_SetWaterLine");
		
		ABP_WaterPlane_Base_C_BP_SetWaterLine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_WaterPlane_Base.BP_WaterPlane_Base_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_WaterPlane_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WaterPlane_Base.BP_WaterPlane_Base_C.ReceiveBeginPlay");
		
		ABP_WaterPlane_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_WaterPlane_Base.BP_WaterPlane_Base_C.SyncWaterInteraction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_WaterPlane_Base_C::SyncWaterInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WaterPlane_Base.BP_WaterPlane_Base_C.SyncWaterInteraction");
		
		ABP_WaterPlane_Base_C_SyncWaterInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_WaterPlane_Base.BP_WaterPlane_Base_C.TryResyncNinjaLiveComponent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_WaterPlane_Base_C::TryResyncNinjaLiveComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WaterPlane_Base.BP_WaterPlane_Base_C.TryResyncNinjaLiveComponent");
		
		ABP_WaterPlane_Base_C_TryResyncNinjaLiveComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_WaterPlane_Base.BP_WaterPlane_Base_C.ExecuteUbergraph_BP_WaterPlane_Base
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_WaterPlane_Base_C::ExecuteUbergraph_BP_WaterPlane_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_WaterPlane_Base.BP_WaterPlane_Base_C.ExecuteUbergraph_BP_WaterPlane_Base");
		
		ABP_WaterPlane_Base_C_ExecuteUbergraph_BP_WaterPlane_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_WaterPlane_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_WaterPlane_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_WaterPlane_Base.BP_WaterPlane_Base_C");
		return ptr;
	}

}


