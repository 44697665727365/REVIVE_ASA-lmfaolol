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
	 * 		Name   -> Function Hub.Hub_C.OnButtonHover
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UHub_C::OnButtonHover()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hub.Hub_C.OnButtonHover");
		
		UHub_C_OnButtonHover_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hub.Hub_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UHub_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hub.Hub_C.Construct");
		
		UHub_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hub.Hub_C.OnGamepadActiveChangedBP
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsGamepadActive                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHub_C::OnGamepadActiveChangedBP(bool bIsGamepadActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hub.Hub_C.OnGamepadActiveChangedBP");
		
		UHub_C_OnGamepadActiveChangedBP_Params params {};
		params.bIsGamepadActive = bIsGamepadActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hub.Hub_C.BndEvt__Hub_CloseHubButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UHub_C::BndEvt__Hub_CloseHubButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hub.Hub_C.BndEvt__Hub_CloseHubButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UHub_C_BndEvt__Hub_CloseHubButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hub.Hub_C.BndEvt__Hub_EngramsMenuButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UHub_C::BndEvt__Hub_EngramsMenuButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hub.Hub_C.BndEvt__Hub_EngramsMenuButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");
		
		UHub_C_BndEvt__Hub_EngramsMenuButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hub.Hub_C.BndEvt__Hub_InventoryMenuButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UHub_C::BndEvt__Hub_InventoryMenuButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hub.Hub_C.BndEvt__Hub_InventoryMenuButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");
		
		UHub_C_BndEvt__Hub_InventoryMenuButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hub.Hub_C.BndEvt__Hub_MinimapMenuButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UHub_C::BndEvt__Hub_MinimapMenuButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hub.Hub_C.BndEvt__Hub_MinimapMenuButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature");
		
		UHub_C_BndEvt__Hub_MinimapMenuButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hub.Hub_C.BndEvt__Hub_MissionListMenuButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UHub_C::BndEvt__Hub_MissionListMenuButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hub.Hub_C.BndEvt__Hub_MissionListMenuButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature");
		
		UHub_C_BndEvt__Hub_MissionListMenuButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hub.Hub_C.BndEvt__Hub_OpenPauseMenu_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UHub_C::BndEvt__Hub_OpenPauseMenu_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hub.Hub_C.BndEvt__Hub_OpenPauseMenu_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature");
		
		UHub_C_BndEvt__Hub_OpenPauseMenu_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hub.Hub_C.BndEvt__Hub_SurvivorProfileMenuButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UHub_C::BndEvt__Hub_SurvivorProfileMenuButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hub.Hub_C.BndEvt__Hub_SurvivorProfileMenuButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature");
		
		UHub_C_BndEvt__Hub_SurvivorProfileMenuButton_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hub.Hub_C.BndEvt__Hub_TameGroupsMenuButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UHub_C::BndEvt__Hub_TameGroupsMenuButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hub.Hub_C.BndEvt__Hub_TameGroupsMenuButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature");
		
		UHub_C_BndEvt__Hub_TameGroupsMenuButton_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hub.Hub_C.BndEvt__Hub_TamingListMenuButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UHub_C::BndEvt__Hub_TamingListMenuButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hub.Hub_C.BndEvt__Hub_TamingListMenuButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature");
		
		UHub_C_BndEvt__Hub_TamingListMenuButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hub.Hub_C.BndEvt__Hub_TrackDinoListMenuButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UHub_C::BndEvt__Hub_TrackDinoListMenuButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hub.Hub_C.BndEvt__Hub_TrackDinoListMenuButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature");
		
		UHub_C_BndEvt__Hub_TrackDinoListMenuButton_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hub.Hub_C.BndEvt__Hub_TribeManagerMenuButton_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UHub_C::BndEvt__Hub_TribeManagerMenuButton_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hub.Hub_C.BndEvt__Hub_TribeManagerMenuButton_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature");
		
		UHub_C_BndEvt__Hub_TribeManagerMenuButton_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Hub.Hub_C.ExecuteUbergraph_Hub
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHub_C::ExecuteUbergraph_Hub(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hub.Hub_C.ExecuteUbergraph_Hub");
		
		UHub_C_ExecuteUbergraph_Hub_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHub_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHub_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Hub.Hub_C");
		return ptr;
	}

}


