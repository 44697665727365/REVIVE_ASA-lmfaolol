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
	 * BlueprintGeneratedClass PrimalDinoAnimFunctions.PrimalDinoAnimFunctions_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPrimalDinoAnimFunctions_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_UpdateLimbWallAvoidanceVariables(class APrimalDinoCharacter* PrimalDinoCharacter, class UObject* __WorldContext, bool* bInterpolate, bool* bUpdateDinoLimbWallAvoidance);
		void STATIC_InitializeGroundConformVariables(class UObject* WorldContextObject, class UObject* __WorldContext, bool* Interpolate);
		void STATIC_UpdateGroundConformVariables(class APrimalDinoCharacter* PrimalDinoCharacter, bool HasHitTheGroundOnce, class UObject* __WorldContext, bool* IsBeingDragged, bool* IsSwimming, bool* IsFalling, bool* ShouldMarkHasHitGroundonce, bool* Interpolate);
		void STATIC_SelectDeathAnim(class ADino_Character_BP_C* Dino, const struct FVector& ImpactVelocity, class APawn* InstigatingPawn, class AActor* DamageCauser, class UObject* __WorldContext, class UAnimMontage** PlayedAnim);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
