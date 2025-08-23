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
	 * 		Name   -> Function CheatMenuItemAllButton.CheatMenuItemAllButton_C.BndEvt__CheatMenuAllButton_SpawnButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCheatMenuItemAllButton_C::BndEvt__CheatMenuAllButton_SpawnButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CheatMenuItemAllButton.CheatMenuItemAllButton_C.BndEvt__CheatMenuAllButton_SpawnButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UCheatMenuItemAllButton_C_BndEvt__CheatMenuAllButton_SpawnButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function CheatMenuItemAllButton.CheatMenuItemAllButton_C.ExecuteUbergraph_CheatMenuItemAllButton
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCheatMenuItemAllButton_C::ExecuteUbergraph_CheatMenuItemAllButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CheatMenuItemAllButton.CheatMenuItemAllButton_C.ExecuteUbergraph_CheatMenuItemAllButton");
		
		UCheatMenuItemAllButton_C_ExecuteUbergraph_CheatMenuItemAllButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCheatMenuItemAllButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCheatMenuItemAllButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CheatMenuItemAllButton.CheatMenuItemAllButton_C");
		return ptr;
	}

}


