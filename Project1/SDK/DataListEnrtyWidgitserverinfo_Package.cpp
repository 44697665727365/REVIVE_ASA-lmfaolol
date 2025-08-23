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
	 * 		Name   -> Function DataListEnrtyWidgitserverinfo.DataListEnrtyWidgitserverinfo_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UDataListEnrtyWidgitserverinfo_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListEnrtyWidgitserverinfo.DataListEnrtyWidgitserverinfo_C.Construct");
		
		UDataListEnrtyWidgitserverinfo_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DataListEnrtyWidgitserverinfo.DataListEnrtyWidgitserverinfo_C.ExecuteUbergraph_DataListEnrtyWidgitserverinfo
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDataListEnrtyWidgitserverinfo_C::ExecuteUbergraph_DataListEnrtyWidgitserverinfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListEnrtyWidgitserverinfo.DataListEnrtyWidgitserverinfo_C.ExecuteUbergraph_DataListEnrtyWidgitserverinfo");
		
		UDataListEnrtyWidgitserverinfo_C_ExecuteUbergraph_DataListEnrtyWidgitserverinfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataListEnrtyWidgitserverinfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataListEnrtyWidgitserverinfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEnrtyWidgitserverinfo.DataListEnrtyWidgitserverinfo_C");
		return ptr;
	}

}


