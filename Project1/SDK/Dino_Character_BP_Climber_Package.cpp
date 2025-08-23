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
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPSkipMovementOptimization
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ADino_Character_BP_Climber_C::BPSkipMovementOptimization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPSkipMovementOptimization");
		
		ADino_Character_BP_Climber_C_BPSkipMovementOptimization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnClimberFinishedAttaching
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::OnClimberFinishedAttaching()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnClimberFinishedAttaching");
		
		ADino_Character_BP_Climber_C_OnClimberFinishedAttaching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimbingTraceHitResultValid
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bValidHit                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		struct FVector                                     TraceStart                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TraceEnd                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            traceIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TraceRetryNum                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::IsClimbingTraceHitResultValid(bool bValidHit, struct FHitResult* Hit, const struct FVector& TraceStart, const struct FVector& TraceEnd, int32_t traceIndex, int32_t TraceRetryNum, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimbingTraceHitResultValid");
		
		ADino_Character_BP_Climber_C_IsClimbingTraceHitResultValid_Params params {};
		params.bValidHit = bValidHit;
		params.TraceStart = TraceStart;
		params.TraceEnd = TraceEnd;
		params.traceIndex = traceIndex;
		params.TraceRetryNum = TraceRetryNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberOverrideRetriedTraceResult
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  WithHit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::CanClimberOverrideRetriedTraceResult(struct FHitResult* WithHit, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberOverrideRetriedTraceResult");
		
		ADino_Character_BP_Climber_C_CanClimberOverrideRetriedTraceResult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WithHit != nullptr)
			*WithHit = params.WithHit;
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.AdjustClimbTraceTransform
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        WithSocketName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  WithTraceTransform                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  ClimberTransform                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  AdjustedTransform                                          (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::AdjustClimbTraceTransform(const class FName& WithSocketName, struct FTransform* WithTraceTransform, struct FTransform* ClimberTransform, struct FTransform* AdjustedTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.AdjustClimbTraceTransform");
		
		ADino_Character_BP_Climber_C_AdjustClimbTraceTransform_Params params {};
		params.WithSocketName = WithSocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WithTraceTransform != nullptr)
			*WithTraceTransform = params.WithTraceTransform;
		if (ClimberTransform != nullptr)
			*ClimberTransform = params.ClimberTransform;
		if (AdjustedTransform != nullptr)
			*AdjustedTransform = params.AdjustedTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Tick_SimulateSeekingBetweenFrames
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFoundSurface                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::Tick_SimulateSeekingBetweenFrames(bool* bFoundSurface)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Tick_SimulateSeekingBetweenFrames");
		
		ADino_Character_BP_Climber_C_Tick_SimulateSeekingBetweenFrames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bFoundSurface != nullptr)
			*bFoundSurface = params.bFoundSurface;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClearCachedServerClimberMoveData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ClearCachedServerClimberMoveData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClearCachedServerClimberMoveData");
		
		ADino_Character_BP_Climber_C_ClearCachedServerClimberMoveData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CacheServerClimberMoveData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::CacheServerClimberMoveData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CacheServerClimberMoveData");
		
		ADino_Character_BP_Climber_C_CacheServerClimberMoveData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Tick_SimulateClimbingBetweenFrames
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::Tick_SimulateClimbingBetweenFrames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Tick_SimulateClimbingBetweenFrames");
		
		ADino_Character_BP_Climber_C_Tick_SimulateClimbingBetweenFrames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnWalkableGroundFoundWhileClimbing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::OnWalkableGroundFoundWhileClimbing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnWalkableGroundFoundWhileClimbing");
		
		ADino_Character_BP_Climber_C_OnWalkableGroundFoundWhileClimbing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetDesiredMoveDirection
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetDesiredMoveDirection(struct FVector* Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetDesiredMoveDirection");
		
		ADino_Character_BP_Climber_C_GetDesiredMoveDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Direction != nullptr)
			*Direction = params.Direction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Correct Surface Trace Offset Use Trace Map Override
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<bool>                                       UseTraceMap                                                (Parm, OutParm)
	 */
	void ADino_Character_BP_Climber_C::GetCorrectSurfaceTraceOffsetUseTraceMapOverride(TArray<bool>* UseTraceMap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Correct Surface Trace Offset Use Trace Map Override");
		
		ADino_Character_BP_Climber_C_GetCorrectSurfaceTraceOffsetUseTraceMapOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UseTraceMap != nullptr)
			*UseTraceMap = params.UseTraceMap;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceWeightOverride
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UseResult                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<double>                                     Weights                                                    (Parm, OutParm)
	 */
	void ADino_Character_BP_Climber_C::GetCorrectClimbingTraceWeightOverride(bool* UseResult, TArray<double>* Weights)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceWeightOverride");
		
		ADino_Character_BP_Climber_C_GetCorrectClimbingTraceWeightOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UseResult != nullptr)
			*UseResult = params.UseResult;
		if (Weights != nullptr)
			*Weights = params.Weights;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberUpdateServerTimerByClimberStateOverride
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ClimberUpdateServerTimerByClimberStateOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberUpdateServerTimerByClimberStateOverride");
		
		ADino_Character_BP_Climber_C_ClimberUpdateServerTimerByClimberStateOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Calc Current Climbing Velocity Override State
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     CurrentVelocity                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShouldOverrideVelocity                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::CalcCurrentClimbingVelocityOverrideState(const struct FVector& CurrentVelocity, bool* ShouldOverrideVelocity, struct FVector* Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Calc Current Climbing Velocity Override State");
		
		ADino_Character_BP_Climber_C_CalcCurrentClimbingVelocityOverrideState_Params params {};
		params.CurrentVelocity = CurrentVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldOverrideVelocity != nullptr)
			*ShouldOverrideVelocity = params.ShouldOverrideVelocity;
		if (Velocity != nullptr)
			*Velocity = params.Velocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AllowMovementWhileClimbing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::Climber_AllowMovementWhileClimbing(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AllowMovementWhileClimbing");
		
		ADino_Character_BP_Climber_C_Climber_AllowMovementWhileClimbing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberDetaching_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               checkPrevious                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::IsClimberDetaching_Pure(bool checkPrevious, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberDetaching_Pure");
		
		ADino_Character_BP_Climber_C_IsClimberDetaching_Pure_Params params {};
		params.checkPrevious = checkPrevious;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberCanEverJump_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::ClimberCanEverJump_Pure(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberCanEverJump_Pure");
		
		ADino_Character_BP_Climber_C_ClimberCanEverJump_Pure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_CanEverJump
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::Climber_CanEverJump(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_CanEverJump");
		
		ADino_Character_BP_Climber_C_Climber_CanEverJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnJumped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::OnJumped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnJumped");
		
		ADino_Character_BP_Climber_C_OnJumped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.NetSync_ClimberIsJumping
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Newval                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::NetSync_ClimberIsJumping(bool Newval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.NetSync_ClimberIsJumping");
		
		ADino_Character_BP_Climber_C_NetSync_ClimberIsJumping_Params params {};
		params.Newval = Newval;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnPostNetReplication
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ReplicatedLoc                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    ReplicatedRot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_Climber_C::BP_OnPostNetReplication(const struct FVector& ReplicatedLoc, const struct FRotator& ReplicatedRot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnPostNetReplication");
		
		ADino_Character_BP_Climber_C_BP_OnPostNetReplication_Params params {};
		params.ReplicatedLoc = ReplicatedLoc;
		params.ReplicatedRot = ReplicatedRot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_OnPreventStopServerTick
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::Climber_AI_OnPreventStopServerTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_OnPreventStopServerTick");
		
		ADino_Character_BP_Climber_C_Climber_AI_OnPreventStopServerTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanStopServerTick
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::Climber_AI_CanStopServerTick(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanStopServerTick");
		
		ADino_Character_BP_Climber_C_Climber_AI_CanStopServerTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ShouldClimberLockInputsWhileAttached
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::ShouldClimberLockInputsWhileAttached(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ShouldClimberLockInputsWhileAttached");
		
		ADino_Character_BP_Climber_C_ShouldClimberLockInputsWhileAttached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_ClimbingCanAttack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::Climber_AI_ClimbingCanAttack(int32_t AttackIndex, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_ClimbingCanAttack");
		
		ADino_Character_BP_Climber_C_Climber_AI_ClimbingCanAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_OnFlee
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::Climber_AI_OnFlee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_OnFlee");
		
		ADino_Character_BP_Climber_C_Climber_AI_OnFlee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CheckForAttackWhileClimbing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::Climber_AI_CheckForAttackWhileClimbing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CheckForAttackWhileClimbing");
		
		ADino_Character_BP_Climber_C_Climber_AI_CheckForAttackWhileClimbing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPOnStartJump
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ADino_Character_BP_Climber_C::BPOnStartJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPOnStartJump");
		
		ADino_Character_BP_Climber_C_BPOnStartJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_OnRunReleased
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::Climber_OnRunReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_OnRunReleased");
		
		ADino_Character_BP_Climber_C_Climber_OnRunReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_OnRunPressed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::Climber_OnRunPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_OnRunPressed");
		
		ADino_Character_BP_Climber_C_Climber_OnRunPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPCharacterUnsleeped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::BPCharacterUnsleeped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPCharacterUnsleeped");
		
		ADino_Character_BP_Climber_C_BPCharacterUnsleeped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPCharacterSleeped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::BPCharacterSleeped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPCharacterSleeped");
		
		ADino_Character_BP_Climber_C_BPCharacterSleeped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberAI_UpdateHasTargetWhileClimbing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ClimberAI_UpdateHasTargetWhileClimbing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberAI_UpdateHasTargetWhileClimbing");
		
		ADino_Character_BP_Climber_C_ClimberAI_UpdateHasTargetWhileClimbing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberPlayingPreventInputAnim
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::IsClimberPlayingPreventInputAnim(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberPlayingPreventInputAnim");
		
		ADino_Character_BP_Climber_C_IsClimberPlayingPreventInputAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnSetDeath
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::BP_OnSetDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnSetDeath");
		
		ADino_Character_BP_Climber_C_BP_OnSetDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberInClimbingStateRange
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_DinoClimberState                                 startState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_DinoClimberState                                 EndState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               checkPrevious                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::IsClimberInClimbingStateRange(E_DinoClimberState startState, E_DinoClimberState EndState, bool checkPrevious, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberInClimbingStateRange");
		
		ADino_Character_BP_Climber_C_IsClimberInClimbingStateRange_Params params {};
		params.startState = startState;
		params.EndState = EndState;
		params.checkPrevious = checkPrevious;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPOrderedMoveToLoc
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     DestLoc                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::BPOrderedMoveToLoc(const struct FVector& DestLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPOrderedMoveToLoc");
		
		ADino_Character_BP_Climber_C_BPOrderedMoveToLoc_Params params {};
		params.DestLoc = DestLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_IsCharacterHardAttached
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIgnoreRiding                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIgnoreCarried                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ADino_Character_BP_Climber_C::BP_IsCharacterHardAttached(bool bIgnoreRiding, bool bIgnoreCarried)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_IsCharacterHardAttached");
		
		ADino_Character_BP_Climber_C_BP_IsCharacterHardAttached_Params params {};
		params.bIgnoreRiding = bIgnoreRiding;
		params.bIgnoreCarried = bIgnoreCarried;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPCharacterDetach
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::BPCharacterDetach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPCharacterDetach");
		
		ADino_Character_BP_Climber_C_BPCharacterDetach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberNearWaterSurface
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::IsClimberNearWaterSurface(double Distance, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberNearWaterSurface");
		
		ADino_Character_BP_Climber_C_IsClimberNearWaterSurface_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberClimbing_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               isFinishedAttaching                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               includeSeekingwhenabovefalse                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               includeDetaching                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               checkPrevious                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::IsClimberClimbing_Pure(bool isFinishedAttaching, bool includeSeekingwhenabovefalse, bool includeDetaching, bool checkPrevious, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberClimbing_Pure");
		
		ADino_Character_BP_Climber_C_IsClimberClimbing_Pure_Params params {};
		params.isFinishedAttaching = isFinishedAttaching;
		params.includeSeekingwhenabovefalse = includeSeekingwhenabovefalse;
		params.includeDetaching = includeDetaching;
		params.checkPrevious = checkPrevious;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectWallJumpAnim
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     wallJumpVelocity                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimMontage*                                Anim                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetCorrectWallJumpAnim(const struct FVector& wallJumpVelocity, class UAnimMontage** Anim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectWallJumpAnim");
		
		ADino_Character_BP_Climber_C_GetCorrectWallJumpAnim_Params params {};
		params.wallJumpVelocity = wallJumpVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Anim != nullptr)
			*Anim = params.Anim;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ShouldUseTraceHitForClimbingMovement
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::ShouldUseTraceHitForClimbingMovement(const struct FVector& HitLocation, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ShouldUseTraceHitForClimbingMovement");
		
		ADino_Character_BP_Climber_C_ShouldUseTraceHitForClimbingMovement_Params params {};
		params.HitLocation = HitLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ShouldClimberCheckNewClimbingRotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    climbingRotation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::ShouldClimberCheckNewClimbingRotation(const struct FRotator& climbingRotation, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ShouldClimberCheckNewClimbingRotation");
		
		ADino_Character_BP_Climber_C_ShouldClimberCheckNewClimbingRotation_Params params {};
		params.climbingRotation = climbingRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberMovingOnSurface_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               checkPrevious                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::IsClimberMovingOnSurface_Pure(bool checkPrevious, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberMovingOnSurface_Pure");
		
		ADino_Character_BP_Climber_C_IsClimberMovingOnSurface_Pure_Params params {};
		params.checkPrevious = checkPrevious;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberSoftSetRotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::CanClimberSoftSetRotation(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberSoftSetRotation");
		
		ADino_Character_BP_Climber_C_CanClimberSoftSetRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertClimberSpaceVectorToWorld_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     climberSpaceVector                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     WorldVector                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::ConvertClimberSpaceVectorToWorld_Pure(const struct FVector& climberSpaceVector, struct FVector* WorldVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertClimberSpaceVectorToWorld_Pure");
		
		ADino_Character_BP_Climber_C_ConvertClimberSpaceVectorToWorld_Pure_Params params {};
		params.climberSpaceVector = climberSpaceVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WorldVector != nullptr)
			*WorldVector = params.WorldVector;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertClimberSpaceVectorToWorld
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     climberSpaceVector                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     WorldVector                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::ConvertClimberSpaceVectorToWorld(const struct FVector& climberSpaceVector, struct FVector* WorldVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertClimberSpaceVectorToWorld");
		
		ADino_Character_BP_Climber_C_ConvertClimberSpaceVectorToWorld_Params params {};
		params.climberSpaceVector = climberSpaceVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WorldVector != nullptr)
			*WorldVector = params.WorldVector;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertVectorToWorld_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     LocalVector                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     WorldVector                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::ConvertVectorToWorld_Pure(const struct FVector& LocalVector, struct FVector* WorldVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertVectorToWorld_Pure");
		
		ADino_Character_BP_Climber_C_ConvertVectorToWorld_Pure_Params params {};
		params.LocalVector = LocalVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WorldVector != nullptr)
			*WorldVector = params.WorldVector;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertRotatorToWorld_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FRotator                                    localRotator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    worldRotator                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_Climber_C::ConvertRotatorToWorld_Pure(const struct FRotator& localRotator, struct FRotator* worldRotator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertRotatorToWorld_Pure");
		
		ADino_Character_BP_Climber_C_ConvertRotatorToWorld_Pure_Params params {};
		params.localRotator = localRotator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (worldRotator != nullptr)
			*worldRotator = params.worldRotator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertRotatorToWorld
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    localRotator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    worldRotator                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_Climber_C::ConvertRotatorToWorld(const struct FRotator& localRotator, struct FRotator* worldRotator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertRotatorToWorld");
		
		ADino_Character_BP_Climber_C_ConvertRotatorToWorld_Params params {};
		params.localRotator = localRotator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (worldRotator != nullptr)
			*worldRotator = params.worldRotator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertVectorToWorld
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     LocalVector                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     WorldVector                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::ConvertVectorToWorld(const struct FVector& LocalVector, struct FVector* WorldVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertVectorToWorld");
		
		ADino_Character_BP_Climber_C_ConvertVectorToWorld_Params params {};
		params.LocalVector = LocalVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WorldVector != nullptr)
			*WorldVector = params.WorldVector;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberUpdateServerTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             newMIN                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             newMAX                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::ClimberUpdateServerTimer(double newMIN, double newMAX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberUpdateServerTimer");
		
		ADino_Character_BP_Climber_C_ClimberUpdateServerTimer_Params params {};
		params.newMIN = newMIN;
		params.newMAX = newMAX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberFalling_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::IsClimberFalling_Pure(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberFalling_Pure");
		
		ADino_Character_BP_Climber_C_IsClimberFalling_Pure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberFalling
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::IsClimberFalling(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberFalling");
		
		ADino_Character_BP_Climber_C_IsClimberFalling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_TraceForMoveNormal
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     TargetLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               foundHit                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     newMoveNormal                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::Climber_TraceForMoveNormal(const struct FVector& TargetLocation, bool* foundHit, struct FVector* newMoveNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_TraceForMoveNormal");
		
		ADino_Character_BP_Climber_C_Climber_TraceForMoveNormal_Params params {};
		params.TargetLocation = TargetLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (foundHit != nullptr)
			*foundHit = params.foundHit;
		if (newMoveNormal != nullptr)
			*newMoveNormal = params.newMoveNormal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberRestoreToSeeking
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ADino_Character_BP_Climber_C::CanClimberRestoreToSeeking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberRestoreToSeeking");
		
		ADino_Character_BP_Climber_C_CanClimberRestoreToSeeking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanWanderOntoWalls
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::Climber_AI_CanWanderOntoWalls(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanWanderOntoWalls");
		
		ADino_Character_BP_Climber_C_Climber_AI_CanWanderOntoWalls_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimbingIK_SetNewBlendspaceAxes
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ClimbingIK_SetNewBlendspaceAxes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimbingIK_SetNewBlendspaceAxes");
		
		ADino_Character_BP_Climber_C_ClimbingIK_SetNewBlendspaceAxes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DebugClimber_NetDrawDebug_Box
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Center                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Extent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               allowDraw                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               forceDebug                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               preventReplication                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::DebugClimber_NetDrawDebug_Box(const struct FVector& Center, const struct FVector& Extent, const struct FLinearColor& Color, const struct FRotator& Rotation, double Duration, bool allowDraw, bool forceDebug, bool preventReplication)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DebugClimber_NetDrawDebug_Box");
		
		ADino_Character_BP_Climber_C_DebugClimber_NetDrawDebug_Box_Params params {};
		params.Center = Center;
		params.Extent = Extent;
		params.Color = Color;
		params.Rotation = Rotation;
		params.Duration = Duration;
		params.allowDraw = allowDraw;
		params.forceDebug = forceDebug;
		params.preventReplication = preventReplication;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DebugClimber_NetDrawDebug_Sphere
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Center                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Segments                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               allowDraw                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               forceDebug                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               preventReplication                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::DebugClimber_NetDrawDebug_Sphere(const struct FVector& Center, double Radius, int32_t Segments, const struct FLinearColor& Color, double Duration, bool allowDraw, bool forceDebug, bool preventReplication)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DebugClimber_NetDrawDebug_Sphere");
		
		ADino_Character_BP_Climber_C_DebugClimber_NetDrawDebug_Sphere_Params params {};
		params.Center = Center;
		params.Radius = Radius;
		params.Segments = Segments;
		params.Color = Color;
		params.Duration = Duration;
		params.allowDraw = allowDraw;
		params.forceDebug = forceDebug;
		params.preventReplication = preventReplication;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberUpdateServerTimerByClimberState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ClimberUpdateServerTimerByClimberState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberUpdateServerTimerByClimberState");
		
		ADino_Character_BP_Climber_C_ClimberUpdateServerTimerByClimberState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanStopAttachedServerTick
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::Climber_AI_CanStopAttachedServerTick(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanStopAttachedServerTick");
		
		ADino_Character_BP_Climber_C_Climber_AI_CanStopAttachedServerTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_Update_ClimbWandering_Duration
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::Climber_AI_Update_ClimbWandering_Duration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_Update_ClimbWandering_Duration");
		
		ADino_Character_BP_Climber_C_Climber_AI_Update_ClimbWandering_Duration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanUpdateClimbWandering
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::Climber_AI_CanUpdateClimbWandering(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanUpdateClimbWandering");
		
		ADino_Character_BP_Climber_C_Climber_AI_CanUpdateClimbWandering_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimbingClimber_AI
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::UpdateClimbingClimber_AI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimbingClimber_AI");
		
		ADino_Character_BP_Climber_C_UpdateClimbingClimber_AI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_Update_IsClimbWandering
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               forceStartWandering                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::Climber_AI_Update_IsClimbWandering(bool forceStartWandering)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_Update_IsClimbWandering");
		
		ADino_Character_BP_Climber_C_Climber_AI_Update_IsClimbWandering_Params params {};
		params.forceStartWandering = forceStartWandering;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_Update_ClimbWander_TargetRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::Climber_AI_Update_ClimbWander_TargetRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_Update_ClimbWander_TargetRotation");
		
		ADino_Character_BP_Climber_C_Climber_AI_Update_ClimbWander_TargetRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertRotatorToLocal
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    Rotator                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    localRotator                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_Climber_C::ConvertRotatorToLocal(const struct FRotator& Rotator, struct FRotator* localRotator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertRotatorToLocal");
		
		ADino_Character_BP_Climber_C_ConvertRotatorToLocal_Params params {};
		params.Rotator = Rotator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (localRotator != nullptr)
			*localRotator = params.localRotator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimbingIK_UpdateMeshBendDotProducts
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ClimbingIK_UpdateMeshBendDotProducts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimbingIK_UpdateMeshBendDotProducts");
		
		ADino_Character_BP_Climber_C_ClimbingIK_UpdateMeshBendDotProducts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanWanderWhileClimbing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::Climber_AI_CanWanderWhileClimbing(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanWanderWhileClimbing");
		
		ADino_Character_BP_Climber_C_Climber_AI_CanWanderWhileClimbing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceMaxRetryCount_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetCorrectClimbingTraceMaxRetryCount_Pure(int32_t Index, int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceMaxRetryCount_Pure");
		
		ADino_Character_BP_Climber_C_GetCorrectClimbingTraceMaxRetryCount_Pure_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceMaxRetryCount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetCorrectClimbingTraceMaxRetryCount(int32_t Index, int32_t* Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceMaxRetryCount");
		
		ADino_Character_BP_Climber_C_GetCorrectClimbingTraceMaxRetryCount_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Count != nullptr)
			*Count = params.Count;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceType_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_DinoClimber_TraceType                            Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetCorrectClimbingTraceType_Pure(int32_t Index, E_DinoClimber_TraceType* Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceType_Pure");
		
		ADino_Character_BP_Climber_C_GetCorrectClimbingTraceType_Pure_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Type != nullptr)
			*Type = params.Type;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_DinoClimber_TraceType                            Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetCorrectClimbingTraceType(int32_t Index, E_DinoClimber_TraceType* Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceType");
		
		ADino_Character_BP_Climber_C_GetCorrectClimbingTraceType_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Type != nullptr)
			*Type = params.Type;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectLookLockDot_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            traceIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             dot                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetCorrectLookLockDot_Pure(int32_t traceIndex, double* dot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectLookLockDot_Pure");
		
		ADino_Character_BP_Climber_C_GetCorrectLookLockDot_Pure_Params params {};
		params.traceIndex = traceIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (dot != nullptr)
			*dot = params.dot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectLookLockDot
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            traceIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             dot                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetCorrectLookLockDot(int32_t traceIndex, double* dot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectLookLockDot");
		
		ADino_Character_BP_Climber_C_GetCorrectLookLockDot_Params params {};
		params.traceIndex = traceIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (dot != nullptr)
			*dot = params.dot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceWeight_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            traceIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isForReplace                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Weight                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetCorrectClimbingTraceWeight_Pure(int32_t traceIndex, bool isForReplace, double* Weight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceWeight_Pure");
		
		ADino_Character_BP_Climber_C_GetCorrectClimbingTraceWeight_Pure_Params params {};
		params.traceIndex = traceIndex;
		params.isForReplace = isForReplace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Weight != nullptr)
			*Weight = params.Weight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceWeight
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            traceIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isForReplace                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Weight                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetCorrectClimbingTraceWeight(int32_t traceIndex, bool isForReplace, double* Weight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectClimbingTraceWeight");
		
		ADino_Character_BP_Climber_C_GetCorrectClimbingTraceWeight_Params params {};
		params.traceIndex = traceIndex;
		params.isForReplace = isForReplace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Weight != nullptr)
			*Weight = params.Weight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Should Climber Use Climbing Trace Hit
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            traceIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitNormal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::ShouldClimberUseClimbingTraceHit(int32_t traceIndex, const struct FVector& HitLocation, const struct FVector& HitNormal, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Should Climber Use Climbing Trace Hit");
		
		ADino_Character_BP_Climber_C_ShouldClimberUseClimbingTraceHit_Params params {};
		params.traceIndex = traceIndex;
		params.HitLocation = HitLocation;
		params.HitNormal = HitNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberRetryClimbingTrace
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            traceIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::CanClimberRetryClimbingTrace(int32_t traceIndex, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberRetryClimbingTrace");
		
		ADino_Character_BP_Climber_C_CanClimberRetryClimbingTrace_Params params {};
		params.traceIndex = traceIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ProcessResultsOfClimbingTraces
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            numValidTraceHits                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    traceIndecesArray                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               requireAllTraceHitsValid                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            numTraceSockets                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  currentClimberTransform                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<bool>                                       traceHitsArray                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FVector>                             traceHitLocationsArray                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FVector>                             traceNormalsArray                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               centerTraceHit                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     desiredSurfaceLocation                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isSurfaceValid                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     surfaceLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SurfaceNormal                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     surfaceLocation_Move                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SurfaceNormal_Move                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::ProcessResultsOfClimbingTraces(int32_t numValidTraceHits, TArray<int32_t>* traceIndecesArray, bool requireAllTraceHitsValid, int32_t numTraceSockets, const struct FTransform& currentClimberTransform, TArray<bool>* traceHitsArray, TArray<struct FVector>* traceHitLocationsArray, TArray<struct FVector>* traceNormalsArray, bool centerTraceHit, const struct FVector& desiredSurfaceLocation, bool* isSurfaceValid, struct FVector* surfaceLocation, struct FVector* SurfaceNormal, struct FVector* surfaceLocation_Move, struct FVector* SurfaceNormal_Move)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ProcessResultsOfClimbingTraces");
		
		ADino_Character_BP_Climber_C_ProcessResultsOfClimbingTraces_Params params {};
		params.numValidTraceHits = numValidTraceHits;
		params.requireAllTraceHitsValid = requireAllTraceHitsValid;
		params.numTraceSockets = numTraceSockets;
		params.currentClimberTransform = currentClimberTransform;
		params.centerTraceHit = centerTraceHit;
		params.desiredSurfaceLocation = desiredSurfaceLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (traceIndecesArray != nullptr)
			*traceIndecesArray = params.traceIndecesArray;
		if (traceHitsArray != nullptr)
			*traceHitsArray = params.traceHitsArray;
		if (traceHitLocationsArray != nullptr)
			*traceHitLocationsArray = params.traceHitLocationsArray;
		if (traceNormalsArray != nullptr)
			*traceNormalsArray = params.traceNormalsArray;
		if (isSurfaceValid != nullptr)
			*isSurfaceValid = params.isSurfaceValid;
		if (surfaceLocation != nullptr)
			*surfaceLocation = params.surfaceLocation;
		if (SurfaceNormal != nullptr)
			*SurfaceNormal = params.SurfaceNormal;
		if (surfaceLocation_Move != nullptr)
			*surfaceLocation_Move = params.surfaceLocation_Move;
		if (SurfaceNormal_Move != nullptr)
			*SurfaceNormal_Move = params.SurfaceNormal_Move;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CenterSphereTraceForSurfaceLocation
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  currTransform                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               foundSurface                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     surfaceLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::CenterSphereTraceForSurfaceLocation(const struct FTransform& currTransform, bool* foundSurface, struct FVector* surfaceLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CenterSphereTraceForSurfaceLocation");
		
		ADino_Character_BP_Climber_C_CenterSphereTraceForSurfaceLocation_Params params {};
		params.currTransform = currTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (foundSurface != nullptr)
			*foundSurface = params.foundSurface;
		if (surfaceLocation != nullptr)
			*surfaceLocation = params.surfaceLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.TraceForClimbableSurface
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FTransform>                          traceSocketOffsetTransforms                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FTransform                                  ClimberTransform                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             TraceLength                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               preventTraceRetries                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<int32_t>                                    currSurfaceTraceIndecesArray                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               foundAnyValidTraceHits                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            numValidTraceHits                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<bool>                                       validTraceHits                                             (Parm, OutParm)
	 * 		TArray<struct FVector>                             traceHitLocations                                          (Parm, OutParm)
	 * 		TArray<struct FVector>                             traceHitNormals                                            (Parm, OutParm)
	 */
	void ADino_Character_BP_Climber_C::TraceForClimbableSurface(TArray<struct FTransform>* traceSocketOffsetTransforms, const struct FTransform& ClimberTransform, double TraceLength, bool preventTraceRetries, TArray<int32_t>* currSurfaceTraceIndecesArray, bool* foundAnyValidTraceHits, int32_t* numValidTraceHits, TArray<bool>* validTraceHits, TArray<struct FVector>* traceHitLocations, TArray<struct FVector>* traceHitNormals)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.TraceForClimbableSurface");
		
		ADino_Character_BP_Climber_C_TraceForClimbableSurface_Params params {};
		params.ClimberTransform = ClimberTransform;
		params.TraceLength = TraceLength;
		params.preventTraceRetries = preventTraceRetries;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (traceSocketOffsetTransforms != nullptr)
			*traceSocketOffsetTransforms = params.traceSocketOffsetTransforms;
		if (currSurfaceTraceIndecesArray != nullptr)
			*currSurfaceTraceIndecesArray = params.currSurfaceTraceIndecesArray;
		if (foundAnyValidTraceHits != nullptr)
			*foundAnyValidTraceHits = params.foundAnyValidTraceHits;
		if (numValidTraceHits != nullptr)
			*numValidTraceHits = params.numValidTraceHits;
		if (validTraceHits != nullptr)
			*validTraceHits = params.validTraceHits;
		if (traceHitLocations != nullptr)
			*traceHitLocations = params.traceHitLocations;
		if (traceHitNormals != nullptr)
			*traceHitNormals = params.traceHitNormals;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertRotatorToLocal_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FRotator                                    Rotator                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    localRotator                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_Climber_C::ConvertRotatorToLocal_Pure(const struct FRotator& Rotator, struct FRotator* localRotator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ConvertRotatorToLocal_Pure");
		
		ADino_Character_BP_Climber_C_ConvertRotatorToLocal_Pure_Params params {};
		params.Rotator = Rotator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (localRotator != nullptr)
			*localRotator = params.localRotator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimbingIK_TraceForNewSurfaceNormals
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      socketGroupSubstring                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		double                                             dot                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::ClimbingIK_TraceForNewSurfaceNormals(const class FString& socketGroupSubstring, double* dot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimbingIK_TraceForNewSurfaceNormals");
		
		ADino_Character_BP_Climber_C_ClimbingIK_TraceForNewSurfaceNormals_Params params {};
		params.socketGroupSubstring = socketGroupSubstring;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (dot != nullptr)
			*dot = params.dot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimbingIK_UpdateMeshHeightOffset
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ClimbingIK_UpdateMeshHeightOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimbingIK_UpdateMeshHeightOffset");
		
		ADino_Character_BP_Climber_C_ClimbingIK_UpdateMeshHeightOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimbingIK
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::UpdateClimbingIK()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimbingIK");
		
		ADino_Character_BP_Climber_C_UpdateClimbingIK_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberDesiredWallJumpDir
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     desiredDir                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetClimberDesiredWallJumpDir(struct FVector* desiredDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberDesiredWallJumpDir");
		
		ADino_Character_BP_Climber_C_GetClimberDesiredWallJumpDir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (desiredDir != nullptr)
			*desiredDir = params.desiredDir;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnStartSeeking
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::OnStartSeeking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnStartSeeking");
		
		ADino_Character_BP_Climber_C_OnStartSeeking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReceiveHit
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         MyComp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Other                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSelfMoved                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitNormal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ADino_Character_BP_Climber_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReceiveHit");
		
		ADino_Character_BP_Climber_C_ReceiveHit_Params params {};
		params.MyComp = MyComp;
		params.Other = Other;
		params.OtherComp = OtherComp;
		params.bSelfMoved = bSelfMoved;
		params.HitLocation = HitLocation;
		params.HitNormal = HitNormal;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequenceBase*                           Animation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BlueprintAnimNotifyCustomEvent");
		
		ADino_Character_BP_Climber_C_BlueprintAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.On ClimberAttached
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::OnClimberAttached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.On ClimberAttached");
		
		ADino_Character_BP_Climber_C_OnClimberAttached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_PlayCameraShake_Client
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Shake                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Speed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::Climber_PlayCameraShake_Client(class UClass* Shake, double Scale, double Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_PlayCameraShake_Client");
		
		ADino_Character_BP_Climber_C_Climber_PlayCameraShake_Client_Params params {};
		params.Shake = Shake;
		params.Scale = Scale;
		params.Speed = Speed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnZoomOut
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::BP_OnZoomOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnZoomOut");
		
		ADino_Character_BP_Climber_C_BP_OnZoomOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnZoomIn
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::BP_OnZoomIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnZoomIn");
		
		ADino_Character_BP_Climber_C_BP_OnZoomIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Average Max Delta with Rotator Array
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FRotator>                            Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FRotator                                    Rotator                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             averageDelta                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetAverageMaxDeltawithRotatorArray(TArray<struct FRotator>* Array, const struct FRotator& Rotator, double* averageDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Average Max Delta with Rotator Array");
		
		ADino_Character_BP_Climber_C_GetAverageMaxDeltawithRotatorArray_Params params {};
		params.Rotator = Rotator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		if (averageDelta != nullptr)
			*averageDelta = params.averageDelta;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get AverageMeanDelta with Rotator Array
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<struct FRotator>                            Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FRotator                                    Rotator                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             averageDelta                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetAverageMeanDeltawithRotatorArray(TArray<struct FRotator>* Array, const struct FRotator& Rotator, double* averageDelta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get AverageMeanDelta with Rotator Array");
		
		ADino_Character_BP_Climber_C_GetAverageMeanDeltawithRotatorArray_Params params {};
		params.Rotator = Rotator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		if (averageDelta != nullptr)
			*averageDelta = params.averageDelta;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetMaxDeltaBetweenRotators
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FRotator                                    A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             Delta                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetMaxDeltaBetweenRotators(const struct FRotator& A, const struct FRotator& B, double* Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetMaxDeltaBetweenRotators");
		
		ADino_Character_BP_Climber_C_GetMaxDeltaBetweenRotators_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Delta != nullptr)
			*Delta = params.Delta;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetAverageDeltaBetweenRotators
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FRotator                                    A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             Delta                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetAverageDeltaBetweenRotators(const struct FRotator& A, const struct FRotator& B, double* Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetAverageDeltaBetweenRotators");
		
		ADino_Character_BP_Climber_C_GetAverageDeltaBetweenRotators_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Delta != nullptr)
			*Delta = params.Delta;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.AddRiderToFinalCameraRotationArrays
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderToAdd                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::AddRiderToFinalCameraRotationArrays(class AShooterCharacter* RiderToAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.AddRiderToFinalCameraRotationArrays");
		
		ADino_Character_BP_Climber_C_AddRiderToFinalCameraRotationArrays_Params params {};
		params.RiderToAdd = RiderToAdd;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DetermineNewRiderFinalCameraRotationIndex
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           theRider                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::DetermineNewRiderFinalCameraRotationIndex(class AShooterCharacter* theRider, int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DetermineNewRiderFinalCameraRotationIndex");
		
		ADino_Character_BP_Climber_C_DetermineNewRiderFinalCameraRotationIndex_Params params {};
		params.theRider = theRider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.RemoveRiderFromFinalCameraRotationArrays
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderToRemove                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::RemoveRiderFromFinalCameraRotationArrays(class AShooterCharacter* RiderToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.RemoveRiderFromFinalCameraRotationArrays");
		
		ADino_Character_BP_Climber_C_RemoveRiderFromFinalCameraRotationArrays_Params params {};
		params.RiderToRemove = RiderToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberLookDirDotToClimbingNormal_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             dot                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetClimberLookDirDotToClimbingNormal_Pure(double* dot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberLookDirDotToClimbingNormal_Pure");
		
		ADino_Character_BP_Climber_C_GetClimberLookDirDotToClimbingNormal_Pure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (dot != nullptr)
			*dot = params.dot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberLookDirDotToClimbingNormal
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             dot                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetClimberLookDirDotToClimbingNormal(double* dot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberLookDirDotToClimbingNormal");
		
		ADino_Character_BP_Climber_C_GetClimberLookDirDotToClimbingNormal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (dot != nullptr)
			*dot = params.dot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberUpVector_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Up                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetClimberUpVector_Pure(struct FVector* Up)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberUpVector_Pure");
		
		ADino_Character_BP_Climber_C_GetClimberUpVector_Pure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Up != nullptr)
			*Up = params.Up;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCurrentRiderFinalCameraRotationArrayIndex
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           thisRider                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetCurrentRiderFinalCameraRotationArrayIndex(class AShooterCharacter* thisRider, int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCurrentRiderFinalCameraRotationArrayIndex");
		
		ADino_Character_BP_Climber_C_GetCurrentRiderFinalCameraRotationArrayIndex_Params params {};
		params.thisRider = thisRider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update Riding Players Final Camera Rotations
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               startedClimbing                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::UpdateRidingPlayersFinalCameraRotations(bool startedClimbing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update Riding Players Final Camera Rotations");
		
		ADino_Character_BP_Climber_C_UpdateRidingPlayersFinalCameraRotations_Params params {};
		params.startedClimbing = startedClimbing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPDoAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPDoAttack");
		
		ADino_Character_BP_Climber_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanNonControlledClimberNotClimbingOverrideTransformInterpolation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::CanNonControlledClimberNotClimbingOverrideTransformInterpolation(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanNonControlledClimberNotClimbingOverrideTransformInterpolation");
		
		ADino_Character_BP_Climber_C_CanNonControlledClimberNotClimbingOverrideTransformInterpolation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberStopNonDediTick_NonControlled
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::CanClimberStopNonDediTick_NonControlled(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberStopNonDediTick_NonControlled");
		
		ADino_Character_BP_Climber_C_CanClimberStopNonDediTick_NonControlled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Input_Jump_Released
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::Input_Jump_Released()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Input_Jump_Released");
		
		ADino_Character_BP_Climber_C_Input_Jump_Released_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Input_Jump_Pressed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::Input_Jump_Pressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Input_Jump_Pressed");
		
		ADino_Character_BP_Climber_C_Input_Jump_Pressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanAttachOnSpawn
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::Climber_AI_CanAttachOnSpawn(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CanAttachOnSpawn");
		
		ADino_Character_BP_Climber_C_Climber_AI_CanAttachOnSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberLookDir
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     lookDir                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetClimberLookDir(struct FVector* lookDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberLookDir");
		
		ADino_Character_BP_Climber_C_GetClimberLookDir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (lookDir != nullptr)
			*lookDir = params.lookDir;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsPrimalCharacterFriendly
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::IsPrimalCharacterFriendly(class APrimalCharacter* Character, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsPrimalCharacterFriendly");
		
		ADino_Character_BP_Climber_C_IsPrimalCharacterFriendly_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Look Dir Dot to Normal
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Normal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             dot                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetClimberLookDirDottoNormal(const struct FVector& Normal, double* dot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Look Dir Dot to Normal");
		
		ADino_Character_BP_Climber_C_GetClimberLookDirDottoNormal_Params params {};
		params.Normal = Normal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (dot != nullptr)
			*dot = params.dot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberViewLocation_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetClimberViewLocation_Pure(struct FVector* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberViewLocation_Pure");
		
		ADino_Character_BP_Climber_C_GetClimberViewLocation_Pure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberViewLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetClimberViewLocation(struct FVector* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberViewLocation");
		
		ADino_Character_BP_Climber_C_GetClimberViewLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberSeek
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isForStart                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::CanClimberSeek(bool isForStart, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberSeek");
		
		ADino_Character_BP_Climber_C_CanClimberSeek_Params params {};
		params.isForStart = isForStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberClimbingSimple_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               excludeDetaching                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               checkPrev                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::IsClimberClimbingSimple_Pure(bool excludeDetaching, bool checkPrev, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberClimbingSimple_Pure");
		
		ADino_Character_BP_Climber_C_IsClimberClimbingSimple_Pure_Params params {};
		params.excludeDetaching = excludeDetaching;
		params.checkPrev = checkPrev;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberClimbing_Simple
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               excludeDetaching                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               checkPrev                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::IsClimberClimbing_Simple(bool excludeDetaching, bool checkPrev, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberClimbing_Simple");
		
		ADino_Character_BP_Climber_C_IsClimberClimbing_Simple_Params params {};
		params.excludeDetaching = excludeDetaching;
		params.checkPrev = checkPrev;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberOn Server Run Released
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ClimberOnServerRunReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberOn Server Run Released");
		
		ADino_Character_BP_Climber_C_ClimberOnServerRunReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_OnServerRunPressed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::Climber_OnServerRunPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_OnServerRunPressed");
		
		ADino_Character_BP_Climber_C_Climber_OnServerRunPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClientTick_UpdateClimberTarget FOV
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ClientTick_UpdateClimberTargetFOV()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClientTick_UpdateClimberTarget FOV");
		
		ADino_Character_BP_Climber_C_ClientTick_UpdateClimberTargetFOV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberStopNonDediTick_Controlled
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::CanClimberStopNonDediTick_Controlled(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberStopNonDediTick_Controlled");
		
		ADino_Character_BP_Climber_C_CanClimberStopNonDediTick_Controlled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPModifyFOV
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              FOVIn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ADino_Character_BP_Climber_C::BPModifyFOV(float FOVIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPModifyFOV");
		
		ADino_Character_BP_Climber_C_BPModifyFOV_Params params {};
		params.FOVIn = FOVIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.HasClimberResetTPVCamera
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::HasClimberResetTPVCamera(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.HasClimberResetTPVCamera");
		
		ADino_Character_BP_Climber_C_HasClimberResetTPVCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Stop All Climber Logic
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::StopAllClimberLogic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Stop All Climber Logic");
		
		ADino_Character_BP_Climber_C_StopAllClimberLogic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimbingSurfaceNormalFromRotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    climbingRotation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     SurfaceNormal                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetClimbingSurfaceNormalFromRotation(const struct FRotator& climbingRotation, struct FVector* SurfaceNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimbingSurfaceNormalFromRotation");
		
		ADino_Character_BP_Climber_C_GetClimbingSurfaceNormalFromRotation_Params params {};
		params.climbingRotation = climbingRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SurfaceNormal != nullptr)
			*SurfaceNormal = params.SurfaceNormal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetAngleDeltaBetweenVectors
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     VectorA                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     VectorB                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     AroundAxis                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             theta                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetAngleDeltaBetweenVectors(const struct FVector& VectorA, const struct FVector& VectorB, const struct FVector& AroundAxis, double* theta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetAngleDeltaBetweenVectors");
		
		ADino_Character_BP_Climber_C_GetAngleDeltaBetweenVectors_Params params {};
		params.VectorA = VectorA;
		params.VectorB = VectorB;
		params.AroundAxis = AroundAxis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (theta != nullptr)
			*theta = params.theta;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Rotate RotatorForwardVector to Target Constant
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    currentRotator                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     targetForward                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             RotationRate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    newRotator                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_Climber_C::RotateRotatorForwardVectortoTargetConstant(const struct FRotator& currentRotator, const struct FVector& targetForward, double RotationRate, struct FRotator* newRotator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Rotate RotatorForwardVector to Target Constant");
		
		ADino_Character_BP_Climber_C_RotateRotatorForwardVectortoTargetConstant_Params params {};
		params.currentRotator = currentRotator;
		params.targetForward = targetForward;
		params.RotationRate = RotationRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (newRotator != nullptr)
			*newRotator = params.newRotator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.RemoveAxisFromVector
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Vector                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Axis                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     newVector                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::RemoveAxisFromVector(const struct FVector& Vector, const struct FVector& Axis, struct FVector* newVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.RemoveAxisFromVector");
		
		ADino_Character_BP_Climber_C_RemoveAxisFromVector_Params params {};
		params.Vector = Vector;
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (newVector != nullptr)
			*newVector = params.newVector;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberSwimming_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::IsClimberSwimming_Pure(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberSwimming_Pure");
		
		ADino_Character_BP_Climber_C_IsClimberSwimming_Pure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Finish Attaching
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::CanClimberFinishAttaching(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Finish Attaching");
		
		ADino_Character_BP_Climber_C_CanClimberFinishAttaching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Finish Skidding
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::CanClimberFinishSkidding(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Finish Skidding");
		
		ADino_Character_BP_Climber_C_CanClimberFinishSkidding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberSkid
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::CanClimberSkid(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberSkid");
		
		ADino_Character_BP_Climber_C_CanClimberSkid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Flipping
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ServerTick_Flipping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Flipping");
		
		ADino_Character_BP_Climber_C_ServerTick_Flipping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DoesClimberHaveEnough Stamina Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             needsStamina                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::DoesClimberHaveEnoughStaminaPure(double needsStamina, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DoesClimberHaveEnough Stamina Pure");
		
		ADino_Character_BP_Climber_C_DoesClimberHaveEnoughStaminaPure_Params params {};
		params.needsStamina = needsStamina;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DoesClimberHave Enough Stamina
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             needsStamina                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::DoesClimberHaveEnoughStamina(double needsStamina, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DoesClimberHave Enough Stamina");
		
		ADino_Character_BP_Climber_C_DoesClimberHaveEnoughStamina_Params params {};
		params.needsStamina = needsStamina;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberCallServerRunInputEvents
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newRunPressed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::CanClimberCallServerRunInputEvents(bool newRunPressed, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberCallServerRunInputEvents");
		
		ADino_Character_BP_Climber_C_CanClimberCallServerRunInputEvents_Params params {};
		params.newRunPressed = newRunPressed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Is Climber Grounded_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::IsClimberGrounded_Pure(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Is Climber Grounded_Pure");
		
		ADino_Character_BP_Climber_C_IsClimberGrounded_Pure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Input_Run_Toggle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::Input_Run_Toggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Input_Run_Toggle");
		
		ADino_Character_BP_Climber_C_Input_Run_Toggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Input_Run_Released
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::Input_Run_Released()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Input_Run_Released");
		
		ADino_Character_BP_Climber_C_Input_Run_Released_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Input_Run_Pressed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::Input_Run_Pressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Input_Run_Pressed");
		
		ADino_Character_BP_Climber_C_Input_Run_Pressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ResetShouldDrawCrosshair
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ResetShouldDrawCrosshair()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ResetShouldDrawCrosshair");
		
		ADino_Character_BP_Climber_C_ResetShouldDrawCrosshair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber Check for ObstaclesInDir
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     checkDir                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             checkTrace_Distance                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             checkTrace_Padding                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETraceTypeQuery                                    checkTrace_Channel                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               forceDebug                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               NoObstacles                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  obstacleHit                                                (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ADino_Character_BP_Climber_C::ClimberCheckforObstaclesInDir(const struct FVector& checkDir, double checkTrace_Distance, double checkTrace_Padding, ETraceTypeQuery checkTrace_Channel, bool forceDebug, bool* NoObstacles, struct FHitResult* obstacleHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber Check for ObstaclesInDir");
		
		ADino_Character_BP_Climber_C_ClimberCheckforObstaclesInDir_Params params {};
		params.checkDir = checkDir;
		params.checkTrace_Distance = checkTrace_Distance;
		params.checkTrace_Padding = checkTrace_Padding;
		params.checkTrace_Channel = checkTrace_Channel;
		params.forceDebug = forceDebug;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NoObstacles != nullptr)
			*NoObstacles = params.NoObstacles;
		if (obstacleHit != nullptr)
			*obstacleHit = params.obstacleHit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DebugClimber_NetDrawDebug_Line
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     LineStart                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     LineEnd                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Thickness                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               allowDraw                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               forceDebug                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               preventReplication                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::DebugClimber_NetDrawDebug_Line(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FLinearColor& Color, double Duration, double Thickness, bool allowDraw, bool forceDebug, bool preventReplication)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DebugClimber_NetDrawDebug_Line");
		
		ADino_Character_BP_Climber_C_DebugClimber_NetDrawDebug_Line_Params params {};
		params.LineStart = LineStart;
		params.LineEnd = LineEnd;
		params.Color = Color;
		params.Duration = Duration;
		params.Thickness = Thickness;
		params.allowDraw = allowDraw;
		params.forceDebug = forceDebug;
		params.preventReplication = preventReplication;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Right Vector_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Right                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetClimberRightVector_Pure(struct FVector* Right)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Right Vector_Pure");
		
		ADino_Character_BP_Climber_C_GetClimberRightVector_Pure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Right != nullptr)
			*Right = params.Right;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Forward Vector_Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Forward                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetClimberForwardVector_Pure(struct FVector* Forward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Forward Vector_Pure");
		
		ADino_Character_BP_Climber_C_GetClimberForwardVector_Pure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Forward != nullptr)
			*Forward = params.Forward;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnWallJump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     wallJumpVelocity                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::OnWallJump(const struct FVector& wallJumpVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnWallJump");
		
		ADino_Character_BP_Climber_C_OnWallJump_Params params {};
		params.wallJumpVelocity = wallJumpVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanWallJump
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::CanWallJump(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanWallJump");
		
		ADino_Character_BP_Climber_C_CanWallJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_PreventMovementMode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      newMovementMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      newCustomMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ADino_Character_BP_Climber_C::BP_PreventMovementMode(EMovementMode newMovementMode, unsigned char newCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_PreventMovementMode");
		
		ADino_Character_BP_Climber_C_BP_PreventMovementMode_Params params {};
		params.newMovementMode = newMovementMode;
		params.newCustomMode = newCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPOverrideCharacterNewFallVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InitialVelocity                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Gravity                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector ADino_Character_BP_Climber_C::BPOverrideCharacterNewFallVelocity(const struct FVector& InitialVelocity, const struct FVector& Gravity, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPOverrideCharacterNewFallVelocity");
		
		ADino_Character_BP_Climber_C_BPOverrideCharacterNewFallVelocity_Params params {};
		params.InitialVelocity = InitialVelocity;
		params.Gravity = Gravity;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Current Climber LookRotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIgnoreDeadzone                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    lookRot                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_Climber_C::GetCurrentClimberLookRotation(bool bIgnoreDeadzone, struct FRotator* lookRot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Current Climber LookRotation");
		
		ADino_Character_BP_Climber_C_GetCurrentClimberLookRotation_Params params {};
		params.bIgnoreDeadzone = bIgnoreDeadzone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (lookRot != nullptr)
			*lookRot = params.lookRot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsRemoteClientClimber
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::IsRemoteClientClimber(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsRemoteClientClimber");
		
		ADino_Character_BP_Climber_C_IsRemoteClientClimber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_OnSetTamedFollowTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::Climber_AI_OnSetTamedFollowTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_OnSetTamedFollowTarget");
		
		ADino_Character_BP_Climber_C_Climber_AI_OnSetTamedFollowTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.AllowGrappling
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ADino_Character_BP_Climber_C::AllowGrappling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.AllowGrappling");
		
		ADino_Character_BP_Climber_C_AllowGrappling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_OnSetTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      NewTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::Climber_AI_OnSetTarget(class AActor* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_OnSetTarget");
		
		ADino_Character_BP_Climber_C_Climber_AI_OnSetTarget_Params params {};
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberStartSeeking
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ClimberStartSeeking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberStartSeeking");
		
		ADino_Character_BP_Climber_C_ClimberStartSeeking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberStopSeeking
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ClimberStopSeeking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberStopSeeking");
		
		ADino_Character_BP_Climber_C_ClimberStopSeeking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Set Climber IK_Active
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::SetClimberIK_Active(bool newActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Set Climber IK_Active");
		
		ADino_Character_BP_Climber_C_SetClimberIK_Active_Params params {};
		params.newActive = newActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimbingIK_BlendspaceAxes_Back
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   axes                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetClimbingIK_BlendspaceAxes_Back(struct FVector2D* axes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimbingIK_BlendspaceAxes_Back");
		
		ADino_Character_BP_Climber_C_GetClimbingIK_BlendspaceAxes_Back_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (axes != nullptr)
			*axes = params.axes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimbingIK_BlendspaceAxes_Front
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   axes                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetClimbingIK_BlendspaceAxes_Front(struct FVector2D* axes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimbingIK_BlendspaceAxes_Front");
		
		ADino_Character_BP_Climber_C_GetClimbingIK_BlendspaceAxes_Front_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (axes != nullptr)
			*axes = params.axes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update NonDedi Climber Mesh
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::UpdateNonDediClimberMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update NonDedi Climber Mesh");
		
		ADino_Character_BP_Climber_C_UpdateNonDediClimberMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPDesiredRotationIsLocalSpace
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ADino_Character_BP_Climber_C::BPDesiredRotationIsLocalSpace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPDesiredRotationIsLocalSpace");
		
		ADino_Character_BP_Climber_C_BPDesiredRotationIsLocalSpace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberCheckForAboveWalkableGround
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::ClimberCheckForAboveWalkableGround(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberCheckForAboveWalkableGround");
		
		ADino_Character_BP_Climber_C_ClimberCheckForAboveWalkableGround_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPModifyDesiredRotation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    InDesiredRotation                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    OutDesiredRotation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADino_Character_BP_Climber_C::BPModifyDesiredRotation(float DeltaTime, const struct FRotator& InDesiredRotation, struct FRotator* OutDesiredRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPModifyDesiredRotation");
		
		ADino_Character_BP_Climber_C_BPModifyDesiredRotation_Params params {};
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
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPSetupTamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasJustTamed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::BPSetupTamed(bool bWasJustTamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPSetupTamed");
		
		ADino_Character_BP_Climber_C_BPSetupTamed_Params params {};
		params.bWasJustTamed = bWasJustTamed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberSeeking
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               checkPrevious                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::IsClimberSeeking(bool checkPrevious, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberSeeking");
		
		ADino_Character_BP_Climber_C_IsClimberSeeking_Params params {};
		params.checkPrevious = checkPrevious;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Did Climber Just Start or Stop Climbing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::DidClimberJustStartorStopClimbing(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Did Climber Just Start or Stop Climbing");
		
		ADino_Character_BP_Climber_C_DidClimberJustStartorStopClimbing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberSwimming
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::IsClimberSwimming(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberSwimming");
		
		ADino_Character_BP_Climber_C_IsClimberSwimming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ResetClimbingVars
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ResetClimbingVars()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ResetClimbingVars");
		
		ADino_Character_BP_Climber_C_ResetClimbingVars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimber Inputs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::UpdateClimberInputs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimber Inputs");
		
		ADino_Character_BP_Climber_C_UpdateClimberInputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsOwningClientClimber
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::IsOwningClientClimber(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsOwningClientClimber");
		
		ADino_Character_BP_Climber_C_IsOwningClientClimber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Update ClimbingCamera Final Orientation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           viewingRider                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::CanClimberUpdateClimbingCameraFinalOrientation(class AShooterCharacter* viewingRider, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Update ClimbingCamera Final Orientation");
		
		ADino_Character_BP_Climber_C_CanClimberUpdateClimbingCameraFinalOrientation_Params params {};
		params.viewingRider = viewingRider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Update Climber TPV_Camera Offset
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::CanUpdateClimberTPV_CameraOffset(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Update Climber TPV_Camera Offset");
		
		ADino_Character_BP_Climber_C_CanUpdateClimberTPV_CameraOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Client Tick Update Climber TPV_Camera Offset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ClientTickUpdateClimberTPV_CameraOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Client Tick Update Climber TPV_Camera Offset");
		
		ADino_Character_BP_Climber_C_ClientTickUpdateClimberTPV_CameraOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateOwningClientIsClimbingBuff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::UpdateOwningClientIsClimbingBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateOwningClientIsClimbingBuff");
		
		ADino_Character_BP_Climber_C_UpdateOwningClientIsClimbingBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Store NonDedi Climber Climbing Velocity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::StoreNonDediClimberClimbingVelocity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Store NonDedi Climber Climbing Velocity");
		
		ADino_Character_BP_Climber_C_StoreNonDediClimberClimbingVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPCameraRotationFinal
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            viewingCharacter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    InCurrentFinalRot                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FRotator ADino_Character_BP_Climber_C::BPCameraRotationFinal(class APrimalCharacter* viewingCharacter, const struct FRotator& InCurrentFinalRot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPCameraRotationFinal");
		
		ADino_Character_BP_Climber_C_BPCameraRotationFinal_Params params {};
		params.viewingCharacter = viewingCharacter;
		params.InCurrentFinalRot = InCurrentFinalRot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Capsule BottomWorldLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             offsetTowardsCenter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Bottom                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetClimberCapsuleBottomWorldLocation(double offsetTowardsCenter, struct FVector* Bottom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Capsule BottomWorldLocation");
		
		ADino_Character_BP_Climber_C_GetClimberCapsuleBottomWorldLocation_Params params {};
		params.offsetTowardsCenter = offsetTowardsCenter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Bottom != nullptr)
			*Bottom = params.Bottom;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get ClimberVelocity Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               forceUseWorldDeltaSeconds                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetClimberVelocityPure(bool forceUseWorldDeltaSeconds, struct FVector* Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get ClimberVelocity Pure");
		
		ADino_Character_BP_Climber_C_GetClimberVelocityPure_Params params {};
		params.forceUseWorldDeltaSeconds = forceUseWorldDeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Velocity != nullptr)
			*Velocity = params.Velocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPOverrideFPVViewLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            viewingCharacter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool ADino_Character_BP_Climber_C::BPOverrideFPVViewLocation(class APrimalCharacter* viewingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPOverrideFPVViewLocation");
		
		ADino_Character_BP_Climber_C_BPOverrideFPVViewLocation_Params params {};
		params.viewingCharacter = viewingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPGetFPVViewLocation
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            viewingCharacter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector ADino_Character_BP_Climber_C::BPGetFPVViewLocation(class APrimalCharacter* viewingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPGetFPVViewLocation");
		
		ADino_Character_BP_Climber_C_BPGetFPVViewLocation_Params params {};
		params.viewingCharacter = viewingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPLimitPlayerRotation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            viewingCharacter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    InViewRotation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FRotator ADino_Character_BP_Climber_C::BPLimitPlayerRotation(class APrimalCharacter* viewingCharacter, const struct FRotator& InViewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPLimitPlayerRotation");
		
		ADino_Character_BP_Climber_C_BPLimitPlayerRotation_Params params {};
		params.viewingCharacter = viewingCharacter;
		params.InViewRotation = InViewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPModifyViewHitDir
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            viewingCharacter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InViewHitDir                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ADino_Character_BP_Climber_C::BPModifyViewHitDir(class APrimalCharacter* viewingCharacter, float InViewHitDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPModifyViewHitDir");
		
		ADino_Character_BP_Climber_C_BPModifyViewHitDir_Params params {};
		params.viewingCharacter = viewingCharacter;
		params.InViewHitDir = InViewHitDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPCameraBaseOrientation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            viewingCharacter                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	struct FRotator ADino_Character_BP_Climber_C::BPCameraBaseOrientation(class APrimalCharacter* viewingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPCameraBaseOrientation");
		
		ADino_Character_BP_Climber_C_BPCameraBaseOrientation_Params params {};
		params.viewingCharacter = viewingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberVelocityAlongNormal
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Normal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetClimberVelocityAlongNormal(const struct FVector& Normal, double* Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberVelocityAlongNormal");
		
		ADino_Character_BP_Climber_C_GetClimberVelocityAlongNormal_Params params {};
		params.Normal = Normal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Velocity != nullptr)
			*Velocity = params.Velocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Velocity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               forceUseWorldDeltaSeconds                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetClimberVelocity(bool forceUseWorldDeltaSeconds, struct FVector* Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Velocity");
		
		ADino_Character_BP_Climber_C_GetClimberVelocity_Params params {};
		params.forceUseWorldDeltaSeconds = forceUseWorldDeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Velocity != nullptr)
			*Velocity = params.Velocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCurrentClimbingStaminaCost
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             cost                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetCurrentClimbingStaminaCost(double* cost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCurrentClimbingStaminaCost");
		
		ADino_Character_BP_Climber_C_GetCurrentClimbingStaminaCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (cost != nullptr)
			*cost = params.cost;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCurrentClimbingRotationSpeed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             RotationSpeed                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetCurrentClimbingRotationSpeed(double* RotationSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCurrentClimbingRotationSpeed");
		
		ADino_Character_BP_Climber_C_GetCurrentClimbingRotationSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RotationSpeed != nullptr)
			*RotationSpeed = params.RotationSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCurrentClimbingMoveVector
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     OverrideMoveDir                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     moveVector                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetCurrentClimbingMoveVector(const struct FVector& OverrideMoveDir, struct FVector* moveVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCurrentClimbingMoveVector");
		
		ADino_Character_BP_Climber_C_GetCurrentClimbingMoveVector_Params params {};
		params.OverrideMoveDir = OverrideMoveDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (moveVector != nullptr)
			*moveVector = params.moveVector;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get CurrentClimbingVelocityMax
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetCurrentClimbingVelocityMax(double* Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get CurrentClimbingVelocityMax");
		
		ADino_Character_BP_Climber_C_GetCurrentClimbingVelocityMax_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Velocity != nullptr)
			*Velocity = params.Velocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnSeek Released
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Toggle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::OnSeekReleased(bool Toggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnSeek Released");
		
		ADino_Character_BP_Climber_C_OnSeekReleased_Params params {};
		params.Toggle = Toggle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnSeek Pressed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Toggle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::OnSeekPressed(bool Toggle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnSeek Pressed");
		
		ADino_Character_BP_Climber_C_OnSeekPressed_Params params {};
		params.Toggle = Toggle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_OnClientRunReleased
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::Climber_OnClientRunReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_OnClientRunReleased");
		
		ADino_Character_BP_Climber_C_Climber_OnClientRunReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_OnClientRunPressed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::Climber_OnClientRunPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_OnClientRunPressed");
		
		ADino_Character_BP_Climber_C_Climber_OnClientRunPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.On Climbing Traces Found No Valid Surface
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<bool>                                       hitMap                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ADino_Character_BP_Climber_C::OnClimbingTracesFoundNoValidSurface(TArray<bool>* hitMap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.On Climbing Traces Found No Valid Surface");
		
		ADino_Character_BP_Climber_C_OnClimbingTracesFoundNoValidSurface_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (hitMap != nullptr)
			*hitMap = params.hitMap;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get New Trace Vectors For AroundCornerCheck
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     TraceStart                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TraceEnd                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            traceIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            retryNum                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               didLastTraceHit                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  lastTraceHitResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               retryTrace                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     updatedTraceStart                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     updatedTraceEnd                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               overrideTraceHit                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     newHitLoc                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     newHitNormal                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetNewTraceVectorsForAroundCornerCheck(const struct FVector& TraceStart, const struct FVector& TraceEnd, int32_t traceIndex, int32_t retryNum, bool didLastTraceHit, const struct FHitResult& lastTraceHitResult, bool* retryTrace, struct FVector* updatedTraceStart, struct FVector* updatedTraceEnd, bool* overrideTraceHit, struct FVector* newHitLoc, struct FVector* newHitNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get New Trace Vectors For AroundCornerCheck");
		
		ADino_Character_BP_Climber_C_GetNewTraceVectorsForAroundCornerCheck_Params params {};
		params.TraceStart = TraceStart;
		params.TraceEnd = TraceEnd;
		params.traceIndex = traceIndex;
		params.retryNum = retryNum;
		params.didLastTraceHit = didLastTraceHit;
		params.lastTraceHitResult = lastTraceHitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (retryTrace != nullptr)
			*retryTrace = params.retryTrace;
		if (updatedTraceStart != nullptr)
			*updatedTraceStart = params.updatedTraceStart;
		if (updatedTraceEnd != nullptr)
			*updatedTraceEnd = params.updatedTraceEnd;
		if (overrideTraceHit != nullptr)
			*overrideTraceHit = params.overrideTraceHit;
		if (newHitLoc != nullptr)
			*newHitLoc = params.newHitLoc;
		if (newHitNormal != nullptr)
			*newHitNormal = params.newHitNormal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCustomSurfaceTraceDistance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            traceIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             customDistance                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetCustomSurfaceTraceDistance(int32_t traceIndex, double* customDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCustomSurfaceTraceDistance");
		
		ADino_Character_BP_Climber_C_GetCustomSurfaceTraceDistance_Params params {};
		params.traceIndex = traceIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (customDistance != nullptr)
			*customDistance = params.customDistance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ShouldClimber_CenterSphereTraceForSurfaceLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::ShouldClimber_CenterSphereTraceForSurfaceLocation(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ShouldClimber_CenterSphereTraceForSurfaceLocation");
		
		ADino_Character_BP_Climber_C_ShouldClimber_CenterSphereTraceForSurfaceLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SetNewClimbingRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    NewRotation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_Climber_C::SetNewClimbingRotation(const struct FRotator& NewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SetNewClimbingRotation");
		
		ADino_Character_BP_Climber_C_SetNewClimbingRotation_Params params {};
		params.NewRotation = NewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ForceStopClimbingNow
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ForceStopClimbingNow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ForceStopClimbingNow");
		
		ADino_Character_BP_Climber_C_ForceStopClimbingNow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Apply Detach Impulse
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::CanClimberApplyDetachImpulse(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Apply Detach Impulse");
		
		ADino_Character_BP_Climber_C_CanClimberApplyDetachImpulse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.LerpRotatorToTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    currentRotator                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    targetRotator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             lerpSpeed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    lerpedRotator                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_Climber_C::LerpRotatorToTarget(const struct FRotator& currentRotator, const struct FRotator& targetRotator, double lerpSpeed, struct FRotator* lerpedRotator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.LerpRotatorToTarget");
		
		ADino_Character_BP_Climber_C_LerpRotatorToTarget_Params params {};
		params.currentRotator = currentRotator;
		params.targetRotator = targetRotator;
		params.lerpSpeed = lerpSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (lerpedRotator != nullptr)
			*lerpedRotator = params.lerpedRotator;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Trace for Non Climbable Surface
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     traceDir                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::TraceforNonClimbableSurface(const struct FVector& traceDir, bool* Found)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Trace for Non Climbable Surface");
		
		ADino_Character_BP_Climber_C_TraceforNonClimbableSurface_Params params {};
		params.traceDir = traceDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Found != nullptr)
			*Found = params.Found;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Surface Trace Offset Array from UseTraceMap
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<bool>                                       useMap                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTransform>                          Result                                                     (Parm, OutParm)
	 * 		TArray<int32_t>                                    IndexArray                                                 (Parm, OutParm)
	 */
	void ADino_Character_BP_Climber_C::GetSurfaceTraceOffsetArrayfromUseTraceMap(TArray<bool>* useMap, TArray<struct FTransform>* Result, TArray<int32_t>* IndexArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Surface Trace Offset Array from UseTraceMap");
		
		ADino_Character_BP_Climber_C_GetSurfaceTraceOffsetArrayfromUseTraceMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (useMap != nullptr)
			*useMap = params.useMap;
		if (Result != nullptr)
			*Result = params.Result;
		if (IndexArray != nullptr)
			*IndexArray = params.IndexArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.MakeClimbingRotationFromForwardVector
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     newForward                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    NewRotation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_Climber_C::MakeClimbingRotationFromForwardVector(const struct FVector& newForward, struct FRotator* NewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.MakeClimbingRotationFromForwardVector");
		
		ADino_Character_BP_Climber_C_MakeClimbingRotationFromForwardVector_Params params {};
		params.newForward = newForward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewRotation != nullptr)
			*NewRotation = params.NewRotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCurrentClimbingTurnAngleDelta
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Delta                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetCurrentClimbingTurnAngleDelta(double* Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCurrentClimbingTurnAngleDelta");
		
		ADino_Character_BP_Climber_C_GetCurrentClimbingTurnAngleDelta_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Delta != nullptr)
			*Delta = params.Delta;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DebugClimber_NetDrawDebug_RotationAxes
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    Rotator                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Origin                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Length                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Thickness                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               allowDraw                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               forceDebug                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               preventReplication                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::DebugClimber_NetDrawDebug_RotationAxes(const struct FRotator& Rotator, const struct FVector& Origin, double Length, double Duration, double Thickness, bool allowDraw, bool forceDebug, bool preventReplication)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DebugClimber_NetDrawDebug_RotationAxes");
		
		ADino_Character_BP_Climber_C_DebugClimber_NetDrawDebug_RotationAxes_Params params {};
		params.Rotator = Rotator;
		params.Origin = Origin;
		params.Length = Length;
		params.Duration = Duration;
		params.Thickness = Thickness;
		params.allowDraw = allowDraw;
		params.forceDebug = forceDebug;
		params.preventReplication = preventReplication;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SetClimbableSurfaceVars
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     newSurfaceNormal                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     newSurfaceNormal_Move                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     newSurfaceLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     newSurfaceLocation_Move                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::SetClimbableSurfaceVars(const struct FVector& newSurfaceNormal, const struct FVector& newSurfaceNormal_Move, const struct FVector& newSurfaceLocation, const struct FVector& newSurfaceLocation_Move)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SetClimbableSurfaceVars");
		
		ADino_Character_BP_Climber_C_SetClimbableSurfaceVars_Params params {};
		params.newSurfaceNormal = newSurfaceNormal;
		params.newSurfaceNormal_Move = newSurfaceNormal_Move;
		params.newSurfaceLocation = newSurfaceLocation;
		params.newSurfaceLocation_Move = newSurfaceLocation_Move;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SnapClimberToSurface
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::SnapClimberToSurface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SnapClimberToSurface");
		
		ADino_Character_BP_Climber_C_SnapClimberToSurface_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get ClimberState Index
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               GetPrevious                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetClimberStateIndex(bool GetPrevious, unsigned char* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get ClimberState Index");
		
		ADino_Character_BP_Climber_C_GetClimberStateIndex_Params params {};
		params.GetPrevious = GetPrevious;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimber Update Climbing Rotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    NewRotation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    approvedRotation                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_Climber_C::CanClimberUpdateClimbingRotation(const struct FRotator& NewRotation, bool* Result, struct FRotator* approvedRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimber Update Climbing Rotation");
		
		ADino_Character_BP_Climber_C_CanClimberUpdateClimbingRotation_Params params {};
		params.NewRotation = NewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (approvedRotation != nullptr)
			*approvedRotation = params.approvedRotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CheckForRetrySurfaceTrace
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     TraceStart                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     TraceEnd                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            traceIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            retryNum                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               didLastTraceHit                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  lastTraceHitResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               retry                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     retryStart                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     retryEnd                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               overrideTraceHit                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NewLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NewNormal                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::CheckForRetrySurfaceTrace(const struct FVector& TraceStart, const struct FVector& TraceEnd, int32_t traceIndex, int32_t retryNum, bool didLastTraceHit, const struct FHitResult& lastTraceHitResult, bool* retry, struct FVector* retryStart, struct FVector* retryEnd, bool* overrideTraceHit, struct FVector* NewLocation, struct FVector* NewNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CheckForRetrySurfaceTrace");
		
		ADino_Character_BP_Climber_C_CheckForRetrySurfaceTrace_Params params {};
		params.TraceStart = TraceStart;
		params.TraceEnd = TraceEnd;
		params.traceIndex = traceIndex;
		params.retryNum = retryNum;
		params.didLastTraceHit = didLastTraceHit;
		params.lastTraceHitResult = lastTraceHitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (retry != nullptr)
			*retry = params.retry;
		if (retryStart != nullptr)
			*retryStart = params.retryStart;
		if (retryEnd != nullptr)
			*retryEnd = params.retryEnd;
		if (overrideTraceHit != nullptr)
			*overrideTraceHit = params.overrideTraceHit;
		if (NewLocation != nullptr)
			*NewLocation = params.NewLocation;
		if (NewNormal != nullptr)
			*NewNormal = params.NewNormal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimbingTurnDirection
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            turnDir                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetClimbingTurnDirection(int32_t* turnDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimbingTurnDirection");
		
		ADino_Character_BP_Climber_C_GetClimbingTurnDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (turnDir != nullptr)
			*turnDir = params.turnDir;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Flipped Rotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    flipRotation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_Climber_C::GetClimberFlippedRotation(struct FRotator* flipRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Flipped Rotation");
		
		ADino_Character_BP_Climber_C_GetClimberFlippedRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (flipRotation != nullptr)
			*flipRotation = params.flipRotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberFlipAxis
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Axis                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetClimberFlipAxis(struct FVector* Axis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimberFlipAxis");
		
		ADino_Character_BP_Climber_C_GetClimberFlipAxis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Axis != nullptr)
			*Axis = params.Axis;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimbingMoveDirFromRotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     moveDir                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetClimbingMoveDirFromRotation(const struct FRotator& Rotation, struct FVector* moveDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetClimbingMoveDirFromRotation");
		
		ADino_Character_BP_Climber_C_GetClimbingMoveDirFromRotation_Params params {};
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (moveDir != nullptr)
			*moveDir = params.moveDir;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Make Climbing Rotation fromSurfaceNormal
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     SurfaceNormal                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_Climber_C::MakeClimbingRotationfromSurfaceNormal(const struct FVector& SurfaceNormal, struct FRotator* Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Make Climbing Rotation fromSurfaceNormal");
		
		ADino_Character_BP_Climber_C_MakeClimbingRotationfromSurfaceNormal_Params params {};
		params.SurfaceNormal = SurfaceNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rotation != nullptr)
			*Rotation = params.Rotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Right Vector
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Right                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetClimberRightVector(struct FVector* Right)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Right Vector");
		
		ADino_Character_BP_Climber_C_GetClimberRightVector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Right != nullptr)
			*Right = params.Right;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Forward Vector
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Forward                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetClimberForwardVector(struct FVector* Forward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Forward Vector");
		
		ADino_Character_BP_Climber_C_GetClimberForwardVector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Forward != nullptr)
			*Forward = params.Forward;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Up Vector
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Up                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetClimberUpVector(struct FVector* Up)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Up Vector");
		
		ADino_Character_BP_Climber_C_GetClimberUpVector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Up != nullptr)
			*Up = params.Up;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SetClimberCanIgnoreWater
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               restoreToDefault                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Newval                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::SetClimberCanIgnoreWater(bool restoreToDefault, bool Newval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SetClimberCanIgnoreWater");
		
		ADino_Character_BP_Climber_C_SetClimberCanIgnoreWater_Params params {};
		params.restoreToDefault = restoreToDefault;
		params.Newval = Newval;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Currently Climb Out Of Water
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::CanClimberCurrentlyClimbOutOfWater(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Currently Climb Out Of Water");
		
		ADino_Character_BP_Climber_C_CanClimberCurrentlyClimbOutOfWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CheckForClimbOutOfWater
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AllowClimbing                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::CheckForClimbOutOfWater(bool* AllowClimbing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CheckForClimbOutOfWater");
		
		ADino_Character_BP_Climber_C_CheckForClimbOutOfWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllowClimbing != nullptr)
			*AllowClimbing = params.AllowClimbing;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateControlledClientClimber
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::UpdateControlledClientClimber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateControlledClientClimber");
		
		ADino_Character_BP_Climber_C_UpdateControlledClientClimber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberTick_Server
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ClimberTick_Server()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberTick_Server");
		
		ADino_Character_BP_Climber_C_ClimberTick_Server_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberTick_NonDedi
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ClimberTick_NonDedi()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberTick_NonDedi");
		
		ADino_Character_BP_Climber_C_ClimberTick_NonDedi_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateNonControlledClimber
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::UpdateNonControlledClimber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateNonControlledClimber");
		
		ADino_Character_BP_Climber_C_UpdateNonControlledClimber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimberMovementMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::UpdateClimberMovementMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimberMovementMode");
		
		ADino_Character_BP_Climber_C_UpdateClimberMovementMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnClimberDetached
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::OnClimberDetached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnClimberDetached");
		
		ADino_Character_BP_Climber_C_OnClimberDetached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimberOverrideFallVelocity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::UpdateClimberOverrideFallVelocity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimberOverrideFallVelocity");
		
		ADino_Character_BP_Climber_C_UpdateClimberOverrideFallVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Rotate to Target Rotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::CanClimberRotatetoTargetRotation(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Rotate to Target Rotation");
		
		ADino_Character_BP_Climber_C_CanClimberRotatetoTargetRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberDetaching
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               checkPrevious                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::IsClimberDetaching(bool checkPrevious, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberDetaching");
		
		ADino_Character_BP_Climber_C_IsClimberDetaching_Params params {};
		params.checkPrevious = checkPrevious;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Sync RiderLookDirection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::SyncRiderLookDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Sync RiderLookDirection");
		
		ADino_Character_BP_Climber_C_SyncRiderLookDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnRep_CurrentClimberStateIndex
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::OnRep_CurrentClimberStateIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.OnRep_CurrentClimberStateIndex");
		
		ADino_Character_BP_Climber_C_OnRep_CurrentClimberStateIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberMeshInterpolate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::CanClimberMeshInterpolate(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberMeshInterpolate");
		
		ADino_Character_BP_Climber_C_CanClimberMeshInterpolate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Flip CheckNormal
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Normal                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetClimberFlipCheckNormal(struct FVector* Normal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Flip CheckNormal");
		
		ADino_Character_BP_Climber_C_GetClimberFlipCheckNormal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Normal != nullptr)
			*Normal = params.Normal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectFlippingAnim
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                Anim                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetCorrectFlippingAnim(class UAnimMontage** Anim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectFlippingAnim");
		
		ADino_Character_BP_Climber_C_GetCorrectFlippingAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Anim != nullptr)
			*Anim = params.Anim;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberAttachFromGround
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::CanClimberAttachFromGround(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanClimberAttachFromGround");
		
		ADino_Character_BP_Climber_C_CanClimberAttachFromGround_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get CorrectClimber Rotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               updateRotation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_Climber_C::GetCorrectClimberRotation(bool* updateRotation, struct FRotator* Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get CorrectClimber Rotation");
		
		ADino_Character_BP_Climber_C_GetCorrectClimberRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (updateRotation != nullptr)
			*updateRotation = params.updateRotation;
		if (Rotation != nullptr)
			*Rotation = params.Rotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Receive Climbing Input Backward
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::CanReceiveClimbingInputBackward(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Receive Climbing Input Backward");
		
		ADino_Character_BP_Climber_C_CanReceiveClimbingInputBackward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanReceiveClimbingInput_Forward
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::CanReceiveClimbingInput_Forward(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanReceiveClimbingInput_Forward");
		
		ADino_Character_BP_Climber_C_CanReceiveClimbingInput_Forward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectSurfaceTraceDistance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isForRetry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             traceDist                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetCorrectSurfaceTraceDistance(bool isForRetry, double* traceDist)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectSurfaceTraceDistance");
		
		ADino_Character_BP_Climber_C_GetCorrectSurfaceTraceDistance_Params params {};
		params.isForRetry = isForRetry;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (traceDist != nullptr)
			*traceDist = params.traceDist;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimbingClimber
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IgnoreFailure                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               canKeepClimbing                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::UpdateClimbingClimber(bool IgnoreFailure, bool* canKeepClimbing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimbingClimber");
		
		ADino_Character_BP_Climber_C_UpdateClimbingClimber_Params params {};
		params.IgnoreFailure = IgnoreFailure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canKeepClimbing != nullptr)
			*canKeepClimbing = params.canKeepClimbing;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Correct Surface Trace OffsetTransforms
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               overrideUseMap                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<bool>                                       newUseMp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTransform>                          offsetTransforms                                           (Parm, OutParm)
	 * 		TArray<int32_t>                                    TraceIndeces                                               (Parm, OutParm)
	 */
	void ADino_Character_BP_Climber_C::GetCorrectSurfaceTraceOffsetTransforms(bool overrideUseMap, TArray<bool>* newUseMp, TArray<struct FTransform>* offsetTransforms, TArray<int32_t>* TraceIndeces)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Correct Surface Trace OffsetTransforms");
		
		ADino_Character_BP_Climber_C_GetCorrectSurfaceTraceOffsetTransforms_Params params {};
		params.overrideUseMap = overrideUseMap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (newUseMp != nullptr)
			*newUseMp = params.newUseMp;
		if (offsetTransforms != nullptr)
			*offsetTransforms = params.offsetTransforms;
		if (TraceIndeces != nullptr)
			*TraceIndeces = params.TraceIndeces;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get CorrectDetachAnim
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                Anim                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetCorrectDetachAnim(class UAnimMontage** Anim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get CorrectDetachAnim");
		
		ADino_Character_BP_Climber_C_GetCorrectDetachAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Anim != nullptr)
			*Anim = params.Anim;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberPlayingAnim
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                checkAnim                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::IsClimberPlayingAnim(class UAnimMontage* checkAnim, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberPlayingAnim");
		
		ADino_Character_BP_Climber_C_IsClimberPlayingAnim_Params params {};
		params.checkAnim = checkAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Interp Climber toTransform
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             LocationInterpSpeed                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             RotationInterpSpeed                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               reachedTransform                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::InterpClimbertoTransform(const struct FTransform& Transform, double LocationInterpSpeed, double RotationInterpSpeed, double DeltaTime, bool* reachedTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Interp Climber toTransform");
		
		ADino_Character_BP_Climber_C_InterpClimbertoTransform_Params params {};
		params.Transform = Transform;
		params.LocationInterpSpeed = LocationInterpSpeed;
		params.RotationInterpSpeed = RotationInterpSpeed;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (reachedTransform != nullptr)
			*reachedTransform = params.reachedTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SoftSetClimberTransform
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  NewTransform                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::SoftSetClimberTransform(const struct FTransform& NewTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SoftSetClimberTransform");
		
		ADino_Character_BP_Climber_C_SoftSetClimberTransform_Params params {};
		params.NewTransform = NewTransform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectAttachAnim
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                Anim                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetCorrectAttachAnim(class UAnimMontage** Anim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetCorrectAttachAnim");
		
		ADino_Character_BP_Climber_C_GetCorrectAttachAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Anim != nullptr)
			*Anim = params.Anim;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Correct Mesh Offset
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Offset                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetCorrectMeshOffset(struct FVector* Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Correct Mesh Offset");
		
		ADino_Character_BP_Climber_C_GetCorrectMeshOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Offset != nullptr)
			*Offset = params.Offset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.StoreClimb Trace Socket Offsets
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::StoreClimbTraceSocketOffsets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.StoreClimb Trace Socket Offsets");
		
		ADino_Character_BP_Climber_C_StoreClimbTraceSocketOffsets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Is Climber Attaching
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               checkPrevious                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::IsClimberAttaching(bool checkPrevious, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Is Climber Attaching");
		
		ADino_Character_BP_Climber_C_IsClimberAttaching_Params params {};
		params.checkPrevious = checkPrevious;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.RotateClimber To Look Rotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::RotateClimberToLookRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.RotateClimber To Look Rotation");
		
		ADino_Character_BP_Climber_C_RotateClimberToLookRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Check For Prevent Stop Climbing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<bool>                                       traceHitsArray                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            numValidHits                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            numTraces                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               AllowClimbing                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::CheckForPreventStopClimbing(TArray<bool>* traceHitsArray, int32_t numValidHits, int32_t numTraces, bool* AllowClimbing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Check For Prevent Stop Climbing");
		
		ADino_Character_BP_Climber_C_CheckForPreventStopClimbing_Params params {};
		params.numValidHits = numValidHits;
		params.numTraces = numTraces;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (traceHitsArray != nullptr)
			*traceHitsArray = params.traceHitsArray;
		if (AllowClimbing != nullptr)
			*AllowClimbing = params.AllowClimbing;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update RiderWithClimberState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::UpdateRiderWithClimberState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update RiderWithClimberState");
		
		ADino_Character_BP_Climber_C_UpdateRiderWithClimberState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberInAnyClimberState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               checkPrevious                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::IsClimberInAnyClimberState(bool checkPrevious, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberInAnyClimberState");
		
		ADino_Character_BP_Climber_C_IsClimberInAnyClimberState_Params params {};
		params.checkPrevious = checkPrevious;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Flip Attached Climber
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::FlipAttachedClimber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Flip Attached Climber");
		
		ADino_Character_BP_Climber_C_FlipAttachedClimber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanAttached Climber Flip
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::CanAttachedClimberFlip(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CanAttached Climber Flip");
		
		ADino_Character_BP_Climber_C_CanAttachedClimberFlip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Check for Attached Climber Flip
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::CheckforAttachedClimberFlip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Check for Attached Climber Flip");
		
		ADino_Character_BP_Climber_C_CheckforAttachedClimberFlip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Is Climber Moving on Surface
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               checkPrevious                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::IsClimberMovingonSurface(bool checkPrevious, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Is Climber Moving on Surface");
		
		ADino_Character_BP_Climber_C_IsClimberMovingonSurface_Params params {};
		params.checkPrevious = checkPrevious;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climbing Forward Velocity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             ForwardVelocity                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetClimbingForwardVelocity(double* ForwardVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climbing Forward Velocity");
		
		ADino_Character_BP_Climber_C_GetClimbingForwardVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ForwardVelocity != nullptr)
			*ForwardVelocity = params.ForwardVelocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climbing Right Velocity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             RightVelocity                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetClimbingRightVelocity(double* RightVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climbing Right Velocity");
		
		ADino_Character_BP_Climber_C_GetClimbingRightVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RightVelocity != nullptr)
			*RightVelocity = params.RightVelocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Detach Climber from Surface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::DetachClimberfromSurface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Detach Climber from Surface");
		
		ADino_Character_BP_Climber_C_DetachClimberfromSurface_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Detaching
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ServerTick_Detaching()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Detaching");
		
		ADino_Character_BP_Climber_C_ServerTick_Detaching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetServerTickDeltaTime
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             DeltaTime                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetServerTickDeltaTime(double* DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetServerTickDeltaTime");
		
		ADino_Character_BP_Climber_C_GetServerTickDeltaTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DeltaTime != nullptr)
			*DeltaTime = params.DeltaTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Skid
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     currVelocity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     dir                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             InterpSpeed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NewVelocity                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::Skid(const struct FVector& currVelocity, const struct FVector& dir, double InterpSpeed, struct FVector* NewVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Skid");
		
		ADino_Character_BP_Climber_C_Skid_Params params {};
		params.currVelocity = currVelocity;
		params.dir = dir;
		params.InterpSpeed = InterpSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewVelocity != nullptr)
			*NewVelocity = params.NewVelocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Move on Surface Velocity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetMoveonSurfaceVelocity(struct FVector* Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Move on Surface Velocity");
		
		ADino_Character_BP_Climber_C_GetMoveonSurfaceVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Velocity != nullptr)
			*Velocity = params.Velocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Continue Attaching
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::CanClimberContinueAttaching(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can Climber Continue Attaching");
		
		ADino_Character_BP_Climber_C_CanClimberContinueAttaching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Rotate Climber To TargetClimbingRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::RotateClimberToTargetClimbingRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Rotate Climber To TargetClimbingRotation");
		
		ADino_Character_BP_Climber_C_RotateClimberToTargetClimbingRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update Climber TargetClimbingRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::UpdateClimberTargetClimbingRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update Climber TargetClimbingRotation");
		
		ADino_Character_BP_Climber_C_UpdateClimberTargetClimbingRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Attach Climber to Surface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::AttachClimbertoSurface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Attach Climber to Surface");
		
		ADino_Character_BP_Climber_C_AttachClimbertoSurface_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimbingIndexEqualToCurrent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::IsClimbingIndexEqualToCurrent(unsigned char Index, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimbingIndexEqualToCurrent");
		
		ADino_Character_BP_Climber_C_IsClimbingIndexEqualToCurrent_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberMoving Absolute Up
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::IsClimberMovingAbsoluteUp(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberMoving Absolute Up");
		
		ADino_Character_BP_Climber_C_IsClimberMovingAbsoluteUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Override
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ServerTick_Override()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Override");
		
		ADino_Character_BP_Climber_C_ServerTick_Override_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.StopClimbing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               resetRestoreToSeeking                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               skipDetach                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::StopClimbing(bool resetRestoreToSeeking, bool skipDetach)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.StopClimbing");
		
		ADino_Character_BP_Climber_C_StopClimbing_Params params {};
		params.resetRestoreToSeeking = resetRestoreToSeeking;
		params.skipDetach = skipDetach;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Replicate Index Update Non Dedi Climber
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ReplicateIndexUpdateNonDediClimber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Replicate Index Update Non Dedi Climber");
		
		ADino_Character_BP_Climber_C_ReplicateIndexUpdateNonDediClimber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Find Valid AiSpawn Transform
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               canSpawn                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  validTransform                                             (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::FindValidAiSpawnTransform(bool* canSpawn, struct FTransform* validTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Find Valid AiSpawn Transform");
		
		ADino_Character_BP_Climber_C_FindValidAiSpawnTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canSpawn != nullptr)
			*canSpawn = params.canSpawn;
		if (validTransform != nullptr)
			*validTransform = params.validTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Replicate Index Update Target TPV_Camera Offset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ReplicateIndexUpdateTargetTPV_CameraOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Replicate Index Update Target TPV_Camera Offset");
		
		ADino_Character_BP_Climber_C_ReplicateIndexUpdateTargetTPV_CameraOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Replicate Index Update Server And Client Climber
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ReplicateIndexUpdateServerAndClientClimber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Replicate Index Update Server And Client Climber");
		
		ADino_Character_BP_Climber_C_ReplicateIndexUpdateServerAndClientClimber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReachedTop Of Climb
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ReachedTopOfClimb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReachedTop Of Climb");
		
		ADino_Character_BP_Climber_C_ReachedTopOfClimb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimbingVars
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               validSurfaceFound                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SurfaceNormal                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SurfaceNormal_Move                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     surfaceLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     surfaceLocation_Move                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<bool>                                       hitMap                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<int32_t>                                    traceIndexArray                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ADino_Character_BP_Climber_C::UpdateClimbingVars(bool validSurfaceFound, const struct FVector& SurfaceNormal, const struct FVector& SurfaceNormal_Move, const struct FVector& surfaceLocation, const struct FVector& surfaceLocation_Move, TArray<bool>* hitMap, TArray<int32_t>* traceIndexArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimbingVars");
		
		ADino_Character_BP_Climber_C_UpdateClimbingVars_Params params {};
		params.validSurfaceFound = validSurfaceFound;
		params.SurfaceNormal = SurfaceNormal;
		params.SurfaceNormal_Move = SurfaceNormal_Move;
		params.surfaceLocation = surfaceLocation;
		params.surfaceLocation_Move = surfaceLocation_Move;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (hitMap != nullptr)
			*hitMap = params.hitMap;
		if (traceIndexArray != nullptr)
			*traceIndexArray = params.traceIndexArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsHitSurfaceClimbable
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::IsHitSurfaceClimbable(const struct FHitResult& Hit, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsHitSurfaceClimbable");
		
		ADino_Character_BP_Climber_C_IsHitSurfaceClimbable_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReplicateClimbing Index
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ReplicateClimbingIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReplicateClimbing Index");
		
		ADino_Character_BP_Climber_C_ReplicateClimbingIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateServerClimberByClimbingIndex
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::UpdateServerClimberByClimbingIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateServerClimberByClimbingIndex");
		
		ADino_Character_BP_Climber_C_UpdateServerClimberByClimbingIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimberStateByClimbingIndex
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      NewIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::UpdateClimberStateByClimbingIndex(unsigned char NewIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimberStateByClimbingIndex");
		
		ADino_Character_BP_Climber_C_UpdateClimberStateByClimbingIndex_Params params {};
		params.NewIndex = NewIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimbing Velocity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::UpdateClimbingVelocity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.UpdateClimbing Velocity");
		
		ADino_Character_BP_Climber_C_UpdateClimbingVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Calc Current Climbing Velocity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     newClimbingVel                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::CalcCurrentClimbingVelocity(struct FVector* newClimbingVel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Calc Current Climbing Velocity");
		
		ADino_Character_BP_Climber_C_CalcCurrentClimbingVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (newClimbingVel != nullptr)
			*newClimbingVel = params.newClimbingVel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Climbing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ServerTick_Climbing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Climbing");
		
		ADino_Character_BP_Climber_C_ServerTick_Climbing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Attached
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ServerTick_Attached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Attached");
		
		ADino_Character_BP_Climber_C_ServerTick_Attached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Skidding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ServerTick_Skidding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Skidding");
		
		ADino_Character_BP_Climber_C_ServerTick_Skidding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Attaching
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ServerTick_Attaching()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Attaching");
		
		ADino_Character_BP_Climber_C_ServerTick_Attaching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Seeking
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ServerTick_Seeking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ServerTick_Seeking");
		
		ADino_Character_BP_Climber_C_ServerTick_Seeking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClientTick_NoInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ClientTick_NoInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClientTick_NoInput");
		
		ADino_Character_BP_Climber_C_ClientTick_NoInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Client Tick Input Backward
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ClientTickInputBackward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Client Tick Input Backward");
		
		ADino_Character_BP_Climber_C_ClientTickInputBackward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClientTick_Input_Forward
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ClientTick_Input_Forward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClientTick_Input_Forward");
		
		ADino_Character_BP_Climber_C_ClientTick_Input_Forward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ShouldClimberDraw CrosshairWhileClimbing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::ShouldClimberDrawCrosshairWhileClimbing(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ShouldClimberDraw CrosshairWhileClimbing");
		
		ADino_Character_BP_Climber_C_ShouldClimberDrawCrosshairWhileClimbing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsNormalClimbable
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Normal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isAverageNormal                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::IsNormalClimbable(const struct FVector& Normal, bool isAverageNormal, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsNormalClimbable");
		
		ADino_Character_BP_Climber_C_IsNormalClimbable_Params params {};
		params.Normal = Normal;
		params.isAverageNormal = isAverageNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class AController*                                 EventInstigator                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsPointDamage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  PointHitInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	float ADino_Character_BP_Climber_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPAdjustDamage");
		
		ADino_Character_BP_Climber_C_BPAdjustDamage_Params params {};
		params.IncomingDamage = IncomingDamage;
		params.TheDamageEvent = TheDamageEvent;
		params.EventInstigator = EventInstigator;
		params.DamageCauser = DamageCauser;
		params.bIsPointDamage = bIsPointDamage;
		params.PointHitInfo = PointHitInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReduceClimberStamina
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::ReduceClimberStamina(double Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReduceClimberStamina");
		
		ADino_Character_BP_Climber_C_ReduceClimberStamina_Params params {};
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DisplayMessage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::DisplayMessage(const class FString& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.DisplayMessage");
		
		ADino_Character_BP_Climber_C_DisplayMessage_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberHas Enough Stamina to Climb
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               HUD_NotifyOnFailure                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::ClimberHasEnoughStaminatoClimb(bool HUD_NotifyOnFailure, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberHas Enough Stamina to Climb");
		
		ADino_Character_BP_Climber_C_ClimberHasEnoughStaminatoClimb_Params params {};
		params.HUD_NotifyOnFailure = HUD_NotifyOnFailure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Is ClimberClimbing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isFinishedAttaching                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               includeSeekingwhenabovefalse                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               includeDetaching                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               checkPrevious                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::IsClimberClimbing(bool isFinishedAttaching, bool includeSeekingwhenabovefalse, bool includeDetaching, bool checkPrevious, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Is ClimberClimbing");
		
		ADino_Character_BP_Climber_C_IsClimberClimbing_Params params {};
		params.isFinishedAttaching = isFinishedAttaching;
		params.includeSeekingwhenabovefalse = includeSeekingwhenabovefalse;
		params.includeDetaching = includeDetaching;
		params.checkPrevious = checkPrevious;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Reduce StaminaWhileClimbing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ReduceStaminaWhileClimbing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Reduce StaminaWhileClimbing");
		
		ADino_Character_BP_Climber_C_ReduceStaminaWhileClimbing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberPlayLandAnim
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               forceSuccess                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::ClimberPlayLandAnim(bool forceSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClimberPlayLandAnim");
		
		ADino_Character_BP_Climber_C_ClimberPlayLandAnim_Params params {};
		params.forceSuccess = forceSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPOnMovementModeChangedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      PreviousCustomMode                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPOnMovementModeChangedNotify");
		
		ADino_Character_BP_Climber_C_BPOnMovementModeChangedNotify_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Hard Set Climber RotationBut Interp Mesh Location
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    NewRotation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_Climber_C::HardSetClimberRotationButInterpMeshLocation(const struct FRotator& NewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Hard Set Climber RotationBut Interp Mesh Location");
		
		ADino_Character_BP_Climber_C_HardSetClimberRotationButInterpMeshLocation_Params params {};
		params.NewRotation = NewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CleanUpClimbingAnims
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               animsClean                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::CleanUpClimbingAnims(bool* animsClean)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CleanUpClimbingAnims");
		
		ADino_Character_BP_Climber_C_CleanUpClimbingAnims_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (animsClean != nullptr)
			*animsClean = params.animsClean;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Set Should Restore to Attached
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Newval                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::SetShouldRestoretoAttached(bool Newval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Set Should Restore to Attached");
		
		ADino_Character_BP_Climber_C_SetShouldRestoretoAttached_Params params {};
		params.Newval = Newval;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SoftSetClimberRotation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    NewRotation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_Climber_C::SoftSetClimberRotation(const struct FRotator& NewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SoftSetClimberRotation");
		
		ADino_Character_BP_Climber_C_SoftSetClimberRotation_Params params {};
		params.NewRotation = NewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.WallJump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::WallJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.WallJump");
		
		ADino_Character_BP_Climber_C_WallJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InterpolateClimberMesh
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      meshToInterpolate                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::InterpolateClimberMesh(class USkeletalMeshComponent* meshToInterpolate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InterpolateClimberMesh");
		
		ADino_Character_BP_Climber_C_InterpolateClimberMesh_Params params {};
		params.meshToInterpolate = meshToInterpolate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update Climber Cilmbing Anims
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ensureAnimsPlaying                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::UpdateClimberCilmbingAnims(bool ensureAnimsPlaying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update Climber Cilmbing Anims");
		
		ADino_Character_BP_Climber_C_UpdateClimberCilmbingAnims_Params params {};
		params.ensureAnimsPlaying = ensureAnimsPlaying;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SetUse Aim Offsets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newUse                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::SetUseAimOffsets(bool newUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SetUse Aim Offsets");
		
		ADino_Character_BP_Climber_C_SetUseAimOffsets_Params params {};
		params.newUse = newUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetStayOnSurfaceVelocity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bOverrideVars                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OverrideSurfaceLoc                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             OverrideDistFromSurface                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     OverrideClimberLoc                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bPreventUpdatingServerTimer                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetStayOnSurfaceVelocity(bool bOverrideVars, const struct FVector& OverrideSurfaceLoc, double OverrideDistFromSurface, const struct FVector& OverrideClimberLoc, bool bPreventUpdatingServerTimer, struct FVector* Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.GetStayOnSurfaceVelocity");
		
		ADino_Character_BP_Climber_C_GetStayOnSurfaceVelocity_Params params {};
		params.bOverrideVars = bOverrideVars;
		params.OverrideSurfaceLoc = OverrideSurfaceLoc;
		params.OverrideDistFromSurface = OverrideDistFromSurface;
		params.OverrideClimberLoc = OverrideClimberLoc;
		params.bPreventUpdatingServerTimer = bPreventUpdatingServerTimer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Velocity != nullptr)
			*Velocity = params.Velocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReceiveAnyDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReceiveAnyDamage");
		
		ADino_Character_BP_Climber_C_ReceiveAnyDamage_Params params {};
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Init Climber
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::InitClimber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Init Climber");
		
		ADino_Character_BP_Climber_C_InitClimber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPUnstasis");
		
		ADino_Character_BP_Climber_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CheckForAttachToSurfaceOnSpawn
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::Climber_AI_CheckForAttachToSurfaceOnSpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_CheckForAttachToSurfaceOnSpawn");
		
		ADino_Character_BP_Climber_C_Climber_AI_CheckForAttachToSurfaceOnSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Client Set Climber State
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::ClientSetClimberState(unsigned char NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Client Set Climber State");
		
		ADino_Character_BP_Climber_C_ClientSetClimberState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can ClimberContinueClimbing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::CanClimberContinueClimbing(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Can ClimberContinueClimbing");
		
		ADino_Character_BP_Climber_C_CanClimberContinueClimbing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_SetAttachedToSurface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Newval                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               forceSuccess                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::Climber_AI_SetAttachedToSurface(bool Newval, bool forceSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_SetAttachedToSurface");
		
		ADino_Character_BP_Climber_C_Climber_AI_SetAttachedToSurface_Params params {};
		params.Newval = Newval;
		params.forceSuccess = forceSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Ai Controller
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADino_AIController_BP_Climber_C*             ref                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetClimberAiController(class ADino_AIController_BP_Climber_C** ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Climber Ai Controller");
		
		ADino_Character_BP_Climber_C_GetClimberAiController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ref != nullptr)
			*ref = params.ref;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_DetachFromSurface
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::Climber_AI_DetachFromSurface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_AI_DetachFromSurface");
		
		ADino_Character_BP_Climber_C_Climber_AI_DetachFromSurface_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Is Climber Attached
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               checkPrevious                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::IsClimberAttached(bool checkPrevious, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Is Climber Attached");
		
		ADino_Character_BP_Climber_C_IsClimberAttached_Params params {};
		params.checkPrevious = checkPrevious;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPNotifyClearRider");
		
		ADino_Character_BP_Climber_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPNotifySetRider");
		
		ADino_Character_BP_Climber_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPTimerNonDedicated");
		
		ADino_Character_BP_Climber_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update Climber Transforms
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::UpdateClimberTransforms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Update Climber Transforms");
		
		ADino_Character_BP_Climber_C_UpdateClimberTransforms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Default Climber
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ADino_Character_BP_Climber_C*                ref                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::GetDefaultClimber(class ADino_Character_BP_Climber_C** ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Get Default Climber");
		
		ADino_Character_BP_Climber_C_GetDefaultClimber_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ref != nullptr)
			*ref = params.ref;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberGrounded
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::IsClimberGrounded(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.IsClimberGrounded");
		
		ADino_Character_BP_Climber_C_IsClimberGrounded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CalcCurrentClimbableSurface
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             TraceDistance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               preventTraceRetries                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               requireAllTraceHitsAreValid                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OverrideClimberTransform                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  NewTransform                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               OverrideTraceUseMap                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<bool>                                       newUseMap                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               validSurfaceFound                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SurfaceNormal                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SurfaceNormal_Move                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     surfaceLocation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     surfaceLocation_Move                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<bool>                                       hitMap                                                     (Parm, OutParm)
	 * 		TArray<int32_t>                                    traceIndexArray                                            (Parm, OutParm)
	 */
	void ADino_Character_BP_Climber_C::CalcCurrentClimbableSurface(double TraceDistance, bool preventTraceRetries, bool requireAllTraceHitsAreValid, bool OverrideClimberTransform, const struct FTransform& NewTransform, bool OverrideTraceUseMap, TArray<bool>* newUseMap, bool* validSurfaceFound, struct FVector* SurfaceNormal, struct FVector* SurfaceNormal_Move, struct FVector* surfaceLocation, struct FVector* surfaceLocation_Move, TArray<bool>* hitMap, TArray<int32_t>* traceIndexArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CalcCurrentClimbableSurface");
		
		ADino_Character_BP_Climber_C_CalcCurrentClimbableSurface_Params params {};
		params.TraceDistance = TraceDistance;
		params.preventTraceRetries = preventTraceRetries;
		params.requireAllTraceHitsAreValid = requireAllTraceHitsAreValid;
		params.OverrideClimberTransform = OverrideClimberTransform;
		params.NewTransform = NewTransform;
		params.OverrideTraceUseMap = OverrideTraceUseMap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (newUseMap != nullptr)
			*newUseMap = params.newUseMap;
		if (validSurfaceFound != nullptr)
			*validSurfaceFound = params.validSurfaceFound;
		if (SurfaceNormal != nullptr)
			*SurfaceNormal = params.SurfaceNormal;
		if (SurfaceNormal_Move != nullptr)
			*SurfaceNormal_Move = params.SurfaceNormal_Move;
		if (surfaceLocation != nullptr)
			*surfaceLocation = params.surfaceLocation;
		if (surfaceLocation_Move != nullptr)
			*surfaceLocation_Move = params.surfaceLocation_Move;
		if (hitMap != nullptr)
			*hitMap = params.hitMap;
		if (traceIndexArray != nullptr)
			*traceIndexArray = params.traceIndexArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Net Set Climber State
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      newStateIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::NetSetClimberState(unsigned char newStateIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Net Set Climber State");
		
		ADino_Character_BP_Climber_C_NetSetClimberState_Params params {};
		params.newStateIndex = newStateIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BPTimerServer");
		
		ADino_Character_BP_Climber_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InpActEvt_Run_K2Node_InputActionEvent_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::InpActEvt_Run_K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InpActEvt_Run_K2Node_InputActionEvent_4");
		
		ADino_Character_BP_Climber_C_InpActEvt_Run_K2Node_InputActionEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InpActEvt_Run_K2Node_InputActionEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::InpActEvt_Run_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InpActEvt_Run_K2Node_InputActionEvent_3");
		
		ADino_Character_BP_Climber_C_InpActEvt_Run_K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InpActEvt_RunToggle_K2Node_InputActionEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::InpActEvt_RunToggle_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InpActEvt_RunToggle_K2Node_InputActionEvent_2");
		
		ADino_Character_BP_Climber_C_InpActEvt_RunToggle_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InpActEvt_Jump_K2Node_InputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::InpActEvt_Jump_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InpActEvt_Jump_K2Node_InputActionEvent_1");
		
		ADino_Character_BP_Climber_C_InpActEvt_Jump_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_StartSeeking
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::Server_StartSeeking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_StartSeeking");
		
		ADino_Character_BP_Climber_C_Server_StartSeeking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_StopSeeking
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::Server_StopSeeking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_StopSeeking");
		
		ADino_Character_BP_Climber_C_Server_StopSeeking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_NetSetClimberState
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      NewState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::Server_NetSetClimberState(unsigned char NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_NetSetClimberState");
		
		ADino_Character_BP_Climber_C_Server_NetSetClimberState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SetReadyToClimbAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::SetReadyToClimbAfterDelay(double Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SetReadyToClimbAfterDelay");
		
		ADino_Character_BP_Climber_C_SetReadyToClimbAfterDelay_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CheckUntil_SetAiAttachedToSurface
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::CheckUntil_SetAiAttachedToSurface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CheckUntil_SetAiAttachedToSurface");
		
		ADino_Character_BP_Climber_C_CheckUntil_SetAiAttachedToSurface_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.PlayAttachParticleWhenCloseToSurface
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::PlayAttachParticleWhenCloseToSurface()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.PlayAttachParticleWhenCloseToSurface");
		
		ADino_Character_BP_Climber_C_PlayAttachParticleWhenCloseToSurface_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.PreventLandingAnimBriefly
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::PreventLandingAnimBriefly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.PreventLandingAnimBriefly");
		
		ADino_Character_BP_Climber_C_PreventLandingAnimBriefly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CheckOnJumpStateAfterJumpDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::CheckOnJumpStateAfterJumpDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.CheckOnJumpStateAfterJumpDelay");
		
		ADino_Character_BP_Climber_C_CheckOnJumpStateAfterJumpDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnJumpPressed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::BP_OnJumpPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnJumpPressed");
		
		ADino_Character_BP_Climber_C_BP_OnJumpPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnJumpReleased
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::BP_OnJumpReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.BP_OnJumpReleased");
		
		ADino_Character_BP_Climber_C_BP_OnJumpReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SyncToServer_RiderViewRotation
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    ViewRotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_Climber_C::SyncToServer_RiderViewRotation(const struct FRotator& ViewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SyncToServer_RiderViewRotation");
		
		ADino_Character_BP_Climber_C_SyncToServer_RiderViewRotation_Params params {};
		params.ViewRotation = ViewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SyncToOwningClient_ClimbingVelocity
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     climbingVelocity                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::SyncToOwningClient_ClimbingVelocity(const struct FVector& climbingVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.SyncToOwningClient_ClimbingVelocity");
		
		ADino_Character_BP_Climber_C_SyncToOwningClient_ClimbingVelocity_Params params {};
		params.climbingVelocity = climbingVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_OnRunPressed
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::Server_OnRunPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_OnRunPressed");
		
		ADino_Character_BP_Climber_C_Server_OnRunPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_OnRunReleased
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::Server_OnRunReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_OnRunReleased");
		
		ADino_Character_BP_Climber_C_Server_OnRunReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_Climber_OnRunPressed
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::Multi_Climber_OnRunPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_Climber_OnRunPressed");
		
		ADino_Character_BP_Climber_C_Multi_Climber_OnRunPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_Climber_OnRunReleased
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::Multi_Climber_OnRunReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_Climber_OnRunReleased");
		
		ADino_Character_BP_Climber_C_Multi_Climber_OnRunReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClearClimberControlRotationRoll
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ClearClimberControlRotationRoll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClearClimberControlRotationRoll");
		
		ADino_Character_BP_Climber_C_ClearClimberControlRotationRoll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClearClimberControlRotationRoll_NextTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ClearClimberControlRotationRoll_NextTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ClearClimberControlRotationRoll_NextTick");
		
		ADino_Character_BP_Climber_C_ClearClimberControlRotationRoll_NextTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ReceiveBeginPlay");
		
		ADino_Character_BP_Climber_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.LockClimbingMeshRotationInterpSpeedForDuration
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::LockClimbingMeshRotationInterpSpeedForDuration(double Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.LockClimbingMeshRotationInterpSpeedForDuration");
		
		ADino_Character_BP_Climber_C_LockClimbingMeshRotationInterpSpeedForDuration_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_SyncClimberDesiredRotationOnDetach
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    desiredRotation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_Climber_C::Multi_SyncClimberDesiredRotationOnDetach(const struct FRotator& desiredRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_SyncClimberDesiredRotationOnDetach");
		
		ADino_Character_BP_Climber_C_Multi_SyncClimberDesiredRotationOnDetach_Params params {};
		params.desiredRotation = desiredRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InitClimber_NextTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::InitClimber_NextTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InitClimber_NextTick");
		
		ADino_Character_BP_Climber_C_InitClimber_NextTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InitClimber_Now
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::InitClimber_Now()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.InitClimber_Now");
		
		ADino_Character_BP_Climber_C_InitClimber_Now_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_OnWallJump
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     wallJumpVelocity                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::Multi_OnWallJump(const struct FVector& wallJumpVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_OnWallJump");
		
		ADino_Character_BP_Climber_C_Multi_OnWallJump_Params params {};
		params.wallJumpVelocity = wallJumpVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_DrawDebug_Line
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     LineStart                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     LineEnd                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Thickness                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::Multi_DrawDebug_Line(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FLinearColor& Color, double Duration, double Thickness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_DrawDebug_Line");
		
		ADino_Character_BP_Climber_C_Multi_DrawDebug_Line_Params params {};
		params.LineStart = LineStart;
		params.LineEnd = LineEnd;
		params.Color = Color;
		params.Duration = Duration;
		params.Thickness = Thickness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_OnJumpPresssed
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::Server_OnJumpPresssed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_OnJumpPresssed");
		
		ADino_Character_BP_Climber_C_Server_OnJumpPresssed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_JumpAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::Climber_JumpAfterDelay(double Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_JumpAfterDelay");
		
		ADino_Character_BP_Climber_C_Climber_JumpAfterDelay_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_HardSetClimberActorRotation
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    NewRotation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_Climber_C::Multi_HardSetClimberActorRotation(const struct FRotator& NewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_HardSetClimberActorRotation");
		
		ADino_Character_BP_Climber_C_Multi_HardSetClimberActorRotation_Params params {};
		params.NewRotation = NewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_WallJumpAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Velocity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::Climber_WallJumpAfterDelay(double Delay, const struct FVector& Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber_WallJumpAfterDelay");
		
		ADino_Character_BP_Climber_C_Climber_WallJumpAfterDelay_Params params {};
		params.Delay = Delay;
		params.Velocity = Velocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_ClimberPlayLandAnim
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               forceSuccess                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::Multi_ClimberPlayLandAnim(bool forceSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_ClimberPlayLandAnim");
		
		ADino_Character_BP_Climber_C_Multi_ClimberPlayLandAnim_Params params {};
		params.forceSuccess = forceSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Client_Jump
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               forceSuccess                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::Client_Jump(bool forceSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Client_Jump");
		
		ADino_Character_BP_Climber_C_Client_Jump_Params params {};
		params.forceSuccess = forceSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_DrawDebug_Sphere
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Center                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Segments                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::Multi_DrawDebug_Sphere(const struct FVector& Center, double Radius, int32_t Segments, const struct FLinearColor& Color, double Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_DrawDebug_Sphere");
		
		ADino_Character_BP_Climber_C_Multi_DrawDebug_Sphere_Params params {};
		params.Center = Center;
		params.Radius = Radius;
		params.Segments = Segments;
		params.Color = Color;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_DrawDebug_Box
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Center                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Extent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::Multi_DrawDebug_Box(const struct FVector& Center, const struct FVector& Extent, const struct FLinearColor& Color, const struct FRotator& Rotation, double Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_DrawDebug_Box");
		
		ADino_Character_BP_Climber_C_Multi_DrawDebug_Box_Params params {};
		params.Center = Center;
		params.Extent = Extent;
		params.Color = Color;
		params.Rotation = Rotation;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber AI Restart Seeking After Delay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_Climber_C::ClimberAIRestartSeekingAfterDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Climber AI Restart Seeking After Delay");
		
		ADino_Character_BP_Climber_C_ClimberAIRestartSeekingAfterDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_SoftSetClimberActorRotation
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    NewRotation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADino_Character_BP_Climber_C::Multi_SoftSetClimberActorRotation(const struct FRotator& NewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Multi_SoftSetClimberActorRotation");
		
		ADino_Character_BP_Climber_C_Multi_SoftSetClimberActorRotation_Params params {};
		params.NewRotation = NewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_SetIsClimberJumping
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Newval                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::Server_SetIsClimberJumping(bool Newval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Server_SetIsClimberJumping");
		
		ADino_Character_BP_Climber_C_Server_SetIsClimberJumping_Params params {};
		params.Newval = Newval;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Client_SetActorLocAndRot
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NewLoc                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    NewRot                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSoftSet                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::Client_SetActorLocAndRot(const struct FVector& NewLoc, const struct FRotator& NewRot, bool bSoftSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.Client_SetActorLocAndRot");
		
		ADino_Character_BP_Climber_C_Client_SetActorLocAndRot_Params params {};
		params.NewLoc = NewLoc;
		params.NewRot = NewRot;
		params.bSoftSet = bSoftSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ExecuteUbergraph_Dino_Character_BP_Climber
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_Climber_C::ExecuteUbergraph_Dino_Character_BP_Climber(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Climber.Dino_Character_BP_Climber_C.ExecuteUbergraph_Dino_Character_BP_Climber");
		
		ADino_Character_BP_Climber_C_ExecuteUbergraph_Dino_Character_BP_Climber_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADino_Character_BP_Climber_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADino_Character_BP_Climber_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Dino_Character_BP_Climber.Dino_Character_BP_Climber_C");
		return ptr;
	}

}


