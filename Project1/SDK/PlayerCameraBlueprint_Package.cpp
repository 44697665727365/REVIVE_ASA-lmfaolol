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
	 * 		Name   -> Function PlayerCameraBlueprint.PlayerCameraBlueprint_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APlayerCameraBlueprint_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCameraBlueprint.PlayerCameraBlueprint_C.ReceiveDestroyed");
		
		APlayerCameraBlueprint_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerCameraBlueprint.PlayerCameraBlueprint_C.Spawn Water Interaction Comp And Attach To Camera
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APlayerCameraBlueprint_C::SpawnWaterInteractionCompAndAttachToCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCameraBlueprint.PlayerCameraBlueprint_C.Spawn Water Interaction Comp And Attach To Camera");
		
		APlayerCameraBlueprint_C_SpawnWaterInteractionCompAndAttachToCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerCameraBlueprint.PlayerCameraBlueprint_C.ExecuteUbergraph_PlayerCameraBlueprint
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerCameraBlueprint_C::ExecuteUbergraph_PlayerCameraBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerCameraBlueprint.PlayerCameraBlueprint_C.ExecuteUbergraph_PlayerCameraBlueprint");
		
		APlayerCameraBlueprint_C_ExecuteUbergraph_PlayerCameraBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APlayerCameraBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlayerCameraBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerCameraBlueprint.PlayerCameraBlueprint_C");
		return ptr;
	}

}


