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
	 * Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraDesiredPivotLocation
	 */
	struct APlayerPawnTest_C_BPOverrideCameraDesiredPivotLocation_Params
	{
	public:
		struct FVector                                             CurrentCameraPivotLocation;                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             DesiredCameraPivotLocation;                              // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.GetFXBloodColor
	 */
	struct APlayerPawnTest_C_GetFXBloodColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.DisableFluidInteraction
	 */
	struct APlayerPawnTest_C_DisableFluidInteraction_Params
	{	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.EnableFluidInteraction
	 */
	struct APlayerPawnTest_C_EnableFluidInteraction_Params
	{	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.AssignAssetsFromVoiceCollection
	 */
	struct APlayerPawnTest_C_AssignAssetsFromVoiceCollection_Params
	{	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraDesiredPivotRotation
	 */
	struct APlayerPawnTest_C_BPOverrideCameraDesiredPivotRotation_Params
	{
	public:
		struct FRotator                                            CurrentCameraPivotRotation;                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            DesiredCameraPivotRotation;                              // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3U9X[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraDesiredPivotOffset
	 */
	struct APlayerPawnTest_C_BPOverrideCameraDesiredPivotOffset_Params
	{
	public:
		struct FPrimalCameraParams                                 CameraParams;                                            // 0x0000(0x00D8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FVector                                             DesiredCameraOffset;                                     // 0x00D8(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x00F0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraPivotLocationInterpParams
	 */
	struct APlayerPawnTest_C_BPOverrideCameraPivotLocationInterpParams_Params
	{
	public:
		struct FPrimalCameraParams                                 CameraParams;                                            // 0x0000(0x00D8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FPrimalCameraPivotZInterpOverrides                  PivotZInterpOverrides;                                   // 0x00D8(0x0034)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FPrimalCameraInterpParams                           LastInterpParamsX;                                       // 0x010C(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FPrimalCameraInterpParams                           LastInterpParamsY;                                       // 0x0118(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FPrimalCameraInterpParams                           LastInterpParamsZ;                                       // 0x0124(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FPrimalCameraInterpParams                           OutInterpParamsX;                                        // 0x0130(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FPrimalCameraInterpParams                           OutInterpParamsY;                                        // 0x013C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		struct FPrimalCameraInterpParams                           OutInterpParamsZ;                                        // 0x0148(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0154(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraArmLengthInterpParams
	 */
	struct APlayerPawnTest_C_BPOverrideCameraArmLengthInterpParams_Params
	{
	public:
		struct FPrimalCameraParams                                 CameraParams;                                            // 0x0000(0x00D8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FPrimalCameraInterpParams                           OutInterpParams;                                         // 0x00D8(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x00E4(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.BPOverrideCameraArmLength
	 */
	struct APlayerPawnTest_C_BPOverrideCameraArmLength_Params
	{
	public:
		struct FPrimalCameraParams                                 CameraParams;                                            // 0x0000(0x00D8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      CurrentCameraArmLength;                                  // 0x00D8(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DesiredCameraArmLength;                                  // 0x00DC(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XO0X[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.DontCreateAnyMoreSpawnUIs
	 */
	struct APlayerPawnTest_C_DontCreateAnyMoreSpawnUIs_Params
	{	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.GetShooterHud
	 */
	struct APlayerPawnTest_C_GetShooterHud_Params
	{
	public:
		class AShooterHUD*                                         ShooterHUD;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.SetGeneralizedUnlockedAchievementTags
	 */
	struct APlayerPawnTest_C_SetGeneralizedUnlockedAchievementTags_Params
	{
	public:
		TArray<class FName>                                        GeneralizedUnlockedAchievementTags;                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.HasEquipToHideImplant
	 */
	struct APlayerPawnTest_C_HasEquipToHideImplant_Params
	{
	public:
		bool                                                       ShouldHideImplant;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.BPSetupFirstPersonHandsMesh
	 */
	struct APlayerPawnTest_C_BPSetupFirstPersonHandsMesh_Params
	{	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.SetupMeshes
	 */
	struct APlayerPawnTest_C_SetupMeshes_Params
	{
	public:
		bool                                                       bForce;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_00SW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.BPUnlockedAllExplorerNotes
	 */
	struct APlayerPawnTest_C_BPUnlockedAllExplorerNotes_Params
	{	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.GetTheNumChibiLevelUps
	 */
	struct APlayerPawnTest_C_GetTheNumChibiLevelUps_Params
	{
	public:
		int32_t                                                    OutVal;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.SetNumChibiLevelUps
	 */
	struct APlayerPawnTest_C_SetNumChibiLevelUps_Params
	{
	public:
		int32_t                                                    NewNum;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.BPGetPlayerHexagonCount
	 */
	struct APlayerPawnTest_C_BPGetPlayerHexagonCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.BPSetPlayerHexagonCount
	 */
	struct APlayerPawnTest_C_BPSetPlayerHexagonCount_Params
	{
	public:
		int32_t                                                    NewHexagonCount;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.BPGetShowDebugAnimationComponents
	 */
	struct APlayerPawnTest_C_BPGetShowDebugAnimationComponents_Params
	{
	public:
		TArray<class USkeletalMeshComponent*>                      SkelMeshComponents;                                      // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.BPGetOverrideCameraInterpSpeed
	 */
	struct APlayerPawnTest_C_BPGetOverrideCameraInterpSpeed_Params
	{
	public:
		float                                                      DefaultTPVCameraSpeedInterpolationMultiplier;            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DefaultTPVOffsetInterpSpeed;                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TPVCameraSpeedInterpolationMultiplier;                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TPVOffsetInterpSpeed;                                    // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.ShowHUDNotification
	 */
	struct APlayerPawnTest_C_ShowHUDNotification_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     LifetimeSeconds;                                         // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     DisplayScale;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundCue*                                           SoundToPlay;                                             // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.TrySpawnMound
	 */
	struct APlayerPawnTest_C_TrySpawnMound_Params
	{	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.TrySpawnMoundEx
	 */
	struct APlayerPawnTest_C_TrySpawnMoundEx_Params
	{
	public:
		double                                                     Angle;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Range;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.BPSetFirstPersonMasterPoseComponent
	 */
	struct APlayerPawnTest_C_BPSetFirstPersonMasterPoseComponent_Params
	{
	public:
		class USkeletalMeshComponent*                              firstPersonMasterPosecomponent;                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.DefeatedBoss
	 */
	struct APlayerPawnTest_C_DefeatedBoss_Params
	{
	public:
		class APrimalDinoCharacter*                                BossCharacter;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FName                                                BossTag;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    BossDifficulty;                                          // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZZ0L[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.ServerAscend
	 */
	struct APlayerPawnTest_C_ServerAscend_Params
	{
	public:
		int32_t                                                    DifficultyIndex;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bImmediateAscend;                                        // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSuppressAchievements;                                   // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsCheatAscend;                                          // 0x0006(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MTRY[0x1];                                   // 0x0007(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.PlayerCommand
	 */
	struct APlayerPawnTest_C_PlayerCommand_Params
	{
	public:
		class FString                                              TheCommand;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.UserConstructionScript
	 */
	struct APlayerPawnTest_C_UserConstructionScript_Params
	{	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.ReceiveBeginPlay
	 */
	struct APlayerPawnTest_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.NetClientAscend
	 */
	struct APlayerPawnTest_C_NetClientAscend_Params
	{
	public:
		int32_t                                                    AscendIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bImmediateAscend;                                        // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsCheatAscend;                                          // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.ClientShowHUDNotification
	 */
	struct APlayerPawnTest_C_ClientShowHUDNotification_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     LifetimeSeconds;                                         // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     DisplayScale;                                            // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundCue*                                           SoundToPlay;                                             // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.NetClientPreLoadAcension
	 */
	struct APlayerPawnTest_C_NetClientPreLoadAcension_Params
	{	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.BPSpawnAttackerDamageImpactFX
	 */
	struct APlayerPawnTest_C_BPSpawnAttackerDamageImpactFX_Params
	{
	public:
		class FName                                                SocketName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APrimalCharacter*                                    VictimChar;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.AscensionCheck
	 */
	struct APlayerPawnTest_C_AscensionCheck_Params
	{	};

	/**
	 * Function PlayerPawnTest.PlayerPawnTest_C.ExecuteUbergraph_PlayerPawnTest
	 */
	struct APlayerPawnTest_C_ExecuteUbergraph_PlayerPawnTest_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
