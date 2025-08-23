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
	 * 		Name   -> Function HUDNotificationPanel.HUDNotificationPanel_C.GetStatusStateNotifications
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDNotificationPanel_C::GetStatusStateNotifications(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNotificationPanel.HUDNotificationPanel_C.GetStatusStateNotifications");
		
		UHUDNotificationPanel_C_GetStatusStateNotifications_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function HUDNotificationPanel.HUDNotificationPanel_C.ShouldShowExtendedInfoButton
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FHUDNotificationEntry_Struct>        TargetArray                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	bool UHUDNotificationPanel_C::ShouldShowExtendedInfoButton(TArray<struct FHUDNotificationEntry_Struct> TargetArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNotificationPanel.HUDNotificationPanel_C.ShouldShowExtendedInfoButton");
		
		UHUDNotificationPanel_C_ShouldShowExtendedInfoButton_Params params {};
		params.TargetArray = TargetArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function HUDNotificationPanel.HUDNotificationPanel_C.HaveSameNotificationStyle
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHUDNotificationEntry_Struct                HUDNotificationEntry_Struct                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 * 		struct FHUDNotificationEntry_Struct                HUDNotificationEntry_Struct2                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	 */
	bool UHUDNotificationPanel_C::HaveSameNotificationStyle(const struct FHUDNotificationEntry_Struct& HUDNotificationEntry_Struct, const struct FHUDNotificationEntry_Struct& HUDNotificationEntry_Struct2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNotificationPanel.HUDNotificationPanel_C.HaveSameNotificationStyle");
		
		UHUDNotificationPanel_C_HaveSameNotificationStyle_Params params {};
		params.HUDNotificationEntry_Struct = HUDNotificationEntry_Struct;
		params.HUDNotificationEntry_Struct2 = HUDNotificationEntry_Struct2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function HUDNotificationPanel.HUDNotificationPanel_C.UpdateNotifications
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UHUDNotificationPanel_C::UpdateNotifications()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNotificationPanel.HUDNotificationPanel_C.UpdateNotifications");
		
		UHUDNotificationPanel_C_UpdateNotifications_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function HUDNotificationPanel.HUDNotificationPanel_C.UpdateVisibilitySmallNotifications
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UHUDNotificationPanel_C::UpdateVisibilitySmallNotifications()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNotificationPanel.HUDNotificationPanel_C.UpdateVisibilitySmallNotifications");
		
		UHUDNotificationPanel_C_UpdateVisibilitySmallNotifications_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function HUDNotificationPanel.HUDNotificationPanel_C.Get Quantity Type Notifications Repeated
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHUDNotificationEntry_Struct                notification                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UPanelWidget*                                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Quantity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UPrimalUserWidget*>                   ReturnHudNotiifcation1                                     (Parm, OutParm, ContainsInstancedReference)
	 */
	void UHUDNotificationPanel_C::GetQuantityTypeNotificationsRepeated(const struct FHUDNotificationEntry_Struct& notification, class UPanelWidget* Widget, int32_t* Quantity, TArray<class UPrimalUserWidget*>* ReturnHudNotiifcation1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNotificationPanel.HUDNotificationPanel_C.Get Quantity Type Notifications Repeated");
		
		UHUDNotificationPanel_C_GetQuantityTypeNotificationsRepeated_Params params {};
		params.notification = notification;
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Quantity != nullptr)
			*Quantity = params.Quantity;
		if (ReturnHudNotiifcation1 != nullptr)
			*ReturnHudNotiifcation1 = params.ReturnHudNotiifcation1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function HUDNotificationPanel.HUDNotificationPanel_C.CreateSmallEntryNotification
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHUDNotificationEntry_Struct                entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            Quantity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDNotificationPanel_C::CreateSmallEntryNotification(const struct FHUDNotificationEntry_Struct& entry, int32_t Quantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNotificationPanel.HUDNotificationPanel_C.CreateSmallEntryNotification");
		
		UHUDNotificationPanel_C_CreateSmallEntryNotification_Params params {};
		params.entry = entry;
		params.Quantity = Quantity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function HUDNotificationPanel.HUDNotificationPanel_C.CreateEntryWidgetForNotification
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHUDNotificationEntry_Struct                entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class UUniformGridPanel*                           ToGridPanel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               PreventAnim                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FHUDNotificationEntry_Struct>        Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UHUDNotificationPanel_C::CreateEntryWidgetForNotification(const struct FHUDNotificationEntry_Struct& entry, class UUniformGridPanel* ToGridPanel, bool PreventAnim, TArray<struct FHUDNotificationEntry_Struct>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNotificationPanel.HUDNotificationPanel_C.CreateEntryWidgetForNotification");
		
		UHUDNotificationPanel_C_CreateEntryWidgetForNotification_Params params {};
		params.entry = entry;
		params.ToGridPanel = ToGridPanel;
		params.PreventAnim = PreventAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function HUDNotificationPanel.HUDNotificationPanel_C.AddHUDNotificationEntry
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      String                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FColor                                      Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInterface*                          Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             DisplayTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             DisplayScale                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsSingleton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MessageTypeID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Priority                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDNotificationPanel_C::AddHUDNotificationEntry(const class FString& String, const struct FColor& Color, class UMaterialInterface* Material, class UTexture2D* Texture, double DisplayTime, double DisplayScale, bool bIsSingleton, int32_t MessageTypeID, int32_t Priority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNotificationPanel.HUDNotificationPanel_C.AddHUDNotificationEntry");
		
		UHUDNotificationPanel_C_AddHUDNotificationEntry_Params params {};
		params.String = String;
		params.Color = Color;
		params.Material = Material;
		params.Texture = Texture;
		params.DisplayTime = DisplayTime;
		params.DisplayScale = DisplayScale;
		params.bIsSingleton = bIsSingleton;
		params.MessageTypeID = MessageTypeID;
		params.Priority = Priority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function HUDNotificationPanel.HUDNotificationPanel_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDNotificationPanel_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNotificationPanel.HUDNotificationPanel_C.Tick");
		
		UHUDNotificationPanel_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function HUDNotificationPanel.HUDNotificationPanel_C.OnGamepadActiveChangedBP
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsGamepadActive                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDNotificationPanel_C::OnGamepadActiveChangedBP(bool bIsGamepadActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNotificationPanel.HUDNotificationPanel_C.OnGamepadActiveChangedBP");
		
		UHUDNotificationPanel_C_OnGamepadActiveChangedBP_Params params {};
		params.bIsGamepadActive = bIsGamepadActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function HUDNotificationPanel.HUDNotificationPanel_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UHUDNotificationPanel_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNotificationPanel.HUDNotificationPanel_C.Construct");
		
		UHUDNotificationPanel_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function HUDNotificationPanel.HUDNotificationPanel_C.DoExtraScalingForSplitscreen
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   PlayerSize                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDNotificationPanel_C::DoExtraScalingForSplitscreen(const struct FVector2D& PlayerSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNotificationPanel.HUDNotificationPanel_C.DoExtraScalingForSplitscreen");
		
		UHUDNotificationPanel_C_DoExtraScalingForSplitscreen_Params params {};
		params.PlayerSize = PlayerSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function HUDNotificationPanel.HUDNotificationPanel_C.ExecuteUbergraph_HUDNotificationPanel
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUDNotificationPanel_C::ExecuteUbergraph_HUDNotificationPanel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDNotificationPanel.HUDNotificationPanel_C.ExecuteUbergraph_HUDNotificationPanel");
		
		UHUDNotificationPanel_C_ExecuteUbergraph_HUDNotificationPanel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUDNotificationPanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUDNotificationPanel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDNotificationPanel.HUDNotificationPanel_C");
		return ptr;
	}

}


