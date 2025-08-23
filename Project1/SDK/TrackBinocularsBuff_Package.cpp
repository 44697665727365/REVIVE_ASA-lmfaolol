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
	 * 		Name   -> Function TrackBinocularsBuff.TrackBinocularsBuff_C.Handle Depth Of Field
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShouldBeDisabled                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrackBinocularsBuff_C::HandleDepthOfField(bool ShouldBeDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackBinocularsBuff.TrackBinocularsBuff_C.Handle Depth Of Field");
		
		ATrackBinocularsBuff_C_HandleDepthOfField_Params params {};
		params.ShouldBeDisabled = ShouldBeDisabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TrackBinocularsBuff.TrackBinocularsBuff_C.ShouldPPBeActive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ShouldBeActive                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrackBinocularsBuff_C::ShouldPPBeActive(bool* ShouldBeActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackBinocularsBuff.TrackBinocularsBuff_C.ShouldPPBeActive");
		
		ATrackBinocularsBuff_C_ShouldPPBeActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldBeActive != nullptr)
			*ShouldBeActive = params.ShouldBeActive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TrackBinocularsBuff.TrackBinocularsBuff_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrackBinocularsBuff_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackBinocularsBuff.TrackBinocularsBuff_C.BPDeactivated");
		
		ATrackBinocularsBuff_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TrackBinocularsBuff.TrackBinocularsBuff_C.UpdateCustomDepth
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrackBinocularsBuff_C::UpdateCustomDepth(class AActor* ForActor, bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackBinocularsBuff.TrackBinocularsBuff_C.UpdateCustomDepth");
		
		ATrackBinocularsBuff_C_UpdateCustomDepth_Params params {};
		params.ForActor = ForActor;
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TrackBinocularsBuff.TrackBinocularsBuff_C.UpdatePP
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ForceDisable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrackBinocularsBuff_C::UpdatePP(bool ForceDisable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackBinocularsBuff.TrackBinocularsBuff_C.UpdatePP");
		
		ATrackBinocularsBuff_C_UpdatePP_Params params {};
		params.ForceDisable = ForceDisable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TrackBinocularsBuff.TrackBinocularsBuff_C.AllowPostProcessEffect
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ATrackBinocularsBuff_C::AllowPostProcessEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackBinocularsBuff.TrackBinocularsBuff_C.AllowPostProcessEffect");
		
		ATrackBinocularsBuff_C_AllowPostProcessEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TrackBinocularsBuff.TrackBinocularsBuff_C.BPGetWaypointsBuff
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FPointOfInterestData_ForCompanion>   IndicatorsOut                                              (Parm, OutParm)
	 */
	void ATrackBinocularsBuff_C::BPGetWaypointsBuff(TArray<struct FPointOfInterestData_ForCompanion>* IndicatorsOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackBinocularsBuff.TrackBinocularsBuff_C.BPGetWaypointsBuff");
		
		ATrackBinocularsBuff_C_BPGetWaypointsBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IndicatorsOut != nullptr)
			*IndicatorsOut = params.IndicatorsOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TrackBinocularsBuff.TrackBinocularsBuff_C.TryDeactivateTrackBino
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               RemoveWeaponRef                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrackBinocularsBuff_C::TryDeactivateTrackBino(bool RemoveWeaponRef)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackBinocularsBuff.TrackBinocularsBuff_C.TryDeactivateTrackBino");
		
		ATrackBinocularsBuff_C_TryDeactivateTrackBino_Params params {};
		params.RemoveWeaponRef = RemoveWeaponRef;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TrackBinocularsBuff.TrackBinocularsBuff_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UseIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ATrackBinocularsBuff_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackBinocularsBuff.TrackBinocularsBuff_C.BPTryMultiUse");
		
		ATrackBinocularsBuff_C_BPTryMultiUse_Params params {};
		params.ForPC = ForPC;
		params.UseIndex = UseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TrackBinocularsBuff.TrackBinocularsBuff_C.GetAllStatPoints
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalCharacterStatusComponent*             self2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimalActor*                                Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    Wild                                                       (Parm, OutParm)
	 * 		TArray<int32_t>                                    Mutations                                                  (Parm, OutParm)
	 * 		TArray<int32_t>                                    Tamed                                                      (Parm, OutParm)
	 */
	void ATrackBinocularsBuff_C::GetAllStatPoints(class UPrimalCharacterStatusComponent* self2, class UPrimalActor* Target, TArray<int32_t>* Wild, TArray<int32_t>* Mutations, TArray<int32_t>* Tamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackBinocularsBuff.TrackBinocularsBuff_C.GetAllStatPoints");
		
		ATrackBinocularsBuff_C_GetAllStatPoints_Params params {};
		params.self2 = self2;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Wild != nullptr)
			*Wild = params.Wild;
		if (Mutations != nullptr)
			*Mutations = params.Mutations;
		if (Tamed != nullptr)
			*Tamed = params.Tamed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TrackBinocularsBuff.TrackBinocularsBuff_C.ReplicateCharStats
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Char                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrackBinocularsBuff_C::ReplicateCharStats(class APrimalCharacter* Char)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackBinocularsBuff.TrackBinocularsBuff_C.ReplicateCharStats");
		
		ATrackBinocularsBuff_C_ReplicateCharStats_Params params {};
		params.Char = Char;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TrackBinocularsBuff.TrackBinocularsBuff_C.ClientUpdateStatsChar
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCharacterStatusReplicatedBinoculars        Update                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		class APrimalCharacter*                            primalChar                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrackBinocularsBuff_C::ClientUpdateStatsChar(const struct FCharacterStatusReplicatedBinoculars& Update, class APrimalCharacter* primalChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackBinocularsBuff.TrackBinocularsBuff_C.ClientUpdateStatsChar");
		
		ATrackBinocularsBuff_C_ClientUpdateStatsChar_Params params {};
		params.Update = Update;
		params.primalChar = primalChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TrackBinocularsBuff.TrackBinocularsBuff_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrackBinocularsBuff_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackBinocularsBuff.TrackBinocularsBuff_C.BuffTickClient");
		
		ATrackBinocularsBuff_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TrackBinocularsBuff.TrackBinocularsBuff_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrackBinocularsBuff_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackBinocularsBuff.TrackBinocularsBuff_C.ReceiveEndPlay");
		
		ATrackBinocularsBuff_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TrackBinocularsBuff.TrackBinocularsBuff_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrackBinocularsBuff_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackBinocularsBuff.TrackBinocularsBuff_C.BPSetupForInstigator");
		
		ATrackBinocularsBuff_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TrackBinocularsBuff.TrackBinocularsBuff_C.SetupZoom
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsTargeting                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ZoomPercent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrackBinocularsBuff_C::SetupZoom(bool IsTargeting, double ZoomPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackBinocularsBuff.TrackBinocularsBuff_C.SetupZoom");
		
		ATrackBinocularsBuff_C_SetupZoom_Params params {};
		params.IsTargeting = IsTargeting;
		params.ZoomPercent = ZoomPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TrackBinocularsBuff.TrackBinocularsBuff_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrackBinocularsBuff_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackBinocularsBuff.TrackBinocularsBuff_C.BuffTickServer");
		
		ATrackBinocularsBuff_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TrackBinocularsBuff.TrackBinocularsBuff_C.SetupNewTrackActor
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrackBinocularsBuff_C::SetupNewTrackActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackBinocularsBuff.TrackBinocularsBuff_C.SetupNewTrackActor");
		
		ATrackBinocularsBuff_C_SetupNewTrackActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TrackBinocularsBuff.TrackBinocularsBuff_C.TrackCurrentActorTraced
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ATrackBinocularsBuff_C::TrackCurrentActorTraced()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackBinocularsBuff.TrackBinocularsBuff_C.TrackCurrentActorTraced");
		
		ATrackBinocularsBuff_C_TrackCurrentActorTraced_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TrackBinocularsBuff.TrackBinocularsBuff_C.InputDismissPOI_BP
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrackBinocularsBuff_C::InputDismissPOI_BP(class APlayerController* ForPC, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackBinocularsBuff.TrackBinocularsBuff_C.InputDismissPOI_BP");
		
		ATrackBinocularsBuff_C_InputDismissPOI_BP_Params params {};
		params.ForPC = ForPC;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TrackBinocularsBuff.TrackBinocularsBuff_C.ServerClearTrackBino
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ATrackBinocularsBuff_C::ServerClearTrackBino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackBinocularsBuff.TrackBinocularsBuff_C.ServerClearTrackBino");
		
		ATrackBinocularsBuff_C_ServerClearTrackBino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function TrackBinocularsBuff.TrackBinocularsBuff_C.ExecuteUbergraph_TrackBinocularsBuff
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATrackBinocularsBuff_C::ExecuteUbergraph_TrackBinocularsBuff(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TrackBinocularsBuff.TrackBinocularsBuff_C.ExecuteUbergraph_TrackBinocularsBuff");
		
		ATrackBinocularsBuff_C_ExecuteUbergraph_TrackBinocularsBuff_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATrackBinocularsBuff_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATrackBinocularsBuff_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TrackBinocularsBuff.TrackBinocularsBuff_C");
		return ptr;
	}

}


