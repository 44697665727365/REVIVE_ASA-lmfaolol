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
	 * 		Name   -> Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.BPAllowCrafting
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	class FString UPrimalItem_Spawner_HoverSkiff_C::BPAllowCrafting(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.BPAllowCrafting");
		
		UPrimalItem_Spawner_HoverSkiff_C_BPAllowCrafting_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.GetValidSpawnTransform
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  SpawnTransform                                             (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               SpawnValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItem_Spawner_HoverSkiff_C::GetValidSpawnTransform(struct FTransform* SpawnTransform, bool* SpawnValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.GetValidSpawnTransform");
		
		UPrimalItem_Spawner_HoverSkiff_C_GetValidSpawnTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnTransform != nullptr)
			*SpawnTransform = params.SpawnTransform;
		if (SpawnValid != nullptr)
			*SpawnValid = params.SpawnValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.BPCrafted
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItem_Spawner_HoverSkiff_C::BPCrafted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.BPCrafted");
		
		UPrimalItem_Spawner_HoverSkiff_C_BPCrafted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.SpawnCraftedSkiff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItem_Spawner_HoverSkiff_C::SpawnCraftedSkiff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.SpawnCraftedSkiff");
		
		UPrimalItem_Spawner_HoverSkiff_C_SpawnCraftedSkiff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.ExecuteUbergraph_PrimalItem_Spawner_HoverSkiff
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItem_Spawner_HoverSkiff_C::ExecuteUbergraph_PrimalItem_Spawner_HoverSkiff(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.ExecuteUbergraph_PrimalItem_Spawner_HoverSkiff");
		
		UPrimalItem_Spawner_HoverSkiff_C_ExecuteUbergraph_PrimalItem_Spawner_HoverSkiff_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItem_Spawner_HoverSkiff_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItem_Spawner_HoverSkiff_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C");
		return ptr;
	}

}


