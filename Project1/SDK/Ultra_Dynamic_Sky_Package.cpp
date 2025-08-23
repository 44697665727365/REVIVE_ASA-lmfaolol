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
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.InitSavedTimeOfDay
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::InitSavedTimeOfDay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.InitSavedTimeOfDay");
		
		AUltra_Dynamic_Sky_C_InitSavedTimeOfDay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.UpdateClientTimeOdFay
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::UpdateClientTimeOdFay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.UpdateClientTimeOdFay");
		
		AUltra_Dynamic_Sky_C_UpdateClientTimeOdFay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Toggle Sequence Track
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::ToggleSequenceTrack(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Toggle Sequence Track");
		
		AUltra_Dynamic_Sky_C_ToggleSequenceTrack_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.ScrubSequenceActor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::ScrubSequenceActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.ScrubSequenceActor");
		
		AUltra_Dynamic_Sky_C_ScrubSequenceActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.CreateComponentListForHide
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::CreateComponentListForHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.CreateComponentListForHide");
		
		AUltra_Dynamic_Sky_C_CreateComponentListForHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.SetDataMPCs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::SetDataMPCs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.SetDataMPCs");
		
		AUltra_Dynamic_Sky_C_SetDataMPCs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.HideIfCave
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::HideIfCave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.HideIfCave");
		
		AUltra_Dynamic_Sky_C_HideIfCave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.GetDCM
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::GetDCM()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.GetDCM");
		
		AUltra_Dynamic_Sky_C_GetDCM_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.UpdateDCM
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::UpdateDCM()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.UpdateDCM");
		
		AUltra_Dynamic_Sky_C_UpdateDCM_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.GetPlayerOcclusion
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Invert                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Occlusion                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::GetPlayerOcclusion(bool Invert, double* Occlusion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.GetPlayerOcclusion");
		
		AUltra_Dynamic_Sky_C_GetPlayerOcclusion_Params params {};
		params.Invert = Invert;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Occlusion != nullptr)
			*Occlusion = params.Occlusion;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Fog Mei Properties
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::SetFogMeiProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Fog Mei Properties");
		
		AUltra_Dynamic_Sky_C_SetFogMeiProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.UpdateDCMTime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::UpdateDCMTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.UpdateDCMTime");
		
		AUltra_Dynamic_Sky_C_UpdateDCMTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Volumetric Cloud Sky Atmo Contribution
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::CurrentVolumetricCloudSkyAtmoContribution()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Volumetric Cloud Sky Atmo Contribution");
		
		AUltra_Dynamic_Sky_C_CurrentVolumetricCloudSkyAtmoContribution_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Overcast Brightness
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::OvercastBrightness()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Overcast Brightness");
		
		AUltra_Dynamic_Sky_C_OvercastBrightness_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Volumetric Cloud Light Rays Movement
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::UpdateVolumetricCloudLightRaysMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Volumetric Cloud Light Rays Movement");
		
		AUltra_Dynamic_Sky_C_UpdateVolumetricCloudLightRaysMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Notify of Removed Cloud Paint Container
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::NotifyofRemovedCloudPaintContainer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Notify of Removed Cloud Paint Container");
		
		AUltra_Dynamic_Sky_C_NotifyofRemovedCloudPaintContainer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Volumetric Cloud Light Rays
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::UpdateVolumetricCloudLightRays()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Volumetric Cloud Light Rays");
		
		AUltra_Dynamic_Sky_C_UpdateVolumetricCloudLightRays_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Up Volumetric Cloud Light Rays
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::SetUpVolumetricCloudLightRays()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Up Volumetric Cloud Light Rays");
		
		AUltra_Dynamic_Sky_C_SetUpVolumetricCloudLightRays_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Cloud Coverage After Painting
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::UpdateCloudCoverageAfterPainting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Cloud Coverage After Painting");
		
		AUltra_Dynamic_Sky_C_UpdateCloudCoverageAfterPainting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Test Point for Painted Cloud Coverage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             CloudCoveragewithPainting                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::TestPointforPaintedCloudCoverage(const struct FVector& Location, double* CloudCoveragewithPainting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Test Point for Painted Cloud Coverage");
		
		AUltra_Dynamic_Sky_C_TestPointforPaintedCloudCoverage_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CloudCoveragewithPainting != nullptr)
			*CloudCoveragewithPainting = params.CloudCoveragewithPainting;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Sky Atmosphere Location
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::UpdateSkyAtmosphereLocation(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Sky Atmosphere Location");
		
		AUltra_Dynamic_Sky_C_UpdateSkyAtmosphereLocation_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Volumetric Cloud Multiscattering Intensity
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::CurrentVolumetricCloudMultiscatteringIntensity(double* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Volumetric Cloud Multiscattering Intensity");
		
		AUltra_Dynamic_Sky_C_CurrentVolumetricCloudMultiscatteringIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Cloud Wisps Color
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FLinearColor                                Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::CurrentCloudWispsColor(struct FLinearColor* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Cloud Wisps Color");
		
		AUltra_Dynamic_Sky_C_CurrentCloudWispsColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Nearby Cloud Cells To Load Asynchronously
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::GetNearbyCloudCellsToLoadAsynchronously()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Nearby Cloud Cells To Load Asynchronously");
		
		AUltra_Dynamic_Sky_C_GetNearbyCloudCellsToLoadAsynchronously_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Release Async Loaded Object
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::ReleaseAsyncLoadedObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Release Async Loaded Object");
		
		AUltra_Dynamic_Sky_C_ReleaseAsyncLoadedObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Add Object to Async Loading Queue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HighPriority                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::AddObjecttoAsyncLoadingQueue(bool HighPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Add Object to Async Loading Queue");
		
		AUltra_Dynamic_Sky_C_AddObjecttoAsyncLoadingQueue_Params params {};
		params.HighPriority = HighPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Check for Cloud Coverage Target Recenter
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::CheckforCloudCoverageTargetRecenter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Check for Cloud Coverage Target Recenter");
		
		AUltra_Dynamic_Sky_C_CheckforCloudCoverageTargetRecenter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.World Space to Drawn Target Pixel Space
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector2D                                   In                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::WorldSpacetoDrawnTargetPixelSpace(const struct FVector2D& In, struct FVector2D* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.World Space to Drawn Target Pixel Space");
		
		AUltra_Dynamic_Sky_C_WorldSpacetoDrawnTargetPixelSpace_Params params {};
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cloud Coverage Target Mapping
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Mapping                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::CloudCoverageTargetMapping(struct FVector* Mapping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cloud Coverage Target Mapping");
		
		AUltra_Dynamic_Sky_C_CloudCoverageTargetMapping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Mapping != nullptr)
			*Mapping = params.Mapping;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Painted Cloud Coverage Target
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::UpdatePaintedCloudCoverageTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Painted Cloud Coverage Target");
		
		AUltra_Dynamic_Sky_C_UpdatePaintedCloudCoverageTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sky Atmosphere Absorption Color
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FLinearColor                                Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::CurrentSkyAtmosphereAbsorptionColor(struct FLinearColor* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sky Atmosphere Absorption Color");
		
		AUltra_Dynamic_Sky_C_CurrentSkyAtmosphereAbsorptionColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Volumetric Cloud Inner Emit Limit
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::CurrentVolumetricCloudInnerEmitLimit(double* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Volumetric Cloud Inner Emit Limit");
		
		AUltra_Dynamic_Sky_C_CurrentVolumetricCloudInnerEmitLimit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Inside Outside Cloud Layer
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::InsideOutsideCloudLayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Inside Outside Cloud Layer");
		
		AUltra_Dynamic_Sky_C_InsideOutsideCloudLayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Overcast Luminance Boost
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Multiplier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::OvercastLuminanceBoost(double Multiplier, double* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Overcast Luminance Boost");
		
		AUltra_Dynamic_Sky_C_OvercastLuminanceBoost_Params params {};
		params.Multiplier = Multiplier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Volumetric Cloud Ambient Light Color
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FLinearColor                                Bottom                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Top                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::VolumetricCloudAmbientLightColor(struct FLinearColor* Bottom, struct FLinearColor* Top)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Volumetric Cloud Ambient Light Color");
		
		AUltra_Dynamic_Sky_C_VolumetricCloudAmbientLightColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Bottom != nullptr)
			*Bottom = params.Bottom;
		if (Top != nullptr)
			*Top = params.Top;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cloud Coverage Local
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::CloudCoverageLocal(double* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cloud Coverage Local");
		
		AUltra_Dynamic_Sky_C_CloudCoverageLocal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cloud Layer Top and Bottom World Height
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             BottomWorldHeight                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             TopWorldHeight                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::CloudLayerTopandBottomWorldHeight(double* BottomWorldHeight, double* TopWorldHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cloud Layer Top and Bottom World Height");
		
		AUltra_Dynamic_Sky_C_CloudLayerTopandBottomWorldHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BottomWorldHeight != nullptr)
			*BottomWorldHeight = params.BottomWorldHeight;
		if (TopWorldHeight != nullptr)
			*TopWorldHeight = params.TopWorldHeight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Camera Location and Camera Relative Heights
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::GetCameraLocationandCameraRelativeHeights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Camera Location and Camera Relative Heights");
		
		AUltra_Dynamic_Sky_C_GetCameraLocationandCameraRelativeHeights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Apply Light Shaft Settings
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDirectionalLightComponent*                  Light                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   MaxBrightness                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   BloomThreshold                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   BloomScale                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ForwardVector                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::ApplyLightShaftSettings(class UDirectionalLightComponent* Light, const struct FVector2D& MaxBrightness, const struct FVector2D& BloomThreshold, const struct FVector2D& BloomScale, const struct FVector& ForwardVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Apply Light Shaft Settings");
		
		AUltra_Dynamic_Sky_C_ApplyLightShaftSettings_Params params {};
		params.Light = Light;
		params.MaxBrightness = MaxBrightness;
		params.BloomThreshold = BloomThreshold;
		params.BloomScale = BloomScale;
		params.ForwardVector = ForwardVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Check if Point is Exposed to Sun or Moon Light
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             DistancetoTrace                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              ActorstoIgnoreinTrace                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               ExposedtoSun                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ExposedtoMoon                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ExposedtoEither                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             LightIntensityLux                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::CheckifPointisExposedtoSunorMoonLight(const struct FVector& Location, double DistancetoTrace, TArray<class AActor*>* ActorstoIgnoreinTrace, bool* ExposedtoSun, bool* ExposedtoMoon, bool* ExposedtoEither, double* LightIntensityLux)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Check if Point is Exposed to Sun or Moon Light");
		
		AUltra_Dynamic_Sky_C_CheckifPointisExposedtoSunorMoonLight_Params params {};
		params.Location = Location;
		params.DistancetoTrace = DistancetoTrace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorstoIgnoreinTrace != nullptr)
			*ActorstoIgnoreinTrace = params.ActorstoIgnoreinTrace;
		if (ExposedtoSun != nullptr)
			*ExposedtoSun = params.ExposedtoSun;
		if (ExposedtoMoon != nullptr)
			*ExposedtoMoon = params.ExposedtoMoon;
		if (ExposedtoEither != nullptr)
			*ExposedtoEither = params.ExposedtoEither;
		if (LightIntensityLux != nullptr)
			*LightIntensityLux = params.LightIntensityLux;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Distance to Sample Max Count
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShutDown                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::UpdateDistancetoSampleMaxCount(bool ShutDown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Distance to Sample Max Count");
		
		AUltra_Dynamic_Sky_C_UpdateDistancetoSampleMaxCount_Params params {};
		params.ShutDown = ShutDown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Moons Cloud Mask
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::CurrentMoonsCloudMask()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Moons Cloud Mask");
		
		AUltra_Dynamic_Sky_C_CurrentMoonsCloudMask_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update from UDW Construction Script
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::UpdatefromUDWConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update from UDW Construction Script");
		
		AUltra_Dynamic_Sky_C_UpdatefromUDWConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Swap with Cinematic Runtime Value
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             In                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Cine                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UserHigher                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::SwapwithCinematicRuntimeValue(double In, double Cine, bool UserHigher, double* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Swap with Cinematic Runtime Value");
		
		AUltra_Dynamic_Sky_C_SwapwithCinematicRuntimeValue_Params params {};
		params.In = In;
		params.Cine = Cine;
		params.UserHigher = UserHigher;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Check To Use Existing MIDs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::CheckToUseExistingMIDs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Check To Use Existing MIDs");
		
		AUltra_Dynamic_Sky_C_CheckToUseExistingMIDs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Solar Eclipse Circle Mask
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             SunAngularRadius                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             MoonAngularRadius                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     MoonVector                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             MoonSoftness                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             FractionShowing                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::SolarEclipseCircleMask(double SunAngularRadius, double MoonAngularRadius, const struct FVector& MoonVector, double MoonSoftness, double* FractionShowing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Solar Eclipse Circle Mask");
		
		AUltra_Dynamic_Sky_C_SolarEclipseCircleMask_Params params {};
		params.SunAngularRadius = SunAngularRadius;
		params.MoonAngularRadius = MoonAngularRadius;
		params.MoonVector = MoonVector;
		params.MoonSoftness = MoonSoftness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FractionShowing != nullptr)
			*FractionShowing = params.FractionShowing;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Space Layer Brightness
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::CurrentSpaceLayerBrightness()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Space Layer Brightness");
		
		AUltra_Dynamic_Sky_C_CurrentSpaceLayerBrightness_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Space Planet Parent MID
	 * 		Flags  -> (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FUDS_Space_Planet                           Planet                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::SpacePlanetParentMID(const struct FUDS_Space_Planet& Planet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Space Planet Parent MID");
		
		AUltra_Dynamic_Sky_C_SpacePlanetParentMID_Params params {};
		params.Planet = Planet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Space Planet Vectors
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::UpdateSpacePlanetVectors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Space Planet Vectors");
		
		AUltra_Dynamic_Sky_C_UpdateSpacePlanetVectors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Moon Z Vector
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::MoonZVector(struct FVector* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Moon Z Vector");
		
		AUltra_Dynamic_Sky_C_MoonZVector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sun Z Vector
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::SunZVector(struct FVector* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sun Z Vector");
		
		AUltra_Dynamic_Sky_C_SunZVector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Construct Space Layer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::ConstructSpaceLayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Construct Space Layer");
		
		AUltra_Dynamic_Sky_C_ConstructSpaceLayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Increment Cache Timer
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::IncrementCacheTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Increment Cache Timer");
		
		AUltra_Dynamic_Sky_C_IncrementCacheTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Is it Daytime?
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Yes                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::IsitDaytime(bool* Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Is it Daytime?");
		
		AUltra_Dynamic_Sky_C_IsitDaytime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Yes != nullptr)
			*Yes = params.Yes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Combined Night Brightness
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::CombinedNightBrightness(double* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Combined Night Brightness");
		
		AUltra_Dynamic_Sky_C_CombinedNightBrightness_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Restart Real Time Sky Light Capture
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::RestartRealTimeSkyLightCapture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Restart Real Time Sky Light Capture");
		
		AUltra_Dynamic_Sky_C_RestartRealTimeSkyLightCapture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Hard Reset Cache
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::HardResetCache()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Hard Reset Cache");
		
		AUltra_Dynamic_Sky_C_HardResetCache_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Days Since J2000
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            InputYear                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DayofYear                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Days                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::DaysSinceJ2000(int32_t InputYear, int32_t DayofYear, int32_t* Days)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Days Since J2000");
		
		AUltra_Dynamic_Sky_C_DaysSinceJ2000_Params params {};
		params.InputYear = InputYear;
		params.DayofYear = DayofYear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Days != nullptr)
			*Days = params.Days;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Forced Active Variables
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::UpdateForcedActiveVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Forced Active Variables");
		
		AUltra_Dynamic_Sky_C_UpdateForcedActiveVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cloud Wisp Gradient Vector
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FLinearColor                                Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::CloudWispGradientVector(struct FLinearColor* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cloud Wisp Gradient Vector");
		
		AUltra_Dynamic_Sky_C_CloudWispGradientVector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Directional Inscattering Exponent
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::CurrentDirectionalInscatteringExponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Directional Inscattering Exponent");
		
		AUltra_Dynamic_Sky_C_CurrentDirectionalInscatteringExponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current View Sample Scale
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::CurrentViewSampleScale(double* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current View Sample Scale");
		
		AUltra_Dynamic_Sky_C_CurrentViewSampleScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Three Time Floats
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Day                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Dusk                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Night                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::ThreeTimeFloats(double Day, double Dusk, double Night, double* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Three Time Floats");
		
		AUltra_Dynamic_Sky_C_ThreeTimeFloats_Params params {};
		params.Day = Day;
		params.Dusk = Dusk;
		params.Night = Night;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Post Process Blend Weights
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::UpdatePostProcessBlendWeights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Post Process Blend Weights");
		
		AUltra_Dynamic_Sky_C_UpdatePostProcessBlendWeights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Create Post Process Components
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::CreatePostProcessComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Create Post Process Components");
		
		AUltra_Dynamic_Sky_C_CreatePostProcessComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Change Sky Mode at Runtime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUDS_SkyMode                                       NewSkyMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::ChangeSkyModeatRuntime(EUDS_SkyMode NewSkyMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Change Sky Mode at Runtime");
		
		AUltra_Dynamic_Sky_C_ChangeSkyModeatRuntime_Params params {};
		params.NewSkyMode = NewSkyMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Apply Location Preset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUDS_CityPresets                                   Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::ApplyLocationPreset(EUDS_CityPresets Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Apply Location Preset");
		
		AUltra_Dynamic_Sky_C_ApplyLocationPreset_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Volumetric Cloud Shadow Tracing Distance
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::CurrentVolumetricCloudShadowTracingDistance(double* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Volumetric Cloud Shadow Tracing Distance");
		
		AUltra_Dynamic_Sky_C_CurrentVolumetricCloudShadowTracingDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sky Atmosphere Luminance
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor AUltra_Dynamic_Sky_C::CurrentSkyAtmosphereLuminance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sky Atmosphere Luminance");
		
		AUltra_Dynamic_Sky_C_CurrentSkyAtmosphereLuminance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Control UDW Weather State
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::ControlUDWWeatherState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Control UDW Weather State");
		
		AUltra_Dynamic_Sky_C_ControlUDWWeatherState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Volumetric Clouds SubNoise Scales
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                High                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Low                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::VolumetricCloudsSubNoiseScales(struct FLinearColor* High, struct FLinearColor* Low)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Volumetric Clouds SubNoise Scales");
		
		AUltra_Dynamic_Sky_C_VolumetricCloudsSubNoiseScales_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (High != nullptr)
			*High = params.High;
		if (Low != nullptr)
			*Low = params.Low;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Volumetric Cloud Floor Variation
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             HeightClear                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             HeightCloudy                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::VolumetricCloudFloorVariation(double* HeightClear, double* HeightCloudy, double* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Volumetric Cloud Floor Variation");
		
		AUltra_Dynamic_Sky_C_VolumetricCloudFloorVariation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HeightClear != nullptr)
			*HeightClear = params.HeightClear;
		if (HeightCloudy != nullptr)
			*HeightCloudy = params.HeightCloudy;
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Flat Cloudiness
	 * 		Flags  -> (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               On                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::FlatCloudiness(bool* On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Flat Cloudiness");
		
		AUltra_Dynamic_Sky_C_FlatCloudiness_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (On != nullptr)
			*On = params.On;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Static Clouds XYZ Masks
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                XYMask                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ZMask                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::StaticCloudsXYZMasks(struct FLinearColor* XYMask, double* ZMask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Static Clouds XYZ Masks");
		
		AUltra_Dynamic_Sky_C_StaticCloudsXYZMasks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (XYMask != nullptr)
			*XYMask = params.XYMask;
		if (ZMask != nullptr)
			*ZMask = params.ZMask;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Starting Cloud Formation
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::StartingCloudFormation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Starting Cloud Formation");
		
		AUltra_Dynamic_Sky_C_StartingCloudFormation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Increase Tick Frequency
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool AUltra_Dynamic_Sky_C::IncreaseTickFrequency()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Increase Tick Frequency");
		
		AUltra_Dynamic_Sky_C_IncreaseTickFrequency_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Simplified Sun Glow Color
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FLinearColor                                Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::SimplifiedSunGlowColor(struct FLinearColor* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Simplified Sun Glow Color");
		
		AUltra_Dynamic_Sky_C_SimplifiedSunGlowColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Size Cache Arrays
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::SizeCacheArrays()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Size Cache Arrays");
		
		AUltra_Dynamic_Sky_C_SizeCacheArrays_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Is Lens Flare Enabled
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Yes                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::IsLensFlareEnabled(bool* Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Is Lens Flare Enabled");
		
		AUltra_Dynamic_Sky_C_IsLensFlareEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Yes != nullptr)
			*Yes = params.Yes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Exposure Bias
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Bias                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::CurrentExposureBias(double* Bias)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Exposure Bias");
		
		AUltra_Dynamic_Sky_C_CurrentExposureBias_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Bias != nullptr)
			*Bias = params.Bias;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Monitor for Changes
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::MonitorforChanges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Monitor for Changes");
		
		AUltra_Dynamic_Sky_C_MonitorforChanges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Scaled Cache Period
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Period                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::ScaledCachePeriod(double* Period)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Scaled Cache Period");
		
		AUltra_Dynamic_Sky_C_ScaledCachePeriod_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Period != nullptr)
			*Period = params.Period;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Cached Vector
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUDS_CachedProperties                              Property                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::GetCachedVector(EUDS_CachedProperties Property, struct FVector* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Cached Vector");
		
		AUltra_Dynamic_Sky_C_GetCachedVector_Params params {};
		params.Property = Property;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cache Vector
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUDS_CachedProperties                              Property                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SetValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::CacheVector(EUDS_CachedProperties Property, const struct FVector& SetValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cache Vector");
		
		AUltra_Dynamic_Sky_C_CacheVector_Params params {};
		params.Property = Property;
		params.SetValue = SetValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cache Sun and Moon Orientation
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::CacheSunandMoonOrientation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cache Sun and Moon Orientation");
		
		AUltra_Dynamic_Sky_C_CacheSunandMoonOrientation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Cached Color
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUDS_CachedProperties                              Property                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::GetCachedColor(EUDS_CachedProperties Property, struct FLinearColor* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Cached Color");
		
		AUltra_Dynamic_Sky_C_GetCachedColor_Params params {};
		params.Property = Property;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cache Color
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUDS_CachedProperties                              Property                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                SetValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::CacheColor(EUDS_CachedProperties Property, const struct FLinearColor& SetValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cache Color");
		
		AUltra_Dynamic_Sky_C_CacheColor_Params params {};
		params.Property = Property;
		params.SetValue = SetValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Cache Alpha
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::SetCacheAlpha()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Cache Alpha");
		
		AUltra_Dynamic_Sky_C_SetCacheAlpha_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cache Float
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUDS_CachedProperties                              Property                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             SetValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::CacheFloat(EUDS_CachedProperties Property, double SetValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cache Float");
		
		AUltra_Dynamic_Sky_C_CacheFloat_Params params {};
		params.Property = Property;
		params.SetValue = SetValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cache Properties
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::CacheProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cache Properties");
		
		AUltra_Dynamic_Sky_C_CacheProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Cached Float
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUDS_CachedProperties                              Property                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::GetCachedFloat(EUDS_CachedProperties Property, double* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Cached Float");
		
		AUltra_Dynamic_Sky_C_GetCachedFloat_Params params {};
		params.Property = Property;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sun Height
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Z                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::SunHeight(double* Z)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sun Height");
		
		AUltra_Dynamic_Sky_C_SunHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Z != nullptr)
			*Z = params.Z;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Solar Eclipse Values
	 * 		Flags  -> (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FLinearColor                                TintColor                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             EclipsePercent                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::CurrentSolarEclipseValues(struct FLinearColor* TintColor, double* EclipsePercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Solar Eclipse Values");
		
		AUltra_Dynamic_Sky_C_CurrentSolarEclipseValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TintColor != nullptr)
			*TintColor = params.TintColor;
		if (EclipsePercent != nullptr)
			*EclipsePercent = params.EclipsePercent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Adjust Base Sun Light Intensity
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     SunVector                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Intensity                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Multiplier                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::AdjustBaseSunLightIntensity(const struct FVector& SunVector, double* Intensity, double* Multiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Adjust Base Sun Light Intensity");
		
		AUltra_Dynamic_Sky_C_AdjustBaseSunLightIntensity_Params params {};
		params.SunVector = SunVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Intensity != nullptr)
			*Intensity = params.Intensity;
		if (Multiplier != nullptr)
			*Multiplier = params.Multiplier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Filtered Moon Light Intensity
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Unfiltered                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Intensity                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::FilteredMoonLightIntensity(double Unfiltered, double* Intensity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Filtered Moon Light Intensity");
		
		AUltra_Dynamic_Sky_C_FilteredMoonLightIntensity_Params params {};
		params.Unfiltered = Unfiltered;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Intensity != nullptr)
			*Intensity = params.Intensity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Both Cloud Shadows MIDs
	 * 		Flags  -> (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class UMaterialInstanceDynamic*>            Out                                                        (Parm, OutParm)
	 */
	void AUltra_Dynamic_Sky_C::BothCloudShadowsMIDs(TArray<class UMaterialInstanceDynamic*>* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Both Cloud Shadows MIDs");
		
		AUltra_Dynamic_Sky_C_BothCloudShadowsMIDs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sun Shadows MIDs
	 * 		Flags  -> (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<class UMaterialInstanceDynamic*>            Out                                                        (Parm, OutParm)
	 */
	void AUltra_Dynamic_Sky_C::SunShadowsMIDs(TArray<class UMaterialInstanceDynamic*>* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sun Shadows MIDs");
		
		AUltra_Dynamic_Sky_C_SunShadowsMIDs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Initialize Occlusion
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::InitializeOcclusion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Initialize Occlusion");
		
		AUltra_Dynamic_Sky_C_InitializeOcclusion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Exposure Bias
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::UpdateExposureBias()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Exposure Bias");
		
		AUltra_Dynamic_Sky_C_UpdateExposureBias_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Tick Time Transition
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::TickTimeTransition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Tick Time Transition");
		
		AUltra_Dynamic_Sky_C_TickTimeTransition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Finish Time Transition
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::FinishTimeTransition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Finish Time Transition");
		
		AUltra_Dynamic_Sky_C_FinishTimeTransition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Transition Time of Day
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             NewTimeofDay                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             TransitionDurationSeconds                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EEasingFunc                                        EasingFunction                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             EasingExponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               AllowTimeGoingBackwards                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::TransitionTimeofDay(double NewTimeofDay, double TransitionDurationSeconds, EEasingFunc EasingFunction, double EasingExponent, bool AllowTimeGoingBackwards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Transition Time of Day");
		
		AUltra_Dynamic_Sky_C_TransitionTimeofDay_Params params {};
		params.NewTimeofDay = NewTimeofDay;
		params.TransitionDurationSeconds = TransitionDurationSeconds;
		params.EasingFunction = EasingFunction;
		params.EasingExponent = EasingExponent;
		params.AllowTimeGoingBackwards = AllowTimeGoingBackwards;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Directional Light Dimming
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::DirectionalLightDimming(double* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Directional Light Dimming");
		
		AUltra_Dynamic_Sky_C_DirectionalLightDimming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Lens Flare Parent Material
	 * 		Flags  -> (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	void AUltra_Dynamic_Sky_C::LensFlareParentMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Lens Flare Parent Material");
		
		AUltra_Dynamic_Sky_C_LensFlareParentMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cloud Shadows Parent Material
	 * 		Flags  -> (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	void AUltra_Dynamic_Sky_C::CloudShadowsParentMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cloud Shadows Parent Material");
		
		AUltra_Dynamic_Sky_C_CloudShadowsParentMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Static Clouds Parent Material
	 * 		Flags  -> (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	void AUltra_Dynamic_Sky_C::StaticCloudsParentMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Static Clouds Parent Material");
		
		AUltra_Dynamic_Sky_C_StaticCloudsParentMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.2D Clouds Base Texture
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	void AUltra_Dynamic_Sky_C::_2DCloudsBaseTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.2D Clouds Base Texture");
		
		AUltra_Dynamic_Sky_C__2DCloudsBaseTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Load Required Assets
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::LoadRequiredAssets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Load Required Assets");
		
		AUltra_Dynamic_Sky_C_LoadRequiredAssets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Moon Source Angle
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::CurrentMoonSourceAngle(double* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Moon Source Angle");
		
		AUltra_Dynamic_Sky_C_CurrentMoonSourceAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Twilight Brightness Falloff
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Z                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Scale                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::TwilightBrightnessFalloff(double Z, double* Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Twilight Brightness Falloff");
		
		AUltra_Dynamic_Sky_C_TwilightBrightnessFalloff_Params params {};
		params.Z = Z;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Scale != nullptr)
			*Scale = params.Scale;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Up Overcast Turbulence
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::SetUpOvercastTurbulence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Up Overcast Turbulence");
		
		AUltra_Dynamic_Sky_C_SetUpOvercastTurbulence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Overcast Turbulence
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::UpdateOvercastTurbulence()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Overcast Turbulence");
		
		AUltra_Dynamic_Sky_C_UpdateOvercastTurbulence_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Current Volumetric Clouds MID
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::UpdateCurrentVolumetricCloudsMID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Current Volumetric Clouds MID");
		
		AUltra_Dynamic_Sky_C_UpdateCurrentVolumetricCloudsMID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Max Trace Distance
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::CurrentMaxTraceDistance(double* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Max Trace Distance");
		
		AUltra_Dynamic_Sky_C_CurrentMaxTraceDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Volumetric Clouds Base Clouds Texture
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	void AUltra_Dynamic_Sky_C::VolumetricCloudsBaseCloudsTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Volumetric Clouds Base Clouds Texture");
		
		AUltra_Dynamic_Sky_C_VolumetricCloudsBaseCloudsTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Is Location Inside Cloud Layer
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Inside                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::IsLocationInsideCloudLayer(const struct FVector& Location, bool* Inside)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Is Location Inside Cloud Layer");
		
		AUltra_Dynamic_Sky_C_IsLocationInsideCloudLayer_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Inside != nullptr)
			*Inside = params.Inside;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sun Source Angle
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::CurrentSunSourceAngle(double* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sun Source Angle");
		
		AUltra_Dynamic_Sky_C_CurrentSunSourceAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cancel Shadows Value
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     LightVector                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::CancelShadowsValue(const struct FVector& LightVector, double* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cancel Shadows Value");
		
		AUltra_Dynamic_Sky_C_CancelShadowsValue_Params params {};
		params.LightVector = LightVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cloud Shadows Light Vector Process
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Vector                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::CloudShadowsLightVectorProcess(const struct FVector& Vector, struct FLinearColor* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cloud Shadows Light Vector Process");
		
		AUltra_Dynamic_Sky_C_CloudShadowsLightVectorProcess_Params params {};
		params.Vector = Vector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Apply Console Variable with Check
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Cvar                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		double                                             setting                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::ApplyConsoleVariablewithCheck(const class FString& Cvar, double setting, int32_t Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Apply Console Variable with Check");
		
		AUltra_Dynamic_Sky_C_ApplyConsoleVariablewithCheck_Params params {};
		params.Cvar = Cvar;
		params.setting = setting;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Moon Light Color
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::CurrentMoonLightColor(struct FLinearColor* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Moon Light Color");
		
		AUltra_Dynamic_Sky_C_CurrentMoonLightColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Simplified Current Color
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FLinearColor                                DayColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                DuskColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                NightColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::SimplifiedCurrentColor(const struct FLinearColor& DayColor, const struct FLinearColor& DuskColor, const struct FLinearColor& NightColor, struct FLinearColor* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Simplified Current Color");
		
		AUltra_Dynamic_Sky_C_SimplifiedCurrentColor_Params params {};
		params.DayColor = DayColor;
		params.DuskColor = DuskColor;
		params.NightColor = NightColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Directional Inscattering Multiplier
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Multiplier                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::DirectionalInscatteringMultiplier(double* Multiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Directional Inscattering Multiplier");
		
		AUltra_Dynamic_Sky_C_DirectionalInscatteringMultiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Multiplier != nullptr)
			*Multiplier = params.Multiplier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Query Project Settings And UDS Version
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::QueryProjectSettingsAndUDSVersion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Query Project Settings And UDS Version");
		
		AUltra_Dynamic_Sky_C_QueryProjectSettingsAndUDSVersion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sky Atmosphere Fog Contribution
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::SkyAtmosphereFogContribution(double* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sky Atmosphere Fog Contribution");
		
		AUltra_Dynamic_Sky_C_SkyAtmosphereFogContribution_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Volumetric Cloud Layer Scale
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             LayerScale                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::VolumetricCloudLayerScale(double* LayerScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Volumetric Cloud Layer Scale");
		
		AUltra_Dynamic_Sky_C_VolumetricCloudLayerScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LayerScale != nullptr)
			*LayerScale = params.LayerScale;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Volumetric Cloud Shadows Altitude
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             CloudShadowsAltitude                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::VolumetricCloudShadowsAltitude(double* CloudShadowsAltitude)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Volumetric Cloud Shadows Altitude");
		
		AUltra_Dynamic_Sky_C_VolumetricCloudShadowsAltitude_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CloudShadowsAltitude != nullptr)
			*CloudShadowsAltitude = params.CloudShadowsAltitude;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Volumetric Cloud Top Altitude
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             CloudTopAltitude                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::VolumetricCloudTopAltitude(double* CloudTopAltitude)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Volumetric Cloud Top Altitude");
		
		AUltra_Dynamic_Sky_C_VolumetricCloudTopAltitude_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CloudTopAltitude != nullptr)
			*CloudTopAltitude = params.CloudTopAltitude;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Volumetric Cloud Layer Height
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             BaseCloudHeight                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             LayerHeight                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::VolumetricCloudLayerHeight(double BaseCloudHeight, double* LayerHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Volumetric Cloud Layer Height");
		
		AUltra_Dynamic_Sky_C_VolumetricCloudLayerHeight_Params params {};
		params.BaseCloudHeight = BaseCloudHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LayerHeight != nullptr)
			*LayerHeight = params.LayerHeight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Volumetric Cloud Base Cloud Height
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             BaseCloudHeight                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::VolumetricCloudBaseCloudHeight(double* BaseCloudHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Volumetric Cloud Base Cloud Height");
		
		AUltra_Dynamic_Sky_C_VolumetricCloudBaseCloudHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BaseCloudHeight != nullptr)
			*BaseCloudHeight = params.BaseCloudHeight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sky Ambient Color
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FLinearColor                                SkyAmbientColor                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::CurrentSkyAmbientColor(struct FLinearColor* SkyAmbientColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sky Ambient Color");
		
		AUltra_Dynamic_Sky_C_CurrentSkyAmbientColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SkyAmbientColor != nullptr)
			*SkyAmbientColor = params.SkyAmbientColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Fog Directional Inscattering Color
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FLinearColor                                DirectionalInscatteringColor                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::CurrentFogDirectionalInscatteringColor(struct FLinearColor* DirectionalInscatteringColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Fog Directional Inscattering Color");
		
		AUltra_Dynamic_Sky_C_CurrentFogDirectionalInscatteringColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DirectionalInscatteringColor != nullptr)
			*DirectionalInscatteringColor = params.DirectionalInscatteringColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Fog Inscattering Color
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FLinearColor                                InscatteringColor                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::CurrentFogInscatteringColor(struct FLinearColor* InscatteringColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Fog Inscattering Color");
		
		AUltra_Dynamic_Sky_C_CurrentFogInscatteringColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InscatteringColor != nullptr)
			*InscatteringColor = params.InscatteringColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Current Fog Base Colors
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                AmbientFogColor                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                DirectionalBaseColor                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                ScaledDirectionalBaseColor                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                SunFogBase                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                MoonFogBase                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::GetCurrentFogBaseColors(struct FLinearColor* AmbientFogColor, struct FLinearColor* DirectionalBaseColor, struct FLinearColor* ScaledDirectionalBaseColor, struct FLinearColor* SunFogBase, struct FLinearColor* MoonFogBase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Current Fog Base Colors");
		
		AUltra_Dynamic_Sky_C_GetCurrentFogBaseColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AmbientFogColor != nullptr)
			*AmbientFogColor = params.AmbientFogColor;
		if (DirectionalBaseColor != nullptr)
			*DirectionalBaseColor = params.DirectionalBaseColor;
		if (ScaledDirectionalBaseColor != nullptr)
			*ScaledDirectionalBaseColor = params.ScaledDirectionalBaseColor;
		if (SunFogBase != nullptr)
			*SunFogBase = params.SunFogBase;
		if (MoonFogBase != nullptr)
			*MoonFogBase = params.MoonFogBase;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Scale Sample Count
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             In                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::ScaleSampleCount(double In, double* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Scale Sample Count");
		
		AUltra_Dynamic_Sky_C_ScaleSampleCount_Params params {};
		params.In = In;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Fire Editor Dispatchers
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::FireEditorDispatchers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Fire Editor Dispatchers");
		
		AUltra_Dynamic_Sky_C_FireEditorDispatchers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Overcast Swirl
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::CurrentOvercastSwirl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Overcast Swirl");
		
		AUltra_Dynamic_Sky_C_CurrentOvercastSwirl_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Wisps Opacity
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::CurrentWispsOpacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Wisps Opacity");
		
		AUltra_Dynamic_Sky_C_CurrentWispsOpacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sky MID Cloud Density
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::SkyMIDCloudDensity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sky MID Cloud Density");
		
		AUltra_Dynamic_Sky_C_SkyMIDCloudDensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Overall Intensity
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::CurrentOverallIntensity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Overall Intensity");
		
		AUltra_Dynamic_Sky_C_CurrentOverallIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Lit Intensity
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::CurrentLitIntensity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Lit Intensity");
		
		AUltra_Dynamic_Sky_C_CurrentLitIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Saturation
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::CurrentSaturation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Saturation");
		
		AUltra_Dynamic_Sky_C_CurrentSaturation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Fog Start Distance
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::FogStartDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Fog Start Distance");
		
		AUltra_Dynamic_Sky_C_FogStartDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Fog Height Falloff
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::FogHeightFalloff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Fog Height Falloff");
		
		AUltra_Dynamic_Sky_C_FogHeightFalloff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Fog Density
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::CurrentFogDensity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Fog Density");
		
		AUltra_Dynamic_Sky_C_CurrentFogDensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Sky MID Parent Material Instance
	 * 		Flags  -> (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	void AUltra_Dynamic_Sky_C::GetSkyMIDParentMaterialInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Sky MID Parent Material Instance");
		
		AUltra_Dynamic_Sky_C_GetSkyMIDParentMaterialInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sunset Event Time
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::CurrentSunsetEventTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sunset Event Time");
		
		AUltra_Dynamic_Sky_C_CurrentSunsetEventTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sunrise Event Time
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::CurrentSunriseEventTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sunrise Event Time");
		
		AUltra_Dynamic_Sky_C_CurrentSunriseEventTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Clouds Time of Day Factor
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::CloudsTimeofDayFactor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Clouds Time of Day Factor");
		
		AUltra_Dynamic_Sky_C_CloudsTimeofDayFactor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Total Time Elapsed
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::TotalTimeElapsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Total Time Elapsed");
		
		AUltra_Dynamic_Sky_C_TotalTimeElapsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.MS to Time of Day
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Hours                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Minutes                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Seconds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Miliseconds                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Time                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::MStoTimeofDay(int32_t Hours, int32_t Minutes, int32_t Seconds, int32_t Miliseconds, double* Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.MS to Time of Day");
		
		AUltra_Dynamic_Sky_C_MStoTimeofDay_Params params {};
		params.Hours = Hours;
		params.Minutes = Minutes;
		params.Seconds = Seconds;
		params.Miliseconds = Miliseconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Time != nullptr)
			*Time = params.Time;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Convert Time of Day to Time Code
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTimecode                                   Timecode                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::ConvertTimeofDaytoTimeCode(double Time, struct FTimecode* Timecode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Convert Time of Day to Time Code");
		
		AUltra_Dynamic_Sky_C_ConvertTimeofDaytoTimeCode_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Timecode != nullptr)
			*Timecode = params.Timecode;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Time of Day Offset
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::TimeofDayOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Time of Day Offset");
		
		AUltra_Dynamic_Sky_C_TimeofDayOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current 2D Cloud Tint
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor AUltra_Dynamic_Sky_C::Current2DCloudTint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current 2D Cloud Tint");
		
		AUltra_Dynamic_Sky_C_Current2DCloudTint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Night Filter
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::NightFilter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Night Filter");
		
		AUltra_Dynamic_Sky_C_NightFilter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Find Overall Intensity
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             CloudDarkening                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	double AUltra_Dynamic_Sky_C::FindOverallIntensity(double CloudDarkening)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Find Overall Intensity");
		
		AUltra_Dynamic_Sky_C_FindOverallIntensity_Params params {};
		params.CloudDarkening = CloudDarkening;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cloud Darkening
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::CloudDarkening()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cloud Darkening");
		
		AUltra_Dynamic_Sky_C_CloudDarkening_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Absent Directional Lights Brightness
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::AbsentDirectionalLightsBrightness()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Absent Directional Lights Brightness");
		
		AUltra_Dynamic_Sky_C_AbsentDirectionalLightsBrightness_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Moon Phase Multiplier
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             WithoutLightBrightness                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	double AUltra_Dynamic_Sky_C::MoonPhaseMultiplier(double* WithoutLightBrightness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Moon Phase Multiplier");
		
		AUltra_Dynamic_Sky_C_MoonPhaseMultiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WithoutLightBrightness != nullptr)
			*WithoutLightBrightness = params.WithoutLightBrightness;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Gate With Current Changes
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               CloudsChanging                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               FogChanging                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               DustChanging                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AUltra_Dynamic_Sky_C::GateWithCurrentChanges(bool CloudsChanging, bool FogChanging, bool DustChanging)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Gate With Current Changes");
		
		AUltra_Dynamic_Sky_C_GateWithCurrentChanges_Params params {};
		params.CloudsChanging = CloudsChanging;
		params.FogChanging = FogChanging;
		params.DustChanging = DustChanging;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Using 2D Clouds
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool AUltra_Dynamic_Sky_C::Using2DClouds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Using 2D Clouds");
		
		AUltra_Dynamic_Sky_C_Using2DClouds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Dimming Directional Lights
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool AUltra_Dynamic_Sky_C::DimmingDirectionalLights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Dimming Directional Lights");
		
		AUltra_Dynamic_Sky_C_DimmingDirectionalLights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Use Sky Atmosphere
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool AUltra_Dynamic_Sky_C::UseSkyAtmosphere()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Use Sky Atmosphere");
		
		AUltra_Dynamic_Sky_C_UseSkyAtmosphere_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Light Pollution
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor AUltra_Dynamic_Sky_C::CurrentLightPollution()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Light Pollution");
		
		AUltra_Dynamic_Sky_C_CurrentLightPollution_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Overcast Light Contribution
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ForVolumetricClouds                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FLinearColor AUltra_Dynamic_Sky_C::OvercastLightContribution(bool ForVolumetricClouds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Overcast Light Contribution");
		
		AUltra_Dynamic_Sky_C_OvercastLightContribution_Params params {};
		params.ForVolumetricClouds = ForVolumetricClouds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Aurora Intensity
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::CurrentAuroraIntensity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Aurora Intensity");
		
		AUltra_Dynamic_Sky_C_CurrentAuroraIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Night Sky Glow
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor AUltra_Dynamic_Sky_C::CurrentNightSkyGlow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Night Sky Glow");
		
		AUltra_Dynamic_Sky_C_CurrentNightSkyGlow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Stars Color
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor AUltra_Dynamic_Sky_C::CurrentStarsColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Stars Color");
		
		AUltra_Dynamic_Sky_C_CurrentStarsColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Rayleigh Scattering Color
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor AUltra_Dynamic_Sky_C::CurrentRayleighScatteringColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Rayleigh Scattering Color");
		
		AUltra_Dynamic_Sky_C_CurrentRayleighScatteringColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Mie Scattering Scale
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::CurrentMieScatteringScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Mie Scattering Scale");
		
		AUltra_Dynamic_Sky_C_CurrentMieScatteringScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Mie Anisotropy
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::CurrentMieAnisotropy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Mie Anisotropy");
		
		AUltra_Dynamic_Sky_C_CurrentMieAnisotropy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Current Sky Light Color and Intensity
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             OutIntensity                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                OutColor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::GetCurrentSkyLightColorandIntensity(double* OutIntensity, struct FLinearColor* OutColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Current Sky Light Color and Intensity");
		
		AUltra_Dynamic_Sky_C_GetCurrentSkyLightColorandIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIntensity != nullptr)
			*OutIntensity = params.OutIntensity;
		if (OutColor != nullptr)
			*OutColor = params.OutColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sky Light Lower Hemisphere Color
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor AUltra_Dynamic_Sky_C::CurrentSkyLightLowerHemisphereColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sky Light Lower Hemisphere Color");
		
		AUltra_Dynamic_Sky_C_CurrentSkyLightLowerHemisphereColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Moon Light Material Color
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor AUltra_Dynamic_Sky_C::CurrentMoonLightMaterialColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Moon Light Material Color");
		
		AUltra_Dynamic_Sky_C_CurrentMoonLightMaterialColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Moon Lit Percent
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::CurrentMoonLitPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Moon Lit Percent");
		
		AUltra_Dynamic_Sky_C_CurrentMoonLitPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Moon Material Intensity
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::CurrentMoonMaterialIntensity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Moon Material Intensity");
		
		AUltra_Dynamic_Sky_C_CurrentMoonMaterialIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Moon Phase Angle
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor AUltra_Dynamic_Sky_C::CurrentMoonPhaseAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Moon Phase Angle");
		
		AUltra_Dynamic_Sky_C_CurrentMoonPhaseAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Moon Scale and Cutout Value
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Scale                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Cutout                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::CurrentMoonScaleandCutoutValue(double* Scale, double* Cutout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Moon Scale and Cutout Value");
		
		AUltra_Dynamic_Sky_C_CurrentMoonScaleandCutoutValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Scale != nullptr)
			*Scale = params.Scale;
		if (Cutout != nullptr)
			*Cutout = params.Cutout;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Moon Light Specular Scale
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::MoonLightSpecularScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Moon Light Specular Scale");
		
		AUltra_Dynamic_Sky_C_MoonLightSpecularScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Moon Light Volumetric Scattering Intensity
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::MoonLightVolumetricScatteringIntensity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Moon Light Volumetric Scattering Intensity");
		
		AUltra_Dynamic_Sky_C_MoonLightVolumetricScatteringIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Is Moon Light Casting Shadows
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Yes                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::IsMoonLightCastingShadows(bool* Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Is Moon Light Casting Shadows");
		
		AUltra_Dynamic_Sky_C_IsMoonLightCastingShadows_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Yes != nullptr)
			*Yes = params.Yes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Unfiltered Moon Light Intensity
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::UnfilteredMoonLightIntensity(double* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Unfiltered Moon Light Intensity");
		
		AUltra_Dynamic_Sky_C_UnfilteredMoonLightIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sun Radius
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::CurrentSunRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sun Radius");
		
		AUltra_Dynamic_Sky_C_CurrentSunRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sun Light Intensity
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::CurrentSunLightIntensity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sun Light Intensity");
		
		AUltra_Dynamic_Sky_C_CurrentSunLightIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Is Sun Light Casting Shadows
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Yes                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::IsSunLightCastingShadows(bool* Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Is Sun Light Casting Shadows");
		
		AUltra_Dynamic_Sky_C_IsSunLightCastingShadows_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Yes != nullptr)
			*Yes = params.Yes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sun Light Color
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor AUltra_Dynamic_Sky_C::CurrentSunLightColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sun Light Color");
		
		AUltra_Dynamic_Sky_C_CurrentSunLightColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sun Disk Color
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor AUltra_Dynamic_Sky_C::CurrentSunDiskColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sun Disk Color");
		
		AUltra_Dynamic_Sky_C_CurrentSunDiskColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sun Disk Intensity
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::CurrentSunDiskIntensity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Sun Disk Intensity");
		
		AUltra_Dynamic_Sky_C_CurrentSunDiskIntensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cloud Shadows Cloud Density
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::CloudShadowsCloudDensity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cloud Shadows Cloud Density");
		
		AUltra_Dynamic_Sky_C_CloudShadowsCloudDensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Current Cloud Shadows Intensity and Softness
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Intensity                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Softness                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::GetCurrentCloudShadowsIntensityandSoftness(double* Intensity, double* Softness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Current Cloud Shadows Intensity and Softness");
		
		AUltra_Dynamic_Sky_C_GetCurrentCloudShadowsIntensityandSoftness_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Intensity != nullptr)
			*Intensity = params.Intensity;
		if (Softness != nullptr)
			*Softness = params.Softness;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Volumetric Cloud Emissive Colors
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Bottom                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Top                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::GetVolumetricCloudEmissiveColors(struct FLinearColor* Bottom, struct FLinearColor* Top)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Volumetric Cloud Emissive Colors");
		
		AUltra_Dynamic_Sky_C_GetVolumetricCloudEmissiveColors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Bottom != nullptr)
			*Bottom = params.Bottom;
		if (Top != nullptr)
			*Top = params.Top;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.All Volumetric Cloud MIDs
	 * 		Flags  -> (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Shadows                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UMaterialInstanceDynamic*>            Mids                                                       (Parm, OutParm)
	 */
	void AUltra_Dynamic_Sky_C::AllVolumetricCloudMIDs(bool Shadows, TArray<class UMaterialInstanceDynamic*>* Mids)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.All Volumetric Cloud MIDs");
		
		AUltra_Dynamic_Sky_C_AllVolumetricCloudMIDs_Params params {};
		params.Shadows = Shadows;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Mids != nullptr)
			*Mids = params.Mids;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Base Clouds Scale
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::CurrentBaseCloudsScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Base Clouds Scale");
		
		AUltra_Dynamic_Sky_C_CurrentBaseCloudsScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cloud Texture Velocity
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FVector AUltra_Dynamic_Sky_C::CloudTextureVelocity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Cloud Texture Velocity");
		
		AUltra_Dynamic_Sky_C_CloudTextureVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Lerp to Simplified Clouds
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Alpha                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::CurrentLerptoSimplifiedClouds(double* Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Lerp to Simplified Clouds");
		
		AUltra_Dynamic_Sky_C_CurrentLerptoSimplifiedClouds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Alpha != nullptr)
			*Alpha = params.Alpha;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Volumetric Clouds Parent Materials
	 * 		Flags  -> (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	void AUltra_Dynamic_Sky_C::VolumetricCloudsParentMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Volumetric Clouds Parent Materials");
		
		AUltra_Dynamic_Sky_C_VolumetricCloudsParentMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Volumetric Cloud Macro Variation
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	double AUltra_Dynamic_Sky_C::CurrentVolumetricCloudMacroVariation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Volumetric Cloud Macro Variation");
		
		AUltra_Dynamic_Sky_C_CurrentVolumetricCloudMacroVariation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Volumetric Cloud Albedo
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor AUltra_Dynamic_Sky_C::CurrentVolumetricCloudAlbedo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Volumetric Cloud Albedo");
		
		AUltra_Dynamic_Sky_C_CurrentVolumetricCloudAlbedo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Volumetric Cloud Multiscattering Occlusion
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Occlusion                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::CurrentVolumetricCloudMultiscatteringOcclusion(double* Occlusion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Volumetric Cloud Multiscattering Occlusion");
		
		AUltra_Dynamic_Sky_C_CurrentVolumetricCloudMultiscatteringOcclusion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Occlusion != nullptr)
			*Occlusion = params.Occlusion;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Current Volumetric Cloud Extinction Scale
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Top                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::GetCurrentVolumetricCloudExtinctionScale(double* Top)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Current Volumetric Cloud Extinction Scale");
		
		AUltra_Dynamic_Sky_C_GetCurrentVolumetricCloudExtinctionScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Top != nullptr)
			*Top = params.Top;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Volumetric Clouds Density
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Layer1                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               CloudLayerVisible                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Layer2                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::CurrentVolumetricCloudsDensity(double* Layer1, bool* CloudLayerVisible, double* Layer2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Current Volumetric Clouds Density");
		
		AUltra_Dynamic_Sky_C_CurrentVolumetricCloudsDensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Layer1 != nullptr)
			*Layer1 = params.Layer1;
		if (CloudLayerVisible != nullptr)
			*CloudLayerVisible = params.CloudLayerVisible;
		if (Layer2 != nullptr)
			*Layer2 = params.Layer2;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Dynamic Sky Light Multiplier
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::UpdateDynamicSkyLightMultiplier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Dynamic Sky Light Multiplier");
		
		AUltra_Dynamic_Sky_C_UpdateDynamicSkyLightMultiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Transition Sky Light Intensity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             NewSkyLightIntensityMultiplier                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             TransitionTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::TransitionSkyLightIntensity(double NewSkyLightIntensityMultiplier, double TransitionTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Transition Sky Light Intensity");
		
		AUltra_Dynamic_Sky_C_TransitionSkyLightIntensity_Params params {};
		params.NewSkyLightIntensityMultiplier = NewSkyLightIntensityMultiplier;
		params.TransitionTime = TransitionTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Lens Flare
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::UpdateLensFlare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Lens Flare");
		
		AUltra_Dynamic_Sky_C_UpdateLensFlare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Up Lens Flare
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::SetUpLensFlare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Up Lens Flare");
		
		AUltra_Dynamic_Sky_C_SetUpLensFlare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Apply Volumetric Mode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUDS_VolRT_Mode                                    Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::ApplyVolumetricMode(EUDS_VolRT_Mode Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Apply Volumetric Mode");
		
		AUltra_Dynamic_Sky_C_ApplyVolumetricMode_Params params {};
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Moon Parameters
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::UpdateMoonParameters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Moon Parameters");
		
		AUltra_Dynamic_Sky_C_UpdateMoonParameters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sunrise Times
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::SunriseTimes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sunrise Times");
		
		AUltra_Dynamic_Sky_C_SunriseTimes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Apply Saved UDS And UDW State
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUDS_and_UDW_State                          State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::ApplySavedUDSAndUDWState(const struct FUDS_and_UDW_State& State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Apply Saved UDS And UDW State");
		
		AUltra_Dynamic_Sky_C_ApplySavedUDSAndUDWState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Create UDS and UDW State for Saving
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUDS_and_UDW_State                          PackagedState                                              (Parm, OutParm, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::CreateUDSandUDWStateforSaving(struct FUDS_and_UDW_State* PackagedState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Create UDS and UDW State for Saving");
		
		AUltra_Dynamic_Sky_C_CreateUDSandUDWStateforSaving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PackagedState != nullptr)
			*PackagedState = params.PackagedState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Replicated Time
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::UpdateReplicatedTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Replicated Time");
		
		AUltra_Dynamic_Sky_C_UpdateReplicatedTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Static Clouds
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::UpdateStaticClouds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Static Clouds");
		
		AUltra_Dynamic_Sky_C_UpdateStaticClouds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.OnRep_Replicated Time of Day
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::OnRep_ReplicatedTimeofDay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.OnRep_Replicated Time of Day");
		
		AUltra_Dynamic_Sky_C_OnRep_ReplicatedTimeofDay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Current Date and Time
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDateTime                                   CurrentDateandTime                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::GetCurrentDateandTime(struct FDateTime* CurrentDateandTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Current Date and Time");
		
		AUltra_Dynamic_Sky_C_GetCurrentDateandTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentDateandTime != nullptr)
			*CurrentDateandTime = params.CurrentDateandTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Check for Daylight Savings Time
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::CheckforDaylightSavingsTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Check for Daylight Savings Time");
		
		AUltra_Dynamic_Sky_C_CheckforDaylightSavingsTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Increment Day
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::IncrementDay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Increment Day");
		
		AUltra_Dynamic_Sky_C_IncrementDay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Force Valid Day
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::ForceValidDay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Force Valid Day");
		
		AUltra_Dynamic_Sky_C_ForceValidDay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Approximate Real Sun Moon and Stars
	 * 		Flags  -> (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Month                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Day                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Year                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             TimeOfDay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             TimeZone                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OnlyCalculateSun                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SunVector                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     MoonVector                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             RealPhase                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     PhaseAlignment                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             CelestialOrbit                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                CelestialYaw                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::ApproximateRealSunMoonandStars(int32_t Month, int32_t Day, int32_t Year, double TimeOfDay, double TimeZone, bool OnlyCalculateSun, struct FVector* SunVector, struct FVector* MoonVector, double* RealPhase, struct FVector* PhaseAlignment, double* CelestialOrbit, struct FLinearColor* CelestialYaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Approximate Real Sun Moon and Stars");
		
		AUltra_Dynamic_Sky_C_ApproximateRealSunMoonandStars_Params params {};
		params.Month = Month;
		params.Day = Day;
		params.Year = Year;
		params.TimeOfDay = TimeOfDay;
		params.TimeZone = TimeZone;
		params.OnlyCalculateSun = OnlyCalculateSun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SunVector != nullptr)
			*SunVector = params.SunVector;
		if (MoonVector != nullptr)
			*MoonVector = params.MoonVector;
		if (RealPhase != nullptr)
			*RealPhase = params.RealPhase;
		if (PhaseAlignment != nullptr)
			*PhaseAlignment = params.PhaseAlignment;
		if (CelestialOrbit != nullptr)
			*CelestialOrbit = params.CelestialOrbit;
		if (CelestialYaw != nullptr)
			*CelestialYaw = params.CelestialYaw;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Date and Time
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDateTime                                   DateTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::SetDateandTime(const struct FDateTime& DateTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Date and Time");
		
		AUltra_Dynamic_Sky_C_SetDateandTime_Params params {};
		params.DateTime = DateTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Directional Light Rotations
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::UpdateDirectionalLightRotations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Directional Light Rotations");
		
		AUltra_Dynamic_Sky_C_UpdateDirectionalLightRotations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Recapture Sky Light
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::RecaptureSkyLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Recapture Sky Light");
		
		AUltra_Dynamic_Sky_C_RecaptureSkyLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Settings Based on Platform and Scalability
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::UpdateSettingsBasedonPlatformandScalability()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Settings Based on Platform and Scalability");
		
		AUltra_Dynamic_Sky_C_UpdateSettingsBasedonPlatformandScalability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Variables Controlled By Weather
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::UpdateVariablesControlledByWeather()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Variables Controlled By Weather");
		
		AUltra_Dynamic_Sky_C_UpdateVariablesControlledByWeather_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Construction Script Function
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               RunByCounterpart                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               MoveStaticLights                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               RunBySequence                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::ConstructionScriptFunction(bool RunByCounterpart, bool MoveStaticLights, bool RunBySequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Construction Script Function");
		
		AUltra_Dynamic_Sky_C_ConstructionScriptFunction_Params params {};
		params.RunByCounterpart = RunByCounterpart;
		params.MoveStaticLights = MoveStaticLights;
		params.RunBySequence = RunBySequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Cloud Timing
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::SetCloudTiming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Cloud Timing");
		
		AUltra_Dynamic_Sky_C_SetCloudTiming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Static Variables
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::UpdateStaticVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Static Variables");
		
		AUltra_Dynamic_Sky_C_UpdateStaticVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Time of Day using Time Code
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTimecode                                   TimeCode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::SetTimeofDayusingTimeCode(const struct FTimecode& TimeCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Time of Day using Time Code");
		
		AUltra_Dynamic_Sky_C_SetTimeofDayusingTimeCode_Params params {};
		params.TimeCode = TimeCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Time of Day in Real Time Format
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTimecode                                   Time                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::GetTimeofDayinRealTimeFormat(struct FTimecode* Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Time of Day in Real Time Format");
		
		AUltra_Dynamic_Sky_C_GetTimeofDayinRealTimeFormat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Time != nullptr)
			*Time = params.Time;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Active Variables
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::UpdateActiveVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Active Variables");
		
		AUltra_Dynamic_Sky_C_UpdateActiveVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Sun and Moon Root Rotation
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::SetSunandMoonRootRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Sun and Moon Root Rotation");
		
		AUltra_Dynamic_Sky_C_SetSunandMoonRootRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.UserConstructionScript");
		
		AUltra_Dynamic_Sky_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.OnLoaded_AA91001A446E22425F2F54AAB2159C50
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::OnLoaded_AA91001A446E22425F2F54AAB2159C50(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.OnLoaded_AA91001A446E22425F2F54AAB2159C50");
		
		AUltra_Dynamic_Sky_C_OnLoaded_AA91001A446E22425F2F54AAB2159C50_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Start Async Loader
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::StartAsyncLoader()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Start Async Loader");
		
		AUltra_Dynamic_Sky_C_StartAsyncLoader_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.ReceiveTick");
		
		AUltra_Dynamic_Sky_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.ReceiveBeginPlay");
		
		AUltra_Dynamic_Sky_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Day Ended
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::DayEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Day Ended");
		
		AUltra_Dynamic_Sky_C_DayEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Restart Inside Cloud Fog
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::RestartInsideCloudFog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Restart Inside Cloud Fog");
		
		AUltra_Dynamic_Sky_C_RestartInsideCloudFog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Replicated ToD
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::UpdateReplicatedToD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Replicated ToD");
		
		AUltra_Dynamic_Sky_C_UpdateReplicatedToD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Timed Override with New Changes
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::TimedOverridewithNewChanges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Timed Override with New Changes");
		
		AUltra_Dynamic_Sky_C_TimedOverridewithNewChanges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Force Startup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::ForceStartup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Force Startup");
		
		AUltra_Dynamic_Sky_C_ForceStartup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.ReceiveEndPlay");
		
		AUltra_Dynamic_Sky_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.SetNewTime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTimecode                                   NewTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::SetNewTime(const struct FTimecode& NewTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.SetNewTime");
		
		AUltra_Dynamic_Sky_C_SetNewTime_Params params {};
		params.NewTime = NewTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.ExecuteUbergraph_Ultra_Dynamic_Sky
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::ExecuteUbergraph_Ultra_Dynamic_Sky(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.ExecuteUbergraph_Ultra_Dynamic_Sky");
		
		AUltra_Dynamic_Sky_C_ExecuteUbergraph_Ultra_Dynamic_Sky_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Hourly__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Hour                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::Hourly__DelegateSignature(int32_t Hour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Hourly__DelegateSignature");
		
		AUltra_Dynamic_Sky_C_Hourly__DelegateSignature_Params params {};
		params.Hour = Hour;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Midnight__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::Midnight__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Midnight__DelegateSignature");
		
		AUltra_Dynamic_Sky_C_Midnight__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sunrise__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::Sunrise__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sunrise__DelegateSignature");
		
		AUltra_Dynamic_Sky_C_Sunrise__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sunset__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AUltra_Dynamic_Sky_C::Sunset__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sunset__DelegateSignature");
		
		AUltra_Dynamic_Sky_C_Sunset__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUltra_Dynamic_Sky_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUltra_Dynamic_Sky_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C");
		return ptr;
	}

}


