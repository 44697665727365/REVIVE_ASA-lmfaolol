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
	 * 		Name   -> Function DataListEntryWidgetPrimalItem.DataListEntryWidgetPrimalItem_C.OnPaint
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FPaintContext                               Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UDataListEntryWidgetPrimalItem_C::OnPaint(struct FPaintContext* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListEntryWidgetPrimalItem.DataListEntryWidgetPrimalItem_C.OnPaint");
		
		UDataListEntryWidgetPrimalItem_C_OnPaint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DataListEntryWidgetPrimalItem.DataListEntryWidgetPrimalItem_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UDataListEntryWidgetPrimalItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListEntryWidgetPrimalItem.DataListEntryWidgetPrimalItem_C.Construct");
		
		UDataListEntryWidgetPrimalItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DataListEntryWidgetPrimalItem.DataListEntryWidgetPrimalItem_C.ExecuteUbergraph_DataListEntryWidgetPrimalItem
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDataListEntryWidgetPrimalItem_C::ExecuteUbergraph_DataListEntryWidgetPrimalItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListEntryWidgetPrimalItem.DataListEntryWidgetPrimalItem_C.ExecuteUbergraph_DataListEntryWidgetPrimalItem");
		
		UDataListEntryWidgetPrimalItem_C_ExecuteUbergraph_DataListEntryWidgetPrimalItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataListEntryWidgetPrimalItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataListEntryWidgetPrimalItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEntryWidgetPrimalItem.DataListEntryWidgetPrimalItem_C");
		return ptr;
	}

}


