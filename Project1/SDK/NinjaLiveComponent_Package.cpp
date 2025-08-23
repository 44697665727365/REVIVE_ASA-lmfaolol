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
	 * 		Name   -> Function NinjaLiveComponent.NinjaLiveComponent_C.ASA_Compute_SplatDispatch
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      RenderTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInterface*                          Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveComponent_C::ASA_Compute_SplatDispatch(class UTextureRenderTarget2D* RenderTarget, class UMaterialInterface* Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveComponent.NinjaLiveComponent_C.ASA_Compute_SplatDispatch");
		
		UNinjaLiveComponent_C_ASA_Compute_SplatDispatch_Params params {};
		params.RenderTarget = RenderTarget;
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveComponent.NinjaLiveComponent_C.ASA_set_visualizer_mat_RT
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInstanceDynamic*                    Mid                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveComponent_C::ASA_set_visualizer_mat_RT(class UMaterialInstanceDynamic* Mid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveComponent.NinjaLiveComponent_C.ASA_set_visualizer_mat_RT");
		
		UNinjaLiveComponent_C_ASA_set_visualizer_mat_RT_Params params {};
		params.Mid = Mid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveComponent.NinjaLiveComponent_C.ASA_advect_foam_init_RTs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UNinjaLiveComponent_C::ASA_advect_foam_init_RTs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveComponent.NinjaLiveComponent_C.ASA_advect_foam_init_RTs");
		
		UNinjaLiveComponent_C_ASA_advect_foam_init_RTs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveComponent.NinjaLiveComponent_C.ASA_advect_foam_init_MIDs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UNinjaLiveComponent_C::ASA_advect_foam_init_MIDs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveComponent.NinjaLiveComponent_C.ASA_advect_foam_init_MIDs");
		
		UNinjaLiveComponent_C_ASA_advect_foam_init_MIDs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveComponent.NinjaLiveComponent_C.ASA_advect_foam_step
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TMap<class FString, class UTextureRenderTarget2D*> RT_map                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UNinjaLiveComponent_C::ASA_advect_foam_step(TMap<class FString, class UTextureRenderTarget2D*> RT_map)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveComponent.NinjaLiveComponent_C.ASA_advect_foam_step");
		
		UNinjaLiveComponent_C_ASA_advect_foam_step_Params params {};
		params.RT_map = RT_map;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveComponent.NinjaLiveComponent_C.PrimalOnTick
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UNinjaLiveComponent_C::PrimalOnTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveComponent.NinjaLiveComponent_C.PrimalOnTick");
		
		UNinjaLiveComponent_C_PrimalOnTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveComponent.NinjaLiveComponent_C.GetActualResolutionY
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            ResX                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveComponent_C::GetActualResolutionY(int32_t* ResX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveComponent.NinjaLiveComponent_C.GetActualResolutionY");
		
		UNinjaLiveComponent_C_GetActualResolutionY_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResX != nullptr)
			*ResX = params.ResX;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveComponent.NinjaLiveComponent_C.GetActualResolutionX
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            ResX                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveComponent_C::GetActualResolutionX(int32_t* ResX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveComponent.NinjaLiveComponent_C.GetActualResolutionX");
		
		UNinjaLiveComponent_C_GetActualResolutionX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResX != nullptr)
			*ResX = params.ResX;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveComponent.NinjaLiveComponent_C.ASA_ClearRenderTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      TargetName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveComponent_C::ASA_ClearRenderTarget(const class FString& TargetName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveComponent.NinjaLiveComponent_C.ASA_ClearRenderTarget");
		
		UNinjaLiveComponent_C_ASA_ClearRenderTarget_Params params {};
		params.TargetName = TargetName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveComponent.NinjaLiveComponent_C.ASA_TraceToSimUV
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     TraceWorldPosition                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                HitUV                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveComponent_C::ASA_TraceToSimUV(const struct FVector& TraceWorldPosition, struct FLinearColor* HitUV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveComponent.NinjaLiveComponent_C.ASA_TraceToSimUV");
		
		UNinjaLiveComponent_C_ASA_TraceToSimUV_Params params {};
		params.TraceWorldPosition = TraceWorldPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitUV != nullptr)
			*HitUV = params.HitUV;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveComponent.NinjaLiveComponent_C.ASA_Compute_Draw
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      RenderTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInterface*                          Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveComponent_C::ASA_Compute_Draw(class UTextureRenderTarget2D* RenderTarget, class UMaterialInterface* Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveComponent.NinjaLiveComponent_C.ASA_Compute_Draw");
		
		UNinjaLiveComponent_C_ASA_Compute_Draw_Params params {};
		params.RenderTarget = RenderTarget;
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveComponent.NinjaLiveComponent_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UNinjaLiveComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveComponent.NinjaLiveComponent_C.ReceiveBeginPlay");
		
		UNinjaLiveComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveComponent.NinjaLiveComponent_C.Shutdown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UNinjaLiveComponent_C::Shutdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveComponent.NinjaLiveComponent_C.Shutdown");
		
		UNinjaLiveComponent_C_Shutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveComponent.NinjaLiveComponent_C.LiveFluidParams
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             BrushSize                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveComponent_C::LiveFluidParams(double BrushSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveComponent.NinjaLiveComponent_C.LiveFluidParams");
		
		UNinjaLiveComponent_C_LiveFluidParams_Params params {};
		params.BrushSize = BrushSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveComponent.NinjaLiveComponent_C.BPOnComponentCreated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UNinjaLiveComponent_C::BPOnComponentCreated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveComponent.NinjaLiveComponent_C.BPOnComponentCreated");
		
		UNinjaLiveComponent_C_BPOnComponentCreated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveComponent.NinjaLiveComponent_C.SelChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedMenuItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      SelectedActorName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveComponent_C::SelChanged(const class FString& SelectedMenuItem, const class FString& SelectedActorName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveComponent.NinjaLiveComponent_C.SelChanged");
		
		UNinjaLiveComponent_C_SelChanged_Params params {};
		params.SelectedMenuItem = SelectedMenuItem;
		params.SelectedActorName = SelectedActorName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveComponent.NinjaLiveComponent_C.PresetSelectionChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedPreset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               ForceAutoLoadPreset                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveComponent_C::PresetSelectionChanged(const class FString& SelectedPreset, bool ForceAutoLoadPreset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveComponent.NinjaLiveComponent_C.PresetSelectionChanged");
		
		UNinjaLiveComponent_C_PresetSelectionChanged_Params params {};
		params.SelectedPreset = SelectedPreset;
		params.ForceAutoLoadPreset = ForceAutoLoadPreset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveComponent.NinjaLiveComponent_C.PresetSave
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      SelectedProject                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      SelectedPreset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               OverWriteOrNot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveComponent_C::PresetSave(const class FString& SelectedProject, const class FString& SelectedPreset, bool OverWriteOrNot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveComponent.NinjaLiveComponent_C.PresetSave");
		
		UNinjaLiveComponent_C_PresetSave_Params params {};
		params.SelectedProject = SelectedProject;
		params.SelectedPreset = SelectedPreset;
		params.OverWriteOrNot = OverWriteOrNot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveComponent.NinjaLiveComponent_C.LiveActivation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ParamName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             FadeTimeOfBrush                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             FadeTimeOfCanvas                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveComponent_C::LiveActivation(const class FName& ParamName, double FadeTimeOfBrush, double FadeTimeOfCanvas)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveComponent.NinjaLiveComponent_C.LiveActivation");
		
		UNinjaLiveComponent_C_LiveActivation_Params params {};
		params.ParamName = ParamName;
		params.FadeTimeOfBrush = FadeTimeOfBrush;
		params.FadeTimeOfCanvas = FadeTimeOfCanvas;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveComponent.NinjaLiveComponent_C.Replay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UNinjaLiveComponent_C::Replay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveComponent.NinjaLiveComponent_C.Replay");
		
		UNinjaLiveComponent_C_Replay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveComponent.NinjaLiveComponent_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveComponent_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveComponent.NinjaLiveComponent_C.ReceiveTick");
		
		UNinjaLiveComponent_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveComponent.NinjaLiveComponent_C.ComponentRePlayEvent2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UNinjaLiveComponent_C::ComponentRePlayEvent2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveComponent.NinjaLiveComponent_C.ComponentRePlayEvent2");
		
		UNinjaLiveComponent_C_ComponentRePlayEvent2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveComponent.NinjaLiveComponent_C.ExecuteUbergraph_NinjaLiveComponent
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveComponent_C::ExecuteUbergraph_NinjaLiveComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveComponent.NinjaLiveComponent_C.ExecuteUbergraph_NinjaLiveComponent");
		
		UNinjaLiveComponent_C_ExecuteUbergraph_NinjaLiveComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveComponent.NinjaLiveComponent_C.WorldSpaceOffset__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     TraceMeshPos                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveComponent_C::WorldSpaceOffset__DelegateSignature(const struct FVector& TraceMeshPos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveComponent.NinjaLiveComponent_C.WorldSpaceOffset__DelegateSignature");
		
		UNinjaLiveComponent_C_WorldSpaceOffset__DelegateSignature_Params params {};
		params.TraceMeshPos = TraceMeshPos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveComponent.NinjaLiveComponent_C.ComponentShutdownEvent__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UNinjaLiveComponent_C::ComponentShutdownEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveComponent.NinjaLiveComponent_C.ComponentShutdownEvent__DelegateSignature");
		
		UNinjaLiveComponent_C_ComponentShutdownEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveComponent.NinjaLiveComponent_C.ComponentBroadcastMemConsumption__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Consumer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             MemConsumption                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               TakenOrReturned                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UNinjaLiveComponent_C::ComponentBroadcastMemConsumption__DelegateSignature(class UObject* Consumer, double MemConsumption, bool TakenOrReturned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveComponent.NinjaLiveComponent_C.ComponentBroadcastMemConsumption__DelegateSignature");
		
		UNinjaLiveComponent_C_ComponentBroadcastMemConsumption__DelegateSignature_Params params {};
		params.Consumer = Consumer;
		params.MemConsumption = MemConsumption;
		params.TakenOrReturned = TakenOrReturned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function NinjaLiveComponent.NinjaLiveComponent_C.ComponentRePlayEvent__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UNinjaLiveComponent_C::ComponentRePlayEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NinjaLiveComponent.NinjaLiveComponent_C.ComponentRePlayEvent__DelegateSignature");
		
		UNinjaLiveComponent_C_ComponentRePlayEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNinjaLiveComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNinjaLiveComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NinjaLiveComponent.NinjaLiveComponent_C");
		return ptr;
	}

}


