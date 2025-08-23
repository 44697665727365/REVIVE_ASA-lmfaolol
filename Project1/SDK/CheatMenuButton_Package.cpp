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
	 * 		Name   -> Function CheatMenuButton.CheatMenuButton_C.OnLoaded_376A4AD64ABB8961D41479A9CEBAB5A0
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UCheatMenuButton_C::OnLoaded_376A4AD64ABB8961D41479A9CEBAB5A0(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CheatMenuButton.CheatMenuButton_C.OnLoaded_376A4AD64ABB8961D41479A9CEBAB5A0");
		
		UCheatMenuButton_C_OnLoaded_376A4AD64ABB8961D41479A9CEBAB5A0_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function CheatMenuButton.CheatMenuButton_C.OnLoaded_E74A95AD4E858FEFB820B09140E2E827
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UCheatMenuButton_C::OnLoaded_E74A95AD4E858FEFB820B09140E2E827(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CheatMenuButton.CheatMenuButton_C.OnLoaded_E74A95AD4E858FEFB820B09140E2E827");
		
		UCheatMenuButton_C_OnLoaded_E74A95AD4E858FEFB820B09140E2E827_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function CheatMenuButton.CheatMenuButton_C.BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UCheatMenuButton_C::BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CheatMenuButton.CheatMenuButton_C.BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature");
		
		UCheatMenuButton_C_BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function CheatMenuButton.CheatMenuButton_C.ExecuteUbergraph_CheatMenuButton
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCheatMenuButton_C::ExecuteUbergraph_CheatMenuButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CheatMenuButton.CheatMenuButton_C.ExecuteUbergraph_CheatMenuButton");
		
		UCheatMenuButton_C_ExecuteUbergraph_CheatMenuButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCheatMenuButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCheatMenuButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CheatMenuButton.CheatMenuButton_C");
		return ptr;
	}

}


