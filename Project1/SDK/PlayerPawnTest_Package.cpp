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
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraDesiredPivotLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     CurrentCameraPivotLocation                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     DesiredCameraPivotLocation                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool APlayerPawnTest_C::BPOverrideCameraDesiredPivotLocation(const struct FVector& CurrentCameraPivotLocation, struct FVector* DesiredCameraPivotLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraDesiredPivotLocation");
		
		APlayerPawnTest_C_BPOverrideCameraDesiredPivotLocation_Params params {};
		params.CurrentCameraPivotLocation = CurrentCameraPivotLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DesiredCameraPivotLocation != nullptr)
			*DesiredCameraPivotLocation = params.DesiredCameraPivotLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.GetFXBloodColor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FLinearColor APlayerPawnTest_C::GetFXBloodColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.GetFXBloodColor");
		
		APlayerPawnTest_C_GetFXBloodColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.DisableFluidInteraction
	 * 		Flags  -> (Exec, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APlayerPawnTest_C::DisableFluidInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.DisableFluidInteraction");
		
		APlayerPawnTest_C_DisableFluidInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.EnableFluidInteraction
	 * 		Flags  -> (Exec, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APlayerPawnTest_C::EnableFluidInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.EnableFluidInteraction");
		
		APlayerPawnTest_C_EnableFluidInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.AssignAssetsFromVoiceCollection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APlayerPawnTest_C::AssignAssetsFromVoiceCollection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.AssignAssetsFromVoiceCollection");
		
		APlayerPawnTest_C_AssignAssetsFromVoiceCollection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraDesiredPivotRotation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    CurrentCameraPivotRotation                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    DesiredCameraPivotRotation                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	bool APlayerPawnTest_C::BPOverrideCameraDesiredPivotRotation(const struct FRotator& CurrentCameraPivotRotation, struct FRotator* DesiredCameraPivotRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraDesiredPivotRotation");
		
		APlayerPawnTest_C_BPOverrideCameraDesiredPivotRotation_Params params {};
		params.CurrentCameraPivotRotation = CurrentCameraPivotRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DesiredCameraPivotRotation != nullptr)
			*DesiredCameraPivotRotation = params.DesiredCameraPivotRotation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraDesiredPivotOffset
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPrimalCameraParams                         CameraParams                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     DesiredCameraOffset                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool APlayerPawnTest_C::BPOverrideCameraDesiredPivotOffset(const struct FPrimalCameraParams& CameraParams, struct FVector* DesiredCameraOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraDesiredPivotOffset");
		
		APlayerPawnTest_C_BPOverrideCameraDesiredPivotOffset_Params params {};
		params.CameraParams = CameraParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DesiredCameraOffset != nullptr)
			*DesiredCameraOffset = params.DesiredCameraOffset;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraPivotLocationInterpParams
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPrimalCameraParams                         CameraParams                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FPrimalCameraPivotZInterpOverrides          PivotZInterpOverrides                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		struct FPrimalCameraInterpParams                   LastInterpParamsX                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		struct FPrimalCameraInterpParams                   LastInterpParamsY                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		struct FPrimalCameraInterpParams                   LastInterpParamsZ                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		struct FPrimalCameraInterpParams                   OutInterpParamsX                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		struct FPrimalCameraInterpParams                   OutInterpParamsY                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		struct FPrimalCameraInterpParams                   OutInterpParamsZ                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	bool APlayerPawnTest_C::BPOverrideCameraPivotLocationInterpParams(const struct FPrimalCameraParams& CameraParams, const struct FPrimalCameraPivotZInterpOverrides& PivotZInterpOverrides, const struct FPrimalCameraInterpParams& LastInterpParamsX, const struct FPrimalCameraInterpParams& LastInterpParamsY, const struct FPrimalCameraInterpParams& LastInterpParamsZ, struct FPrimalCameraInterpParams* OutInterpParamsX, struct FPrimalCameraInterpParams* OutInterpParamsY, struct FPrimalCameraInterpParams* OutInterpParamsZ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraPivotLocationInterpParams");
		
		APlayerPawnTest_C_BPOverrideCameraPivotLocationInterpParams_Params params {};
		params.CameraParams = CameraParams;
		params.PivotZInterpOverrides = PivotZInterpOverrides;
		params.LastInterpParamsX = LastInterpParamsX;
		params.LastInterpParamsY = LastInterpParamsY;
		params.LastInterpParamsZ = LastInterpParamsZ;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutInterpParamsX != nullptr)
			*OutInterpParamsX = params.OutInterpParamsX;
		if (OutInterpParamsY != nullptr)
			*OutInterpParamsY = params.OutInterpParamsY;
		if (OutInterpParamsZ != nullptr)
			*OutInterpParamsZ = params.OutInterpParamsZ;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraArmLengthInterpParams
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPrimalCameraParams                         CameraParams                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FPrimalCameraInterpParams                   OutInterpParams                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	bool APlayerPawnTest_C::BPOverrideCameraArmLengthInterpParams(const struct FPrimalCameraParams& CameraParams, struct FPrimalCameraInterpParams* OutInterpParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraArmLengthInterpParams");
		
		APlayerPawnTest_C_BPOverrideCameraArmLengthInterpParams_Params params {};
		params.CameraParams = CameraParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutInterpParams != nullptr)
			*OutInterpParams = params.OutInterpParams;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraArmLength
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPrimalCameraParams                         CameraParams                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              CurrentCameraArmLength                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DesiredCameraArmLength                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool APlayerPawnTest_C::BPOverrideCameraArmLength(const struct FPrimalCameraParams& CameraParams, float CurrentCameraArmLength, float* DesiredCameraArmLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraArmLength");
		
		APlayerPawnTest_C_BPOverrideCameraArmLength_Params params {};
		params.CameraParams = CameraParams;
		params.CurrentCameraArmLength = CurrentCameraArmLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DesiredCameraArmLength != nullptr)
			*DesiredCameraArmLength = params.DesiredCameraArmLength;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.DontCreateAnyMoreSpawnUIs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APlayerPawnTest_C::DontCreateAnyMoreSpawnUIs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.DontCreateAnyMoreSpawnUIs");
		
		APlayerPawnTest_C_DontCreateAnyMoreSpawnUIs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.GetShooterHud
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 ShooterHUD                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawnTest_C::GetShooterHud(class AShooterHUD** ShooterHUD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.GetShooterHud");
		
		APlayerPawnTest_C_GetShooterHud_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShooterHUD != nullptr)
			*ShooterHUD = params.ShooterHUD;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.SetGeneralizedUnlockedAchievementTags
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FName>                                GeneralizedUnlockedAchievementTags                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void APlayerPawnTest_C::SetGeneralizedUnlockedAchievementTags(TArray<class FName>* GeneralizedUnlockedAchievementTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.SetGeneralizedUnlockedAchievementTags");
		
		APlayerPawnTest_C_SetGeneralizedUnlockedAchievementTags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GeneralizedUnlockedAchievementTags != nullptr)
			*GeneralizedUnlockedAchievementTags = params.GeneralizedUnlockedAchievementTags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.HasEquipToHideImplant
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ShouldHideImplant                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawnTest_C::HasEquipToHideImplant(bool* ShouldHideImplant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.HasEquipToHideImplant");
		
		APlayerPawnTest_C_HasEquipToHideImplant_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldHideImplant != nullptr)
			*ShouldHideImplant = params.ShouldHideImplant;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.BPSetupFirstPersonHandsMesh
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APlayerPawnTest_C::BPSetupFirstPersonHandsMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.BPSetupFirstPersonHandsMesh");
		
		APlayerPawnTest_C_BPSetupFirstPersonHandsMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.SetupMeshes
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bForce                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawnTest_C::SetupMeshes(bool bForce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.SetupMeshes");
		
		APlayerPawnTest_C_SetupMeshes_Params params {};
		params.bForce = bForce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.BPUnlockedAllExplorerNotes
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APlayerPawnTest_C::BPUnlockedAllExplorerNotes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.BPUnlockedAllExplorerNotes");
		
		APlayerPawnTest_C_BPUnlockedAllExplorerNotes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.GetTheNumChibiLevelUps
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            OutVal                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawnTest_C::GetTheNumChibiLevelUps(int32_t* OutVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.GetTheNumChibiLevelUps");
		
		APlayerPawnTest_C_GetTheNumChibiLevelUps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutVal != nullptr)
			*OutVal = params.OutVal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.SetNumChibiLevelUps
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawnTest_C::SetNumChibiLevelUps(int32_t NewNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.SetNumChibiLevelUps");
		
		APlayerPawnTest_C_SetNumChibiLevelUps_Params params {};
		params.NewNum = NewNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.BPGetPlayerHexagonCount
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	int32_t APlayerPawnTest_C::BPGetPlayerHexagonCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.BPGetPlayerHexagonCount");
		
		APlayerPawnTest_C_BPGetPlayerHexagonCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.BPSetPlayerHexagonCount
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewHexagonCount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool APlayerPawnTest_C::BPSetPlayerHexagonCount(int32_t NewHexagonCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.BPSetPlayerHexagonCount");
		
		APlayerPawnTest_C_BPSetPlayerHexagonCount_Params params {};
		params.NewHexagonCount = NewHexagonCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.BPGetShowDebugAnimationComponents
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class USkeletalMeshComponent*>              SkelMeshComponents                                         (Parm, OutParm, ContainsInstancedReference)
	 */
	void APlayerPawnTest_C::BPGetShowDebugAnimationComponents(TArray<class USkeletalMeshComponent*>* SkelMeshComponents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.BPGetShowDebugAnimationComponents");
		
		APlayerPawnTest_C_BPGetShowDebugAnimationComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SkelMeshComponents != nullptr)
			*SkelMeshComponents = params.SkelMeshComponents;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.BPGetOverrideCameraInterpSpeed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DefaultTPVCameraSpeedInterpolationMultiplier               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DefaultTPVOffsetInterpSpeed                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TPVCameraSpeedInterpolationMultiplier                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TPVOffsetInterpSpeed                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawnTest_C::BPGetOverrideCameraInterpSpeed(float DefaultTPVCameraSpeedInterpolationMultiplier, float DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.BPGetOverrideCameraInterpSpeed");
		
		APlayerPawnTest_C_BPGetOverrideCameraInterpSpeed_Params params {};
		params.DefaultTPVCameraSpeedInterpolationMultiplier = DefaultTPVCameraSpeedInterpolationMultiplier;
		params.DefaultTPVOffsetInterpSpeed = DefaultTPVOffsetInterpSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TPVCameraSpeedInterpolationMultiplier != nullptr)
			*TPVCameraSpeedInterpolationMultiplier = params.TPVCameraSpeedInterpolationMultiplier;
		if (TPVOffsetInterpSpeed != nullptr)
			*TPVOffsetInterpSpeed = params.TPVOffsetInterpSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.ShowHUDNotification
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             LifetimeSeconds                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             DisplayScale                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USoundCue*                                   SoundToPlay                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawnTest_C::ShowHUDNotification(const class FString& Text, const struct FLinearColor& Color, double LifetimeSeconds, double DisplayScale, class USoundCue* SoundToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.ShowHUDNotification");
		
		APlayerPawnTest_C_ShowHUDNotification_Params params {};
		params.Text = Text;
		params.Color = Color;
		params.LifetimeSeconds = LifetimeSeconds;
		params.DisplayScale = DisplayScale;
		params.SoundToPlay = SoundToPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.TrySpawnMound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APlayerPawnTest_C::TrySpawnMound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.TrySpawnMound");
		
		APlayerPawnTest_C_TrySpawnMound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.TrySpawnMoundEx
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Range                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawnTest_C::TrySpawnMoundEx(double Angle, double Range)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.TrySpawnMoundEx");
		
		APlayerPawnTest_C_TrySpawnMoundEx_Params params {};
		params.Angle = Angle;
		params.Range = Range;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.BPSetFirstPersonMasterPoseComponent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      firstPersonMasterPosecomponent                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawnTest_C::BPSetFirstPersonMasterPoseComponent(class USkeletalMeshComponent* firstPersonMasterPosecomponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.BPSetFirstPersonMasterPoseComponent");
		
		APlayerPawnTest_C_BPSetFirstPersonMasterPoseComponent_Params params {};
		params.firstPersonMasterPosecomponent = firstPersonMasterPosecomponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.DefeatedBoss
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        BossCharacter                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        BossTag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            BossDifficulty                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawnTest_C::DefeatedBoss(class APrimalDinoCharacter* BossCharacter, const class FName& BossTag, int32_t BossDifficulty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.DefeatedBoss");
		
		APlayerPawnTest_C_DefeatedBoss_Params params {};
		params.BossCharacter = BossCharacter;
		params.BossTag = BossTag;
		params.BossDifficulty = BossDifficulty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.ServerAscend
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            DifficultyIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bImmediateAscend                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSuppressAchievements                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsCheatAscend                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawnTest_C::ServerAscend(int32_t DifficultyIndex, bool bImmediateAscend, bool bSuppressAchievements, bool bIsCheatAscend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.ServerAscend");
		
		APlayerPawnTest_C_ServerAscend_Params params {};
		params.DifficultyIndex = DifficultyIndex;
		params.bImmediateAscend = bImmediateAscend;
		params.bSuppressAchievements = bSuppressAchievements;
		params.bIsCheatAscend = bIsCheatAscend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.PlayerCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      TheCommand                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class FString APlayerPawnTest_C::PlayerCommand(const class FString& TheCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.PlayerCommand");
		
		APlayerPawnTest_C_PlayerCommand_Params params {};
		params.TheCommand = TheCommand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APlayerPawnTest_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.UserConstructionScript");
		
		APlayerPawnTest_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void APlayerPawnTest_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.ReceiveBeginPlay");
		
		APlayerPawnTest_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.NetClientAscend
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AscendIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bImmediateAscend                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsCheatAscend                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawnTest_C::NetClientAscend(int32_t AscendIndex, bool bImmediateAscend, bool bIsCheatAscend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.NetClientAscend");
		
		APlayerPawnTest_C_NetClientAscend_Params params {};
		params.AscendIndex = AscendIndex;
		params.bImmediateAscend = bImmediateAscend;
		params.bIsCheatAscend = bIsCheatAscend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.ClientShowHUDNotification
	 * 		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             LifetimeSeconds                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             DisplayScale                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USoundCue*                                   SoundToPlay                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawnTest_C::ClientShowHUDNotification(const class FString& Text, const struct FLinearColor& Color, double LifetimeSeconds, double DisplayScale, class USoundCue* SoundToPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.ClientShowHUDNotification");
		
		APlayerPawnTest_C_ClientShowHUDNotification_Params params {};
		params.Text = Text;
		params.Color = Color;
		params.LifetimeSeconds = LifetimeSeconds;
		params.DisplayScale = DisplayScale;
		params.SoundToPlay = SoundToPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.NetClientPreLoadAcension
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void APlayerPawnTest_C::NetClientPreLoadAcension()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.NetClientPreLoadAcension");
		
		APlayerPawnTest_C_NetClientPreLoadAcension_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.BPSpawnAttackerDamageImpactFX
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        SocketName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APrimalCharacter*                            VictimChar                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawnTest_C::BPSpawnAttackerDamageImpactFX(const class FName& SocketName, class APrimalCharacter* VictimChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.BPSpawnAttackerDamageImpactFX");
		
		APlayerPawnTest_C_BPSpawnAttackerDamageImpactFX_Params params {};
		params.SocketName = SocketName;
		params.VictimChar = VictimChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.AscensionCheck
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APlayerPawnTest_C::AscensionCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.AscensionCheck");
		
		APlayerPawnTest_C_AscensionCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PlayerPawnTest.PlayerPawnTest_C.ExecuteUbergraph_PlayerPawnTest
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APlayerPawnTest_C::ExecuteUbergraph_PlayerPawnTest(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerPawnTest.PlayerPawnTest_C.ExecuteUbergraph_PlayerPawnTest");
		
		APlayerPawnTest_C_ExecuteUbergraph_PlayerPawnTest_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APlayerPawnTest_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlayerPawnTest_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawnTest.PlayerPawnTest_C");
		return ptr;
	}

}


