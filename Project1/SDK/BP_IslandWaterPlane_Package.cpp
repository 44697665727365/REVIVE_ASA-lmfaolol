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
	 * 		Name   -> Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.SetMaterials
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_IslandWaterPlane_C::SetMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.SetMaterials");
		
		ABP_IslandWaterPlane_C_SetMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.SetFoamIntensity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             FoamIntensity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_IslandWaterPlane_C::SetFoamIntensity(double FoamIntensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.SetFoamIntensity");
		
		ABP_IslandWaterPlane_C_SetFoamIntensity_Params params {};
		params.FoamIntensity = FoamIntensity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.UpdateSun
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_IslandWaterPlane_C::UpdateSun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.UpdateSun");
		
		ABP_IslandWaterPlane_C_UpdateSun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_IslandWaterPlane_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.UserConstructionScript");
		
		ABP_IslandWaterPlane_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.BndEvt__DayCycleManager_K2Node_ComponentBoundEvent_12_ActorMatineeUpdated__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_IslandWaterPlane_C::BndEvt__DayCycleManager_K2Node_ComponentBoundEvent_12_ActorMatineeUpdated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.BndEvt__DayCycleManager_K2Node_ComponentBoundEvent_12_ActorMatineeUpdated__DelegateSignature");
		
		ABP_IslandWaterPlane_C_BndEvt__DayCycleManager_K2Node_ComponentBoundEvent_12_ActorMatineeUpdated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_IslandWaterPlane_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.ReceiveBeginPlay");
		
		ABP_IslandWaterPlane_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.AutoUpdateValues
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_IslandWaterPlane_C::AutoUpdateValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.AutoUpdateValues");
		
		ABP_IslandWaterPlane_C_AutoUpdateValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.ExecuteUbergraph_BP_IslandWaterPlane
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_IslandWaterPlane_C::ExecuteUbergraph_BP_IslandWaterPlane(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_IslandWaterPlane.BP_IslandWaterPlane_C.ExecuteUbergraph_BP_IslandWaterPlane");
		
		ABP_IslandWaterPlane_C_ExecuteUbergraph_BP_IslandWaterPlane_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_IslandWaterPlane_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_IslandWaterPlane_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_IslandWaterPlane.BP_IslandWaterPlane_C");
		return ptr;
	}

}


