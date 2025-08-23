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
	 * 		Name   -> Function TribeManagerUI.TribeManagerUI_C.Get_TribeWarPanel_Visibility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	ESlateVisibility UTribeManagerUI_C::Get_TribeWarPanel_Visibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TribeManagerUI.TribeManagerUI_C.Get_TribeWarPanel_Visibility");
		
		UTribeManagerUI_C_Get_TribeWarPanel_Visibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TribeManagerUI.TribeManagerUI_C.CheckToBool
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UDataListButtonVariable_Widget_ASA_C*        Slider                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Byte                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTribeManagerUI_C::CheckToBool(class UDataListButtonVariable_Widget_ASA_C* Slider, bool* Byte)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TribeManagerUI.TribeManagerUI_C.CheckToBool");
		
		UTribeManagerUI_C_CheckToBool_Params params {};
		params.Slider = Slider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Byte != nullptr)
			*Byte = params.Byte;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TribeManagerUI.TribeManagerUI_C.SliderToByte
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UDataListButtonVariable_Widget_ASA_C*        Slider                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      Byte                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTribeManagerUI_C::SliderToByte(class UDataListButtonVariable_Widget_ASA_C* Slider, unsigned char* Byte)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TribeManagerUI.TribeManagerUI_C.SliderToByte");
		
		UTribeManagerUI_C_SliderToByte_Params params {};
		params.Slider = Slider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Byte != nullptr)
			*Byte = params.Byte;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TribeManagerUI.TribeManagerUI_C.SetupSwitchButtons
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     TextureEffectToHide                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     TextureEffectToShow                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UPanelWidget*                                ButtonToShow                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UPanelWidget*                                ButtonToHide                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UTribeManagerUI_C::SetupSwitchButtons(class UWidget* TextureEffectToHide, class UWidget* TextureEffectToShow, class UPanelWidget* ButtonToShow, class UPanelWidget* ButtonToHide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TribeManagerUI.TribeManagerUI_C.SetupSwitchButtons");
		
		UTribeManagerUI_C_SetupSwitchButtons_Params params {};
		params.TextureEffectToHide = TextureEffectToHide;
		params.TextureEffectToShow = TextureEffectToShow;
		params.ButtonToShow = ButtonToShow;
		params.ButtonToHide = ButtonToHide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TribeManagerUI.TribeManagerUI_C.BndEvt__TribeManagerUI_GoToGroups_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTribeManagerUI_C::BndEvt__TribeManagerUI_GoToGroups_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TribeManagerUI.TribeManagerUI_C.BndEvt__TribeManagerUI_GoToGroups_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UTribeManagerUI_C_BndEvt__TribeManagerUI_GoToGroups_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TribeManagerUI.TribeManagerUI_C.BndEvt__TribeManagerUI_GoToTribes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTribeManagerUI_C::BndEvt__TribeManagerUI_GoToTribes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TribeManagerUI.TribeManagerUI_C.BndEvt__TribeManagerUI_GoToTribes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UTribeManagerUI_C_BndEvt__TribeManagerUI_GoToTribes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TribeManagerUI.TribeManagerUI_C.BndEvt__TribeManagerUI_GoToAlliances_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTribeManagerUI_C::BndEvt__TribeManagerUI_GoToAlliances_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TribeManagerUI.TribeManagerUI_C.BndEvt__TribeManagerUI_GoToAlliances_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UTribeManagerUI_C_BndEvt__TribeManagerUI_GoToAlliances_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TribeManagerUI.TribeManagerUI_C.BndEvt__TribeManagerUI_GoToGovernance_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTribeManagerUI_C::BndEvt__TribeManagerUI_GoToGovernance_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TribeManagerUI.TribeManagerUI_C.BndEvt__TribeManagerUI_GoToGovernance_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UTribeManagerUI_C_BndEvt__TribeManagerUI_GoToGovernance_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TribeManagerUI.TribeManagerUI_C.BndEvt__TribeManagerUI_GoToWarfare_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTribeManagerUI_C::BndEvt__TribeManagerUI_GoToWarfare_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TribeManagerUI.TribeManagerUI_C.BndEvt__TribeManagerUI_GoToWarfare_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UTribeManagerUI_C_BndEvt__TribeManagerUI_GoToWarfare_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TribeManagerUI.TribeManagerUI_C.BndEvt__TribeManagerUI_GoToTribeLog_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTribeManagerUI_C::BndEvt__TribeManagerUI_GoToTribeLog_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TribeManagerUI.TribeManagerUI_C.BndEvt__TribeManagerUI_GoToTribeLog_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UTribeManagerUI_C_BndEvt__TribeManagerUI_GoToTribeLog_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TribeManagerUI.TribeManagerUI_C.BPRankGroupIndexSelected
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTribeManagerUI_C::BPRankGroupIndexSelected(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TribeManagerUI.TribeManagerUI_C.BPRankGroupIndexSelected");
		
		UTribeManagerUI_C_BPRankGroupIndexSelected_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TribeManagerUI.TribeManagerUI_C.BPRankGroupIndexApplied
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTribeManagerUI_C::BPRankGroupIndexApplied(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TribeManagerUI.TribeManagerUI_C.BPRankGroupIndexApplied");
		
		UTribeManagerUI_C_BPRankGroupIndexApplied_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TribeManagerUI.TribeManagerUI_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UTribeManagerUI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TribeManagerUI.TribeManagerUI_C.Construct");
		
		UTribeManagerUI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TribeManagerUI.TribeManagerUI_C.ExecuteUbergraph_TribeManagerUI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTribeManagerUI_C::ExecuteUbergraph_TribeManagerUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TribeManagerUI.TribeManagerUI_C.ExecuteUbergraph_TribeManagerUI");
		
		UTribeManagerUI_C_ExecuteUbergraph_TribeManagerUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTribeManagerUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTribeManagerUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TribeManagerUI.TribeManagerUI_C");
		return ptr;
	}

}


