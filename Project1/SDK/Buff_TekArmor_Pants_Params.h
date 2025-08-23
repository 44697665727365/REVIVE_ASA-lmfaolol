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
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.IsPlayerUsingJetpack
	 */
	struct ABuff_TekArmor_Pants_C_IsPlayerUsingJetpack_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetPlayerIgnoreSpeedModifiers
	 */
	struct ABuff_TekArmor_Pants_C_SetPlayerIgnoreSpeedModifiers_Params
	{
	public:
		bool                                                       newIgnore;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.PlayerHasFistsEquipped
	 */
	struct ABuff_TekArmor_Pants_C_PlayerHasFistsEquipped_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.IsPlayerGrappled
	 */
	struct ABuff_TekArmor_Pants_C_IsPlayerGrappled_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BPCheckPreventInput
	 */
	struct ABuff_TekArmor_Pants_C_BPCheckPreventInput_Params
	{
	public:
		EPrimalCharacterInputType                                  inputType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetPlayerMoveSpeedModifier
	 */
	struct ABuff_TekArmor_Pants_C_GetPlayerMoveSpeedModifier_Params
	{
	public:
		double                                                     Result;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.OnRep_bCanRunOnWater
	 */
	struct ABuff_TekArmor_Pants_C_OnRep_bCanRunOnWater_Params
	{	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetRunningOnWater
	 */
	struct ABuff_TekArmor_Pants_C_SetRunningOnWater_Params
	{
	public:
		bool                                                       IsRunning;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_40OR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.OnRep_CurrentTekRunState
	 */
	struct ABuff_TekArmor_Pants_C_OnRep_CurrentTekRunState_Params
	{	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.AreGlovesEquippedAndActive
	 */
	struct ABuff_TekArmor_Pants_C_AreGlovesEquippedAndActive_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NSM5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABuff_TekArmor_Gloves_C*                             glovesRef;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Get Player Max Tek Run Velocity
	 */
	struct ABuff_TekArmor_Pants_C_GetPlayerMaxTekRunVelocity_Params
	{
	public:
		double                                                     MaxSpeed;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetBuffPostprocessIntensity
	 */
	struct ABuff_TekArmor_Pants_C_GetBuffPostprocessIntensity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VFID[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CanStartTekRun
	 */
	struct ABuff_TekArmor_Pants_C_CanStartTekRun_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.NetSetRunningSpeedModifier
	 */
	struct ABuff_TekArmor_Pants_C_NetSetRunningSpeedModifier_Params
	{
	public:
		double                                                     newModifier;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.RunDamageActor
	 */
	struct ABuff_TekArmor_Pants_C_RunDamageActor_Params
	{
	public:
		class AActor*                                              HitActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       DidRebound;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.NetSetTekRunningState
	 */
	struct ABuff_TekArmor_Pants_C_NetSetTekRunningState_Params
	{
	public:
		E_TekRunningState                                          NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetDustParticlesActive
	 */
	struct ABuff_TekArmor_Pants_C_SetDustParticlesActive_Params
	{
	public:
		bool                                                       newActive;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.UpdateLocalVarsByState
	 */
	struct ABuff_TekArmor_Pants_C_UpdateLocalVarsByState_Params
	{
	public:
		E_TekRunningState                                          NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.LocalSetTekRunningState
	 */
	struct ABuff_TekArmor_Pants_C_LocalSetTekRunningState_Params
	{
	public:
		E_TekRunningState                                          NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BuffTickServer
	 */
	struct ABuff_TekArmor_Pants_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L708[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.InitGloves
	 */
	struct ABuff_TekArmor_Pants_C_InitGloves_Params
	{	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.ForceWalkForward
	 */
	struct ABuff_TekArmor_Pants_C_ForceWalkForward_Params
	{	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.UpdatePlayerControlRotation
	 */
	struct ABuff_TekArmor_Pants_C_UpdatePlayerControlRotation_Params
	{
	public:
		double                                                     DeltaSeconds;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BPDeactivated
	 */
	struct ABuff_TekArmor_Pants_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetPlayerTekRunVelocityRatio
	 */
	struct ABuff_TekArmor_Pants_C_GetPlayerTekRunVelocityRatio_Params
	{
	public:
		double                                                     Ratio;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Get Player MaxRunVelocity
	 */
	struct ABuff_TekArmor_Pants_C_GetPlayerMaxRunVelocity_Params
	{
	public:
		double                                                     MaxSpeed;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.MaintainFullSpeed
	 */
	struct ABuff_TekArmor_Pants_C_MaintainFullSpeed_Params
	{
	public:
		bool                                                       bUsePlayerForward;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EFEU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             OverrideDirection;                                       // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       wasMaintained;                                           // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetPlayerMaxTekRunVelocity_Pure
	 */
	struct ABuff_TekArmor_Pants_C_GetPlayerMaxTekRunVelocity_Pure_Params
	{
	public:
		double                                                     MaxSpeed;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.StoreCurrentVelocityLength
	 */
	struct ABuff_TekArmor_Pants_C_StoreCurrentVelocityLength_Params
	{	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetChargeStartVariables
	 */
	struct ABuff_TekArmor_Pants_C_SetChargeStartVariables_Params
	{	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Get Default Player Run Speed Mult
	 */
	struct ABuff_TekArmor_Pants_C_GetDefaultPlayerRunSpeedMult_Params
	{
	public:
		double                                                     SpeedMult;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Tick Update Tek Run
	 */
	struct ABuff_TekArmor_Pants_C_TickUpdateTekRun_Params
	{
	public:
		double                                                     DeltaSeconds;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.RedirectPlayerVelocity
	 */
	struct ABuff_TekArmor_Pants_C_RedirectPlayerVelocity_Params
	{
	public:
		struct FVector                                             newForward;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.BuffTickClient
	 */
	struct ABuff_TekArmor_Pants_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VOHY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetPreventEquipWeapons
	 */
	struct ABuff_TekArmor_Pants_C_SetPreventEquipWeapons_Params
	{
	public:
		bool                                                       prevent;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CalculateDeflectingImpulse
	 */
	struct ABuff_TekArmor_Pants_C_CalculateDeflectingImpulse_Params
	{
	public:
		class AActor*                                              TargetCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                                     Impulse;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetPlayerRunSpeed
	 */
	struct ABuff_TekArmor_Pants_C_SetPlayerRunSpeed_Params
	{
	public:
		double                                                     NewSpeed;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.ClearHitActors
	 */
	struct ABuff_TekArmor_Pants_C_ClearHitActors_Params
	{	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Trace and Damage ForwardPawns
	 */
	struct ABuff_TekArmor_Pants_C_TraceandDamageForwardPawns_Params
	{	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.GetModifiedForward
	 */
	struct ABuff_TekArmor_Pants_C_GetModifiedForward_Params
	{
	public:
		double                                                     forwardScale;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             AdditionalOffset;                                        // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             newForward;                                              // 0x0020(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Trace And Damage Forward StationaryActors
	 */
	struct ABuff_TekArmor_Pants_C_TraceAndDamageForwardStationaryActors_Params
	{	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CalculateForwardRelativeToSpeed
	 */
	struct ABuff_TekArmor_Pants_C_CalculateForwardRelativeToSpeed_Params
	{
	public:
		double                                                     DeltaSeconds;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.CanUseTekAbility
	 */
	struct ABuff_TekArmor_Pants_C_CanUseTekAbility_Params
	{
	public:
		bool                                                       bNotifyIfOutOfElement;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bResult;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.SetCastedArmorPieceRef
	 */
	struct ABuff_TekArmor_Pants_C_SetCastedArmorPieceRef_Params
	{	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.InpActEvt_AltFire_K2Node_InputActionEvent_2
	 */
	struct ABuff_TekArmor_Pants_C_InpActEvt_AltFire_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.InpActEvt_AltFire_K2Node_InputActionEvent_1
	 */
	struct ABuff_TekArmor_Pants_C_InpActEvt_AltFire_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Server_SetTekRunningState
	 */
	struct ABuff_TekArmor_Pants_C_Server_SetTekRunningState_Params
	{
	public:
		E_TekRunningState                                          newRunState;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Client_SyncRunModifier
	 */
	struct ABuff_TekArmor_Pants_C_Client_SyncRunModifier_Params
	{
	public:
		double                                                     newModifier;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Pants_AltFirePressed
	 */
	struct ABuff_TekArmor_Pants_C_Pants_AltFirePressed_Params
	{	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.Pants_AltFireReleased
	 */
	struct ABuff_TekArmor_Pants_C_Pants_AltFireReleased_Params
	{	};

	/**
	 * Function Buff_TekArmor_Pants.Buff_TekArmor_Pants_C.ExecuteUbergraph_Buff_TekArmor_Pants
	 */
	struct ABuff_TekArmor_Pants_C_ExecuteUbergraph_Buff_TekArmor_Pants_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9WZ4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
