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
	 * 		Name   -> Function ToolTipWidgetPrimalItem_Inventory.ToolTipWidgetPrimalItem_Inventory_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UToolTipWidgetPrimalItem_Inventory_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToolTipWidgetPrimalItem_Inventory.ToolTipWidgetPrimalItem_Inventory_C.Construct");
		
		UToolTipWidgetPrimalItem_Inventory_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ToolTipWidgetPrimalItem_Inventory.ToolTipWidgetPrimalItem_Inventory_C.ExecuteUbergraph_ToolTipWidgetPrimalItem_Inventory
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UToolTipWidgetPrimalItem_Inventory_C::ExecuteUbergraph_ToolTipWidgetPrimalItem_Inventory(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToolTipWidgetPrimalItem_Inventory.ToolTipWidgetPrimalItem_Inventory_C.ExecuteUbergraph_ToolTipWidgetPrimalItem_Inventory");
		
		UToolTipWidgetPrimalItem_Inventory_C_ExecuteUbergraph_ToolTipWidgetPrimalItem_Inventory_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UToolTipWidgetPrimalItem_Inventory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UToolTipWidgetPrimalItem_Inventory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ToolTipWidgetPrimalItem_Inventory.ToolTipWidgetPrimalItem_Inventory_C");
		return ptr;
	}

}


