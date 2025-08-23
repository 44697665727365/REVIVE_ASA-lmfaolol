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
	 * 		Name   -> Function DataListEntryWidgetGeneric_Engram.DataListEntryWidgetGeneric_Engram_C.OnPaint
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FPaintContext                               Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UDataListEntryWidgetGeneric_Engram_C::OnPaint(struct FPaintContext* Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListEntryWidgetGeneric_Engram.DataListEntryWidgetGeneric_Engram_C.OnPaint");
		
		UDataListEntryWidgetGeneric_Engram_C_OnPaint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Context != nullptr)
			*Context = params.Context;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DataListEntryWidgetGeneric_Engram.DataListEntryWidgetGeneric_Engram_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UDataListEntryWidgetGeneric_Engram_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListEntryWidgetGeneric_Engram.DataListEntryWidgetGeneric_Engram_C.Construct");
		
		UDataListEntryWidgetGeneric_Engram_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DataListEntryWidgetGeneric_Engram.DataListEntryWidgetGeneric_Engram_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDataListEntryWidgetGeneric_Engram_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListEntryWidgetGeneric_Engram.DataListEntryWidgetGeneric_Engram_C.Tick");
		
		UDataListEntryWidgetGeneric_Engram_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DataListEntryWidgetGeneric_Engram.DataListEntryWidgetGeneric_Engram_C.ExecuteUbergraph_DataListEntryWidgetGeneric_Engram
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDataListEntryWidgetGeneric_Engram_C::ExecuteUbergraph_DataListEntryWidgetGeneric_Engram(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListEntryWidgetGeneric_Engram.DataListEntryWidgetGeneric_Engram_C.ExecuteUbergraph_DataListEntryWidgetGeneric_Engram");
		
		UDataListEntryWidgetGeneric_Engram_C_ExecuteUbergraph_DataListEntryWidgetGeneric_Engram_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataListEntryWidgetGeneric_Engram_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataListEntryWidgetGeneric_Engram_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEntryWidgetGeneric_Engram.DataListEntryWidgetGeneric_Engram_C");
		return ptr;
	}

}


