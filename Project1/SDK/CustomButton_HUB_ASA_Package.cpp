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
	 * 		Name   -> Function CustomButton_HUB_ASA.CustomButton_HUB_ASA_C.BPSetToggledState
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsToggled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomButton_HUB_ASA_C::BPSetToggledState(bool IsToggled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomButton_HUB_ASA.CustomButton_HUB_ASA_C.BPSetToggledState");
		
		UCustomButton_HUB_ASA_C_BPSetToggledState_Params params {};
		params.IsToggled = IsToggled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function CustomButton_HUB_ASA.CustomButton_HUB_ASA_C.ExecuteUbergraph_CustomButton_HUB_ASA
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomButton_HUB_ASA_C::ExecuteUbergraph_CustomButton_HUB_ASA(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomButton_HUB_ASA.CustomButton_HUB_ASA_C.ExecuteUbergraph_CustomButton_HUB_ASA");
		
		UCustomButton_HUB_ASA_C_ExecuteUbergraph_CustomButton_HUB_ASA_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomButton_HUB_ASA_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomButton_HUB_ASA_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CustomButton_HUB_ASA.CustomButton_HUB_ASA_C");
		return ptr;
	}

}


