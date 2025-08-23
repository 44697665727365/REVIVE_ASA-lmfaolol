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
	 * 		RVA    -> 0x021C6670
	 * 		Name   -> Function AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary.PredictGroundMovementStopLocation
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseSeparateBrakingFriction                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BrakingFriction                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              GroundFriction                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BrakingFrictionFactor                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              BrakingDecelerationWalking                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UAnimCharacterMovementLibrary::STATIC_PredictGroundMovementStopLocation(const struct FVector& Velocity, bool bUseSeparateBrakingFriction, float BrakingFriction, float GroundFriction, float BrakingFrictionFactor, float BrakingDecelerationWalking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary.PredictGroundMovementStopLocation");
		
		UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Params params {};
		params.Velocity = Velocity;
		params.bUseSeparateBrakingFriction = bUseSeparateBrakingFriction;
		params.BrakingFriction = BrakingFriction;
		params.GroundFriction = GroundFriction;
		params.BrakingFrictionFactor = BrakingFrictionFactor;
		params.BrakingDecelerationWalking = BrakingDecelerationWalking;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C6220
	 * 		Name   -> Function AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary.PredictGroundMovementPivotLocation
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Acceleration                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Velocity                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              GroundFriction                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector UAnimCharacterMovementLibrary::STATIC_PredictGroundMovementPivotLocation(const struct FVector& Acceleration, const struct FVector& Velocity, float GroundFriction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary.PredictGroundMovementPivotLocation");
		
		UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Params params {};
		params.Acceleration = Acceleration;
		params.Velocity = Velocity;
		params.GroundFriction = GroundFriction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimCharacterMovementLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimCharacterMovementLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C6D70
	 * 		Name   -> Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.SetPlayrateToMatchSpeed
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequencePlayerReference                    SequencePlayer                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              SpeedToMatch                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   PlayRateClamp                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequencePlayerReference UAnimDistanceMatchingLibrary::STATIC_SetPlayrateToMatchSpeed(const struct FSequencePlayerReference& SequencePlayer, float SpeedToMatch, const struct FVector2D& PlayRateClamp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.SetPlayrateToMatchSpeed");
		
		UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed_Params params {};
		params.SequencePlayer = SequencePlayer;
		params.SpeedToMatch = SpeedToMatch;
		params.PlayRateClamp = PlayRateClamp;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C6FF0
	 * 		Name   -> Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.DistanceMatchToTarget
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FSequenceEvaluatorReference                 SequenceEvaluator                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              DistanceToTarget                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        DistanceCurveName                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequenceEvaluatorReference UAnimDistanceMatchingLibrary::STATIC_DistanceMatchToTarget(const struct FSequenceEvaluatorReference& SequenceEvaluator, float DistanceToTarget, const class FName& DistanceCurveName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.DistanceMatchToTarget");
		
		UAnimDistanceMatchingLibrary_DistanceMatchToTarget_Params params {};
		params.SequenceEvaluator = SequenceEvaluator;
		params.DistanceToTarget = DistanceToTarget;
		params.DistanceCurveName = DistanceCurveName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021C7270
	 * 		Name   -> Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.AdvanceTimeByDistanceMatching
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FAnimUpdateContext                          UpdateContext                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FSequenceEvaluatorReference                 SequenceEvaluator                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              DistanceTraveled                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        DistanceCurveName                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   PlayRateClamp                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSequenceEvaluatorReference UAnimDistanceMatchingLibrary::STATIC_AdvanceTimeByDistanceMatching(const struct FAnimUpdateContext& UpdateContext, const struct FSequenceEvaluatorReference& SequenceEvaluator, float DistanceTraveled, const class FName& DistanceCurveName, const struct FVector2D& PlayRateClamp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.AdvanceTimeByDistanceMatching");
		
		UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Params params {};
		params.UpdateContext = UpdateContext;
		params.SequenceEvaluator = SequenceEvaluator;
		params.DistanceTraveled = DistanceTraveled;
		params.DistanceCurveName = DistanceCurveName;
		params.PlayRateClamp = PlayRateClamp;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimDistanceMatchingLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimDistanceMatchingLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary");
		return ptr;
	}

}


