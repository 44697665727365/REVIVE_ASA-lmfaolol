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
	 * 		Name   -> Function ElementStatusBarWidget.ElementStatusBarWidget_C.UpdateBoostIconVisibility
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UElementStatusBarWidget_C::UpdateBoostIconVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ElementStatusBarWidget.ElementStatusBarWidget_C.UpdateBoostIconVisibility");
		
		UElementStatusBarWidget_C_UpdateBoostIconVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UElementStatusBarWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UElementStatusBarWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ElementStatusBarWidget.ElementStatusBarWidget_C");
		return ptr;
	}

}


