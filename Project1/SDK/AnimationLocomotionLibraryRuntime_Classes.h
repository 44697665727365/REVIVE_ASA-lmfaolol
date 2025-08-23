#pragma once

/**
 * Name: Ark_Survival_Ascended
 * Version: 0.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAnimCharacterMovementLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FVector STATIC_PredictGroundMovementStopLocation(const struct FVector& Velocity, bool bUseSeparateBrakingFriction, float BrakingFriction, float GroundFriction, float BrakingFrictionFactor, float BrakingDecelerationWalking);
		struct FVector STATIC_PredictGroundMovementPivotLocation(const struct FVector& Acceleration, const struct FVector& Velocity, float GroundFriction);
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAnimDistanceMatchingLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FSequencePlayerReference STATIC_SetPlayrateToMatchSpeed(const struct FSequencePlayerReference& SequencePlayer, float SpeedToMatch, const struct FVector2D& PlayRateClamp);
		struct FSequenceEvaluatorReference STATIC_DistanceMatchToTarget(const struct FSequenceEvaluatorReference& SequenceEvaluator, float DistanceToTarget, const class FName& DistanceCurveName);
		struct FSequenceEvaluatorReference STATIC_AdvanceTimeByDistanceMatching(const struct FAnimUpdateContext& UpdateContext, const struct FSequenceEvaluatorReference& SequenceEvaluator, float DistanceTraveled, const class FName& DistanceCurveName, const struct FVector2D& PlayRateClamp);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
