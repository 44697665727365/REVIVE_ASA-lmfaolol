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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverridePivotLocation
	 */
	struct UASACameraFunctionLibrary_C_FinalOverridePivotLocation_Params
	{
	public:
		class APrimalCharacter*                                    CameraOwnerCharacter;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             CurrentPivotLocation;                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             DesiredPivotLocation;                                    // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ShouldApplyAnyPitchBasedModifier
	 */
	struct UASACameraFunctionLibrary_C_ShouldApplyAnyPitchBasedModifier_Params
	{
	public:
		class APrimalCharacter*                                    CameraOwnerCharacter;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bShouldApplyAnyModifier;                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2ELK[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToArmLengthInterp
	 */
	struct UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToArmLengthInterp_Params
	{
	public:
		class APrimalCharacter*                                    CameraOwnerCharacter;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FPrimalCameraParams                                 CameraParams;                                            // 0x0008(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FPrimalCameraInterpParams                           ArmLengthInterpParams;                                   // 0x00E0(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		unsigned char                                              UnknownData_X0J9[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FPrimalCameraPitchBasedModifier>             PitchBasedModifiers;                                     // 0x00F0(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UObject*                                             __WorldContext;                                          // 0x0100(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.DebugPitchBasedModifier
	 */
	struct UASACameraFunctionLibrary_C_DebugPitchBasedModifier_Params
	{
	public:
		class APrimalCharacter*                                    CameraOwnerCharacter;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FPrimalCameraPitchBasedModifier                     PitchBasedModifier;                                      // 0x0008(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		int32_t                                                    entryIndex;                                              // 0x0098(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A3L6[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     ModifierAlpha;                                           // 0x00A0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x00A8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverridePivotOffset
	 */
	struct UASACameraFunctionLibrary_C_FinalOverridePivotOffset_Params
	{
	public:
		class APrimalCharacter*                                    CameraOwnerCharacter;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FPrimalCameraParams                                 CameraParams;                                            // 0x0008(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FPrimalCameraPitchBasedModifier>             PitchBasedModifiers;                                     // 0x00E0(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FVector                                             DesiredPivotOffset;                                      // 0x00F0(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0108(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToPivotOffset
	 */
	struct UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToPivotOffset_Params
	{
	public:
		class APrimalCharacter*                                    CameraOwnerCharacter;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FPrimalCameraParams                                 CameraParams;                                            // 0x0008(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FPrimalCameraPitchBasedModifier>             PitchBasedModifiers;                                     // 0x00E0(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FVector                                             DesiredPivotOffset;                                      // 0x00F0(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0108(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToArmLength
	 */
	struct UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToArmLength_Params
	{
	public:
		class APrimalCharacter*                                    CameraOwnerCharacter;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FPrimalCameraParams                                 CameraParams;                                            // 0x0008(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FPrimalCameraPitchBasedModifier>             PitchBasedModifiers;                                     // 0x00E0(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		double                                                     CurrentArmLength;                                        // 0x00F0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     DesiredArmLength;                                        // 0x00F8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0100(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ShouldApplyPitchBasedModifier
	 */
	struct UASACameraFunctionLibrary_C_ShouldApplyPitchBasedModifier_Params
	{
	public:
		class APrimalCharacter*                                    CameraOwnerCharacter;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FPrimalCameraPitchBasedModifier                     PitchBasedModifier;                                      // 0x0008(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		class UObject*                                             __WorldContext;                                          // 0x0098(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bShouldApplyModifier;                                    // 0x00A0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bShouldLerp;                                             // 0x00A1(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RMTG[0x6];                                   // 0x00A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     LerpAlpha;                                               // 0x00A8(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToInterpParams
	 */
	struct UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToInterpParams_Params
	{
	public:
		class APrimalCharacter*                                    CameraOwnerCharacter;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FPrimalCameraParams                                 CameraParams;                                            // 0x0008(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FPrimalCameraInterpParams                           InterpParamsX;                                           // 0x00E0(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FPrimalCameraInterpParams                           InterpParamsY;                                           // 0x00EC(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FPrimalCameraInterpParams                           InterpParamsZ;                                           // 0x00F8(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		unsigned char                                              UnknownData_OMJJ[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FPrimalCameraPitchBasedModifier>             PitchBasedModifiers;                                     // 0x0108(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UObject*                                             __WorldContext;                                          // 0x0118(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverrideCameraArmLengthInterpParams
	 */
	struct UASACameraFunctionLibrary_C_FinalOverrideCameraArmLengthInterpParams_Params
	{
	public:
		class APrimalCharacter*                                    CameraOwnerCharacter;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FPrimalCameraParams                                 CameraParams;                                            // 0x0008(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FPrimalCameraInterpParams                           OutInterpParams;                                         // 0x00E0(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		unsigned char                                              UnknownData_1ABS[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x00F0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverrideCameraArmLength
	 */
	struct UASACameraFunctionLibrary_C_FinalOverrideCameraArmLength_Params
	{
	public:
		class APrimalCharacter*                                    CharacterToKeepOnScreen;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FPrimalCameraParams                                 CameraParams;                                            // 0x0008(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class APrimalCharacter*                                    CameraOwnerCharacter;                                    // 0x00E0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                                     CurrentCameraArmLength;                                  // 0x00E8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     DesiredCameraArmLength;                                  // 0x00F0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x00F8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.Final Override Pivot Interp Params
	 */
	struct UASACameraFunctionLibrary_C_FinalOverridePivotInterpParams_Params
	{
	public:
		class APrimalCharacter*                                    CameraOwnerCharacter;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FPrimalCameraParams                                 CameraParams;                                            // 0x0008(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FPrimalCameraPivotZInterpOverrides                  PivotZInterpOverrides;                                   // 0x00E0(0x0034)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FPrimalCameraInterpParams                           LastPivotInterpParamsX;                                  // 0x0114(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPrimalCameraInterpParams                           LastPivotInterpParamsY;                                  // 0x0120(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPrimalCameraInterpParams                           LastPivotInterpParamsZ;                                  // 0x012C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPrimalCameraInterpParams                           PivotInterpParamsX;                                      // 0x0138(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FPrimalCameraInterpParams                           PivotInterpParamsY;                                      // 0x0144(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FPrimalCameraInterpParams                           PivotInterpParamsZ;                                      // 0x0150(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		unsigned char                                              UnknownData_0CQO[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0160(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyModifiersToInterpParams
	 */
	struct UASACameraFunctionLibrary_C_ApplyModifiersToInterpParams_Params
	{
	public:
		class APrimalCharacter*                                    CameraOwnerCharacter;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FPrimalCameraParams                                 CameraParams;                                            // 0x0008(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FPrimalCameraInterpParams                           InterpParams;                                            // 0x00E0(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		unsigned char                                              UnknownData_49RN[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FPrimalCameraInterpScreenAreaModifier>       InterpParamsModifiers;                                   // 0x00F0(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FName                                                DebugScreenModifierId;                                   // 0x0100(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0108(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.WorldLocationToScreenArea
	 */
	struct UASACameraFunctionLibrary_C_WorldLocationToScreenArea_Params
	{
	public:
		class APrimalCharacter*                                    CameraOwnerCharacter;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             WorldLocationToProject;                                  // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                                     ScreenAreaX;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ScreenAreaY;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ViewportSizeX;                                           // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ViewportSizeY;                                           // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ScreenRawPosX;                                           // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ScreenRawPosY;                                           // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
