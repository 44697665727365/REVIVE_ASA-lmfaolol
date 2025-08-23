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
	 * Function Stego_Character_BP.Stego_Character_BP_C.IsBionicStego
	 */
	struct AStego_Character_BP_C_IsBionicStego_Params
	{
	public:
		bool                                                       bRet;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Stego_Character_BP.Stego_Character_BP_C.BPCharacterSleeped
	 */
	struct AStego_Character_BP_C_BPCharacterSleeped_Params
	{	};

	/**
	 * Function Stego_Character_BP.Stego_Character_BP_C.BPOverrideMoveToOrder
	 */
	struct AStego_Character_BP_C_BPOverrideMoveToOrder_Params
	{
	public:
		struct FVector                                             MoveToLocation;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AShooterCharacter*                                   OrderingPlayer;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Stego_Character_BP.Stego_Character_BP_C.BPGetCrosshairColor
	 */
	struct AStego_Character_BP_C_BPGetCrosshairColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Stego_Character_BP.Stego_Character_BP_C.BPAdjustImpulseFromDamage
	 */
	struct AStego_Character_BP_C_BPAdjustImpulseFromDamage_Params
	{
	public:
		struct FVector                                             DesiredImpulse;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DamageTaken;                                             // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P2GA[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0020(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class APawn*                                               PawnInstigator;                                          // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0048(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPointDamage;                                          // 0x0050(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6NE8[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0058(0x00F0)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FVector                                             ReturnValue;                                             // 0x0148(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Stego_Character_BP.Stego_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct AStego_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Stego_Character_BP.Stego_Character_BP_C.OnRep_Impaling
	 */
	struct AStego_Character_BP_C_OnRep_Impaling_Params
	{	};

	/**
	 * Function Stego_Character_BP.Stego_Character_BP_C.BPAdjustAttackIndex
	 */
	struct AStego_Character_BP_C_BPAdjustAttackIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Stego_Character_BP.Stego_Character_BP_C.CheckCanImpaleActor
	 */
	struct AStego_Character_BP_C_CheckCanImpaleActor_Params
	{
	public:
		class APrimalCharacter*                                    Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanImpale;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Stego_Character_BP.Stego_Character_BP_C.BPGetDragSocketName
	 */
	struct AStego_Character_BP_C_BPGetDragSocketName_Params
	{
	public:
		class APrimalCharacter*                                    DraggingChar;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Stego_Character_BP.Stego_Character_BP_C.BPGetDragSocketDinoName
	 */
	struct AStego_Character_BP_C_BPGetDragSocketDinoName_Params
	{
	public:
		class APrimalDinoCharacter*                                aGrabbedDino;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Stego_Character_BP.Stego_Character_BP_C.ReceiveTick
	 */
	struct AStego_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PFAG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Stego_Character_BP.Stego_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 */
	struct AStego_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2Z9W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UAnimMontage*>                                AnimationArray;                                          // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Stego_Character_BP.Stego_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct AStego_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Stego_Character_BP.Stego_Character_BP_C.BPHandleUseButtonPress
	 */
	struct AStego_Character_BP_C_BPHandleUseButtonPress_Params
	{
	public:
		class AShooterPlayerController*                            RiderController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Stego_Character_BP.Stego_Character_BP_C.BPNotifyClearRider
	 */
	struct AStego_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Stego_Character_BP.Stego_Character_BP_C.BPNotifySetRider
	 */
	struct AStego_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Stego_Character_BP.Stego_Character_BP_C.BPModifyHarvestingWeightsArray
	 */
	struct AStego_Character_BP_C_BPModifyHarvestingWeightsArray_Params
	{
	public:
		TArray<float>                                              resourceWeightsIn;                                       // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class UPrimalItem*>                                 resourceItems;                                           // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<float>                                              resourceWeightsOut;                                      // 0x0020(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function Stego_Character_BP.Stego_Character_BP_C.BlueprintAdjustOutputDamage
	 */
	struct AStego_Character_BP_C_BlueprintAdjustOutputDamage_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      OriginalDamageAmount;                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              HitActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              OutDamageType;                                           // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		float                                                      OutDamageImpulse;                                        // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Stego_Character_BP.Stego_Character_BP_C.BPAdjustDamage
	 */
	struct AStego_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YOHB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VHE1[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x00F0)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		float                                                      ReturnValue;                                             // 0x0130(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BQJI[0x4];                                   // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Stego_Character_BP.Stego_Character_BP_C.OnRep_BackplateMode
	 */
	struct AStego_Character_BP_C_OnRep_BackplateMode_Params
	{	};

	/**
	 * Function Stego_Character_BP.Stego_Character_BP_C.BPGetHUDElements
	 */
	struct AStego_Character_BP_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function Stego_Character_BP.Stego_Character_BP_C.SetBackplateMode
	 */
	struct AStego_Character_BP_C_SetBackplateMode_Params
	{
	public:
		E_StegoBackplateMode                                       BackplateMode;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Stego_Character_BP.Stego_Character_BP_C.SwitchBackplateMode
	 */
	struct AStego_Character_BP_C_SwitchBackplateMode_Params
	{	};

	/**
	 * Function Stego_Character_BP.Stego_Character_BP_C.BPDoAttack
	 */
	struct AStego_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Stego_Character_BP.Stego_Character_BP_C.Dismount
	 */
	struct AStego_Character_BP_C_Dismount_Params
	{	};

	/**
	 * Function Stego_Character_BP.Stego_Character_BP_C.TryImpaleTarget
	 */
	struct AStego_Character_BP_C_TryImpaleTarget_Params
	{
	public:
		class APrimalCharacter*                                    ImpaledTarget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Stego_Character_BP.Stego_Character_BP_C.ReleaseImpalingTarget
	 */
	struct AStego_Character_BP_C_ReleaseImpalingTarget_Params
	{	};

	/**
	 * Function Stego_Character_BP.Stego_Character_BP_C.HandleStopImpaling
	 */
	struct AStego_Character_BP_C_HandleStopImpaling_Params
	{	};

	/**
	 * Function Stego_Character_BP.Stego_Character_BP_C.SetBleedingVFXLocation
	 */
	struct AStego_Character_BP_C_SetBleedingVFXLocation_Params
	{
	public:
		struct FVector                                             NewLocation;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Stego_Character_BP.Stego_Character_BP_C.ReceiveBeginPlay
	 */
	struct AStego_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Stego_Character_BP.Stego_Character_BP_C.DoImpaleTarget
	 */
	struct AStego_Character_BP_C_DoImpaleTarget_Params
	{
	public:
		class APrimalCharacter*                                    ImpaledTarget;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Stego_Character_BP.Stego_Character_BP_C.PlayPreventDismountVFX
	 */
	struct AStego_Character_BP_C_PlayPreventDismountVFX_Params
	{	};

	/**
	 * Function Stego_Character_BP.Stego_Character_BP_C.ExecuteUbergraph_Stego_Character_BP
	 */
	struct AStego_Character_BP_C_ExecuteUbergraph_Stego_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O4XY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
