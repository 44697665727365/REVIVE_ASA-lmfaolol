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
	 * 		Name   -> Function DataListEntryWidgetAllPlayers.DataListEntryWidgetAllPlayers_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UDataListEntryWidgetAllPlayers_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListEntryWidgetAllPlayers.DataListEntryWidgetAllPlayers_C.Construct");
		
		UDataListEntryWidgetAllPlayers_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DataListEntryWidgetAllPlayers.DataListEntryWidgetAllPlayers_C.ExecuteUbergraph_DataListEntryWidgetAllPlayers
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDataListEntryWidgetAllPlayers_C::ExecuteUbergraph_DataListEntryWidgetAllPlayers(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListEntryWidgetAllPlayers.DataListEntryWidgetAllPlayers_C.ExecuteUbergraph_DataListEntryWidgetAllPlayers");
		
		UDataListEntryWidgetAllPlayers_C_ExecuteUbergraph_DataListEntryWidgetAllPlayers_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataListEntryWidgetAllPlayers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataListEntryWidgetAllPlayers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEntryWidgetAllPlayers.DataListEntryWidgetAllPlayers_C");
		return ptr;
	}

}


