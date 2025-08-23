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
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ToString
	 */
	struct ADino_Character_BP_Ramming_C_ToString_Params
	{
	public:
		class FString                                              CallerName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              DebugText;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.BPNotifyClearRider
	 */
	struct ADino_Character_BP_Ramming_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.GetStructureDamageScaled
	 */
	struct ADino_Character_BP_Ramming_C_GetStructureDamageScaled_Params
	{
	public:
		double                                                     CurrentValue;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     MinValue;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     MaxValue;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     VelocityAlpha;                                           // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ScaledDamage;                                            // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.GetRammingSpeedMax
	 */
	struct ADino_Character_BP_Ramming_C_GetRammingSpeedMax_Params
	{
	public:
		double                                                     MaxSpeed;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.CanTickStartedRam
	 */
	struct ADino_Character_BP_Ramming_C_CanTickStartedRam_Params
	{
	public:
		bool                                                       Tick;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.DrainStatusValue
	 */
	struct ADino_Character_BP_Ramming_C_DrainStatusValue_Params
	{
	public:
		EPrimalCharacterStatusValue                                Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QG2U[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     Amount;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasRemainingValue;                                       // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WEV1[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.DoRamImpact
	 */
	struct ADino_Character_BP_Ramming_C_DoRamImpact_Params
	{
	public:
		bool                                                       HitSomething;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5VFS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.CanStartRamAttack
	 */
	struct ADino_Character_BP_Ramming_C_CanStartRamAttack_Params
	{
	public:
		bool                                                       AllowedToRam;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Calculate Ram Duration
	 */
	struct ADino_Character_BP_Ramming_C_CalculateRamDuration_Params
	{
	public:
		double                                                     HoldTime;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Duration;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ReceiveTick
	 */
	struct ADino_Character_BP_Ramming_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Handle Ram Ended
	 */
	struct ADino_Character_BP_Ramming_C_HandleRamEnded_Params
	{
	public:
		bool                                                       HitSomething;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Handle Ram Started
	 */
	struct ADino_Character_BP_Ramming_C_HandleRamStarted_Params
	{
	public:
		double                                                     RamBuildupTime;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     RamDuration;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.GetRamState
	 */
	struct ADino_Character_BP_Ramming_C_GetRamState_Params
	{
	public:
		bool                                                       InRamBuildup;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JSVY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     RamBuildupTime;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InRamming;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J3KP[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Stop Ram Attack Buildup
	 */
	struct ADino_Character_BP_Ramming_C_StopRamAttackBuildup_Params
	{	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Start Ram Attack Buildup
	 */
	struct ADino_Character_BP_Ramming_C_StartRamAttackBuildup_Params
	{	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.UserConstructionScript
	 */
	struct ADino_Character_BP_Ramming_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ServerStopRamBuildup
	 */
	struct ADino_Character_BP_Ramming_C_ServerStopRamBuildup_Params
	{	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ServerStartRamBuildup
	 */
	struct ADino_Character_BP_Ramming_C_ServerStartRamBuildup_Params
	{	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.OnRamStarted
	 */
	struct ADino_Character_BP_Ramming_C_OnRamStarted_Params
	{
	public:
		double                                                     Duration;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.OnRamEnded
	 */
	struct ADino_Character_BP_Ramming_C_OnRamEnded_Params
	{	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ClientOnRamEnded
	 */
	struct ADino_Character_BP_Ramming_C_ClientOnRamEnded_Params
	{
	public:
		bool                                                       HitSomething;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.OnRamEndedEarly
	 */
	struct ADino_Character_BP_Ramming_C_OnRamEndedEarly_Params
	{
	public:
		bool                                                       HitSomething;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Private__RamEnded
	 */
	struct ADino_Character_BP_Ramming_C_Private__RamEnded_Params
	{
	public:
		bool                                                       HitSomething;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_162_PhysicsVolumeChanged__DelegateSignature
	 */
	struct ADino_Character_BP_Ramming_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_162_PhysicsVolumeChanged__DelegateSignature_Params
	{
	public:
		class APhysicsVolume*                                      NewVolume;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.OnComponentBeginOverlap_Event
	 */
	struct ADino_Character_BP_Ramming_C_OnComponentBeginOverlap_Event_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ISI6[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x00F0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ServerRequestRamEndEarly
	 */
	struct ADino_Character_BP_Ramming_C_ServerRequestRamEndEarly_Params
	{
	public:
		bool                                                       HitSomething;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ServerCancelRamBuildup
	 */
	struct ADino_Character_BP_Ramming_C_ServerCancelRamBuildup_Params
	{	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.CancelRamBuildup
	 */
	struct ADino_Character_BP_Ramming_C_CancelRamBuildup_Params
	{	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.MultiStartRam
	 */
	struct ADino_Character_BP_Ramming_C_MultiStartRam_Params
	{
	public:
		double                                                     BuildUpDuration;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.BPUnstasis
	 */
	struct ADino_Character_BP_Ramming_C_BPUnstasis_Params
	{	};

	/**
	 * Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ExecuteUbergraph_Dino_Character_BP_Ramming
	 */
	struct ADino_Character_BP_Ramming_C_ExecuteUbergraph_Dino_Character_BP_Ramming_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U023[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
