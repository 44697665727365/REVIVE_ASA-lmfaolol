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
	 * Class SP_Interpolators.SPInterpolatorsBPLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USPInterpolatorsBPLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_ResetIIRInterpolatorVector(struct FIIRInterpolatorVector* Interpolator);
		void STATIC_ResetIIRInterpolatorRotator(struct FIIRInterpolatorRotator* Interpolator);
		void STATIC_ResetIIRInterpolatorFloat(struct FIIRInterpolatorFloat* Interpolator);
		void STATIC_ResetDoubleIIRInterpolatorVector(struct FDoubleIIRInterpolatorVector* Interpolator);
		void STATIC_ResetDoubleIIRInterpolatorRotator(struct FDoubleIIRInterpolatorRotator* Interpolator);
		void STATIC_ResetDoubleIIRInterpolatorFloat(struct FDoubleIIRInterpolatorFloat* Interpolator);
		void STATIC_ResetCritDampedSpringInterpolatorVector(struct FCritDampSpringInterpolatorVector* Interpolator);
		void STATIC_ResetCritDampedSpringInterpolatorRotator(struct FCritDampSpringInterpolatorRotator* Interpolator);
		void STATIC_ResetAccelInterpolatorVector(struct FAccelerationInterpolatorVector* Interpolator);
		void STATIC_ResetAccelInterpolatorRotator(struct FAccelerationInterpolatorRotator* Interpolator);
		void STATIC_ResetAccelInterpolatorFloat(struct FAccelerationInterpolatorFloat* Interpolator);
		struct FVector STATIC_EvalIIRInterpolatorVector(struct FIIRInterpolatorVector* Interpolator, const struct FVector& NewGoal, float DeltaTime);
		struct FRotator STATIC_EvalIIRInterpolatorRotator(struct FIIRInterpolatorRotator* Interpolator, const struct FRotator& NewGoal, float DeltaTime);
		float STATIC_EvalIIRInterpolatorFloat(struct FIIRInterpolatorFloat* Interpolator, float NewGoal, float DeltaTime);
		struct FVector STATIC_EvalDoubleIIRInterpolatorVector(struct FDoubleIIRInterpolatorVector* Interpolator, const struct FVector& NewGoal, float DeltaTime);
		struct FRotator STATIC_EvalDoubleIIRInterpolatorRotator(struct FDoubleIIRInterpolatorRotator* Interpolator, const struct FRotator& NewGoal, float DeltaTime);
		float STATIC_EvalDoubleIIRInterpolatorFloat(struct FDoubleIIRInterpolatorFloat* Interpolator, float NewGoal, float DeltaTime);
		struct FVector STATIC_EvalCritDampedSpringInterpolatorVector(struct FCritDampSpringInterpolatorVector* Interpolator, const struct FVector& NewGoal, float DeltaTime);
		struct FRotator STATIC_EvalCritDampedSpringInterpolatorRotator(struct FCritDampSpringInterpolatorRotator* Interpolator, const struct FRotator& NewGoal, float DeltaTime);
		struct FVector STATIC_EvalAccelInterpolatorVector(struct FAccelerationInterpolatorVector* Interpolator, const struct FVector& NewGoal, float DeltaTime);
		struct FRotator STATIC_EvalAccelInterpolatorRotator(struct FAccelerationInterpolatorRotator* Interpolator, const struct FRotator& NewGoal, float DeltaTime);
		float STATIC_EvalAccelInterpolatorFloat(struct FAccelerationInterpolatorFloat* Interpolator, float NewGoal, float DeltaTime);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
