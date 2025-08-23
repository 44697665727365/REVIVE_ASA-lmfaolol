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
	 * 		Name   -> Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.Handle Clicking Track Entry
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               clickwastotrack                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapMarkWidget_ASA_C::HandleClickingTrackEntry(bool* Success, bool* clickwastotrack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.Handle Clicking Track Entry");
		
		UMapMarkWidget_ASA_C_HandleClickingTrackEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (clickwastotrack != nullptr)
			*clickwastotrack = params.clickwastotrack;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.Handle Clicking Death Marks
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               clickwastotrack                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapMarkWidget_ASA_C::HandleClickingDeathMarks(bool* Success, bool* clickwastotrack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.Handle Clicking Death Marks");
		
		UMapMarkWidget_ASA_C_HandleClickingDeathMarks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (clickwastotrack != nullptr)
			*clickwastotrack = params.clickwastotrack;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.OnPreviewMouseButtonDown
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UMapMarkWidget_ASA_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.OnPreviewMouseButtonDown");
		
		UMapMarkWidget_ASA_C_OnPreviewMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.SetProgressPercent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Percent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapMarkWidget_ASA_C::SetProgressPercent(double Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.SetProgressPercent");
		
		UMapMarkWidget_ASA_C_SetProgressPercent_Params params {};
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.IsTracking
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UMapMarkWidget_ASA_C::IsTracking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.IsTracking");
		
		UMapMarkWidget_ASA_C_IsTracking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.Init
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMapMarkWidget_ASA_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.Init");
		
		UMapMarkWidget_ASA_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.CanTrackMark
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Can                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapMarkWidget_ASA_C::CanTrackMark(bool* Can)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.CanTrackMark");
		
		UMapMarkWidget_ASA_C_CanTrackMark_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Can != nullptr)
			*Can = params.Can;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.UpdateVisualStyle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMapMarkWidget_ASA_C::UpdateVisualStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.UpdateVisualStyle");
		
		UMapMarkWidget_ASA_C_UpdateVisualStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.SetTrackStyle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMapMarkWidget_ASA_C::SetTrackStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.SetTrackStyle");
		
		UMapMarkWidget_ASA_C_SetTrackStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.SetNormalStyle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMapMarkWidget_ASA_C::SetNormalStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.SetNormalStyle");
		
		UMapMarkWidget_ASA_C_SetNormalStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.SetTextAndBG
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      NewText                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                BGColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapMarkWidget_ASA_C::SetTextAndBG(const class FString& NewText, const struct FLinearColor& BGColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.SetTextAndBG");
		
		UMapMarkWidget_ASA_C_SetTextAndBG_Params params {};
		params.NewText = NewText;
		params.BGColor = BGColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.SetHoverStyle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UMapMarkWidget_ASA_C::SetHoverStyle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.SetHoverStyle");
		
		UMapMarkWidget_ASA_C_SetHoverStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UMapMarkWidget_ASA_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.Construct");
		
		UMapMarkWidget_ASA_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapMarkWidget_ASA_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.PreConstruct");
		
		UMapMarkWidget_ASA_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.RefreshConstruct
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UMapMarkWidget_ASA_C::RefreshConstruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.RefreshConstruct");
		
		UMapMarkWidget_ASA_C_RefreshConstruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.BndEvt__MapMarkWidget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UMapMarkWidget_ASA_C::BndEvt__MapMarkWidget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.BndEvt__MapMarkWidget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UMapMarkWidget_ASA_C_BndEvt__MapMarkWidget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.UpdateTextSize
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapMarkWidget_ASA_C::UpdateTextSize(double Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.UpdateTextSize");
		
		UMapMarkWidget_ASA_C_UpdateTextSize_Params params {};
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.ExecuteUbergraph_MapMarkWidget_ASA
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapMarkWidget_ASA_C::ExecuteUbergraph_MapMarkWidget_ASA(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.ExecuteUbergraph_MapMarkWidget_ASA");
		
		UMapMarkWidget_ASA_C_ExecuteUbergraph_MapMarkWidget_ASA_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.HaandleEditMark__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMinimapMark                                Mark                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMapMarkWidget_ASA_C::HaandleEditMark__DelegateSignature(const struct FMinimapMark& Mark)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.HaandleEditMark__DelegateSignature");
		
		UMapMarkWidget_ASA_C_HaandleEditMark__DelegateSignature_Params params {};
		params.Mark = Mark;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.HandleTracking__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMinimapMark                                Mark                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsTracking                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMapMarkWidget_ASA_C::HandleTracking__DelegateSignature(const struct FMinimapMark& Mark, bool IsTracking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MapMarkWidget_ASA.MapMarkWidget_ASA_C.HandleTracking__DelegateSignature");
		
		UMapMarkWidget_ASA_C_HandleTracking__DelegateSignature_Params params {};
		params.Mark = Mark;
		params.IsTracking = IsTracking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMapMarkWidget_ASA_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMapMarkWidget_ASA_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MapMarkWidget_ASA.MapMarkWidget_ASA_C");
		return ptr;
	}

}


