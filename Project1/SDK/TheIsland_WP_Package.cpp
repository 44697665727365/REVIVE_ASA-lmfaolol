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
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.FinalBossToggles
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::FinalBossToggles(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.FinalBossToggles");
		
		ATheIsland_WP_C_FinalBossToggles_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.GetFoliageSolver
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATheIsland_WP_C::GetFoliageSolver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.GetFoliageSolver");
		
		ATheIsland_WP_C_GetFoliageSolver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.SnowEnvToggles
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::SnowEnvToggles(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.SnowEnvToggles");
		
		ATheIsland_WP_C_SnowEnvToggles_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.ToggleGrass
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bGrassEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::ToggleGrass(bool bGrassEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.ToggleGrass");
		
		ATheIsland_WP_C_ToggleGrass_Params params {};
		params.bGrassEnable = bGrassEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.SetVisFlagsOnDCM
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATheIsland_WP_C::SetVisFlagsOnDCM()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.SetVisFlagsOnDCM");
		
		ATheIsland_WP_C_SetVisFlagsOnDCM_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BlendMaterialFog
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATheIsland_WP_C::BlendMaterialFog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BlendMaterialFog");
		
		ATheIsland_WP_C_BlendMaterialFog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.Set Ocean PPVis
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::SetOceanPPVis(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.Set Ocean PPVis");
		
		ATheIsland_WP_C_SetOceanPPVis_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.ToggleHLODVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::ToggleHLODVisibility(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.ToggleHLODVisibility");
		
		ATheIsland_WP_C_ToggleHLODVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.SortPostProcessVOlumes
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APostProcessVolume*                          NewPostProcess                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::SortPostProcessVOlumes(class APostProcessVolume* NewPostProcess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.SortPostProcessVOlumes");
		
		ATheIsland_WP_C_SortPostProcessVOlumes_Params params {};
		params.NewPostProcess = NewPostProcess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.Debug
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATheIsland_WP_C::Debug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.Debug");
		
		ATheIsland_WP_C_Debug_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.WaterParticles
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATheIsland_WP_C::WaterParticles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.WaterParticles");
		
		ATheIsland_WP_C_WaterParticles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.WorldActorVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::WorldActorVisibility(bool Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.WorldActorVisibility");
		
		ATheIsland_WP_C_WorldActorVisibility_Params params {};
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.Set Skylight Visibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::SetSkylightVisibility(bool Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.Set Skylight Visibility");
		
		ATheIsland_WP_C_SetSkylightVisibility_Params params {};
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.UDS Visibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::UDSVisibility(bool Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.UDS Visibility");
		
		ATheIsland_WP_C_UDSVisibility_Params params {};
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.Set Main Directional Visibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::SetMainDirectionalVisibility(bool Visibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.Set Main Directional Visibility");
		
		ATheIsland_WP_C_SetMainDirectionalVisibility_Params params {};
		params.Visibility = Visibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.Set World Fog Visiblity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Visiblity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::SetWorldFogVisiblity(bool Visiblity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.Set World Fog Visiblity");
		
		ATheIsland_WP_C_SetWorldFogVisiblity_Params params {};
		params.Visiblity = Visiblity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.OnRep_CurrentTekCaveDifficulty
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATheIsland_WP_C::OnRep_CurrentTekCaveDifficulty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.OnRep_CurrentTekCaveDifficulty");
		
		ATheIsland_WP_C_OnRep_CurrentTekCaveDifficulty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.IsReallyUnderwater
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ReallyUnderwater                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::IsReallyUnderwater(bool* ReallyUnderwater)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.IsReallyUnderwater");
		
		ATheIsland_WP_C_IsReallyUnderwater_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReallyUnderwater != nullptr)
			*ReallyUnderwater = params.ReallyUnderwater;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.OnRep_bIsRaining
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATheIsland_WP_C::OnRep_bIsRaining()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.OnRep_bIsRaining");
		
		ATheIsland_WP_C_OnRep_bIsRaining_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.K2Node_MatineeController_176_EnableCollision
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATheIsland_WP_C::K2Node_MatineeController_176_EnableCollision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.K2Node_MatineeController_176_EnableCollision");
		
		ATheIsland_WP_C_K2Node_MatineeController_176_EnableCollision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.K2Node_MatineeController_176_DisableCollision
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATheIsland_WP_C::K2Node_MatineeController_176_DisableCollision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.K2Node_MatineeController_176_DisableCollision");
		
		ATheIsland_WP_C_K2Node_MatineeController_176_DisableCollision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.K2Node_MatineeController_176_Finished
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATheIsland_WP_C::K2Node_MatineeController_176_Finished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.K2Node_MatineeController_176_Finished");
		
		ATheIsland_WP_C_K2Node_MatineeController_176_Finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATheIsland_WP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.ReceiveBeginPlay");
		
		ATheIsland_WP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.ReceiveTick");
		
		ATheIsland_WP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__CaveGeneralPostProcess_2_K2Node_ActorBoundEvent_0_PostprocessVolumeEnteredSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__CaveGeneralPostProcess_2_K2Node_ActorBoundEvent_0_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__CaveGeneralPostProcess_2_K2Node_ActorBoundEvent_0_PostprocessVolumeEnteredSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__CaveGeneralPostProcess_2_K2Node_ActorBoundEvent_0_PostprocessVolumeEnteredSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__CaveGeneralPostProcess_2_K2Node_ActorBoundEvent_31_PostprocessVolumeLeftSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__CaveGeneralPostProcess_2_K2Node_ActorBoundEvent_31_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__CaveGeneralPostProcess_2_K2Node_ActorBoundEvent_31_PostprocessVolumeLeftSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__CaveGeneralPostProcess_2_K2Node_ActorBoundEvent_31_PostprocessVolumeLeftSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__Cave02_Encompassing_PostProcess_K2Node_ActorBoundEvent_67_PostprocessVolumeEnteredSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__Cave02_Encompassing_PostProcess_K2Node_ActorBoundEvent_67_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__Cave02_Encompassing_PostProcess_K2Node_ActorBoundEvent_67_PostprocessVolumeEnteredSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__Cave02_Encompassing_PostProcess_K2Node_ActorBoundEvent_67_PostprocessVolumeEnteredSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__Cave02_Encompassing_PostProcess_K2Node_ActorBoundEvent_92_PostprocessVolumeLeftSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__Cave02_Encompassing_PostProcess_K2Node_ActorBoundEvent_92_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__Cave02_Encompassing_PostProcess_K2Node_ActorBoundEvent_92_PostprocessVolumeLeftSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__Cave02_Encompassing_PostProcess_K2Node_ActorBoundEvent_92_PostprocessVolumeLeftSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__Cave03_General_PostProcess_Volume_K2Node_ActorBoundEvent_233_PostprocessVolumeEnteredSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__Cave03_General_PostProcess_Volume_K2Node_ActorBoundEvent_233_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__Cave03_General_PostProcess_Volume_K2Node_ActorBoundEvent_233_PostprocessVolumeEnteredSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__Cave03_General_PostProcess_Volume_K2Node_ActorBoundEvent_233_PostprocessVolumeEnteredSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__Cave03_General_PostProcess_Volume_K2Node_ActorBoundEvent_257_PostprocessVolumeLeftSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__Cave03_General_PostProcess_Volume_K2Node_ActorBoundEvent_257_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__Cave03_General_PostProcess_Volume_K2Node_ActorBoundEvent_257_PostprocessVolumeLeftSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__Cave03_General_PostProcess_Volume_K2Node_ActorBoundEvent_257_PostprocessVolumeLeftSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__Cave5GeneralPostProcessVolume_3_K2Node_ActorBoundEvent_693_PostprocessVolumeEnteredSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__Cave5GeneralPostProcessVolume_3_K2Node_ActorBoundEvent_693_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__Cave5GeneralPostProcessVolume_3_K2Node_ActorBoundEvent_693_PostprocessVolumeEnteredSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__Cave5GeneralPostProcessVolume_3_K2Node_ActorBoundEvent_693_PostprocessVolumeEnteredSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__Cave5GeneralPostProcessVolume_3_K2Node_ActorBoundEvent_728_PostprocessVolumeLeftSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__Cave5GeneralPostProcessVolume_3_K2Node_ActorBoundEvent_728_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__Cave5GeneralPostProcessVolume_3_K2Node_ActorBoundEvent_728_PostprocessVolumeLeftSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__Cave5GeneralPostProcessVolume_3_K2Node_ActorBoundEvent_728_PostprocessVolumeLeftSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__Cave06_Encompassing_PostProcessVolume_K2Node_ActorBoundEvent_213_PostprocessVolumeEnteredSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__Cave06_Encompassing_PostProcessVolume_K2Node_ActorBoundEvent_213_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__Cave06_Encompassing_PostProcessVolume_K2Node_ActorBoundEvent_213_PostprocessVolumeEnteredSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__Cave06_Encompassing_PostProcessVolume_K2Node_ActorBoundEvent_213_PostprocessVolumeEnteredSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__Cave06_Encompassing_PostProcessVolume_K2Node_ActorBoundEvent_254_PostprocessVolumeLeftSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__Cave06_Encompassing_PostProcessVolume_K2Node_ActorBoundEvent_254_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__Cave06_Encompassing_PostProcessVolume_K2Node_ActorBoundEvent_254_PostprocessVolumeLeftSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__Cave06_Encompassing_PostProcessVolume_K2Node_ActorBoundEvent_254_PostprocessVolumeLeftSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__Cave7PostProcessVolume_K2Node_ActorBoundEvent_139_PostprocessVolumeEnteredSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__Cave7PostProcessVolume_K2Node_ActorBoundEvent_139_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__Cave7PostProcessVolume_K2Node_ActorBoundEvent_139_PostprocessVolumeEnteredSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__Cave7PostProcessVolume_K2Node_ActorBoundEvent_139_PostprocessVolumeEnteredSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__Cave7PostProcessVolume_K2Node_ActorBoundEvent_182_PostprocessVolumeLeftSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__Cave7PostProcessVolume_K2Node_ActorBoundEvent_182_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__Cave7PostProcessVolume_K2Node_ActorBoundEvent_182_PostprocessVolumeLeftSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__Cave7PostProcessVolume_K2Node_ActorBoundEvent_182_PostprocessVolumeLeftSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__WaterPostProcess_2_K2Node_ActorBoundEvent_394_PostprocessVolumeEnteredSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__WaterPostProcess_2_K2Node_ActorBoundEvent_394_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__WaterPostProcess_2_K2Node_ActorBoundEvent_394_PostprocessVolumeEnteredSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__WaterPostProcess_2_K2Node_ActorBoundEvent_394_PostprocessVolumeEnteredSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__WaterPostProcess_2_K2Node_ActorBoundEvent_427_PostprocessVolumeLeftSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__WaterPostProcess_2_K2Node_ActorBoundEvent_427_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__WaterPostProcess_2_K2Node_ActorBoundEvent_427_PostprocessVolumeLeftSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__WaterPostProcess_2_K2Node_ActorBoundEvent_427_PostprocessVolumeLeftSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_BigPostProcessVolume_K2Node_ActorBoundEvent_504_PostprocessVolumeEnteredSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__UnderWaterCave_BigPostProcessVolume_K2Node_ActorBoundEvent_504_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_BigPostProcessVolume_K2Node_ActorBoundEvent_504_PostprocessVolumeEnteredSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__UnderWaterCave_BigPostProcessVolume_K2Node_ActorBoundEvent_504_PostprocessVolumeEnteredSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_BigPostProcessVolume_3_K2Node_ActorBoundEvent_505_PostprocessVolumeEnteredSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__UnderWaterCave_BigPostProcessVolume_3_K2Node_ActorBoundEvent_505_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_BigPostProcessVolume_3_K2Node_ActorBoundEvent_505_PostprocessVolumeEnteredSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__UnderWaterCave_BigPostProcessVolume_3_K2Node_ActorBoundEvent_505_PostprocessVolumeEnteredSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_BigPostProcessVolume_4_K2Node_ActorBoundEvent_506_PostprocessVolumeEnteredSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__UnderWaterCave_BigPostProcessVolume_4_K2Node_ActorBoundEvent_506_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_BigPostProcessVolume_4_K2Node_ActorBoundEvent_506_PostprocessVolumeEnteredSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__UnderWaterCave_BigPostProcessVolume_4_K2Node_ActorBoundEvent_506_PostprocessVolumeEnteredSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_BigPostProcessVolume_5_K2Node_ActorBoundEvent_507_PostprocessVolumeEnteredSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__UnderWaterCave_BigPostProcessVolume_5_K2Node_ActorBoundEvent_507_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_BigPostProcessVolume_5_K2Node_ActorBoundEvent_507_PostprocessVolumeEnteredSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__UnderWaterCave_BigPostProcessVolume_5_K2Node_ActorBoundEvent_507_PostprocessVolumeEnteredSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_K2Node_ActorBoundEvent_508_PostprocessVolumeEnteredSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__UnderWaterCave_Medium_PostProcessVolume_K2Node_ActorBoundEvent_508_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_K2Node_ActorBoundEvent_508_PostprocessVolumeEnteredSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__UnderWaterCave_Medium_PostProcessVolume_K2Node_ActorBoundEvent_508_PostprocessVolumeEnteredSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_3_K2Node_ActorBoundEvent_509_PostprocessVolumeEnteredSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__UnderWaterCave_Medium_PostProcessVolume_3_K2Node_ActorBoundEvent_509_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_3_K2Node_ActorBoundEvent_509_PostprocessVolumeEnteredSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__UnderWaterCave_Medium_PostProcessVolume_3_K2Node_ActorBoundEvent_509_PostprocessVolumeEnteredSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_4_K2Node_ActorBoundEvent_510_PostprocessVolumeEnteredSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__UnderWaterCave_Medium_PostProcessVolume_4_K2Node_ActorBoundEvent_510_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_4_K2Node_ActorBoundEvent_510_PostprocessVolumeEnteredSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__UnderWaterCave_Medium_PostProcessVolume_4_K2Node_ActorBoundEvent_510_PostprocessVolumeEnteredSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_5_K2Node_ActorBoundEvent_511_PostprocessVolumeEnteredSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__UnderWaterCave_Medium_PostProcessVolume_5_K2Node_ActorBoundEvent_511_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_5_K2Node_ActorBoundEvent_511_PostprocessVolumeEnteredSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__UnderWaterCave_Medium_PostProcessVolume_5_K2Node_ActorBoundEvent_511_PostprocessVolumeEnteredSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_2_K2Node_ActorBoundEvent_512_PostprocessVolumeEnteredSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__UnderWaterCave_SmalPostProcessVolume_2_K2Node_ActorBoundEvent_512_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_2_K2Node_ActorBoundEvent_512_PostprocessVolumeEnteredSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__UnderWaterCave_SmalPostProcessVolume_2_K2Node_ActorBoundEvent_512_PostprocessVolumeEnteredSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_3_K2Node_ActorBoundEvent_513_PostprocessVolumeEnteredSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__UnderWaterCave_SmalPostProcessVolume_3_K2Node_ActorBoundEvent_513_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_3_K2Node_ActorBoundEvent_513_PostprocessVolumeEnteredSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__UnderWaterCave_SmalPostProcessVolume_3_K2Node_ActorBoundEvent_513_PostprocessVolumeEnteredSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_4_K2Node_ActorBoundEvent_514_PostprocessVolumeEnteredSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__UnderWaterCave_SmalPostProcessVolume_4_K2Node_ActorBoundEvent_514_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_4_K2Node_ActorBoundEvent_514_PostprocessVolumeEnteredSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__UnderWaterCave_SmalPostProcessVolume_4_K2Node_ActorBoundEvent_514_PostprocessVolumeEnteredSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_5_K2Node_ActorBoundEvent_515_PostprocessVolumeEnteredSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__UnderWaterCave_SmalPostProcessVolume_5_K2Node_ActorBoundEvent_515_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_5_K2Node_ActorBoundEvent_515_PostprocessVolumeEnteredSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__UnderWaterCave_SmalPostProcessVolume_5_K2Node_ActorBoundEvent_515_PostprocessVolumeEnteredSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_BigPostProcessVolume_K2Node_ActorBoundEvent_1782_PostprocessVolumeLeftSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__UnderWaterCave_BigPostProcessVolume_K2Node_ActorBoundEvent_1782_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_BigPostProcessVolume_K2Node_ActorBoundEvent_1782_PostprocessVolumeLeftSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__UnderWaterCave_BigPostProcessVolume_K2Node_ActorBoundEvent_1782_PostprocessVolumeLeftSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_BigPostProcessVolume_3_K2Node_ActorBoundEvent_1783_PostprocessVolumeLeftSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__UnderWaterCave_BigPostProcessVolume_3_K2Node_ActorBoundEvent_1783_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_BigPostProcessVolume_3_K2Node_ActorBoundEvent_1783_PostprocessVolumeLeftSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__UnderWaterCave_BigPostProcessVolume_3_K2Node_ActorBoundEvent_1783_PostprocessVolumeLeftSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_BigPostProcessVolume_4_K2Node_ActorBoundEvent_1784_PostprocessVolumeLeftSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__UnderWaterCave_BigPostProcessVolume_4_K2Node_ActorBoundEvent_1784_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_BigPostProcessVolume_4_K2Node_ActorBoundEvent_1784_PostprocessVolumeLeftSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__UnderWaterCave_BigPostProcessVolume_4_K2Node_ActorBoundEvent_1784_PostprocessVolumeLeftSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_BigPostProcessVolume_5_K2Node_ActorBoundEvent_1785_PostprocessVolumeLeftSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__UnderWaterCave_BigPostProcessVolume_5_K2Node_ActorBoundEvent_1785_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_BigPostProcessVolume_5_K2Node_ActorBoundEvent_1785_PostprocessVolumeLeftSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__UnderWaterCave_BigPostProcessVolume_5_K2Node_ActorBoundEvent_1785_PostprocessVolumeLeftSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_K2Node_ActorBoundEvent_1786_PostprocessVolumeLeftSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__UnderWaterCave_Medium_PostProcessVolume_K2Node_ActorBoundEvent_1786_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_K2Node_ActorBoundEvent_1786_PostprocessVolumeLeftSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__UnderWaterCave_Medium_PostProcessVolume_K2Node_ActorBoundEvent_1786_PostprocessVolumeLeftSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_3_K2Node_ActorBoundEvent_1787_PostprocessVolumeLeftSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__UnderWaterCave_Medium_PostProcessVolume_3_K2Node_ActorBoundEvent_1787_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_3_K2Node_ActorBoundEvent_1787_PostprocessVolumeLeftSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__UnderWaterCave_Medium_PostProcessVolume_3_K2Node_ActorBoundEvent_1787_PostprocessVolumeLeftSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_4_K2Node_ActorBoundEvent_1788_PostprocessVolumeLeftSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__UnderWaterCave_Medium_PostProcessVolume_4_K2Node_ActorBoundEvent_1788_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_4_K2Node_ActorBoundEvent_1788_PostprocessVolumeLeftSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__UnderWaterCave_Medium_PostProcessVolume_4_K2Node_ActorBoundEvent_1788_PostprocessVolumeLeftSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_5_K2Node_ActorBoundEvent_1789_PostprocessVolumeLeftSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__UnderWaterCave_Medium_PostProcessVolume_5_K2Node_ActorBoundEvent_1789_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_Medium_PostProcessVolume_5_K2Node_ActorBoundEvent_1789_PostprocessVolumeLeftSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__UnderWaterCave_Medium_PostProcessVolume_5_K2Node_ActorBoundEvent_1789_PostprocessVolumeLeftSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_2_K2Node_ActorBoundEvent_1790_PostprocessVolumeLeftSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__UnderWaterCave_SmalPostProcessVolume_2_K2Node_ActorBoundEvent_1790_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_2_K2Node_ActorBoundEvent_1790_PostprocessVolumeLeftSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__UnderWaterCave_SmalPostProcessVolume_2_K2Node_ActorBoundEvent_1790_PostprocessVolumeLeftSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_3_K2Node_ActorBoundEvent_1791_PostprocessVolumeLeftSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__UnderWaterCave_SmalPostProcessVolume_3_K2Node_ActorBoundEvent_1791_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_3_K2Node_ActorBoundEvent_1791_PostprocessVolumeLeftSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__UnderWaterCave_SmalPostProcessVolume_3_K2Node_ActorBoundEvent_1791_PostprocessVolumeLeftSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_4_K2Node_ActorBoundEvent_1792_PostprocessVolumeLeftSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__UnderWaterCave_SmalPostProcessVolume_4_K2Node_ActorBoundEvent_1792_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_4_K2Node_ActorBoundEvent_1792_PostprocessVolumeLeftSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__UnderWaterCave_SmalPostProcessVolume_4_K2Node_ActorBoundEvent_1792_PostprocessVolumeLeftSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_5_K2Node_ActorBoundEvent_1793_PostprocessVolumeLeftSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__UnderWaterCave_SmalPostProcessVolume_5_K2Node_ActorBoundEvent_1793_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__UnderWaterCave_SmalPostProcessVolume_5_K2Node_ActorBoundEvent_1793_PostprocessVolumeLeftSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__UnderWaterCave_SmalPostProcessVolume_5_K2Node_ActorBoundEvent_1793_PostprocessVolumeLeftSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__SwampCave_PostProcessVolume_K2Node_ActorBoundEvent_1470_PostprocessVolumeEnteredSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__SwampCave_PostProcessVolume_K2Node_ActorBoundEvent_1470_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__SwampCave_PostProcessVolume_K2Node_ActorBoundEvent_1470_PostprocessVolumeEnteredSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__SwampCave_PostProcessVolume_K2Node_ActorBoundEvent_1470_PostprocessVolumeEnteredSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__SwampCave_PostProcessVolume_K2Node_ActorBoundEvent_1616_PostprocessVolumeLeftSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__SwampCave_PostProcessVolume_K2Node_ActorBoundEvent_1616_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__SwampCave_PostProcessVolume_K2Node_ActorBoundEvent_1616_PostprocessVolumeLeftSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__SwampCave_PostProcessVolume_K2Node_ActorBoundEvent_1616_PostprocessVolumeLeftSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__IceCaveGeneralPostProcessVolume_K2Node_ActorBoundEvent_2319_PostprocessVolumeEnteredSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__IceCaveGeneralPostProcessVolume_K2Node_ActorBoundEvent_2319_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__IceCaveGeneralPostProcessVolume_K2Node_ActorBoundEvent_2319_PostprocessVolumeEnteredSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__IceCaveGeneralPostProcessVolume_K2Node_ActorBoundEvent_2319_PostprocessVolumeEnteredSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__IceCaveGeneralPostProcessVolume_K2Node_ActorBoundEvent_2450_PostprocessVolumeLeftSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__IceCaveGeneralPostProcessVolume_K2Node_ActorBoundEvent_2450_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__IceCaveGeneralPostProcessVolume_K2Node_ActorBoundEvent_2450_PostprocessVolumeLeftSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__IceCaveGeneralPostProcessVolume_K2Node_ActorBoundEvent_2450_PostprocessVolumeLeftSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__SpiderBossPostProcessing_K2Node_ActorBoundEvent_1227_PostprocessVolumeEnteredSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__SpiderBossPostProcessing_K2Node_ActorBoundEvent_1227_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__SpiderBossPostProcessing_K2Node_ActorBoundEvent_1227_PostprocessVolumeEnteredSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__SpiderBossPostProcessing_K2Node_ActorBoundEvent_1227_PostprocessVolumeEnteredSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__SpiderBossPostProcessing_K2Node_ActorBoundEvent_1462_PostprocessVolumeLeftSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__SpiderBossPostProcessing_K2Node_ActorBoundEvent_1462_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__SpiderBossPostProcessing_K2Node_ActorBoundEvent_1462_PostprocessVolumeLeftSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__SpiderBossPostProcessing_K2Node_ActorBoundEvent_1462_PostprocessVolumeLeftSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__GorillaSnowBossPostProcessing_K2Node_ActorBoundEvent_1058_PostprocessVolumeEnteredSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__GorillaSnowBossPostProcessing_K2Node_ActorBoundEvent_1058_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__GorillaSnowBossPostProcessing_K2Node_ActorBoundEvent_1058_PostprocessVolumeEnteredSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__GorillaSnowBossPostProcessing_K2Node_ActorBoundEvent_1058_PostprocessVolumeEnteredSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__GorillaSnowBossPostProcessing_K2Node_ActorBoundEvent_1178_PostprocessVolumeLeftSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__GorillaSnowBossPostProcessing_K2Node_ActorBoundEvent_1178_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__GorillaSnowBossPostProcessing_K2Node_ActorBoundEvent_1178_PostprocessVolumeLeftSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__GorillaSnowBossPostProcessing_K2Node_ActorBoundEvent_1178_PostprocessVolumeLeftSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__DragonPostProcessVolume_K2Node_ActorBoundEvent_1432_PostprocessVolumeEnteredSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__DragonPostProcessVolume_K2Node_ActorBoundEvent_1432_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__DragonPostProcessVolume_K2Node_ActorBoundEvent_1432_PostprocessVolumeEnteredSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__DragonPostProcessVolume_K2Node_ActorBoundEvent_1432_PostprocessVolumeEnteredSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__DragonPostProcessVolume_K2Node_ActorBoundEvent_1569_PostprocessVolumeLeftSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__DragonPostProcessVolume_K2Node_ActorBoundEvent_1569_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__DragonPostProcessVolume_K2Node_ActorBoundEvent_1569_PostprocessVolumeLeftSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__DragonPostProcessVolume_K2Node_ActorBoundEvent_1569_PostprocessVolumeLeftSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.NetSetTekCaveDifficulty
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            difficulty                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::NetSetTekCaveDifficulty(int32_t difficulty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.NetSetTekCaveDifficulty");
		
		ATheIsland_WP_C_NetSetTekCaveDifficulty_Params params {};
		params.difficulty = difficulty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.NetClearTekCaveDifficulty
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATheIsland_WP_C::NetClearTekCaveDifficulty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.NetClearTekCaveDifficulty");
		
		ATheIsland_WP_C_NetClearTekCaveDifficulty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.EndTekCave
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATheIsland_WP_C::EndTekCave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.EndTekCave");
		
		ATheIsland_WP_C_EndTekCave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.ActivateTekCave
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            difficulty                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::ActivateTekCave(int32_t difficulty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.ActivateTekCave");
		
		ATheIsland_WP_C_ActivateTekCave_Params params {};
		params.difficulty = difficulty;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__PP_FinalBoss_K2Node_ActorBoundEvent_1277_PostprocessVolumeEnteredSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__PP_FinalBoss_K2Node_ActorBoundEvent_1277_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__PP_FinalBoss_K2Node_ActorBoundEvent_1277_PostprocessVolumeEnteredSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__PP_FinalBoss_K2Node_ActorBoundEvent_1277_PostprocessVolumeEnteredSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__PP_FinalBoss_K2Node_ActorBoundEvent_1420_PostprocessVolumeLeftSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__PP_FinalBoss_K2Node_ActorBoundEvent_1420_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__PP_FinalBoss_K2Node_ActorBoundEvent_1420_PostprocessVolumeLeftSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__PP_FinalBoss_K2Node_ActorBoundEvent_1420_PostprocessVolumeLeftSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.EnableEndBossArena
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATheIsland_WP_C::EnableEndBossArena()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.EnableEndBossArena");
		
		ATheIsland_WP_C_EnableEndBossArena_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.DisableEndBossArena
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATheIsland_WP_C::DisableEndBossArena()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.DisableEndBossArena");
		
		ATheIsland_WP_C_DisableEndBossArena_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__CaveEastPostprocessVolume_2_K2Node_ActorBoundEvent_1494_PostprocessVolumeEnteredSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__CaveEastPostprocessVolume_2_K2Node_ActorBoundEvent_1494_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__CaveEastPostprocessVolume_2_K2Node_ActorBoundEvent_1494_PostprocessVolumeEnteredSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__CaveEastPostprocessVolume_2_K2Node_ActorBoundEvent_1494_PostprocessVolumeEnteredSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__CaveEastPostprocessVolume_2_K2Node_ActorBoundEvent_1654_PostprocessVolumeLeftSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__CaveEastPostprocessVolume_2_K2Node_ActorBoundEvent_1654_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__CaveEastPostprocessVolume_2_K2Node_ActorBoundEvent_1654_PostprocessVolumeLeftSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__CaveEastPostprocessVolume_2_K2Node_ActorBoundEvent_1654_PostprocessVolumeLeftSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__TheIsland_VolcanoTekCave_PPV_K2Node_ActorBoundEvent_0_PostprocessVolumeEnteredSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__TheIsland_VolcanoTekCave_PPV_K2Node_ActorBoundEvent_0_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__TheIsland_VolcanoTekCave_PPV_K2Node_ActorBoundEvent_0_PostprocessVolumeEnteredSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__TheIsland_VolcanoTekCave_PPV_K2Node_ActorBoundEvent_0_PostprocessVolumeEnteredSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__TheIsland_VolcanoTekCave_PPV_K2Node_ActorBoundEvent_1_PostprocessVolumeLeftSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__TheIsland_VolcanoTekCave_PPV_K2Node_ActorBoundEvent_1_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__TheIsland_VolcanoTekCave_PPV_K2Node_ActorBoundEvent_1_PostprocessVolumeLeftSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__TheIsland_VolcanoTekCave_PPV_K2Node_ActorBoundEvent_1_PostprocessVolumeLeftSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.SkiesofBlue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             TransitionTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::SkiesofBlue(double TransitionTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.SkiesofBlue");
		
		ATheIsland_WP_C_SkiesofBlue_Params params {};
		params.TransitionTime = TransitionTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.Umbrella
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             TransitionTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::Umbrella(double TransitionTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.Umbrella");
		
		ATheIsland_WP_C_Umbrella_Params params {};
		params.TransitionTime = TransitionTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.RunBenchmark
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATheIsland_WP_C::RunBenchmark()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.RunBenchmark");
		
		ATheIsland_WP_C_RunBenchmark_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.StopTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HideSupplyDrops                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::StopTime(bool HideSupplyDrops)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.StopTime");
		
		ATheIsland_WP_C_StopTime_Params params {};
		params.HideSupplyDrops = HideSupplyDrops;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.StartTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATheIsland_WP_C::StartTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.StartTime");
		
		ATheIsland_WP_C_StartTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.OnGameStateReady
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AGameState*                                  GameState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::OnGameStateReady(class AGameState* GameState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.OnGameStateReady");
		
		ATheIsland_WP_C_OnGameStateReady_Params params {};
		params.GameState = GameState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.OnAnyPPEntered
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APostProcessVolume*                          PostProcessVolume                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::OnAnyPPEntered(class APostProcessVolume* PostProcessVolume, class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.OnAnyPPEntered");
		
		ATheIsland_WP_C_OnAnyPPEntered_Params params {};
		params.PostProcessVolume = PostProcessVolume;
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.OnAnyPPLeft
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APostProcessVolume*                          PostProcessVolume                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::OnAnyPPLeft(class APostProcessVolume* PostProcessVolume, class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.OnAnyPPLeft");
		
		ATheIsland_WP_C_OnAnyPPLeft_Params params {};
		params.PostProcessVolume = PostProcessVolume;
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.ToggleFog
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATheIsland_WP_C::ToggleFog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.ToggleFog");
		
		ATheIsland_WP_C_ToggleFog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.HeatWave
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             TransitionTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::HeatWave(double TransitionTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.HeatWave");
		
		ATheIsland_WP_C_HeatWave_Params params {};
		params.TransitionTime = TransitionTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.Fog
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             TransitionTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::Fog(double TransitionTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.Fog");
		
		ATheIsland_WP_C_Fog_Params params {};
		params.TransitionTime = TransitionTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.ColdFront
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             TransitionTime                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::ColdFront(double TransitionTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.ColdFront");
		
		ATheIsland_WP_C_ColdFront_Params params {};
		params.TransitionTime = TransitionTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__TheIsland_WP_EndGame_PostProcessVolume_2_K2Node_ActorBoundEvent_2_PostprocessVolumeEnteredSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__TheIsland_WP_EndGame_PostProcessVolume_2_K2Node_ActorBoundEvent_2_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__TheIsland_WP_EndGame_PostProcessVolume_2_K2Node_ActorBoundEvent_2_PostprocessVolumeEnteredSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__TheIsland_WP_EndGame_PostProcessVolume_2_K2Node_ActorBoundEvent_2_PostprocessVolumeEnteredSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.BndEvt__TheIsland_WP_EndGame_PostProcessVolume_2_K2Node_ActorBoundEvent_3_PostprocessVolumeLeftSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPrimaryPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::BndEvt__TheIsland_WP_EndGame_PostProcessVolume_2_K2Node_ActorBoundEvent_3_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.BndEvt__TheIsland_WP_EndGame_PostProcessVolume_2_K2Node_ActorBoundEvent_3_PostprocessVolumeLeftSignature__DelegateSignature");
		
		ATheIsland_WP_C_BndEvt__TheIsland_WP_EndGame_PostProcessVolume_2_K2Node_ActorBoundEvent_3_PostprocessVolumeLeftSignature__DelegateSignature_Params params {};
		params.Controller = Controller;
		params.bIsPrimaryPlayer = bIsPrimaryPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.Ascend0
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATheIsland_WP_C::Ascend0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.Ascend0");
		
		ATheIsland_WP_C_Ascend0_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.Ascend1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATheIsland_WP_C::Ascend1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.Ascend1");
		
		ATheIsland_WP_C_Ascend1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.Ascend2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATheIsland_WP_C::Ascend2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.Ascend2");
		
		ATheIsland_WP_C_Ascend2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.SetCloudPhase
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             CloudPhase                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::SetCloudPhase(double CloudPhase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.SetCloudPhase");
		
		ATheIsland_WP_C_SetCloudPhase_Params params {};
		params.CloudPhase = CloudPhase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TheIsland_WP.TheIsland_WP_C.ExecuteUbergraph_TheIsland_WP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATheIsland_WP_C::ExecuteUbergraph_TheIsland_WP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TheIsland_WP.TheIsland_WP_C.ExecuteUbergraph_TheIsland_WP");
		
		ATheIsland_WP_C_ExecuteUbergraph_TheIsland_WP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATheIsland_WP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATheIsland_WP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TheIsland_WP.TheIsland_WP_C");
		return ptr;
	}

}


