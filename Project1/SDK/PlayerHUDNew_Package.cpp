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
	 * 		Name   -> Function PlayerHUDNew.PlayerHUDNew_C.GetAllChildRecursively
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     oneWidget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UWidget*>                             AllChildWidget                                             (Parm, OutParm, ContainsInstancedReference)
	 */
	void UPlayerHUDNew_C::GetAllChildRecursively(class UWidget* oneWidget, TArray<class UWidget*>* AllChildWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUDNew.PlayerHUDNew_C.GetAllChildRecursively");
		
		UPlayerHUDNew_C_GetAllChildRecursively_Params params {};
		params.oneWidget = oneWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllChildWidget != nullptr)
			*AllChildWidget = params.AllChildWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerHUDNew.PlayerHUDNew_C.FixConsoleIcons
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerHUDNew_C::FixConsoleIcons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUDNew.PlayerHUDNew_C.FixConsoleIcons");
		
		UPlayerHUDNew_C_FixConsoleIcons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerHUDNew.PlayerHUDNew_C.UpdateRunningIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UPlayerHUDNew_C::UpdateRunningIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUDNew.PlayerHUDNew_C.UpdateRunningIcon");
		
		UPlayerHUDNew_C_UpdateRunningIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerHUDNew.PlayerHUDNew_C.SetElementBarBoostIconHidden
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isHidden                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHUDNew_C::SetElementBarBoostIconHidden(bool isHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUDNew.PlayerHUDNew_C.SetElementBarBoostIconHidden");
		
		UPlayerHUDNew_C_SetElementBarBoostIconHidden_Params params {};
		params.isHidden = isHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerHUDNew.PlayerHUDNew_C.OnFastInventoryChangedBP
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bActivate                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHUDNew_C::OnFastInventoryChangedBP(bool bActivate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUDNew.PlayerHUDNew_C.OnFastInventoryChangedBP");
		
		UPlayerHUDNew_C_OnFastInventoryChangedBP_Params params {};
		params.bActivate = bActivate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerHUDNew.PlayerHUDNew_C.OnGamepadActiveChangedBP
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsGamepadActive                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHUDNew_C::OnGamepadActiveChangedBP(bool bIsGamepadActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUDNew.PlayerHUDNew_C.OnGamepadActiveChangedBP");
		
		UPlayerHUDNew_C_OnGamepadActiveChangedBP_Params params {};
		params.bIsGamepadActive = bIsGamepadActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerHUDNew.PlayerHUDNew_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UPlayerHUDNew_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUDNew.PlayerHUDNew_C.Construct");
		
		UPlayerHUDNew_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerHUDNew.PlayerHUDNew_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHUDNew_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUDNew.PlayerHUDNew_C.Tick");
		
		UPlayerHUDNew_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerHUDNew.PlayerHUDNew_C.UpdatedKeybindingBP
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UPlayerHUDNew_C::UpdatedKeybindingBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUDNew.PlayerHUDNew_C.UpdatedKeybindingBP");
		
		UPlayerHUDNew_C_UpdatedKeybindingBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerHUDNew.PlayerHUDNew_C.ExecuteUbergraph_PlayerHUDNew
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHUDNew_C::ExecuteUbergraph_PlayerHUDNew(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUDNew.PlayerHUDNew_C.ExecuteUbergraph_PlayerHUDNew");
		
		UPlayerHUDNew_C_ExecuteUbergraph_PlayerHUDNew_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerHUDNew_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerHUDNew_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerHUDNew.PlayerHUDNew_C");
		return ptr;
	}

}


