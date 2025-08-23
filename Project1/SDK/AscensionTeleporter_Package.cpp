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
	 * 		Name   -> Function AscensionTeleporter.AscensionTeleporter_C.ProgressActivities
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AAscensionTeleporter_C::ProgressActivities()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AscensionTeleporter.AscensionTeleporter_C.ProgressActivities");
		
		AAscensionTeleporter_C_ProgressActivities_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function AscensionTeleporter.AscensionTeleporter_C.DoTeleportSound
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AAscensionTeleporter_C::DoTeleportSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AscensionTeleporter.AscensionTeleporter_C.DoTeleportSound");
		
		AAscensionTeleporter_C_DoTeleportSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function AscensionTeleporter.AscensionTeleporter_C.DoAscend
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AAscensionTeleporter_C::DoAscend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AscensionTeleporter.AscensionTeleporter_C.DoAscend");
		
		AAscensionTeleporter_C_DoAscend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function AscensionTeleporter.AscensionTeleporter_C.BuffTickClient
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAscensionTeleporter_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AscensionTeleporter.AscensionTeleporter_C.BuffTickClient");
		
		AAscensionTeleporter_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function AscensionTeleporter.AscensionTeleporter_C.DoTeleport
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AAscensionTeleporter_C::DoTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AscensionTeleporter.AscensionTeleporter_C.DoTeleport");
		
		AAscensionTeleporter_C_DoTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function AscensionTeleporter.AscensionTeleporter_C.NetDoTeleport
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AAscensionTeleporter_C::NetDoTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AscensionTeleporter.AscensionTeleporter_C.NetDoTeleport");
		
		AAscensionTeleporter_C_NetDoTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function AscensionTeleporter.AscensionTeleporter_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AAscensionTeleporter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AscensionTeleporter.AscensionTeleporter_C.ReceiveBeginPlay");
		
		AAscensionTeleporter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function AscensionTeleporter.AscensionTeleporter_C.SetBossDifficulty
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAscensionTeleporter_C::SetBossDifficulty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AscensionTeleporter.AscensionTeleporter_C.SetBossDifficulty");
		
		AAscensionTeleporter_C_SetBossDifficulty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function AscensionTeleporter.AscensionTeleporter_C.ExecuteUbergraph_AscensionTeleporter
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAscensionTeleporter_C::ExecuteUbergraph_AscensionTeleporter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AscensionTeleporter.AscensionTeleporter_C.ExecuteUbergraph_AscensionTeleporter");
		
		AAscensionTeleporter_C_ExecuteUbergraph_AscensionTeleporter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAscensionTeleporter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAscensionTeleporter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AscensionTeleporter.AscensionTeleporter_C");
		return ptr;
	}

}


