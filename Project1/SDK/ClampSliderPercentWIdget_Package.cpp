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
	 * 		Name   -> Function ClampSliderPercentWIdget.ClampSliderPercentWIdget_C.SetEnabled
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UClampSliderPercentWIdget_C::SetEnabled(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClampSliderPercentWIdget.ClampSliderPercentWIdget_C.SetEnabled");
		
		UClampSliderPercentWIdget_C_SetEnabled_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ClampSliderPercentWIdget.ClampSliderPercentWIdget_C.ExecuteUbergraph_ClampSliderPercentWIdget
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UClampSliderPercentWIdget_C::ExecuteUbergraph_ClampSliderPercentWIdget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ClampSliderPercentWIdget.ClampSliderPercentWIdget_C.ExecuteUbergraph_ClampSliderPercentWIdget");
		
		UClampSliderPercentWIdget_C_ExecuteUbergraph_ClampSliderPercentWIdget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClampSliderPercentWIdget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClampSliderPercentWIdget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ClampSliderPercentWIdget.ClampSliderPercentWIdget_C");
		return ptr;
	}

}


