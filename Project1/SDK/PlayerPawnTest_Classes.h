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
	 * BlueprintGeneratedClass PlayerPawnTest.PlayerPawnTest_C
	 * Size -> 0x01B1 (FullSize[0x2AA1] - InheritedSize[0x28F0])
	 */
	class APlayerPawnTest_C : public AShooterCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x28F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              SecondaryImplantTPVSkeletalMesh;                         // 0x28F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              ImplantTPVSkeletalMesh;                                  // 0x2900(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Base_RightFoot_FI;          // 0x2908(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Base_LeftFoot_FI;           // 0x2910(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Base_Torso_FI;              // 0x2918(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Base_RightFoot;             // 0x2920(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Base_LeftFoot;              // 0x2928(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Base_RightArm;              // 0x2930(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Base1_Head;                 // 0x2938(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Base1_LeftArm;              // 0x2940(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Base_Torso;                 // 0x2948(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNS_DinoFootprint_BP_C*                              NS_DinoFootprint_BP;                                     // 0x2950(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Base_HandR_FPV;             // 0x2958(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Base_HandL_FPV;             // 0x2960(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Base_TorsoFPV;              // 0x2968(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SecondaryMesh1P;                                         // 0x2970(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    StasisComponent;                                         // 0x2978(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrimalInventoryComponent*                           PrimalInventory1;                                        // 0x2980(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumAscensions;                                           // 0x2988(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T8T8[0x4];                                   // 0x298C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AscensionMeshesFPV[0x10];                                // 0x2990(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              AscensionMeshesTPV[0x10];                                // 0x29A0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<class UClass*>                                      AlphaAscensionEngrams;                                   // 0x29B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    NumAscensionsAb;                                         // 0x29C0(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CSLT[0x4];                                   // 0x29C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AscensionMeshesTPV_Ab[0x10];                             // 0x29C8(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              AscensionMeshesFPV_Ab[0x10];                             // 0x29D8(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class FName                                                TestAscensionBossNameTag;                                // 0x29E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              AscensionMeshesTPV_Ext[0x10];                            // 0x29F0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              AscensionMeshesFPV_Ext[0x10];                            // 0x2A00(0x0010) UNKNOWN PROPERTY: ArrayProperty
		int32_t                                                    NumAscensionsExt;                                        // 0x2A10(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9QJ1[0x4];                                   // 0x2A14(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CurrentDome;                                             // 0x2A18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FString                                              CurrentCruiseMissileMessage;                             // 0x2A20(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    NumChibiLevelUps;                                        // 0x2A30(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumAscensionsGenesis;                                    // 0x2A34(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumAscensionsGen2;                                       // 0x2A38(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUnlockedAllExplorerNotes;                               // 0x2A3C(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bHasSetupMeshes;                                         // 0x2A3D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HAXN[0x2];                                   // 0x2A3E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            RestrictedLevelsBasedOnUnobtainedGeneralizedAchievementTags; // 0x2A40(0x0010) Edit, BlueprintVisible, Net, DisableEditOnInstance
		TArray<class FName>                                        GeneralizedUnlockedAchievementTags;                      // 0x2A50(0x0010) Edit, BlueprintVisible, Net, Transient, DisableEditOnInstance, SaveGame
		int32_t                                                    NumAscensionsScorched;                                   // 0x2A60(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0NRY[0x4];                                   // 0x2A64(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AscensionSkeletalMeshesTPV[0x10];                        // 0x2A68(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              AscensionSkeletalMeshesTPV_Ext[0x10];                    // 0x2A78(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              AscensionSkeletalMeshesTPV_AB[0x10];                     // 0x2A88(0x0010) UNKNOWN PROPERTY: ArrayProperty
		bool                                                       bIsCheatAscending;                                       // 0x2A98(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SU4S[0x3];                                   // 0x2A99(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LastAscendIndex;                                         // 0x2A9C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bLastAscendWasImmediate;                                 // 0x2AA0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool BPOverrideCameraDesiredPivotLocation(const struct FVector& CurrentCameraPivotLocation, struct FVector* DesiredCameraPivotLocation);
		struct FLinearColor GetFXBloodColor();
		void DisableFluidInteraction();
		void EnableFluidInteraction();
		void AssignAssetsFromVoiceCollection();
		bool BPOverrideCameraDesiredPivotRotation(const struct FRotator& CurrentCameraPivotRotation, struct FRotator* DesiredCameraPivotRotation);
		bool BPOverrideCameraDesiredPivotOffset(const struct FPrimalCameraParams& CameraParams, struct FVector* DesiredCameraOffset);
		bool BPOverrideCameraPivotLocationInterpParams(const struct FPrimalCameraParams& CameraParams, const struct FPrimalCameraPivotZInterpOverrides& PivotZInterpOverrides, const struct FPrimalCameraInterpParams& LastInterpParamsX, const struct FPrimalCameraInterpParams& LastInterpParamsY, const struct FPrimalCameraInterpParams& LastInterpParamsZ, struct FPrimalCameraInterpParams* OutInterpParamsX, struct FPrimalCameraInterpParams* OutInterpParamsY, struct FPrimalCameraInterpParams* OutInterpParamsZ);
		bool BPOverrideCameraArmLengthInterpParams(const struct FPrimalCameraParams& CameraParams, struct FPrimalCameraInterpParams* OutInterpParams);
		bool BPOverrideCameraArmLength(const struct FPrimalCameraParams& CameraParams, float CurrentCameraArmLength, float* DesiredCameraArmLength);
		void DontCreateAnyMoreSpawnUIs();
		void GetShooterHud(class AShooterHUD** ShooterHUD);
		void SetGeneralizedUnlockedAchievementTags(TArray<class FName>* GeneralizedUnlockedAchievementTags);
		void HasEquipToHideImplant(bool* ShouldHideImplant);
		void BPSetupFirstPersonHandsMesh();
		void SetupMeshes(bool bForce);
		void BPUnlockedAllExplorerNotes();
		void GetTheNumChibiLevelUps(int32_t* OutVal);
		void SetNumChibiLevelUps(int32_t NewNum);
		int32_t BPGetPlayerHexagonCount();
		bool BPSetPlayerHexagonCount(int32_t NewHexagonCount);
		void BPGetShowDebugAnimationComponents(TArray<class USkeletalMeshComponent*>* SkelMeshComponents);
		void BPGetOverrideCameraInterpSpeed(float DefaultTPVCameraSpeedInterpolationMultiplier, float DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed);
		void ShowHUDNotification(const class FString& Text, const struct FLinearColor& Color, double LifetimeSeconds, double DisplayScale, class USoundCue* SoundToPlay);
		void TrySpawnMound();
		void TrySpawnMoundEx(double Angle, double Range);
		void BPSetFirstPersonMasterPoseComponent(class USkeletalMeshComponent* firstPersonMasterPosecomponent);
		void DefeatedBoss(class APrimalDinoCharacter* BossCharacter, const class FName& BossTag, int32_t BossDifficulty);
		void ServerAscend(int32_t DifficultyIndex, bool bImmediateAscend, bool bSuppressAchievements, bool bIsCheatAscend);
		class FString PlayerCommand(const class FString& TheCommand);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void NetClientAscend(int32_t AscendIndex, bool bImmediateAscend, bool bIsCheatAscend);
		void ClientShowHUDNotification(const class FString& Text, const struct FLinearColor& Color, double LifetimeSeconds, double DisplayScale, class USoundCue* SoundToPlay);
		void NetClientPreLoadAcension();
		void BPSpawnAttackerDamageImpactFX(const class FName& SocketName, class APrimalCharacter* VictimChar);
		void AscensionCheck();
		void ExecuteUbergraph_PlayerPawnTest(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
