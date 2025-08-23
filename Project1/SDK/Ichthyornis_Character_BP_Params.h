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
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPClientHandleNetExecCommand
	 */
	struct AIchthyornis_Character_BP_C_BPClientHandleNetExecCommand_Params
	{
	public:
		class FName                                                CommandName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class APlayerController*                                   ForPC;                                                   // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3488[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.IsOverweightThreshold_F
	 */
	struct AIchthyornis_Character_BP_C_IsOverweightThreshold_F_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPModifyHarvestingQuantity
	 */
	struct AIchthyornis_Character_BP_C_BPModifyHarvestingQuantity_Params
	{
	public:
		float                                                      originalQuantity;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QYVR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              resourceSelected;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IQJ1[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CheckWeightCondition
	 */
	struct AIchthyornis_Character_BP_C_CheckWeightCondition_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       shouldntAttack;                                          // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPDidClearCarriedCharacter
	 */
	struct AIchthyornis_Character_BP_C_BPDidClearCarriedCharacter_Params
	{
	public:
		class APrimalCharacter*                                    WithPreviousCarriedCharacter;                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.RemoveDragWeightIfNeeded
	 */
	struct AIchthyornis_Character_BP_C_RemoveDragWeightIfNeeded_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CancelAttack
	 */
	struct AIchthyornis_Character_BP_C_CancelAttack_Params
	{
	public:
		bool                                                       goBackToOwner;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.GetTamedOrderFromAggressionState
	 */
	struct AIchthyornis_Character_BP_C_GetTamedOrderFromAggressionState_Params
	{
	public:
		int32_t                                                    aggressionState;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EDinoTamedOrder                                            tamedOrder;                                              // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPOnClearMountedDino
	 */
	struct AIchthyornis_Character_BP_C_BPOnClearMountedDino_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnCancelledAttack
	 */
	struct AIchthyornis_Character_BP_C_OnCancelledAttack_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SetLastPlayerOrder
	 */
	struct AIchthyornis_Character_BP_C_SetLastPlayerOrder_Params
	{
	public:
		class APawn*                                               Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.StartGoBackToOwner
	 */
	struct AIchthyornis_Character_BP_C_StartGoBackToOwner_Params
	{
	public:
		bool                                                       isFailedLaunch;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Disable Landing
	 */
	struct AIchthyornis_Character_BP_C_DisableLanding_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SetAttackStage
	 */
	struct AIchthyornis_Character_BP_C_SetAttackStage_Params
	{
	public:
		int32_t                                                    attackStage;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M8D6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     backToOwnerRadius;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isFailedLaunch;                                          // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.AllowLanding
	 */
	struct AIchthyornis_Character_BP_C_AllowLanding_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Set Aggression State
	 */
	struct AIchthyornis_Character_BP_C_SetAggressionState_Params
	{
	public:
		int32_t                                                    aggressionState;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Finish Attack
	 */
	struct AIchthyornis_Character_BP_C_FinishAttack_Params
	{
	public:
		bool                                                       forceFinish;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.On DeadPrey Actions
	 */
	struct AIchthyornis_Character_BP_C_OnDeadPreyActions_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Going Back to Owner Actions
	 */
	struct AIchthyornis_Character_BP_C_GoingBacktoOwnerActions_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DivingActions
	 */
	struct AIchthyornis_Character_BP_C_DivingActions_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPSetupTamed
	 */
	struct AIchthyornis_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Improve HarvestingComponent for Dragged Character
	 */
	struct AIchthyornis_Character_BP_C_ImproveHarvestingComponentforDraggedCharacter_Params
	{
	public:
		class APrimalCharacter*                                    killedCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPKilledSomethingEvent
	 */
	struct AIchthyornis_Character_BP_C_BPKilledSomethingEvent_Params
	{
	public:
		class APrimalCharacter*                                    killedTarget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SetTargetForLaunchedAttack
	 */
	struct AIchthyornis_Character_BP_C_SetTargetForLaunchedAttack_Params
	{
	public:
		class APrimalCharacter*                                    NewTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DoLaunchAttack
	 */
	struct AIchthyornis_Character_BP_C_DoLaunchAttack_Params
	{
	public:
		class APrimalCharacter*                                    launchedTarget;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPOnTamedProcessOrder
	 */
	struct AIchthyornis_Character_BP_C_BPOnTamedProcessOrder_Params
	{
	public:
		class APrimalCharacter*                                    FromCharacter;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		EDinoTamedOrder                                            OrderType;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bForce;                                                  // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9ZDI[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              enemyTarget;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       orderNotExecuted;                                        // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.GetOwnerCharacter
	 */
	struct AIchthyornis_Character_BP_C_GetOwnerCharacter_Params
	{
	public:
		class APawn*                                               Owner;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Clear FocusAndAggression
	 */
	struct AIchthyornis_Character_BP_C_ClearFocusAndAggression_Params
	{
	public:
		EDinoTamedOrder                                            overrideTamedMode;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       useTameModeOverride;                                     // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Start LaunchAttack
	 */
	struct AIchthyornis_Character_BP_C_StartLaunchAttack_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Clear Launched Throw
	 */
	struct AIchthyornis_Character_BP_C_ClearLaunchedThrow_Params
	{
	public:
		bool                                                       disableLaunchVariable;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPCanAutodrag
	 */
	struct AIchthyornis_Character_BP_C_BPCanAutodrag_Params
	{
	public:
		class APrimalCharacter*                                    characterToDrag;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SpawnWaterEffectsIfNeeded
	 */
	struct AIchthyornis_Character_BP_C_SpawnWaterEffectsIfNeeded_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.UpdateDamageFlag
	 */
	struct AIchthyornis_Character_BP_C_UpdateDamageFlag_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Is Water Dino or Swimming Amphibious
	 */
	struct AIchthyornis_Character_BP_C_IsWaterDinoorSwimmingAmphibious_Params
	{
	public:
		class APrimalCharacter*                                    Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       isWaterOrAmph;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Can StealFromCharacter
	 */
	struct AIchthyornis_Character_BP_C_CanStealFromCharacter_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanUse;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnOwnerReached
	 */
	struct AIchthyornis_Character_BP_C_OnOwnerReached_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.PreDiveDownRotationActions
	 */
	struct AIchthyornis_Character_BP_C_PreDiveDownRotationActions_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.UseEmergencyDiveUp
	 */
	struct AIchthyornis_Character_BP_C_UseEmergencyDiveUp_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanUseBiteAttack
	 */
	struct AIchthyornis_Character_BP_C_CanUseBiteAttack_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanUse;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnLaunched
	 */
	struct AIchthyornis_Character_BP_C_OnLaunched_Params
	{
	public:
		struct FVector                                             LaunchVelocity;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bXYOverride;                                             // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bZOverride;                                              // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JI3V[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPCharacterSleeped
	 */
	struct AIchthyornis_Character_BP_C_BPCharacterSleeped_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.GetDiveDownDelay
	 */
	struct AIchthyornis_Character_BP_C_GetDiveDownDelay_Params
	{
	public:
		double                                                     Delay;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPOnMovementModeChangedNotify
	 */
	struct AIchthyornis_Character_BP_C_BPOnMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnClearCarriedCharacter
	 */
	struct AIchthyornis_Character_BP_C_OnClearCarriedCharacter_Params
	{
	public:
		bool                                                       stopTimerServer;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YZQ2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    PreviousCarriedCharacter;                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Can Use Wild Dive
	 */
	struct AIchthyornis_Character_BP_C_CanUseWildDive_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       canDoAttack;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanUseDiveAttack
	 */
	struct AIchthyornis_Character_BP_C_CanUseDiveAttack_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       canUseAttack;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ApplyChewDamage
	 */
	struct AIchthyornis_Character_BP_C_ApplyChewDamage_Params
	{
	public:
		double                                                     Amount;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SetDivingState
	 */
	struct AIchthyornis_Character_BP_C_SetDivingState_Params
	{
	public:
		int32_t                                                    NewState;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       forceSetState;                                           // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnRep_divingStatus
	 */
	struct AIchthyornis_Character_BP_C_OnRep_divingStatus_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPOnSetMountedDino
	 */
	struct AIchthyornis_Character_BP_C_BPOnSetMountedDino_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.UnequipOrSteal
	 */
	struct AIchthyornis_Character_BP_C_UnequipOrSteal_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       couldSteal;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ChangeHuntingMode
	 */
	struct AIchthyornis_Character_BP_C_ChangeHuntingMode_Params
	{
	public:
		int32_t                                                    NewMode;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       changeToNextMode;                                        // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       onlyUpdateOffsets;                                       // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QO4E[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanUseGrabAttack
	 */
	struct AIchthyornis_Character_BP_C_CanUseGrabAttack_Params
	{
	public:
		class APrimalCharacter*                                    PrimalCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanUse;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Remove Weapon
	 */
	struct AIchthyornis_Character_BP_C_RemoveWeapon_Params
	{
	public:
		class APrimalCharacter*                                    Owner;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Remove Helmet
	 */
	struct AIchthyornis_Character_BP_C_RemoveHelmet_Params
	{
	public:
		class APrimalCharacter*                                    Owner;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanStealItem
	 */
	struct AIchthyornis_Character_BP_C_CanStealItem_Params
	{
	public:
		class UPrimalItem*                                         Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       isFoodItem;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       canSteal;                                                // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DoStealItem
	 */
	struct AIchthyornis_Character_BP_C_DoStealItem_Params
	{
	public:
		class APrimalCharacter*                                    CharacterToStealFrom;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UPrimalItem*                                         itemToSteal;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.TryToStealFoodItem
	 */
	struct AIchthyornis_Character_BP_C_TryToStealFoodItem_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumItems;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       stoleFood;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LUML[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ReceiveAnyDamage
	 */
	struct AIchthyornis_Character_BP_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TIGN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CarryingLivePreyActions
	 */
	struct AIchthyornis_Character_BP_C_CarryingLivePreyActions_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Rotate Z To Point
	 */
	struct AIchthyornis_Character_BP_C_RotateZToPoint_Params
	{
	public:
		struct FVector                                             offsetFromCurrentLocation;                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Time;                                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnCarriedCharacter
	 */
	struct AIchthyornis_Character_BP_C_OnCarriedCharacter_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Start Follow Player
	 */
	struct AIchthyornis_Character_BP_C_StartFollowPlayer_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BlueprintDrawFloatingHUD
	 */
	struct AIchthyornis_Character_BP_C_BlueprintDrawFloatingHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DrawScale;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6RUC[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPGetMultiUseEntries
	 */
	struct AIchthyornis_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ReturnParm, ContainsInstancedReference)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPTryMultiUse
	 */
	struct AIchthyornis_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPCanDragCharacter
	 */
	struct AIchthyornis_Character_BP_C_BPCanDragCharacter_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BlueprintAdjustOutputDamage
	 */
	struct AIchthyornis_Character_BP_C_BlueprintAdjustOutputDamage_Params
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
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPTimerServer
	 */
	struct AIchthyornis_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPDidSetCarriedCharacter
	 */
	struct AIchthyornis_Character_BP_C_BPDidSetCarriedCharacter_Params
	{
	public:
		class APrimalCharacter*                                    WithPreviousCarriedCharacter;                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Calculate Dive Up Impulse
	 */
	struct AIchthyornis_Character_BP_C_CalculateDiveUpImpulse_Params
	{
	public:
		double                                                     immersionDepth;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Impulse;                                                 // 0x0008(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanGrabPawn
	 */
	struct AIchthyornis_Character_BP_C_CanGrabPawn_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       canGrab;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Rotate Z to Target
	 */
	struct AIchthyornis_Character_BP_C_RotateZtoTarget_Params
	{
	public:
		double                                                     Time;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Calculate DiveDown Impulse
	 */
	struct AIchthyornis_Character_BP_C_CalculateDiveDownImpulse_Params
	{
	public:
		struct FVector                                             Impulse;                                                 // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Can UseRegularDive
	 */
	struct AIchthyornis_Character_BP_C_CanUseRegularDive_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       canDoAttack;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPDoAttack
	 */
	struct AIchthyornis_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BlueprintCanAttack
	 */
	struct AIchthyornis_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Distance;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1TRS[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.RotationToTarget__FinishedFunc
	 */
	struct AIchthyornis_Character_BP_C_RotationToTarget__FinishedFunc_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.RotationToTarget__UpdateFunc
	 */
	struct AIchthyornis_Character_BP_C_RotationToTarget__UpdateFunc_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DiveAttack
	 */
	struct AIchthyornis_Character_BP_C_DiveAttack_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.PreDiveDownActions
	 */
	struct AIchthyornis_Character_BP_C_PreDiveDownActions_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.StartDiveUp
	 */
	struct AIchthyornis_Character_BP_C_StartDiveUp_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.FinishDiveDown
	 */
	struct AIchthyornis_Character_BP_C_FinishDiveDown_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.PreDiveUpActions
	 */
	struct AIchthyornis_Character_BP_C_PreDiveUpActions_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.PostDiveUpActions
	 */
	struct AIchthyornis_Character_BP_C_PostDiveUpActions_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SlowlyRotateZTo
	 */
	struct AIchthyornis_Character_BP_C_SlowlyRotateZTo_Params
	{
	public:
		struct FRotator                                            TargetRotation;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		double                                                     Time;                                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            InitialRotation;                                         // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DropCarriedAfterTime
	 */
	struct AIchthyornis_Character_BP_C_DropCarriedAfterTime_Params
	{
	public:
		double                                                     Time;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       dropDragged;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       dropCarried;                                             // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       restoreFollowingVariables;                               // 0x000A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.dropCarried
	 */
	struct AIchthyornis_Character_BP_C_dropCarried_Params
	{
	public:
		bool                                                       dropDragged;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       dropCarried;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       restoreFollowingVariables;                               // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SpawnWaterParticles
	 */
	struct AIchthyornis_Character_BP_C_SpawnWaterParticles_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct AIchthyornis_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DebugTrajectory_Multicast
	 */
	struct AIchthyornis_Character_BP_C_DebugTrajectory_Multicast_Params
	{
	public:
		struct FVector                                             beginning;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             End;                                                     // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DebugTrajectory
	 */
	struct AIchthyornis_Character_BP_C_DebugTrajectory_Params
	{
	public:
		struct FVector                                             beginning;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             End;                                                     // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.FinishDiveUp
	 */
	struct AIchthyornis_Character_BP_C_FinishDiveUp_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CheckForWaterEffects
	 */
	struct AIchthyornis_Character_BP_C_CheckForWaterEffects_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ShowBag_Multicast
	 */
	struct AIchthyornis_Character_BP_C_ShowBag_Multicast_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.HideBag_Multicast
	 */
	struct AIchthyornis_Character_BP_C_HideBag_Multicast_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ShowBag
	 */
	struct AIchthyornis_Character_BP_C_ShowBag_Params
	{
	public:
		bool                                                       isDiving;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.EnablePendingEatAnim
	 */
	struct AIchthyornis_Character_BP_C_EnablePendingEatAnim_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.HarvestPreyAfterDelay
	 */
	struct AIchthyornis_Character_BP_C_HarvestPreyAfterDelay_Params
	{
	public:
		double                                                     Delay;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SpawnVitaminEffects_Multicast
	 */
	struct AIchthyornis_Character_BP_C_SpawnVitaminEffects_Multicast_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DebugTrajectorySphere_Multicast
	 */
	struct AIchthyornis_Character_BP_C_DebugTrajectorySphere_Multicast_Params
	{
	public:
		struct FVector                                             beginning;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             End;                                                     // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Radius;                                                  // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DebugTrajectorySphere
	 */
	struct AIchthyornis_Character_BP_C_DebugTrajectorySphere_Params
	{
	public:
		struct FVector                                             beginning;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             End;                                                     // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Radius;                                                  // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPUnstasis
	 */
	struct AIchthyornis_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ReceiveBeginPlay
	 */
	struct AIchthyornis_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.InitializeLandingVariables
	 */
	struct AIchthyornis_Character_BP_C_InitializeLandingVariables_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Debug_TorporAfterTime
	 */
	struct AIchthyornis_Character_BP_C_Debug_TorporAfterTime_Params
	{
	public:
		double                                                     Delay;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.GoBackToOwnerAfterDelay
	 */
	struct AIchthyornis_Character_BP_C_GoBackToOwnerAfterDelay_Params
	{
	public:
		double                                                     Delay;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isFailedLaunch;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ExecuteUbergraph_Ichthyornis_Character_BP
	 */
	struct AIchthyornis_Character_BP_C_ExecuteUbergraph_Ichthyornis_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
