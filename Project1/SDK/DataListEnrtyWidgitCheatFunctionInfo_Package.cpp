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
	 * 		Name   -> Function DataListEnrtyWidgitCheatFunctionInfo.DataListEnrtyWidgitCheatFunctionInfo_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UDataListEnrtyWidgitCheatFunctionInfo_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListEnrtyWidgitCheatFunctionInfo.DataListEnrtyWidgitCheatFunctionInfo_C.Construct");
		
		UDataListEnrtyWidgitCheatFunctionInfo_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DataListEnrtyWidgitCheatFunctionInfo.DataListEnrtyWidgitCheatFunctionInfo_C.ExecuteUbergraph_DataListEnrtyWidgitCheatFunctionInfo
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDataListEnrtyWidgitCheatFunctionInfo_C::ExecuteUbergraph_DataListEnrtyWidgitCheatFunctionInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListEnrtyWidgitCheatFunctionInfo.DataListEnrtyWidgitCheatFunctionInfo_C.ExecuteUbergraph_DataListEnrtyWidgitCheatFunctionInfo");
		
		UDataListEnrtyWidgitCheatFunctionInfo_C_ExecuteUbergraph_DataListEnrtyWidgitCheatFunctionInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataListEnrtyWidgitCheatFunctionInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataListEnrtyWidgitCheatFunctionInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEnrtyWidgitCheatFunctionInfo.DataListEnrtyWidgitCheatFunctionInfo_C");
		return ptr;
	}

}


