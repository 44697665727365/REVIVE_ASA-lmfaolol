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
	 * 		Name   -> Function SpawnRegionWidget_ASA.SpawnRegionWidget_ASA_C.BndEvt__SpawnRegionWidget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpawnRegionWidget_ASA_C::BndEvt__SpawnRegionWidget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnRegionWidget_ASA.SpawnRegionWidget_ASA_C.BndEvt__SpawnRegionWidget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		USpawnRegionWidget_ASA_C_BndEvt__SpawnRegionWidget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnRegionWidget_ASA.SpawnRegionWidget_ASA_C.SetSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnRegionWidget_ASA_C::SetSelected(bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnRegionWidget_ASA.SpawnRegionWidget_ASA_C.SetSelected");
		
		USpawnRegionWidget_ASA_C_SetSelected_Params params {};
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnRegionWidget_ASA.SpawnRegionWidget_ASA_C.SetDifficult
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Difficult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnRegionWidget_ASA_C::SetDifficult(int32_t Difficult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnRegionWidget_ASA.SpawnRegionWidget_ASA_C.SetDifficult");
		
		USpawnRegionWidget_ASA_C_SetDifficult_Params params {};
		params.Difficult = Difficult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnRegionWidget_ASA.SpawnRegionWidget_ASA_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void USpawnRegionWidget_ASA_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnRegionWidget_ASA.SpawnRegionWidget_ASA_C.Construct");
		
		USpawnRegionWidget_ASA_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnRegionWidget_ASA.SpawnRegionWidget_ASA_C.ExecuteUbergraph_SpawnRegionWidget_ASA
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnRegionWidget_ASA_C::ExecuteUbergraph_SpawnRegionWidget_ASA(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnRegionWidget_ASA.SpawnRegionWidget_ASA_C.ExecuteUbergraph_SpawnRegionWidget_ASA");
		
		USpawnRegionWidget_ASA_C_ExecuteUbergraph_SpawnRegionWidget_ASA_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SpawnRegionWidget_ASA.SpawnRegionWidget_ASA_C.Clicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USpawnRegionWidget_ASA_C*                    SpawnRegion                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void USpawnRegionWidget_ASA_C::Clicked__DelegateSignature(class USpawnRegionWidget_ASA_C* SpawnRegion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpawnRegionWidget_ASA.SpawnRegionWidget_ASA_C.Clicked__DelegateSignature");
		
		USpawnRegionWidget_ASA_C_Clicked__DelegateSignature_Params params {};
		params.SpawnRegion = SpawnRegion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnRegionWidget_ASA_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnRegionWidget_ASA_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SpawnRegionWidget_ASA.SpawnRegionWidget_ASA_C");
		return ptr;
	}

}


