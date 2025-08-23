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
	 * BlueprintGeneratedClass ASACameraFunctionLibrary.ASACameraFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UASACameraFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_FinalOverridePivotLocation(class APrimalCharacter* CameraOwnerCharacter, const struct FVector& CurrentPivotLocation, struct FVector* DesiredPivotLocation, class UObject* __WorldContext);
		void STATIC_ShouldApplyAnyPitchBasedModifier(class APrimalCharacter* CameraOwnerCharacter, class UObject* __WorldContext, bool* bShouldApplyAnyModifier);
		void STATIC_ApplyPitchBasedModifierToArmLengthInterp(class APrimalCharacter* CameraOwnerCharacter, struct FPrimalCameraParams* CameraParams, struct FPrimalCameraInterpParams* ArmLengthInterpParams, TArray<struct FPrimalCameraPitchBasedModifier>* PitchBasedModifiers, class UObject* __WorldContext);
		void STATIC_DebugPitchBasedModifier(class APrimalCharacter* CameraOwnerCharacter, struct FPrimalCameraPitchBasedModifier* PitchBasedModifier, int32_t entryIndex, double ModifierAlpha, class UObject* __WorldContext);
		void STATIC_FinalOverridePivotOffset(class APrimalCharacter* CameraOwnerCharacter, struct FPrimalCameraParams* CameraParams, TArray<struct FPrimalCameraPitchBasedModifier>* PitchBasedModifiers, struct FVector* DesiredPivotOffset, class UObject* __WorldContext);
		void STATIC_ApplyPitchBasedModifierToPivotOffset(class APrimalCharacter* CameraOwnerCharacter, struct FPrimalCameraParams* CameraParams, TArray<struct FPrimalCameraPitchBasedModifier>* PitchBasedModifiers, struct FVector* DesiredPivotOffset, class UObject* __WorldContext);
		void STATIC_ApplyPitchBasedModifierToArmLength(class APrimalCharacter* CameraOwnerCharacter, struct FPrimalCameraParams* CameraParams, TArray<struct FPrimalCameraPitchBasedModifier>* PitchBasedModifiers, double CurrentArmLength, double* DesiredArmLength, class UObject* __WorldContext);
		void STATIC_ShouldApplyPitchBasedModifier(class APrimalCharacter* CameraOwnerCharacter, struct FPrimalCameraPitchBasedModifier* PitchBasedModifier, class UObject* __WorldContext, bool* bShouldApplyModifier, bool* bShouldLerp, double* LerpAlpha);
		void STATIC_ApplyPitchBasedModifierToInterpParams(class APrimalCharacter* CameraOwnerCharacter, struct FPrimalCameraParams* CameraParams, struct FPrimalCameraInterpParams* InterpParamsX, struct FPrimalCameraInterpParams* InterpParamsY, struct FPrimalCameraInterpParams* InterpParamsZ, TArray<struct FPrimalCameraPitchBasedModifier>* PitchBasedModifiers, class UObject* __WorldContext);
		void STATIC_FinalOverrideCameraArmLengthInterpParams(class APrimalCharacter* CameraOwnerCharacter, struct FPrimalCameraParams* CameraParams, struct FPrimalCameraInterpParams* OutInterpParams, class UObject* __WorldContext);
		void STATIC_FinalOverrideCameraArmLength(class APrimalCharacter* CharacterToKeepOnScreen, struct FPrimalCameraParams* CameraParams, class APrimalCharacter* CameraOwnerCharacter, double CurrentCameraArmLength, double* DesiredCameraArmLength, class UObject* __WorldContext);
		void STATIC_FinalOverridePivotInterpParams(class APrimalCharacter* CameraOwnerCharacter, struct FPrimalCameraParams* CameraParams, struct FPrimalCameraPivotZInterpOverrides* PivotZInterpOverrides, const struct FPrimalCameraInterpParams& LastPivotInterpParamsX, const struct FPrimalCameraInterpParams& LastPivotInterpParamsY, const struct FPrimalCameraInterpParams& LastPivotInterpParamsZ, struct FPrimalCameraInterpParams* PivotInterpParamsX, struct FPrimalCameraInterpParams* PivotInterpParamsY, struct FPrimalCameraInterpParams* PivotInterpParamsZ, class UObject* __WorldContext);
		void STATIC_ApplyModifiersToInterpParams(class APrimalCharacter* CameraOwnerCharacter, struct FPrimalCameraParams* CameraParams, struct FPrimalCameraInterpParams* InterpParams, TArray<struct FPrimalCameraInterpScreenAreaModifier>* InterpParamsModifiers, const class FName& DebugScreenModifierId, class UObject* __WorldContext);
		void STATIC_WorldLocationToScreenArea(class APrimalCharacter* CameraOwnerCharacter, const struct FVector& WorldLocationToProject, class UObject* __WorldContext, double* ScreenAreaX, double* ScreenAreaY, double* ViewportSizeX, double* ViewportSizeY, double* ScreenRawPosX, double* ScreenRawPosY);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
