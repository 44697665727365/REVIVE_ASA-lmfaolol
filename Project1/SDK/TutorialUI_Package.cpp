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
	 * 		Name   -> Function TutorialUI.TutorialUI_C.RemovedFromViewport
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UTutorialUI_C::RemovedFromViewport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialUI.TutorialUI_C.RemovedFromViewport");
		
		UTutorialUI_C_RemovedFromViewport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TutorialUI.TutorialUI_C.AddedToViewport
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UTutorialUI_C::AddedToViewport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialUI.TutorialUI_C.AddedToViewport");
		
		UTutorialUI_C_AddedToViewport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TutorialUI.TutorialUI_C.ExecuteUbergraph_TutorialUI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTutorialUI_C::ExecuteUbergraph_TutorialUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TutorialUI.TutorialUI_C.ExecuteUbergraph_TutorialUI");
		
		UTutorialUI_C_ExecuteUbergraph_TutorialUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTutorialUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTutorialUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TutorialUI.TutorialUI_C");
		return ptr;
	}

}


