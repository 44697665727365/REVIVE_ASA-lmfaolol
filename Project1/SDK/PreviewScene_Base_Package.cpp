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
	 * 		Name   -> Function PreviewScene_Base.PreviewScene_Base_C.SetDebugLightIntensity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             NewIntensity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APreviewScene_Base_C::SetDebugLightIntensity(double NewIntensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PreviewScene_Base.PreviewScene_Base_C.SetDebugLightIntensity");
		
		APreviewScene_Base_C_SetDebugLightIntensity_Params params {};
		params.NewIntensity = NewIntensity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PreviewScene_Base.PreviewScene_Base_C.SetDebugLightRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    NewRotation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APreviewScene_Base_C::SetDebugLightRotation(const struct FRotator& NewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PreviewScene_Base.PreviewScene_Base_C.SetDebugLightRotation");
		
		APreviewScene_Base_C_SetDebugLightRotation_Params params {};
		params.NewRotation = NewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PreviewScene_Base.PreviewScene_Base_C.DebugLights
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APreviewScene_Base_C::DebugLights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PreviewScene_Base.PreviewScene_Base_C.DebugLights");
		
		APreviewScene_Base_C_DebugLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PreviewScene_Base.PreviewScene_Base_C.UpdateFloorLocation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isFemale                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APreviewScene_Base_C::UpdateFloorLocation(bool isFemale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PreviewScene_Base.PreviewScene_Base_C.UpdateFloorLocation");
		
		APreviewScene_Base_C_UpdateFloorLocation_Params params {};
		params.isFemale = isFemale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PreviewScene_Base.PreviewScene_Base_C.NotifySetupPreviewScene
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UMeshComponent*                              ForMeshComp                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class USceneComponent*>                     ForChildComps                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class AShooterPlayerController*                    ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void APreviewScene_Base_C::NotifySetupPreviewScene(class UMeshComponent* ForMeshComp, TArray<class USceneComponent*> ForChildComps, class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PreviewScene_Base.PreviewScene_Base_C.NotifySetupPreviewScene");
		
		APreviewScene_Base_C_NotifySetupPreviewScene_Params params {};
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
	 * 		Name   -> Function PreviewScene_Base.PreviewScene_Base_C.NotifyPreviewSceneUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APreviewScene_Base_C::NotifyPreviewSceneUpdated(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PreviewScene_Base.PreviewScene_Base_C.NotifyPreviewSceneUpdated");
		
		APreviewScene_Base_C_NotifyPreviewSceneUpdated_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PreviewScene_Base.PreviewScene_Base_C.ExecuteUbergraph_PreviewScene_Base
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APreviewScene_Base_C::ExecuteUbergraph_PreviewScene_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PreviewScene_Base.PreviewScene_Base_C.ExecuteUbergraph_PreviewScene_Base");
		
		APreviewScene_Base_C_ExecuteUbergraph_PreviewScene_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APreviewScene_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APreviewScene_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PreviewScene_Base.PreviewScene_Base_C");
		return ptr;
	}

}


