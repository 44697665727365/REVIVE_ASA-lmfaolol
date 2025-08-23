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
	 * 		Name   -> Function PreviewScene_InventoryNew.PreviewScene_InventoryNew_C.UpdateFloorLocation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isFemale                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APreviewScene_InventoryNew_C::UpdateFloorLocation(bool isFemale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PreviewScene_InventoryNew.PreviewScene_InventoryNew_C.UpdateFloorLocation");
		
		APreviewScene_InventoryNew_C_UpdateFloorLocation_Params params {};
		params.isFemale = isFemale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PreviewScene_InventoryNew.PreviewScene_InventoryNew_C.FrontLightChangeWhenBelowFloor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APreviewScene_InventoryNew_C::FrontLightChangeWhenBelowFloor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PreviewScene_InventoryNew.PreviewScene_InventoryNew_C.FrontLightChangeWhenBelowFloor");
		
		APreviewScene_InventoryNew_C_FrontLightChangeWhenBelowFloor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PreviewScene_InventoryNew.PreviewScene_InventoryNew_C.RotateLightsInZWithCamera
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APreviewScene_InventoryNew_C::RotateLightsInZWithCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PreviewScene_InventoryNew.PreviewScene_InventoryNew_C.RotateLightsInZWithCamera");
		
		APreviewScene_InventoryNew_C_RotateLightsInZWithCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PreviewScene_InventoryNew.PreviewScene_InventoryNew_C.NotifyPreviewSceneUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APreviewScene_InventoryNew_C::NotifyPreviewSceneUpdated(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PreviewScene_InventoryNew.PreviewScene_InventoryNew_C.NotifyPreviewSceneUpdated");
		
		APreviewScene_InventoryNew_C_NotifyPreviewSceneUpdated_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PreviewScene_InventoryNew.PreviewScene_InventoryNew_C.NotifySetupPreviewScene
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UMeshComponent*                              ForMeshComp                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class USceneComponent*>                     ForChildComps                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class AShooterPlayerController*                    ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void APreviewScene_InventoryNew_C::NotifySetupPreviewScene(class UMeshComponent* ForMeshComp, TArray<class USceneComponent*> ForChildComps, class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PreviewScene_InventoryNew.PreviewScene_InventoryNew_C.NotifySetupPreviewScene");
		
		APreviewScene_InventoryNew_C_NotifySetupPreviewScene_Params params {};
		params.ForMeshComp = ForMeshComp;
		params.ForChildComps = ForChildComps;
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PreviewScene_InventoryNew.PreviewScene_InventoryNew_C.ExecuteUbergraph_PreviewScene_InventoryNew
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APreviewScene_InventoryNew_C::ExecuteUbergraph_PreviewScene_InventoryNew(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PreviewScene_InventoryNew.PreviewScene_InventoryNew_C.ExecuteUbergraph_PreviewScene_InventoryNew");
		
		APreviewScene_InventoryNew_C_ExecuteUbergraph_PreviewScene_InventoryNew_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APreviewScene_InventoryNew_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APreviewScene_InventoryNew_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PreviewScene_InventoryNew.PreviewScene_InventoryNew_C");
		return ptr;
	}

}


