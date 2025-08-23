#pragma once
#include "pch.h"

	namespace CG
	{

		// BlueprintGeneratedClass Dino_Character_BP.Dino_Character_BP_C
		// 0x0110 (0x35B0 - 0x34A0)
		class ADino_Character_BP_C : public APrimalDinoCharacter
		{
		public:
			struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x34A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
			class USphereComponent* StasisComponent;                                   // 0x34A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
			TArray<class UAnimSequence*>                  AlternateDeathAnims;                               // 0x34B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
			char                       ContentData[0x20];                                       // 0x34C0(0x0020)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			double                                        BabySpeedMult_WildBaby;                            // 0x34E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			double                                        BabySpeedMult_NotWildBaby;                         // 0x34E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			double                                        FollowingRunDistance_BabyLong;                     // 0x34F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			double                                        FollowingRunDistance_BabyShort;                    // 0x34F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			double                                        FollowingRunDistance_Adult;                        // 0x3500(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			double                                        AIFollowStoppingDistance_Baby;                     // 0x3508(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			double                                        AIFollowStoppingDistance_Adult;                    // 0x3510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                         AiAccessFails;                                     // 0x3518(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                         Pad_61BF[0x4];                                     // 0x351C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
			double                                        WildBaby_NextRunTime;                              // 0x3520(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			double                                        WildBaby_MinTimeBetweenRuns;                       // 0x3528(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UBlendSpace* WalkingIdleDeathBlendSpace;                        // 0x3530(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
			class UBlendSpace* WalkingMovingDeathBlendSpace;                      // 0x3538(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
			class UBlendSpace* SwimmingDeathBlendSpace;                           // 0x3540(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
			class UBlendSpace* FallingDeathBlendSpace;                            // 0x3548(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
			class UBlendSpace* TorpidDeathBlendSpace;                             // 0x3550(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
			bool                                          GeneratedBlendSpaces;                              // 0x3558(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                         Pad_61C0[0x7];                                     // 0x3559(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
			double                                        PostDestructionFootstepLifespan;                   // 0x3560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                          SupportsConsumablesAutoTransfer;                   // 0x3568(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                         Pad_61C1[0x7];                                     // 0x3569(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
			class UClass* HarnesSaddleItem;                                  // 0x3570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
			double                                        CartBodyPitchOffset;                               // 0x3578(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FText                                   DisableConsumablesTransferText;                    // 0x3580(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
			class FText                                   EnableConsumablesTransferText;                     // 0x3598(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

		public:
			void BlendSpaceGenerated(class UBlendSpace* BlendSpace);
			bool BlueprintOverrideWantsToRun(bool bInputWantsToRun);
			void BP_OnSetDeath();
			void BPBecomeAdult();
			void BPBecomeBaby();
			TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, const TArray<struct FMultiUseEntry>& MultiUseEntries);
			TArray<struct FMultiUseEntry> BPGetRidingMultiUseEntries(class APlayerController* ForPC, const TArray<struct FMultiUseEntry>& MultiUseEntries);
			bool BPHandleRightShoulderButton();
			void BPNotifyClaimed();
			bool BPOverrideCameraArmLength(const struct FPrimalCameraParams& CameraParams, float CurrentCameraArmLength, float& DesiredCameraArmLength);
			bool BPOverrideCameraArmLengthInterpParams(const struct FPrimalCameraParams& CameraParams, struct FPrimalCameraInterpParams& OutInterpParams);
			bool BPOverrideCameraDesiredPivotLocation(const struct FVector& CurrentCameraPivotLocation, struct FVector& DesiredCameraPivotLocation);
			bool BPOverrideCameraDesiredPivotOffset(const struct FPrimalCameraParams& CameraParams, struct FVector& DesiredCameraOffset);
			bool BPOverrideCameraDesiredPivotRotation(const struct FRotator& CurrentCameraPivotRotation, struct FRotator& DesiredCameraPivotRotation);
			bool BPOverrideCameraPivotLocationInterpParams(const struct FPrimalCameraParams& CameraParams, const struct FPrimalCameraPivotZInterpOverrides& PivotZInterpOverrides, const struct FPrimalCameraInterpParams& LastInterpParamsX, const struct FPrimalCameraInterpParams& LastInterpParamsY, const struct FPrimalCameraInterpParams& LastInterpParamsZ, struct FPrimalCameraInterpParams& OutInterpParamsX, struct FPrimalCameraInterpParams& OutInterpParamsY, struct FPrimalCameraInterpParams& OutInterpParamsZ);
			void BPSpawnAttackerDamageImpactFX(class FName SocketName, class APrimalCharacter* VictimChar);
			void BPTriggerStasisEvent();
			bool BPTryMultiUse(class APlayerController* ForPC, int32 UseIndex);
			void EditorBeginPlay();
			void ExecuteUbergraph_Dino_Character_BP(int32 EntryPoint);
			void FearTheManticore(bool ShouldFear);
			void GetDinoContentData(struct FDinoContentData* DinoContentData);
			struct FLinearColor GetFXBloodColor();
			void ReceiveBeginPlay();
			void ReceiveDestroyed();
			void UpdateBabyAndRunValues();
			void UpdateWildBabyNextRunTime();

			void BPControlRigNotify(class FName NotifyName, class FName NotifyCustomTag, const struct FHitResult& WorldSpaceHitResult, const struct FVector& Velocity) const;

		public:
		};

	


	// BlueprintGeneratedClass FireLion_Character_BP.FireLion_Character_BP_C
	// 0x0C30 (0x41E0 - 0x35B0)
	class AFireLion_Character_BP_C final : public ADino_Character_BP_C
	{
	public:
		struct FPointerToUberGraphFrame               UberGraphFrame_FireLion_Character_BP_C;            // 0x35B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
		class UNS_DinoFootprint_BP_C* NS_DinoFootprint_BP;                               // 0x35B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
		class USceneComponent* FrontRightFootSocketForFootsteps;                  // 0x35C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
		class USceneComponent* FrontLeftFootSocketForFootsteps;                   // 0x35C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
		class USceneComponent* BackRightFootSocketForFootsteps;                   // 0x35D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
		class USceneComponent* BackLeftFootSocketForFootsteps;                    // 0x35D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
		class UNiagaraComponent* NS_FireLion_ShoulderTransition;                    // 0x35E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
		class UAudioComponent* FireBoostLoopSFX;                                  // 0x35E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
		class UAudioComponent* FireLoopSFX;                                       // 0x35F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
		class UBP_PrimalWindSourceComponent_Base_C* BP_PrimalWindSourceComponent_Head;                 // 0x35F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
		class UBP_PrimalWindSourceComponent_Base_C* BP_PrimalWindSourceComponent_Tail2;                // 0x3600(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
		class UBP_PrimalWindSourceComponent_Base_C* BP_PrimalWindSourceComponent_Tail1;                // 0x3608(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
		class UBP_PrimalWindSourceComponent_Base_C* BP_PrimalWindSourceComponent_Leg_BR;               // 0x3610(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
		class UBP_PrimalWindSourceComponent_Base_C* BP_PrimalWindSourceComponent_Leg_BL;               // 0x3618(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
		class UBP_PrimalWindSourceComponent_Base_C* BP_PrimalWindSourceComponent_Leg_FR;               // 0x3620(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
		class UBP_PrimalWindSourceComponent_Base_C* BP_PrimalWindSourceComponent_Leg_FL;               // 0x3628(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
		class UBP_PrimalWindSourceComponent_Base_C* BP_PrimalWindSourceComponent_Body;                 // 0x3630(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
		class UNiagaraComponent* FireActiveManeVFX;                                 // 0x3638(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
		class USkeletalMeshComponent* Mesh_Mane;                                         // 0x3640(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
		class UNiagaraComponent* FireDashVFX;                                       // 0x3648(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
		class UNiagaraComponent* FireActiveVFX;                                     // 0x3650(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
		class UDinoCharacterStatusComponent_BP_FireLion_C* DinoCharacterStatusComponent_BP_FireLion;          // 0x3658(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
		float                                         Timeline_ResizeFireLion_Alpha_20CE8BFB44716007CFC7E9A37B50FDF7; // 0x3660(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETimelineDirection                            Timeline_ResizeFireLion__Direction_20CE8BFB44716007CFC7E9A37B50FDF7; // 0x3664(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A737[0x3];                                     // 0x3665(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		class UTimelineComponent* Timeline_ResizeFireLion;                           // 0x3668(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		double                                        SmallLionScale;                                    // 0x3670(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        SmallLionResizeSpeed;                              // 0x3678(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          bDebugFireLion;                                    // 0x3680(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          bFireActive;                                       // 0x3681(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          bFireDashActive;                                   // 0x3682(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
		bool                                          bFireBoostActive;                                  // 0x3683(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          bFireTrailActive;                                  // 0x3684(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          bLavaWalkingActive;                                // 0x3685(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
		bool                                          bIsSmallLion;                                      // 0x3686(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A738[0x1];                                     // 0x3687(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        ReigniteDuration;                                  // 0x3688(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		char                  RiderBuffClass[0x30];                                    // 0x3690(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
		char                  FireInactiveBuffClass[0x30];                             // 0x36C0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
		char                ArmorItemClass[0x30];                                    // 0x36F0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
		double                                        ArmorValue;                                        // 0x3720(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		char           LavaDamageTypes[0x10];                                   // 0x3728(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
		struct FVector2D                              FireVisualsUpdateInterpSpeeds;                     // 0x3738(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          bHasFireDashedDuringFall;                          // 0x3748(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          bIsTransforming;                                   // 0x3749(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          bFireSFXFadingOut;                                 // 0x374A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          bFireBoostSFXFadingOut;                            // 0x374B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          ClientLastCheckedFireBoostActiveForClientActivationVFX; // 0x374C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          bIsLazing;                                         // 0x374D(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A739[0x2];                                     // 0x374E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         FireSourceIndex;                                   // 0x3750(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         LastSwipeAnimIndex;                                // 0x3754(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        LastSecAttackPressedTime;                          // 0x3758(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        LastFireVisualsFireAmount;                         // 0x3760(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        LastFireVisualsOpacity;                            // 0x3768(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        LastFireDashUpdateTime;                            // 0x3770(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        FireEnergy;                                        // 0x3778(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        LastFireEnergyIncreaseTime;                        // 0x3780(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        LastJumpPressedTime;                               // 0x3788(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        LastFireSourceTickTime;                            // 0x3790(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        LastAltFirePressedTime;                            // 0x3798(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        LastSwapShoulderRideTime;                          // 0x37A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        WildAllowRidingStartTime;                          // 0x37A8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        WildRidingStartTime;                               // 0x37B0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        LastWildRidingHealthPercent;                       // 0x37B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        LastFireVisualsBoost;                              // 0x37C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        LastLocalEnemiesToAbsorbTime;                      // 0x37C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        LastLocalCheckEnemiesToAbsorbTime;                 // 0x37D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        LastRequestWaterJumpTime;                          // 0x37D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        LastUpdateWildRidingStatsTime;                     // 0x37E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        LastTamingTickTime;                                // 0x37E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        LastTransformTime;                                 // 0x37F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        LastWildClearRiderTime;                            // 0x37F8(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        LastManualAbsorbTime;                              // 0x3800(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        PendingLandImpactTrace_PredictTime;                // 0x3808(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        PendingLandImpactTrace_MaxDistance;                // 0x3810(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        LastInsideLavaDuringDash;                          // 0x3818(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        LastLavaWalkUpdateTime;                            // 0x3820(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        LastDediLavaWalkingTickTime;                       // 0x3828(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        AllowAnimAfterLazingTime;                          // 0x3830(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                LastFireDashLocation;                              // 0x3838(0x0018)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                LastFireDashDirection;                             // 0x3850(0x0018)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        FireDashSpeed;                                     // 0x3868(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        FireDashDuration;                                  // 0x3870(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        FireDashDurationInLava;                            // 0x3878(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        FireDashRotationRateModifier;                      // 0x3880(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		char                   FireDashExplosionEmitter[0x30];                          // 0x3888(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
		double                                        FireDashExplosionDamageRadius;                     // 0x38B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        FireDashExplosionDamageAmount;                     // 0x38C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32>                                 AttackIndexesThatRequireFireActive;                // 0x38C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
		char OnFireBuffClass[0x30];                                   // 0x38D8(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
		float                                         FireAbsorbRadius;                                  // 0x3908(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A73A[0x4];                                     // 0x390C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		struct FHUDElement                            FireEnergyHUDElement;                              // 0x3910(0x01B0)(Edit, BlueprintVisible, DisableEditOnInstance)
		char                   FireTrailBuffClass[0x30];                                // 0x3AC0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
		double                                        FireTrailMinVelocity;                              // 0x3AF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        FireTrailVelocityMinDotProduct;                    // 0x3AF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                PreviousFireLionVelocity;                          // 0x3B00(0x0018)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UMaterialInstanceDynamic*>       FireLionMIDs;                                      // 0x3B18(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
		double                                        SmallLionSpeedModifier;                            // 0x3B28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        SmallLionDamageReceiveMultiplier;                  // 0x3B30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		char MountedBuffClass[0x30];                                  // 0x3B38(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
		class AShooterCharacter* LastMountedCharacter;                              // 0x3B68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		float                                         FireBoostDamageMultiplier;                         // 0x3B70(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A73B[0x4];                                     // 0x3B74(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        FireMinEnergyForActivation;                        // 0x3B78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        FireBoostGracePeriodToAutoDrain;                   // 0x3B80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        FireBoostAutoDrainPerSecond;                       // 0x3B88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        FireDashPhaseDamageRadius;                         // 0x3B90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        FireDashPhaseDamageAmount;                         // 0x3B98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        MountedFlameEnergyCost;                            // 0x3BA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UNiagaraSystem* FireBreathVFXTemplate;                             // 0x3BA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		class UNiagaraComponent* LastFireBreathVFXComp;                             // 0x3BB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
		double                                        LavaWalkingAutoWalkOnEnterDistanceToSurface;       // 0x3BB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        LavaWalkingSwimmingDistanceToSurface;              // 0x3BC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        JumpOutOfWaterDistanceToSurface;                   // 0x3BC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        LavaWalkingRotationRateModifier;                   // 0x3BD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<double>                                FireSourceRanges;                                  // 0x3BD8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
		TArray<class UTexture2D*>                     FireSourceIcons;                                   // 0x3BE8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
		char                   FireSourceFuelType[0x30];                                // 0x3BF8(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
		double                                        FireBoostContainerActiveDuration;                  // 0x3C28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        FireSourceBaseFoodConsumption;                     // 0x3C30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        FireSourceFoodConsumptionPerSecond;                // 0x3C38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAnimMontage* FireDashOutAnim;                                   // 0x3C40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		class UAnimMontage* FireDashOutFallingAnim;                            // 0x3C48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		class APrimalBuff* LastSpawnedFireTrail;                              // 0x3C50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		struct FBoneModifierRangeArray                SmallLionModifiers;                                // 0x3C58(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance)
		double                                        FireBreathYawClamp;                                // 0x3C88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        FireBreathPitchClamp;                              // 0x3C90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        WildRidingHealthPercent;                           // 0x3C98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         WildRidingReDazeEveryPercent;                      // 0x3CA0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A73C[0x4];                                     // 0x3CA4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        WildRidingWindowDuration;                          // 0x3CA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAnimMontage* WildRidingDazedAnim;                               // 0x3CB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		double                                        WildRidingBaseRidingTime;                          // 0x3CB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        WildRidingClearRiderAfterFireEnergyIncreaseDuration; // 0x3CC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        WildRidingDecreaseEffectivenessAfterEnergyIncreaseDuration; // 0x3CC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        WildRidingDecreaseEffectivenessPerSec;             // 0x3CD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        FireEnergyToAffinityMultiplier;                    // 0x3CD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAnimMontage* TransformAnim;                                     // 0x3CE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                              FireVisualsDashUpdateInterpSpeeds;                 // 0x3CE8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                              FireVisualsBoostUpdateInterpSpeeds;                // 0x3CF8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                              AbsorbHUDBarSize;                                  // 0x3D08(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHUDElement                            WildRidingHUDElement;                              // 0x3D18(0x01B0)(Edit, BlueprintVisible, DisableEditOnInstance)
		double                                        LavaSwimSpeedModifier;                             // 0x3EC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FName>                           MeleeTrailVFXSockets;                              // 0x3ED0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
		class UNiagaraSystem* MeleeMouthTrailVFXTemplate;                        // 0x3EE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		class UNiagaraSystem* MeleeClawTrailVFXTemplate;                         // 0x3EE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		class UParticleSystem* FireActiveHurtVFXTemplate;                         // 0x3EF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		class UParticleSystem* FireInactiveHurtVFXTemplate;                       // 0x3EF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		float                                         ClearTamingAfterDurationOfNoRiding;                // 0x3F00(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                          TransformedWhileFalling;                           // 0x3F04(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A73D[0x3];                                     // 0x3F05(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        TamingActivateFireBoostWarningFlashingSpeed;       // 0x3F08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                           TamingActivateFireBoostWarningFlashingSpeedColor_Max; // 0x3F10(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                           TamingActivateFireBoostWarningFlashingSpeedColor_Max_Blink; // 0x3F20(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FHUDRichTextOverlayData                TameHUDRichTextOverlay;                            // 0x3F30(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance)
		struct FHUDRichTextOverlayData                TameTextOverlay;                                   // 0x3FA0(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance)
		class UNiagaraSystem* FootstepVfx_Burning_LargeLion;                     // 0x4010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		class UNiagaraSystem* FootstepVfx_Burning_KittySmallLion;                // 0x4018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		class UNiagaraSystem* FootstepVfx_Doused_LargeLion;                      // 0x4020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		class UNiagaraSystem* FootstepVfx_Doused_KittySmallLion;                 // 0x4028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		bool                                          EnableFootprintSpawnViaAnimNotify;                 // 0x4030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A73E[0x3];                                     // 0x4031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         Footprint_Size_For_Small_Lion;                     // 0x4034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                         ASACameraXAxisMultWhileJumping;                    // 0x4038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A73F[0x4];                                     // 0x403C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        FireTrailAutoDrainPerSecond;                       // 0x4040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UNiagaraSystem* FireActiveHurtVFXTemplate_Niagara;                 // 0x4048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		class UNiagaraSystem* FireInactiveHurtVFXTemplate_Niagara;               // 0x4050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		class FString                                 UnableToMateString;                                // 0x4058(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
		class FString                                 UnableToTransformGestationString;                  // 0x4068(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
		float                                         WildRideMinInterval;                               // 0x4078(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A740[0x4];                                     // 0x407C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class FString                                 UnableToWildRideString;                            // 0x4080(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
		double                                        AIFireAbsorbBelowHealthPercent;                    // 0x4090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         AIFireAbsorbOnMinStacks;                           // 0x4098(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A741[0x4];                                     // 0x409C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		struct FTransform                             WildRidingStartTransform;                          // 0x40A0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        PVETrappedRadius;                                  // 0x4100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32                                         PVETrappedMinDinoReq;                              // 0x4108(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		uint8                                         Pad_A742[0x4];                                     // 0x410C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        FireTrailAbsMaxDistanceWild;                       // 0x4110(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                        FireTrailAbsMaxDistanceTamed;                      // 0x4118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAnimMontage* LazingMontage;                                     // 0x4120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		class UAnimMontage* LazingStartleMontage;                              // 0x4128(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		class UAnimMontage* NonLazingStartleMontage;                           // 0x4130(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		class FString                                 LazeString;                                        // 0x4138(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
		class FString                                 EndLazeString;                                     // 0x4148(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
		class UPrimalUserWidget* HelperWidgetRef;                                   // 0x4158(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UClass* HelperWidgetClass;                                 // 0x4160(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
		char                             PreventAbsorbGainsDinoTags[0x50];                        // 0x4168(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
		TArray<char[0x10]>           FireActiveDisableBuffClasses;                      // 0x41B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
		TArray<class USoundBase*>                     SoundsToIgnoreMultipliers;                         // 0x41C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

	public:
		void AttemptSetLavaWalking(bool Active);
		void AttemptTameOnFireBoost();
		void AttemptTeleportAfterWildRiding();
		void AttemptWaterJump();
		void BindOnPhysicsVolumeChanged();
		float BlueprintAdjustOutputDamage(int32 AttackIndex, float OriginalDamageAmount, class AActor* HitActor, TSubclassOf<class UDamageType>* OutDamageType, float* OutDamageImpulse);
		void BlueprintAnimNotifyCustomEvent(class FName CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const class UAnimNotify* AnimNotifyObject);
		bool BlueprintCanAttack(int32 AttackIndex, float Distance, float Param_AttackRangeOffset, class AActor* OtherTarget);
		bool BlueprintCanRiderAttack(int32 AttackIndex);
		void BlueprintDrawFloatingHUD(class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale);
		float BP_GetCustomModifier_MaxSpeed();
		float BP_GetCustomModifier_RotationRate();
		bool BP_InterceptMoveForward(float AxisValue);
		void BP_OnJumpPressed();
		void BP_OnSetDeath();
		void BP_OnStartCarried(class APrimalDinoCharacter* ADino);
		void BP_OnTamedOrderReceived(class APrimalCharacter* FromCharacter, EDinoTamedOrder OrderType, bool bForce, class AActor* EnemyTarget, bool OrderNotExecuted);
		int32 BPAdjustAttackIndex(int32 AttackIndex);
		float BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo);
		bool BPCanMountOnCharacter(class APrimalCharacter* Character);
		void BPCharacterSleeped();
		void BPClientDoMultiUse(class APlayerController* ForPC, int32 ClientUseIndex);
		bool BPClientHandleNetExecCommand(class FName CommandName, const struct FBPNetExecParams& ExecParams, class APlayerController* ForPC);
		void BPDoAttack(int32 AttackIndex);
		void BPDrawToRiderHUD(class AShooterHUD* HUD);
		struct FLinearColor BPGetCrosshairColor();
		void BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements);
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, const TArray<struct FMultiUseEntry>& MultiUseEntries);
		TArray<struct FMultiUseEntry> BPGetRidingMultiUseEntries(class APlayerController* ForPC, const TArray<struct FMultiUseEntry>& MultiUseEntries);
		bool BPHandleControllerInitiatedAttack(int32 AttackIndex);
		bool BPHandleLaunchMountedDino(class AShooterCharacter* FromCharacter, bool IsFromRidingDino);
		bool BPHandleOnStopTargeting();
		bool BPHandlePoop();
		bool BPHandleRightShoulderButton();
		bool BPIgnoreAttachedSoundMultipliers(class USoundBase* ForSound);
		struct FRotator BPModifyAimOffsetNoTarget(const struct FRotator& Aim);
		struct FVector BPModifyAimOffsetTargetLocation(const struct FVector& AimTargetLocation);
		bool BPModifyDesiredRotation(float DeltaTime, const struct FRotator& InDesiredRotation, struct FRotator* OutDesiredRotation);
		void BPNotifyClearRider(class AShooterCharacter* RiderClearing);
		void BPNotifySetRider(class AShooterCharacter* RiderSetting);
		void BPOnClearMountedDino();
		void BPOnDinoStartled(class UAnimMontage* StartledAnimPlayed, bool bFromAIController);
		void BPOnLethalDamage(float KillingDamage, const struct FDamageEvent& DamageEvent, class AController* Killer, class AActor* DamageCauser, bool* bPreventDeath);
		void BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
		void BPOnRefreshColorization(const TArray<struct FLinearColor>& Colors);
		void BPOnSetMountedDino();
		float BPOverrideAttachedSoundPitchMultiplier();
		float BPOverrideAttachedSoundVolumeMultiplier();
		bool BPOverrideCameraPivotLocationInterpParams(const struct FPrimalCameraParams& CameraParams, const struct FPrimalCameraPivotZInterpOverrides& PivotZInterpOverrides, const struct FPrimalCameraInterpParams& LastInterpParamsX, const struct FPrimalCameraInterpParams& LastInterpParamsY, const struct FPrimalCameraInterpParams& LastInterpParamsZ, struct FPrimalCameraInterpParams& OutInterpParamsX, struct FPrimalCameraInterpParams& OutInterpParamsY, struct FPrimalCameraInterpParams& OutInterpParamsZ);
		int32 BPOverrideGetAttackAnimationIndex(int32 AttackIndex, const TArray<class UAnimMontage*>& AnimationArray);
		bool BPOverrideInventoryAccessInput();
		bool BPPreventClearMountCapsuleResizing();
		bool BPPreventFallDamage(const struct FHitResult& HitResult, float FallDamageAmount);
		bool BPPreventRiding(class AShooterCharacter* ByPawn, bool bDontCheckDistance);
		bool BPServerHandleNetExecCommand(class APlayerController* FromPC, class FName CommandName, const struct FBPNetExecParams& ExecParams);
		void BPSetupTamed(bool bWasJustTamed);
		void BPTimerNonDedicated();
		void BPTimerServer();
		void BPTriggerStasisEvent();
		bool BPTryMultiUse(class APlayerController* ForPC, int32 UseIndex);
		void BPUnstasis();
		bool CanAIManuallyFireAbsorb();
		bool CanFireAbsorb();
		bool CanManualTransform(class AActor* CallingActor, bool* IsGestating);
		bool CanSwapShoulderRide(class AShooterPlayerController* ByPC, bool* IsGestating);
		bool CanUpdateIsLazing();
		bool CanUseFireTrail();
		void CheckFireActiveDeactivateBuffs();
		void ClearDaze();
		void ClearLocalVars();
		void ClientOnActivateFireBoost_InitialTrigger();
		void ClientOnDeactivateFireBoostLoopingFX_LikeWhenDoused();
		void ClientOnDeactivateFireLoopingFX_LikeWhenDoused();
		void ClientOnGrowLargeToSmall();
		void ClientOnGrowSmallToLarge();
		void ClientOnReActivateFireBoostLoopingFX_LikeWhenNoLongerDoused();
		void ClientOnReActivateFireLoopingFX_LikeWhenNoLongerDoused();
		void DoFireAbsorb();
		void DoFireDashExplosion(bool Force, bool VisualsOnly, bool AtActorLoc);
		void EnableTimerOnFireDisabledBuff(bool Enable);
		void ExecuteUbergraph_FireLion_Character_BP(int32 EntryPoint);
		void FireBoostTick(double DeltaSeconds);
		void FireDashTick();
		void FireSourceTick();
		void FireTrailTick(double DeltaSeconds);
		bool GetCanFireAbsorbCharacter(class APrimalCharacter* Char, int32* NumStacks);
		void GetCharsToFireAbsorb(TArray<class APrimalCharacter*>* Chars, int32* TotalStacks);
		class UAnimationAsset* GetDeathAnim(float KillingDamage, const struct FVector& ImpactVelocity, class APawn* InstigatingPawn, class AActor* DamageCauser);
		void GetFireDashAttackDirection(struct FVector* Direction);
		bool GetIsInLavaSwimmingState(int32 CheckType);
		void GetIsPhysicsVolumeLava(class APhysicsVolume* PhysicsVolume, bool* IsLava);
		void GetPhysicsVolumeToCheckForRefreshFireActive(class APhysicsVolume** PhysicsVolume);
		void Has_Room_to_Transform(class AActor* ActorToUseLoc, TArray<class AActor*>& ActorsToIgnore, bool* HasRoom);
		void InpActEvt_AltFire_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_AltFire_K2Node_InputActionEvent_5(const struct FKey& Key);
		void InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_0(const struct FKey& Key);
		void InpActEvt_Crouch_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_Poop_K2Node_InputActionEvent_1(const struct FKey& Key);
		bool IsWildFireLionInRain();
		void LavaWalkingTick();
		bool LavaWaterPhysicsVolCheck(bool IsForExit, double Distance, const struct FVector& FromLocation, bool DoTraceForUpdate);
		void Multi_EnableTimerOnFireDisabledBuff(bool Enable);
		void Multi_ResizeFireLion(bool Grow, bool PlayAnim);
		void Multi_SetIsLazing(bool IsLazing, bool Startle, bool Instant);
		void Multi_SetWildRidingStatValues(double Health, double Stam);
		void Multi_SwapShoulderRide(class AShooterCharacter* ShooterChar, bool Riding, const struct FVector& LaunchDirection);
		void OnBeginUpdateIsLazing();
		void OnFireLionJumpPressed();
		void OnLanded(const struct FHitResult& Hit);
		void OnPhysicsVolumeChanged(class APhysicsVolume* NewVolume);
		void OnRep_bFireDashActive();
		void OnRep_bIsSmallLion();
		void OnRep_bLavaWalkingActive();
		void OnSecAttackPressed();
		void OnUpdateMountedDinoMeshHiding(bool bShouldBeVisible);
		void ReceiveBeginPlay();
		void ReceiveFireAbsorb(double HealthAmount, double EnergyAmount, class APrimalCharacter* FromCharacter, bool* ShouldAbsorbFireFromTargetVFXPlay);
		void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void ReceiveTick(float DeltaSeconds);
		void RefreshFireActive(class APhysicsVolume* PhysicsVolume);
		void RefreshFireVisuals(bool Instant);
		void RefreshIsFireDashing();
		void RefreshLavaSwimmingVals();
		void RefreshLavaWalking(class APhysicsVolume* PhysicsVolume);
		void RefreshMovementVars();
		void ResetIgnoreWater();
		void ResizeFireLion(bool Grow, bool PlayAnim);
		void RidingTick(float DeltaSeconds);
		void RightBeforeSpawningFootprint();
		void Server_AttemptSetLavaWalking(bool Active);
		void Server_AttemptWaterJump();
		void Server_SetFireDashDirection(const struct FVector& Direction);
		void Server_SwapShoulderRide(const struct FVector& LaunchDirection, class AShooterCharacter* ShooterChar);
		void SetFireActive(bool Active);
		void SetFireBoostActive(bool Active);
		void SetFireDashActive(bool Set);
		void SetFireTrailActive(bool Active);
		void SetIsSmallLion(bool IsSmall);
		void SetLavaWalking(bool Active);
		void SetWildRidingStatValues(double Health, double Stam);
		bool SharedCanAttack(int32 Param_Index);
		void SpawnFireBreathVFX();
		void SpawnMeleeTrailVFX(int32 Param_Index);
		void SwapShoulderRide(const struct FVector& LaunchDirection, class AShooterCharacter* ShooterChar);
		void TamingTick();
		void TimedEnableIK();
		void TimedFireActive();
		void Timeline_ResizeFireLion__FinishedFunc();
		void Timeline_ResizeFireLion__UpdateFunc();
		void UpdateAffinityFromFireEnergy(double Amount);
		void UpdateAllowMating();
		void UpdateFireDisabledBuff(bool Add);
		void UpdateFireEnergy(double Amount);
		void UpdateFireLionAI();
		void UpdateHUDHelper(class AShooterCharacter* ShooterChar, bool Remove);
		void UpdateIsLazing(bool Startle, bool Instant);
		void UpdateLaunchVelocityVals(bool ForSwap);
		void UpdateMountedBuff(bool Add, class AShooterCharacter* MountedChar);
		void UpdateNaturalArmor();
		void UpdateRiderBuff(bool Add, class AShooterCharacter* Param_Rider);
		void UpdateSmallLionBoneModifiers();
		void UpdateTamingVars(class AShooterPlayerController* PC, bool Clear);
		void UpdateWildRidingStats();

		bool AllowPlayMontage(class UAnimMontage* AnimMontage);
		struct FVector BPOverrideFloatingHUDLocation();
		void GetAttackAnim(int32_t AttackIndex, int32 AnimIndex, class UAnimMontage** Anim);

	public:
		static class UClass* StaticClass();
	};
}

