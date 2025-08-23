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
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.GetSelectedActor
	 * 		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SelectedActorIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ANinjaLive_C*                                NinjaLiveActor                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::GetSelectedActor(int32_t SelectedActorIndex, class ANinjaLive_C** NinjaLiveActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.GetSelectedActor");
		
		UNinjaLiveGUI_C_GetSelectedActor_Params params {};
		params.SelectedActorIndex = SelectedActorIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NinjaLiveActor != nullptr)
			*NinjaLiveActor = params.NinjaLiveActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__ComboBoxString_89_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UNinjaLiveGUI_C::BndEvt__ComboBoxString_89_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__ComboBoxString_89_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__ComboBoxString_89_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__ComboBoxString_89_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__ComboBoxString_89_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__ComboBoxString_89_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__ComboBoxString_89_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UNinjaLiveGUI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.Construct");
		
		UNinjaLiveGUI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.PreConstruct");
		
		UNinjaLiveGUI_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__ComboBox_Presets_K2Node_ComponentBoundEvent_36_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__ComboBox_Presets_K2Node_ComponentBoundEvent_36_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__ComboBox_Presets_K2Node_ComponentBoundEvent_36_OnSelectionChangedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__ComboBox_Presets_K2Node_ComponentBoundEvent_36_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__Button_SavePreset_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UNinjaLiveGUI_C::BndEvt__Button_SavePreset_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__Button_SavePreset_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__Button_SavePreset_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__Button_DuplicatePreset_K2Node_ComponentBoundEvent_217_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UNinjaLiveGUI_C::BndEvt__Button_DuplicatePreset_K2Node_ComponentBoundEvent_217_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__Button_DuplicatePreset_K2Node_ComponentBoundEvent_217_OnButtonClickedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__Button_DuplicatePreset_K2Node_ComponentBoundEvent_217_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.OnPresetDuplicationFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDataTable*                                  DuplicatedPreset                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::OnPresetDuplicationFinished(class UDataTable* DuplicatedPreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.OnPresetDuplicationFinished");
		
		UNinjaLiveGUI_C_OnPresetDuplicationFinished_Params params {};
		params.DuplicatedPreset = DuplicatedPreset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__CheckBox_21_K2Node_ComponentBoundEvent_219_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__CheckBox_21_K2Node_ComponentBoundEvent_219_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__CheckBox_21_K2Node_ComponentBoundEvent_219_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__CheckBox_21_K2Node_ComponentBoundEvent_219_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__Main3_Button_Minimize_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UNinjaLiveGUI_C::BndEvt__Main3_Button_Minimize_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__Main3_Button_Minimize_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__Main3_Button_Minimize_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.OnInitialized
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UNinjaLiveGUI_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.OnInitialized");
		
		UNinjaLiveGUI_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.Tick");
		
		UNinjaLiveGUI_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__BP_NinjaGUI_UE5SaveWarningImageButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UNinjaLiveGUI_C::BndEvt__BP_NinjaGUI_UE5SaveWarningImageButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__BP_NinjaGUI_UE5SaveWarningImageButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__BP_NinjaGUI_UE5SaveWarningImageButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__Button_152_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UNinjaLiveGUI_C::BndEvt__Button_152_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__Button_152_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__Button_152_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__025_SimareaMoOffset_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__025_SimareaMoOffset_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__025_SimareaMoOffset_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__025_SimareaMoOffset_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__50bSpinBox_BrushRnd_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__50bSpinBox_BrushRnd_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__50bSpinBox_BrushRnd_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__50bSpinBox_BrushRnd_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__Button_ClearBuffers_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UNinjaLiveGUI_C::BndEvt__Button_ClearBuffers_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__Button_ClearBuffers_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__Button_ClearBuffers_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Divergence_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__SpinBox_Divergence_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Divergence_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__SpinBox_Divergence_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Divergence_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__SpinBox_Divergence_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Divergence_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__SpinBox_Divergence_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Speed_K2Node_ComponentBoundEvent_5_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__SpinBox_Speed_K2Node_ComponentBoundEvent_5_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Speed_K2Node_ComponentBoundEvent_5_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__SpinBox_Speed_K2Node_ComponentBoundEvent_5_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Feedback_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__SpinBox_Feedback_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Feedback_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__SpinBox_Feedback_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Feedback_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__SpinBox_Feedback_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Feedback_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__SpinBox_Feedback_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_DensityNoiseSize_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__SpinBox_DensityNoiseSize_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_DensityNoiseSize_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__SpinBox_DensityNoiseSize_K2Node_ComponentBoundEvent_7_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_DensityNoiseSize_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__SpinBox_DensityNoiseSize_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_DensityNoiseSize_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__SpinBox_DensityNoiseSize_K2Node_ComponentBoundEvent_6_OnSpinBoxValueChangedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_DensityNoiseOffset_K2Node_ComponentBoundEvent_5_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__SpinBox_DensityNoiseOffset_K2Node_ComponentBoundEvent_5_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_DensityNoiseOffset_K2Node_ComponentBoundEvent_5_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__SpinBox_DensityNoiseOffset_K2Node_ComponentBoundEvent_5_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_DensityNoiseOffset_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__SpinBox_DensityNoiseOffset_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_DensityNoiseOffset_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__SpinBox_DensityNoiseOffset_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_DensityNoiseAmp_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__SpinBox_DensityNoiseAmp_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_DensityNoiseAmp_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__SpinBox_DensityNoiseAmp_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_DensityNoiseAmp_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__SpinBox_DensityNoiseAmp_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_DensityNoiseAmp_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__SpinBox_DensityNoiseAmp_K2Node_ComponentBoundEvent_0_OnSpinBoxValueChangedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__21cSpinBox_VeloOffset_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__21cSpinBox_VeloOffset_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__21cSpinBox_VeloOffset_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__21cSpinBox_VeloOffset_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__21cSpinBox_VeloOffset_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__21cSpinBox_VeloOffset_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__21cSpinBox_VeloOffset_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__21cSpinBox_VeloOffset_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__SpinBox_0_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UNinjaLiveGUI_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__50SpinBox_BrushNoise_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__50SpinBox_BrushNoise_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__50SpinBox_BrushNoise_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__50SpinBox_BrushNoise_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Density2_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__SpinBox_Density2_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Density2_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__SpinBox_Density2_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Density3_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__SpinBox_Density3_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Density3_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__SpinBox_Density3_K2Node_ComponentBoundEvent_1_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Density4_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__SpinBox_Density4_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Density4_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__SpinBox_Density4_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__45SpinBox_VeloFromSimAreaMotion_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__45SpinBox_VeloFromSimAreaMotion_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__45SpinBox_VeloFromSimAreaMotion_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__45SpinBox_VeloFromSimAreaMotion_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__50ComboBox_NinjaOutputMaterial_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__50ComboBox_NinjaOutputMaterial_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__50ComboBox_NinjaOutputMaterial_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__50ComboBox_NinjaOutputMaterial_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__24SpinBox_DirNoise_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__24SpinBox_DirNoise_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__24SpinBox_DirNoise_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__24SpinBox_DirNoise_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__24SpinBox_DirNoise_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__24SpinBox_DirNoise_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__24SpinBox_DirNoise_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__24SpinBox_DirNoise_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__41SpinBox_BrushPuncture_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__41SpinBox_BrushPuncture_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__41SpinBox_BrushPuncture_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__41SpinBox_BrushPuncture_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Add01_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__SpinBox_Add01_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Add01_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__SpinBox_Add01_K2Node_ComponentBoundEvent_1_OnSpinBoxValueChangedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Add01_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__SpinBox_Add01_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_Add01_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__SpinBox_Add01_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__AddCheckBox1_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__AddCheckBox1_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__AddCheckBox1_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__AddCheckBox1_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__32SpinBox_DensSharpSize_K2Node_ComponentBoundEvent_41_OnSpinBoxValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__32SpinBox_DensSharpSize_K2Node_ComponentBoundEvent_41_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__32SpinBox_DensSharpSize_K2Node_ComponentBoundEvent_41_OnSpinBoxValueChangedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__32SpinBox_DensSharpSize_K2Node_ComponentBoundEvent_41_OnSpinBoxValueChangedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__31SpinBox_DensSharpen_K2Node_ComponentBoundEvent_40_OnSpinBoxValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__31SpinBox_DensSharpen_K2Node_ComponentBoundEvent_40_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__31SpinBox_DensSharpen_K2Node_ComponentBoundEvent_40_OnSpinBoxValueChangedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__31SpinBox_DensSharpen_K2Node_ComponentBoundEvent_40_OnSpinBoxValueChangedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__29SpinBox_DensHue_K2Node_ComponentBoundEvent_38_OnSpinBoxValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__29SpinBox_DensHue_K2Node_ComponentBoundEvent_38_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__29SpinBox_DensHue_K2Node_ComponentBoundEvent_38_OnSpinBoxValueChangedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__29SpinBox_DensHue_K2Node_ComponentBoundEvent_38_OnSpinBoxValueChangedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__28SpinBox_DensContrast_K2Node_ComponentBoundEvent_35_OnSpinBoxValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__28SpinBox_DensContrast_K2Node_ComponentBoundEvent_35_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__28SpinBox_DensContrast_K2Node_ComponentBoundEvent_35_OnSpinBoxValueChangedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__28SpinBox_DensContrast_K2Node_ComponentBoundEvent_35_OnSpinBoxValueChangedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__27SpinBox_DensShading_K2Node_ComponentBoundEvent_34_OnSpinBoxValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__27SpinBox_DensShading_K2Node_ComponentBoundEvent_34_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__27SpinBox_DensShading_K2Node_ComponentBoundEvent_34_OnSpinBoxValueChangedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__27SpinBox_DensShading_K2Node_ComponentBoundEvent_34_OnSpinBoxValueChangedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__25SpinBox_DensInputWeight_K2Node_ComponentBoundEvent_32_OnSpinBoxValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__25SpinBox_DensInputWeight_K2Node_ComponentBoundEvent_32_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__25SpinBox_DensInputWeight_K2Node_ComponentBoundEvent_32_OnSpinBoxValueChangedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__25SpinBox_DensInputWeight_K2Node_ComponentBoundEvent_32_OnSpinBoxValueChangedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__24SpinBox_VeloNoise_K2Node_ComponentBoundEvent_31_OnSpinBoxValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__24SpinBox_VeloNoise_K2Node_ComponentBoundEvent_31_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__24SpinBox_VeloNoise_K2Node_ComponentBoundEvent_31_OnSpinBoxValueChangedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__24SpinBox_VeloNoise_K2Node_ComponentBoundEvent_31_OnSpinBoxValueChangedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__22SpinBox_VeloAmplify_K2Node_ComponentBoundEvent_15_OnSpinBoxValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__22SpinBox_VeloAmplify_K2Node_ComponentBoundEvent_15_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__22SpinBox_VeloAmplify_K2Node_ComponentBoundEvent_15_OnSpinBoxValueChangedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__22SpinBox_VeloAmplify_K2Node_ComponentBoundEvent_15_OnSpinBoxValueChangedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__21SpinBox_VeloRotate_K2Node_ComponentBoundEvent_13_OnSpinBoxValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__21SpinBox_VeloRotate_K2Node_ComponentBoundEvent_13_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__21SpinBox_VeloRotate_K2Node_ComponentBoundEvent_13_OnSpinBoxValueChangedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__21SpinBox_VeloRotate_K2Node_ComponentBoundEvent_13_OnSpinBoxValueChangedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__20SpinBox_VeloOffsetY_K2Node_ComponentBoundEvent_12_OnSpinBoxValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__20SpinBox_VeloOffsetY_K2Node_ComponentBoundEvent_12_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__20SpinBox_VeloOffsetY_K2Node_ComponentBoundEvent_12_OnSpinBoxValueChangedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__20SpinBox_VeloOffsetY_K2Node_ComponentBoundEvent_12_OnSpinBoxValueChangedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__19SpinBox_VeloOffsetX_K2Node_ComponentBoundEvent_10_OnSpinBoxValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__19SpinBox_VeloOffsetX_K2Node_ComponentBoundEvent_10_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__19SpinBox_VeloOffsetX_K2Node_ComponentBoundEvent_10_OnSpinBoxValueChangedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__19SpinBox_VeloOffsetX_K2Node_ComponentBoundEvent_10_OnSpinBoxValueChangedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_63_K2Node_ComponentBoundEvent_228_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__SpinBox_63_K2Node_ComponentBoundEvent_228_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_63_K2Node_ComponentBoundEvent_228_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__SpinBox_63_K2Node_ComponentBoundEvent_228_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_62_K2Node_ComponentBoundEvent_121_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__SpinBox_62_K2Node_ComponentBoundEvent_121_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_62_K2Node_ComponentBoundEvent_121_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__SpinBox_62_K2Node_ComponentBoundEvent_121_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__MultiLineEditableText_MetaData_K2Node_ComponentBoundEvent_26_OnMultiLineEditableTextCommittedEvent__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__MultiLineEditableText_MetaData_K2Node_ComponentBoundEvent_26_OnMultiLineEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__MultiLineEditableText_MetaData_K2Node_ComponentBoundEvent_26_OnMultiLineEditableTextCommittedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__MultiLineEditableText_MetaData_K2Node_ComponentBoundEvent_26_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_60_K2Node_ComponentBoundEvent_225_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__SpinBox_60_K2Node_ComponentBoundEvent_225_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_60_K2Node_ComponentBoundEvent_225_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__SpinBox_60_K2Node_ComponentBoundEvent_225_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__ComboBox_NinjaTemplate3_K2Node_ComponentBoundEvent_224_OnOpeningEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UNinjaLiveGUI_C::BndEvt__ComboBox_NinjaTemplate3_K2Node_ComponentBoundEvent_224_OnOpeningEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__ComboBox_NinjaTemplate3_K2Node_ComponentBoundEvent_224_OnOpeningEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__ComboBox_NinjaTemplate3_K2Node_ComponentBoundEvent_224_OnOpeningEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__ComboBox_NinjaTemplate3_K2Node_ComponentBoundEvent_223_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__ComboBox_NinjaTemplate3_K2Node_ComponentBoundEvent_223_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__ComboBox_NinjaTemplate3_K2Node_ComponentBoundEvent_223_OnSelectionChangedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__ComboBox_NinjaTemplate3_K2Node_ComponentBoundEvent_223_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__ComboBox_NinjaTemplate2_K2Node_ComponentBoundEvent_222_OnOpeningEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UNinjaLiveGUI_C::BndEvt__ComboBox_NinjaTemplate2_K2Node_ComponentBoundEvent_222_OnOpeningEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__ComboBox_NinjaTemplate2_K2Node_ComponentBoundEvent_222_OnOpeningEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__ComboBox_NinjaTemplate2_K2Node_ComponentBoundEvent_222_OnOpeningEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__ComboBox_NinjaTemplate2_K2Node_ComponentBoundEvent_120_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__ComboBox_NinjaTemplate2_K2Node_ComponentBoundEvent_120_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__ComboBox_NinjaTemplate2_K2Node_ComponentBoundEvent_120_OnSelectionChangedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__ComboBox_NinjaTemplate2_K2Node_ComponentBoundEvent_120_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__ComboBox_NinjaTemplate1_K2Node_ComponentBoundEvent_220_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__ComboBox_NinjaTemplate1_K2Node_ComponentBoundEvent_220_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__ComboBox_NinjaTemplate1_K2Node_ComponentBoundEvent_220_OnSelectionChangedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__ComboBox_NinjaTemplate1_K2Node_ComponentBoundEvent_220_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_26_K2Node_ComponentBoundEvent_128_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__SpinBox_26_K2Node_ComponentBoundEvent_128_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_26_K2Node_ComponentBoundEvent_128_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__SpinBox_26_K2Node_ComponentBoundEvent_128_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__Button_14_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UNinjaLiveGUI_C::BndEvt__Button_14_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__Button_14_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__Button_14_K2Node_ComponentBoundEvent_123_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_22_K2Node_ComponentBoundEvent_102_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__SpinBox_22_K2Node_ComponentBoundEvent_102_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_22_K2Node_ComponentBoundEvent_102_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__SpinBox_22_K2Node_ComponentBoundEvent_102_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_23_K2Node_ComponentBoundEvent_100_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__SpinBox_23_K2Node_ComponentBoundEvent_100_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_23_K2Node_ComponentBoundEvent_100_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__SpinBox_23_K2Node_ComponentBoundEvent_100_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_19_K2Node_ComponentBoundEvent_70_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__SpinBox_19_K2Node_ComponentBoundEvent_70_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_19_K2Node_ComponentBoundEvent_70_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__SpinBox_19_K2Node_ComponentBoundEvent_70_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_18_K2Node_ComponentBoundEvent_94_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__SpinBox_18_K2Node_ComponentBoundEvent_94_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_18_K2Node_ComponentBoundEvent_94_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__SpinBox_18_K2Node_ComponentBoundEvent_94_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_17_K2Node_ComponentBoundEvent_78_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__SpinBox_17_K2Node_ComponentBoundEvent_78_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_17_K2Node_ComponentBoundEvent_78_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__SpinBox_17_K2Node_ComponentBoundEvent_78_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_16_K2Node_ComponentBoundEvent_76_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__SpinBox_16_K2Node_ComponentBoundEvent_76_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_16_K2Node_ComponentBoundEvent_76_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__SpinBox_16_K2Node_ComponentBoundEvent_76_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_15_K2Node_ComponentBoundEvent_74_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__SpinBox_15_K2Node_ComponentBoundEvent_74_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_15_K2Node_ComponentBoundEvent_74_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__SpinBox_15_K2Node_ComponentBoundEvent_74_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_14_K2Node_ComponentBoundEvent_72_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__SpinBox_14_K2Node_ComponentBoundEvent_72_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_14_K2Node_ComponentBoundEvent_72_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__SpinBox_14_K2Node_ComponentBoundEvent_72_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_12_K2Node_ComponentBoundEvent_64_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__SpinBox_12_K2Node_ComponentBoundEvent_64_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_12_K2Node_ComponentBoundEvent_64_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__SpinBox_12_K2Node_ComponentBoundEvent_64_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_11_K2Node_ComponentBoundEvent_60_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__SpinBox_11_K2Node_ComponentBoundEvent_60_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_11_K2Node_ComponentBoundEvent_60_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__SpinBox_11_K2Node_ComponentBoundEvent_60_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_10_K2Node_ComponentBoundEvent_55_OnSpinBoxValueCommittedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::BndEvt__SpinBox_10_K2Node_ComponentBoundEvent_55_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.BndEvt__SpinBox_10_K2Node_ComponentBoundEvent_55_OnSpinBoxValueCommittedEvent__DelegateSignature");
		
		UNinjaLiveGUI_C_BndEvt__SpinBox_10_K2Node_ComponentBoundEvent_55_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
		params.InValue = InValue;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.ExecuteUbergraph_NinjaLiveGUI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::ExecuteUbergraph_NinjaLiveGUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.ExecuteUbergraph_NinjaLiveGUI");
		
		UNinjaLiveGUI_C_ExecuteUbergraph_NinjaLiveGUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.OnPresetDuplicated__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDataTable*                                  DuplicatedPreset                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::OnPresetDuplicated__DelegateSignature(class UDataTable* DuplicatedPreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.OnPresetDuplicated__DelegateSignature");
		
		UNinjaLiveGUI_C_OnPresetDuplicated__DelegateSignature_Params params {};
		params.DuplicatedPreset = DuplicatedPreset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.OnDensityMapSave__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SavePaintBuffer                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::OnDensityMapSave__DelegateSignature(bool SavePaintBuffer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.OnDensityMapSave__DelegateSignature");
		
		UNinjaLiveGUI_C_OnDensityMapSave__DelegateSignature_Params params {};
		params.SavePaintBuffer = SavePaintBuffer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.OnPresetSave__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedProject                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      SelectedPreset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               OverWriteOrNot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::OnPresetSave__DelegateSignature(const class FString& SelectedProject, const class FString& SelectedPreset, bool OverWriteOrNot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.OnPresetSave__DelegateSignature");
		
		UNinjaLiveGUI_C_OnPresetSave__DelegateSignature_Params params {};
		params.SelectedProject = SelectedProject;
		params.SelectedPreset = SelectedPreset;
		params.OverWriteOrNot = OverWriteOrNot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.OnPresetSelectionChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedPreset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               ForceAutoLoadPreset                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::OnPresetSelectionChanged__DelegateSignature(const class FString& SelectedPreset, bool ForceAutoLoadPreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.OnPresetSelectionChanged__DelegateSignature");
		
		UNinjaLiveGUI_C_OnPresetSelectionChanged__DelegateSignature_Params params {};
		params.SelectedPreset = SelectedPreset;
		params.ForceAutoLoadPreset = ForceAutoLoadPreset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveGUI.NinjaLiveGUI_C.OnSelectionChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedMenuItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      SelectedActorName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveGUI_C::OnSelectionChanged__DelegateSignature(const class FString& SelectedMenuItem, const class FString& SelectedActorName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveGUI.NinjaLiveGUI_C.OnSelectionChanged__DelegateSignature");
		
		UNinjaLiveGUI_C_OnSelectionChanged__DelegateSignature_Params params {};
		params.SelectedMenuItem = SelectedMenuItem;
		params.SelectedActorName = SelectedActorName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNinjaLiveGUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNinjaLiveGUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NinjaLiveGUI.NinjaLiveGUI_C");
		return ptr;
	}

}


