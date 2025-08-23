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
	 * 		Name   -> Function DataListEnrtyWidgitAdminMangment.DataListEnrtyWidgitAdminMangment_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UDataListEnrtyWidgitAdminMangment_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListEnrtyWidgitAdminMangment.DataListEnrtyWidgitAdminMangment_C.Construct");
		
		UDataListEnrtyWidgitAdminMangment_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DataListEnrtyWidgitAdminMangment.DataListEnrtyWidgitAdminMangment_C.ExecuteUbergraph_DataListEnrtyWidgitAdminMangment
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDataListEnrtyWidgitAdminMangment_C::ExecuteUbergraph_DataListEnrtyWidgitAdminMangment(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListEnrtyWidgitAdminMangment.DataListEnrtyWidgitAdminMangment_C.ExecuteUbergraph_DataListEnrtyWidgitAdminMangment");
		
		UDataListEnrtyWidgitAdminMangment_C_ExecuteUbergraph_DataListEnrtyWidgitAdminMangment_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataListEnrtyWidgitAdminMangment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataListEnrtyWidgitAdminMangment_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEnrtyWidgitAdminMangment.DataListEnrtyWidgitAdminMangment_C");
		return ptr;
	}

}


