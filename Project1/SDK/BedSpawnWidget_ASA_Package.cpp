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
	 * 		Name   -> Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.SetupBedIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  BedIcon                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBedSpawnWidget_ASA_C::SetupBedIcon(class UTexture2D* BedIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.SetupBedIcon");
		
		UBedSpawnWidget_ASA_C_SetupBedIcon_Params params {};
		params.BedIcon = BedIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.Get_Image_DefaultDestination_ColorAndOpacity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor UBedSpawnWidget_ASA_C::Get_Image_DefaultDestination_ColorAndOpacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.Get_Image_DefaultDestination_ColorAndOpacity");
		
		UBedSpawnWidget_ASA_C_Get_Image_DefaultDestination_ColorAndOpacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.BndEvt__SpawnRegionWidget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBedSpawnWidget_ASA_C::BndEvt__SpawnRegionWidget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.BndEvt__SpawnRegionWidget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UBedSpawnWidget_ASA_C_BndEvt__SpawnRegionWidget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.SetSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBedSpawnWidget_ASA_C::SetSelected(bool Selected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.SetSelected");
		
		UBedSpawnWidget_ASA_C_SetSelected_Params params {};
		params.Selected = Selected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.SetupBed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SpawnPointID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             NextAllowedUseTime                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAllowedUse                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      BedName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bIsDefaultDest                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBedSpawnWidget_ASA_C::SetupBed(int32_t SpawnPointID, double NextAllowedUseTime, bool bAllowedUse, const struct FVector& Location, const class FString& BedName, bool bIsDefaultDest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.SetupBed");
		
		UBedSpawnWidget_ASA_C_SetupBed_Params params {};
		params.SpawnPointID = SpawnPointID;
		params.NextAllowedUseTime = NextAllowedUseTime;
		params.bAllowedUse = bAllowedUse;
		params.Location = Location;
		params.BedName = BedName;
		params.bIsDefaultDest = bIsDefaultDest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.SetQuantityBeds
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Quantity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBedSpawnWidget_ASA_C::SetQuantityBeds(int32_t Quantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.SetQuantityBeds");
		
		UBedSpawnWidget_ASA_C_SetQuantityBeds_Params params {};
		params.Quantity = Quantity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBedSpawnWidget_ASA_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.Construct");
		
		UBedSpawnWidget_ASA_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.ExecuteUbergraph_BedSpawnWidget_ASA
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBedSpawnWidget_ASA_C::ExecuteUbergraph_BedSpawnWidget_ASA(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.ExecuteUbergraph_BedSpawnWidget_ASA");
		
		UBedSpawnWidget_ASA_C_ExecuteUbergraph_BedSpawnWidget_ASA_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.Clicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBedSpawnWidget_ASA_C*                       BedSpawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBedSpawnWidget_ASA_C::Clicked__DelegateSignature(class UBedSpawnWidget_ASA_C* BedSpawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.Clicked__DelegateSignature");
		
		UBedSpawnWidget_ASA_C_Clicked__DelegateSignature_Params params {};
		params.BedSpawn = BedSpawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBedSpawnWidget_ASA_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBedSpawnWidget_ASA_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BedSpawnWidget_ASA.BedSpawnWidget_ASA_C");
		return ptr;
	}

}


