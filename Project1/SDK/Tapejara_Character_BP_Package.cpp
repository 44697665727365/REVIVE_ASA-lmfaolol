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
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.StopMovementFn
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATapejara_Character_BP_C::StopMovementFn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.StopMovementFn");
		
		ATapejara_Character_BP_C_StopMovementFn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.ShouldTryLatch
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               LandOnFailureToLatch                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATapejara_Character_BP_C::ShouldTryLatch(bool* Ret, bool* LandOnFailureToLatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.ShouldTryLatch");
		
		ATapejara_Character_BP_C_ShouldTryLatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ret != nullptr)
			*Ret = params.Ret;
		if (LandOnFailureToLatch != nullptr)
			*LandOnFailureToLatch = params.LandOnFailureToLatch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UAnimMontage*>                        AnimationArray                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	int32_t ATapejara_Character_BP_C::BPOverrideGetAttackAnimationIndex(int32_t AttackIndex, TArray<class UAnimMontage*> AnimationArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPOverrideGetAttackAnimationIndex");
		
		ATapejara_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params {};
		params.AttackIndex = AttackIndex;
		params.AnimationArray = AnimationArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ATapejara_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPNotifyClearRider");
		
		ATapejara_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPHandleOnStopTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	bool ATapejara_Character_BP_C::BPHandleOnStopTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPHandleOnStopTargeting");
		
		ATapejara_Character_BP_C_BPHandleOnStopTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPModifyFOV
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              FOVIn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ATapejara_Character_BP_C::BPModifyFOV(float FOVIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPModifyFOV");
		
		ATapejara_Character_BP_C_BPModifyFOV_Params params {};
		params.FOVIn = FOVIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPHandleControllerInitiatedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ATapejara_Character_BP_C::BPHandleControllerInitiatedAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPHandleControllerInitiatedAttack");
		
		ATapejara_Character_BP_C_BPHandleControllerInitiatedAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPModifyDesiredRotation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    InDesiredRotation                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    OutDesiredRotation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATapejara_Character_BP_C::BPModifyDesiredRotation(float DeltaTime, const struct FRotator& InDesiredRotation, struct FRotator* OutDesiredRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPModifyDesiredRotation");
		
		ATapejara_Character_BP_C_BPModifyDesiredRotation_Params params {};
		params.DeltaTime = DeltaTime;
		params.InDesiredRotation = InDesiredRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDesiredRotation != nullptr)
			*OutDesiredRotation = params.OutDesiredRotation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPSetupTamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasJustTamed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATapejara_Character_BP_C::BPSetupTamed(bool bWasJustTamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPSetupTamed");
		
		ATapejara_Character_BP_C_BPSetupTamed_Params params {};
		params.bWasJustTamed = bWasJustTamed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPOnStartJump
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ATapejara_Character_BP_C::BPOnStartJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPOnStartJump");
		
		ATapejara_Character_BP_C_BPOnStartJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPHandleUseButtonPress
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    RiderController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool ATapejara_Character_BP_C::BPHandleUseButtonPress(class AShooterPlayerController* RiderController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPHandleUseButtonPress");
		
		ATapejara_Character_BP_C_BPHandleUseButtonPress_Params params {};
		params.RiderController = RiderController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.DisableCameraInterpolation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATapejara_Character_BP_C::DisableCameraInterpolation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.DisableCameraInterpolation");
		
		ATapejara_Character_BP_C_DisableCameraInterpolation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.OnRep_LatchingSurfaceNormal
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATapejara_Character_BP_C::OnRep_LatchingSurfaceNormal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.OnRep_LatchingSurfaceNormal");
		
		ATapejara_Character_BP_C_OnRep_LatchingSurfaceNormal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.UpdateLatchedDinoCamera
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATapejara_Character_BP_C::UpdateLatchedDinoCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.UpdateLatchedDinoCamera");
		
		ATapejara_Character_BP_C_UpdateLatchedDinoCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.Controller Follow ActorRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATapejara_Character_BP_C::ControllerFollowActorRotation(double DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.Controller Follow ActorRotation");
		
		ATapejara_Character_BP_C_ControllerFollowActorRotation_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.ReferenceLatchingObjects
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATapejara_Character_BP_C::ReferenceLatchingObjects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.ReferenceLatchingObjects");
		
		ATapejara_Character_BP_C_ReferenceLatchingObjects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.LineTrace
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMeshComponent*                              Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        SocketName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               BackwardLatching                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HitSomthing                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Normal                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      HitActor                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ATapejara_Character_BP_C::LineTrace(class UMeshComponent* Mesh, const class FName& SocketName, class AActor* Actor, const struct FVector& Offset, bool BackwardLatching, bool* HitSomthing, struct FVector* Location, struct FVector* Normal, class AActor** HitActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.LineTrace");
		
		ATapejara_Character_BP_C_LineTrace_Params params {};
		params.Mesh = Mesh;
		params.SocketName = SocketName;
		params.Actor = Actor;
		params.Offset = Offset;
		params.BackwardLatching = BackwardLatching;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitSomthing != nullptr)
			*HitSomthing = params.HitSomthing;
		if (Location != nullptr)
			*Location = params.Location;
		if (Normal != nullptr)
			*Normal = params.Normal;
		if (HitActor != nullptr)
			*HitActor = params.HitActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.InterruptLatching
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATapejara_Character_BP_C::InterruptLatching()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.InterruptLatching");
		
		ATapejara_Character_BP_C_InterruptLatching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.ProcessLatching
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATapejara_Character_BP_C::ProcessLatching(double DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.ProcessLatching");
		
		ATapejara_Character_BP_C_ProcessLatching_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.TryLatch
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               BackwardsLatching                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATapejara_Character_BP_C::TryLatch(const struct FVector& Offset, bool BackwardsLatching)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.TryLatch");
		
		ATapejara_Character_BP_C_TryLatch_Params params {};
		params.Offset = Offset;
		params.BackwardsLatching = BackwardsLatching;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ATapejara_Character_BP_C::InpActEvt_AltFire_K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_4");
		
		ATapejara_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ATapejara_Character_BP_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_3");
		
		ATapejara_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ATapejara_Character_BP_C::InpActEvt_BrakeDino_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_2");
		
		ATapejara_Character_BP_C_InpActEvt_BrakeDino_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ATapejara_Character_BP_C::InpActEvt_BrakeDino_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_1");
		
		ATapejara_Character_BP_C_InpActEvt_BrakeDino_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.Latch
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               BackwardsLatching                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               TryLatch                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               LandOnFailureToLatch                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATapejara_Character_BP_C::Latch(bool BackwardsLatching, bool TryLatch, bool LandOnFailureToLatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.Latch");
		
		ATapejara_Character_BP_C_Latch_Params params {};
		params.BackwardsLatching = BackwardsLatching;
		params.TryLatch = TryLatch;
		params.LandOnFailureToLatch = LandOnFailureToLatch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATapejara_Character_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.ReceiveTick");
		
		ATapejara_Character_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.LatchStartAnimation
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATapejara_Character_BP_C::LatchStartAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.LatchStartAnimation");
		
		ATapejara_Character_BP_C_LatchStartAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.UnLatch
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LatchingInterrupted                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATapejara_Character_BP_C::UnLatch(bool LatchingInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.UnLatch");
		
		ATapejara_Character_BP_C_UnLatch_Params params {};
		params.LatchingInterrupted = LatchingInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.UnLatchStartAnimation
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATapejara_Character_BP_C::UnLatchStartAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.UnLatchStartAnimation");
		
		ATapejara_Character_BP_C_UnLatchStartAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ATapejara_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		ATapejara_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
		params.CustomEventName = CustomEventName;
		params.MeshComp = MeshComp;
		params.Animation = Animation;
		params.AnimNotifyObject = AnimNotifyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.MoveToUsingDirection
	 * 		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATapejara_Character_BP_C::MoveToUsingDirection(double DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.MoveToUsingDirection");
		
		ATapejara_Character_BP_C_MoveToUsingDirection_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.UnLatchMoveAndRotate
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATapejara_Character_BP_C::UnLatchMoveAndRotate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.UnLatchMoveAndRotate");
		
		ATapejara_Character_BP_C_UnLatchMoveAndRotate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.LatchingStartEvent
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ATapejara_Character_BP_C::LatchingStartEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.LatchingStartEvent");
		
		ATapejara_Character_BP_C_LatchingStartEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.LatchingEndEvent
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ATapejara_Character_BP_C::LatchingEndEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.LatchingEndEvent");
		
		ATapejara_Character_BP_C_LatchingEndEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.StopMovement
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATapejara_Character_BP_C::StopMovement(double DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.StopMovement");
		
		ATapejara_Character_BP_C_StopMovement_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.DisableFaceLatchingObjectRotation
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ATapejara_Character_BP_C::DisableFaceLatchingObjectRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.DisableFaceLatchingObjectRotation");
		
		ATapejara_Character_BP_C_DisableFaceLatchingObjectRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATapejara_Character_BP_C::InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181");
		
		ATapejara_Character_BP_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.SetPassengersSurfaceCamera
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Yaw                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Pitch                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Roll                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATapejara_Character_BP_C::SetPassengersSurfaceCamera(double Yaw, double Pitch, double Roll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.SetPassengersSurfaceCamera");
		
		ATapejara_Character_BP_C_SetPassengersSurfaceCamera_Params params {};
		params.Yaw = Yaw;
		params.Pitch = Pitch;
		params.Roll = Roll;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.LocalFaceLatchingObject
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATapejara_Character_BP_C::LocalFaceLatchingObject(double DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.LocalFaceLatchingObject");
		
		ATapejara_Character_BP_C_LocalFaceLatchingObject_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.StartedJump
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATapejara_Character_BP_C::StartedJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.StartedJump");
		
		ATapejara_Character_BP_C_StartedJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.MoveDuringUnlatching
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATapejara_Character_BP_C::MoveDuringUnlatching()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.MoveDuringUnlatching");
		
		ATapejara_Character_BP_C_MoveDuringUnlatching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.ExecuteUbergraph_Tapejara_Character_BP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATapejara_Character_BP_C::ExecuteUbergraph_Tapejara_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.ExecuteUbergraph_Tapejara_Character_BP");
		
		ATapejara_Character_BP_C_ExecuteUbergraph_Tapejara_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATapejara_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATapejara_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Tapejara_Character_BP.Tapejara_Character_BP_C");
		return ptr;
	}

}


