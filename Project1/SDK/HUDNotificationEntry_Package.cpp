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
	 * 		Name   -> Function HUDNotificationEntry.HUDNotificationEntry_C.SetupButtonExtendedHUD
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               show                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Keybinding                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHUDNotificationEntry_C::SetupButtonExtendedHUD(bool show, class UTexture2D* Icon, const class FText& Keybinding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNotificationEntry.HUDNotificationEntry_C.SetupButtonExtendedHUD");
		
		UHUDNotificationEntry_C_SetupButtonExtendedHUD_Params params {};
		params.show = show;
		params.Icon = Icon;
		params.Keybinding = Keybinding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function HUDNotificationEntry.HUDNotificationEntry_C.DestroyWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UHUDNotificationEntry_C::DestroyWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNotificationEntry.HUDNotificationEntry_C.DestroyWidget");
		
		UHUDNotificationEntry_C_DestroyWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function HUDNotificationEntry.HUDNotificationEntry_C.InitWidget
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHUDNotificationEntry_Struct                entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               PreventAnim                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FHUDNotificationEntry_Struct>        Entries                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               ShowButtonForInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  ButtonTex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        KBM_ButtonName                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHUDNotificationEntry_C::InitWidget(const struct FHUDNotificationEntry_Struct& entry, bool PreventAnim, TArray<struct FHUDNotificationEntry_Struct>* Entries, bool ShowButtonForInfo, class UTexture2D* ButtonTex, const class FText& KBM_ButtonName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNotificationEntry.HUDNotificationEntry_C.InitWidget");
		
		UHUDNotificationEntry_C_InitWidget_Params params {};
		params.entry = entry;
		params.PreventAnim = PreventAnim;
		params.ShowButtonForInfo = ShowButtonForInfo;
		params.ButtonTex = ButtonTex;
		params.KBM_ButtonName = KBM_ButtonName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Entries != nullptr)
			*Entries = params.Entries;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function HUDNotificationEntry.HUDNotificationEntry_C.InitFadeAnim
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               PreventAnim                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDNotificationEntry_C::InitFadeAnim(bool PreventAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNotificationEntry.HUDNotificationEntry_C.InitFadeAnim");
		
		UHUDNotificationEntry_C_InitFadeAnim_Params params {};
		params.PreventAnim = PreventAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function HUDNotificationEntry.HUDNotificationEntry_C.ResizeEntry
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UHUDNotificationEntry_C::ResizeEntry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNotificationEntry.HUDNotificationEntry_C.ResizeEntry");
		
		UHUDNotificationEntry_C_ResizeEntry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function HUDNotificationEntry.HUDNotificationEntry_C.GetNotifStringColor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor UHUDNotificationEntry_C::GetNotifStringColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNotificationEntry.HUDNotificationEntry_C.GetNotifStringColor");
		
		UHUDNotificationEntry_C_GetNotifStringColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function HUDNotificationEntry.HUDNotificationEntry_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDNotificationEntry_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNotificationEntry.HUDNotificationEntry_C.Tick");
		
		UHUDNotificationEntry_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function HUDNotificationEntry.HUDNotificationEntry_C.ExecuteUbergraph_HUDNotificationEntry
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDNotificationEntry_C::ExecuteUbergraph_HUDNotificationEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNotificationEntry.HUDNotificationEntry_C.ExecuteUbergraph_HUDNotificationEntry");
		
		UHUDNotificationEntry_C_ExecuteUbergraph_HUDNotificationEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUDNotificationEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUDNotificationEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDNotificationEntry.HUDNotificationEntry_C");
		return ptr;
	}

}


