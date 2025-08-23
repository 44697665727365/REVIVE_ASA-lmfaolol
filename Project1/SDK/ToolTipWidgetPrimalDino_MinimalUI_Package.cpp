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
	 * 		Name   -> Function ToolTipWidgetPrimalDino_MinimalUI.ToolTipWidgetPrimalDino_MinimalUI_C.ExecuteUbergraph_ToolTipWidgetPrimalDino_MinimalUI
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UToolTipWidgetPrimalDino_MinimalUI_C::ExecuteUbergraph_ToolTipWidgetPrimalDino_MinimalUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToolTipWidgetPrimalDino_MinimalUI.ToolTipWidgetPrimalDino_MinimalUI_C.ExecuteUbergraph_ToolTipWidgetPrimalDino_MinimalUI");
		
		UToolTipWidgetPrimalDino_MinimalUI_C_ExecuteUbergraph_ToolTipWidgetPrimalDino_MinimalUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UToolTipWidgetPrimalDino_MinimalUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UToolTipWidgetPrimalDino_MinimalUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ToolTipWidgetPrimalDino_MinimalUI.ToolTipWidgetPrimalDino_MinimalUI_C");
		return ptr;
	}

}


