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
	 * 		Name   -> Function HUDNotificationEntrySmall.HUDNotificationEntrySmall_C.Get_QuantityText_Text
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class FText UHUDNotificationEntrySmall_C::Get_QuantityText_Text()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNotificationEntrySmall.HUDNotificationEntrySmall_C.Get_QuantityText_Text");
		
		UHUDNotificationEntrySmall_C_Get_QuantityText_Text_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function HUDNotificationEntrySmall.HUDNotificationEntrySmall_C.CheckDestroy
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UHUDNotificationEntrySmall_C::CheckDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNotificationEntrySmall.HUDNotificationEntrySmall_C.CheckDestroy");
		
		UHUDNotificationEntrySmall_C_CheckDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function HUDNotificationEntrySmall.HUDNotificationEntrySmall_C.UpdateProgressData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UHUDNotificationEntrySmall_C::UpdateProgressData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNotificationEntrySmall.HUDNotificationEntrySmall_C.UpdateProgressData");
		
		UHUDNotificationEntrySmall_C_UpdateProgressData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function HUDNotificationEntrySmall.HUDNotificationEntrySmall_C.Get_Image_NotifIcon_Brush
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UTexture2D* UHUDNotificationEntrySmall_C::Get_Image_NotifIcon_Brush()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNotificationEntrySmall.HUDNotificationEntrySmall_C.Get_Image_NotifIcon_Brush");
		
		UHUDNotificationEntrySmall_C_Get_Image_NotifIcon_Brush_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function HUDNotificationEntrySmall.HUDNotificationEntrySmall_C.InitWidget
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHUDNotificationEntry_Struct                entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               IsSmallNotification                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FHUDNotificationEntry_Struct>        Entries                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UHUDNotificationEntrySmall_C::InitWidget(const struct FHUDNotificationEntry_Struct& entry, bool IsSmallNotification, TArray<struct FHUDNotificationEntry_Struct>* Entries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNotificationEntrySmall.HUDNotificationEntrySmall_C.InitWidget");
		
		UHUDNotificationEntrySmall_C_InitWidget_Params params {};
		params.entry = entry;
		params.IsSmallNotification = IsSmallNotification;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Entries != nullptr)
			*Entries = params.Entries;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function HUDNotificationEntrySmall.HUDNotificationEntrySmall_C.GetNotifStringColor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor UHUDNotificationEntrySmall_C::GetNotifStringColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNotificationEntrySmall.HUDNotificationEntrySmall_C.GetNotifStringColor");
		
		UHUDNotificationEntrySmall_C_GetNotifStringColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUDNotificationEntrySmall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUDNotificationEntrySmall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDNotificationEntrySmall.HUDNotificationEntrySmall_C");
		return ptr;
	}

}


