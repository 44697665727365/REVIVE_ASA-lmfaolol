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
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.StopMovementFn
	 */
	struct ATapejara_Character_BP_C_StopMovementFn_Params
	{	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.ShouldTryLatch
	 */
	struct ATapejara_Character_BP_C_ShouldTryLatch_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       LandOnFailureToLatch;                                    // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 */
	struct ATapejara_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BAFW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UAnimMontage*>                                AnimationArray;                                          // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPNotifyClearRider
	 */
	struct ATapejara_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPHandleOnStopTargeting
	 */
	struct ATapejara_Character_BP_C_BPHandleOnStopTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPModifyFOV
	 */
	struct ATapejara_Character_BP_C_BPModifyFOV_Params
	{
	public:
		float                                                      FOVIn;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct ATapejara_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPModifyDesiredRotation
	 */
	struct ATapejara_Character_BP_C_BPModifyDesiredRotation_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H1VI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            InDesiredRotation;                                       // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            OutDesiredRotation;                                      // 0x0020(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPSetupTamed
	 */
	struct ATapejara_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPOnStartJump
	 */
	struct ATapejara_Character_BP_C_BPOnStartJump_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPHandleUseButtonPress
	 */
	struct ATapejara_Character_BP_C_BPHandleUseButtonPress_Params
	{
	public:
		class AShooterPlayerController*                            RiderController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.DisableCameraInterpolation
	 */
	struct ATapejara_Character_BP_C_DisableCameraInterpolation_Params
	{	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.OnRep_LatchingSurfaceNormal
	 */
	struct ATapejara_Character_BP_C_OnRep_LatchingSurfaceNormal_Params
	{	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.UpdateLatchedDinoCamera
	 */
	struct ATapejara_Character_BP_C_UpdateLatchedDinoCamera_Params
	{	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.Controller Follow ActorRotation
	 */
	struct ATapejara_Character_BP_C_ControllerFollowActorRotation_Params
	{
	public:
		double                                                     DeltaSeconds;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.ReferenceLatchingObjects
	 */
	struct ATapejara_Character_BP_C_ReferenceLatchingObjects_Params
	{	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.LineTrace
	 */
	struct ATapejara_Character_BP_C_LineTrace_Params
	{
	public:
		class UMeshComponent*                                      Mesh;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class FName                                                SocketName;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Actor;                                                   // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Offset;                                                  // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       BackwardLatching;                                        // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HitSomthing;                                             // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IVRR[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0038(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Normal;                                                  // 0x0050(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              HitActor;                                                // 0x0068(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.InterruptLatching
	 */
	struct ATapejara_Character_BP_C_InterruptLatching_Params
	{	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.ProcessLatching
	 */
	struct ATapejara_Character_BP_C_ProcessLatching_Params
	{
	public:
		double                                                     DeltaSeconds;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.TryLatch
	 */
	struct ATapejara_Character_BP_C_TryLatch_Params
	{
	public:
		struct FVector                                             Offset;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       BackwardsLatching;                                       // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PHVA[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_4
	 */
	struct ATapejara_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_3
	 */
	struct ATapejara_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_2
	 */
	struct ATapejara_Character_BP_C_InpActEvt_BrakeDino_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_1
	 */
	struct ATapejara_Character_BP_C_InpActEvt_BrakeDino_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.Latch
	 */
	struct ATapejara_Character_BP_C_Latch_Params
	{
	public:
		bool                                                       BackwardsLatching;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       TryLatch;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       LandOnFailureToLatch;                                    // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.ReceiveTick
	 */
	struct ATapejara_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.LatchStartAnimation
	 */
	struct ATapejara_Character_BP_C_LatchStartAnimation_Params
	{	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.UnLatch
	 */
	struct ATapejara_Character_BP_C_UnLatch_Params
	{
	public:
		bool                                                       LatchingInterrupted;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.UnLatchStartAnimation
	 */
	struct ATapejara_Character_BP_C_UnLatchStartAnimation_Params
	{	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct ATapejara_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.MoveToUsingDirection
	 */
	struct ATapejara_Character_BP_C_MoveToUsingDirection_Params
	{
	public:
		double                                                     DeltaTime;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.UnLatchMoveAndRotate
	 */
	struct ATapejara_Character_BP_C_UnLatchMoveAndRotate_Params
	{	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.LatchingStartEvent
	 */
	struct ATapejara_Character_BP_C_LatchingStartEvent_Params
	{	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.LatchingEndEvent
	 */
	struct ATapejara_Character_BP_C_LatchingEndEvent_Params
	{	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.StopMovement
	 */
	struct ATapejara_Character_BP_C_StopMovement_Params
	{
	public:
		double                                                     DeltaSeconds;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.DisableFaceLatchingObjectRotation
	 */
	struct ATapejara_Character_BP_C_DisableFaceLatchingObjectRotation_Params
	{	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181
	 */
	struct ATapejara_Character_BP_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.SetPassengersSurfaceCamera
	 */
	struct ATapejara_Character_BP_C_SetPassengersSurfaceCamera_Params
	{
	public:
		double                                                     Yaw;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Pitch;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Roll;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.LocalFaceLatchingObject
	 */
	struct ATapejara_Character_BP_C_LocalFaceLatchingObject_Params
	{
	public:
		double                                                     DeltaSeconds;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.StartedJump
	 */
	struct ATapejara_Character_BP_C_StartedJump_Params
	{	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.MoveDuringUnlatching
	 */
	struct ATapejara_Character_BP_C_MoveDuringUnlatching_Params
	{	};

	/**
	 * Function Tapejara_Character_BP.Tapejara_Character_BP_C.ExecuteUbergraph_Tapejara_Character_BP
	 */
	struct ATapejara_Character_BP_C_ExecuteUbergraph_Tapejara_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CL4R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
