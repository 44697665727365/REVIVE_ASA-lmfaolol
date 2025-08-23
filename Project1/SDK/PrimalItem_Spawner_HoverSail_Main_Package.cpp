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
	 * 		Name   -> Function PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C.BPInitIconMaterial
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItem_Spawner_HoverSail_Main_C::BPInitIconMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C.BPInitIconMaterial");
		
		UPrimalItem_Spawner_HoverSail_Main_C_BPInitIconMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C.BlueprintUsed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPrimalItem_Spawner_HoverSail_Main_C::BlueprintUsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C.BlueprintUsed");
		
		UPrimalItem_Spawner_HoverSail_Main_C_BlueprintUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C.OnDinoSpawned
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        NewDino                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItem_Spawner_HoverSail_Main_C::OnDinoSpawned(class APrimalDinoCharacter* NewDino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C.OnDinoSpawned");
		
		UPrimalItem_Spawner_HoverSail_Main_C_OnDinoSpawned_Params params {};
		params.NewDino = NewDino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C.BPGetCustomInventoryWidgetText
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class FString UPrimalItem_Spawner_HoverSail_Main_C::BPGetCustomInventoryWidgetText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C.BPGetCustomInventoryWidgetText");
		
		UPrimalItem_Spawner_HoverSail_Main_C_BPGetCustomInventoryWidgetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItem_Spawner_HoverSail_Main_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItem_Spawner_HoverSail_Main_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C");
		return ptr;
	}

}


