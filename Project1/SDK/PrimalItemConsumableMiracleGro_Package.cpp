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
	 * 		Name   -> Function PrimalItemConsumableMiracleGro.PrimalItemConsumableMiracleGro_C.BlueprintUsed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UPrimalItemConsumableMiracleGro_C::BlueprintUsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumableMiracleGro.PrimalItemConsumableMiracleGro_C.BlueprintUsed");
		
		UPrimalItemConsumableMiracleGro_C_BlueprintUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalItemConsumableMiracleGro.PrimalItemConsumableMiracleGro_C.ExecuteUbergraph_PrimalItemConsumableMiracleGro
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalItemConsumableMiracleGro_C::ExecuteUbergraph_PrimalItemConsumableMiracleGro(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumableMiracleGro.PrimalItemConsumableMiracleGro_C.ExecuteUbergraph_PrimalItemConsumableMiracleGro");
		
		UPrimalItemConsumableMiracleGro_C_ExecuteUbergraph_PrimalItemConsumableMiracleGro_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumableMiracleGro_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumableMiracleGro_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumableMiracleGro.PrimalItemConsumableMiracleGro_C");
		return ptr;
	}

}


