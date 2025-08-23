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
	 * 		Name   -> Function PrimalItem_DungeonEntrance_Base.PrimalItem_DungeonEntrance_Base_C.BPCrafted
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItem_DungeonEntrance_Base_C::BPCrafted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_DungeonEntrance_Base.PrimalItem_DungeonEntrance_Base_C.BPCrafted");
		
		UPrimalItem_DungeonEntrance_Base_C_BPCrafted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItem_DungeonEntrance_Base.PrimalItem_DungeonEntrance_Base_C.BPAllowCrafting
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	class FString UPrimalItem_DungeonEntrance_Base_C::BPAllowCrafting(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_DungeonEntrance_Base.PrimalItem_DungeonEntrance_Base_C.BPAllowCrafting");
		
		UPrimalItem_DungeonEntrance_Base_C_BPAllowCrafting_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItem_DungeonEntrance_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItem_DungeonEntrance_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_DungeonEntrance_Base.PrimalItem_DungeonEntrance_Base_C");
		return ptr;
	}

}


