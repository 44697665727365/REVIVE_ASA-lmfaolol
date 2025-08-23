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
	 * 		Name   -> Function SubtitlesUI.SubtitlesUI_C.GetSubtitleColors
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FSlateColor>                         Colors                                                     (Parm, OutParm)
	 */
	void USubtitlesUI_C::GetSubtitleColors(TArray<struct FSlateColor>* Colors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubtitlesUI.SubtitlesUI_C.GetSubtitleColors");
		
		USubtitlesUI_C_GetSubtitleColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Colors != nullptr)
			*Colors = params.Colors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SubtitlesUI.SubtitlesUI_C.ProcessDynamicMaterialForDialogueIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USubtitlesUI_C::ProcessDynamicMaterialForDialogueIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubtitlesUI.SubtitlesUI_C.ProcessDynamicMaterialForDialogueIcon");
		
		USubtitlesUI_C_ProcessDynamicMaterialForDialogueIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SubtitlesUI.SubtitlesUI_C.OnShowSubtitles
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void USubtitlesUI_C::OnShowSubtitles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubtitlesUI.SubtitlesUI_C.OnShowSubtitles");
		
		USubtitlesUI_C_OnShowSubtitles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SubtitlesUI.SubtitlesUI_C.GetSubtitles
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FString>                              Subtitles                                                  (Parm, OutParm)
	 */
	void USubtitlesUI_C::GetSubtitles(TArray<class FString>* Subtitles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubtitlesUI.SubtitlesUI_C.GetSubtitles");
		
		USubtitlesUI_C_GetSubtitles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Subtitles != nullptr)
			*Subtitles = params.Subtitles;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SubtitlesUI.SubtitlesUI_C.ShowSubtitleAtIndex
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USubtitlesUI_C::ShowSubtitleAtIndex(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubtitlesUI.SubtitlesUI_C.ShowSubtitleAtIndex");
		
		USubtitlesUI_C_ShowSubtitleAtIndex_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SubtitlesUI.SubtitlesUI_C.FadeOutSubtitles
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USubtitlesUI_C::FadeOutSubtitles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubtitlesUI.SubtitlesUI_C.FadeOutSubtitles");
		
		USubtitlesUI_C_FadeOutSubtitles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SubtitlesUI.SubtitlesUI_C.AddedToViewport
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void USubtitlesUI_C::AddedToViewport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubtitlesUI.SubtitlesUI_C.AddedToViewport");
		
		USubtitlesUI_C_AddedToViewport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SubtitlesUI.SubtitlesUI_C.ShowNextSubtitle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void USubtitlesUI_C::ShowNextSubtitle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubtitlesUI.SubtitlesUI_C.ShowNextSubtitle");
		
		USubtitlesUI_C_ShowNextSubtitle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SubtitlesUI.SubtitlesUI_C.ResetToStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        SubtitleSet                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USubtitlesUI_C::ResetToStart(const class FName& SubtitleSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubtitlesUI.SubtitlesUI_C.ResetToStart");
		
		USubtitlesUI_C_ResetToStart_Params params {};
		params.SubtitleSet = SubtitleSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SubtitlesUI.SubtitlesUI_C.OnHideSubtitles
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void USubtitlesUI_C::OnHideSubtitles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubtitlesUI.SubtitlesUI_C.OnHideSubtitles");
		
		USubtitlesUI_C_OnHideSubtitles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SubtitlesUI.SubtitlesUI_C.ExecuteUbergraph_SubtitlesUI
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USubtitlesUI_C::ExecuteUbergraph_SubtitlesUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SubtitlesUI.SubtitlesUI_C.ExecuteUbergraph_SubtitlesUI");
		
		USubtitlesUI_C_ExecuteUbergraph_SubtitlesUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USubtitlesUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USubtitlesUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SubtitlesUI.SubtitlesUI_C");
		return ptr;
	}

}


