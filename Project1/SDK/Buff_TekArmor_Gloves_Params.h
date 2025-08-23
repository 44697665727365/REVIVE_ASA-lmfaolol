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
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.PreventBlockingWithShield
	 */
	struct ABuff_TekArmor_Gloves_C_PreventBlockingWithShield_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.HasShield
	 */
	struct ABuff_TekArmor_Gloves_C_HasShield_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.ShieldActive
	 */
	struct ABuff_TekArmor_Gloves_C_ShieldActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6N7J[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.BPCheckPreventInput
	 */
	struct ABuff_TekArmor_Gloves_C_BPCheckPreventInput_Params
	{
	public:
		EPrimalCharacterInputType                                  inputType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.CanPhysicallyTekPunch
	 */
	struct ABuff_TekArmor_Gloves_C_CanPhysicallyTekPunch_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Should Damage Actor
	 */
	struct ABuff_TekArmor_Gloves_C_ShouldDamageActor_Params
	{
	public:
		class AActor*                                              Victim;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Has Line Of SightToActor
	 */
	struct ABuff_TekArmor_Gloves_C_HasLineOfSightToActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D3N7[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.ArePunchChargeAnimsPlaying
	 */
	struct ABuff_TekArmor_Gloves_C_ArePunchChargeAnimsPlaying_Params
	{
	public:
		bool                                                       cleanUpAnims;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.PlayPunchAnimsByState
	 */
	struct ABuff_TekArmor_Gloves_C_PlayPunchAnimsByState_Params
	{
	public:
		E_TekGlovePunchState                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y9X2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.IsPlayerAboveGround
	 */
	struct ABuff_TekArmor_Gloves_C_IsPlayerAboveGround_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SL3T[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.AreTekPantsEquipped
	 */
	struct ABuff_TekArmor_Gloves_C_AreTekPantsEquipped_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_14WG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABuff_TekArmor_Pants_C*                              tekPantsRef;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.GetBuffPostprocessIntensity
	 */
	struct ABuff_TekArmor_Gloves_C_GetBuffPostprocessIntensity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZQFY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.BPDeactivated
	 */
	struct ABuff_TekArmor_Gloves_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Update Local Vars by State
	 */
	struct ABuff_TekArmor_Gloves_C_UpdateLocalVarsbyState_Params
	{
	public:
		E_TekGlovePunchState                                       NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.GetPlayerCameraLocation
	 */
	struct ABuff_TekArmor_Gloves_C_GetPlayerCameraLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.BPSetupForInstigator
	 */
	struct ABuff_TekArmor_Gloves_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.RocketPunchEnd
	 */
	struct ABuff_TekArmor_Gloves_C_RocketPunchEnd_Params
	{	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.ResetOwningPlayerVariables
	 */
	struct ABuff_TekArmor_Gloves_C_ResetOwningPlayerVariables_Params
	{	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.PreventJump
	 */
	struct ABuff_TekArmor_Gloves_C_PreventJump_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.NetSetTekPunchState
	 */
	struct ABuff_TekArmor_Gloves_C_NetSetTekPunchState_Params
	{
	public:
		E_TekGlovePunchState                                       newPunchState;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.BuffTickServer
	 */
	struct ABuff_TekArmor_Gloves_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Client_SetTekPunchState
	 */
	struct ABuff_TekArmor_Gloves_C_Client_SetTekPunchState_Params
	{
	public:
		E_TekGlovePunchState                                       NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.GetTimeToRocketPunchTarget
	 */
	struct ABuff_TekArmor_Gloves_C_GetTimeToRocketPunchTarget_Params
	{
	public:
		struct FVector                                             TargetLocation;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.CheckForTargetsWhileRocketPunching
	 */
	struct ABuff_TekArmor_Gloves_C_CheckForTargetsWhileRocketPunching_Params
	{
	public:
		bool                                                       punchNow;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Set AudioParams and Play
	 */
	struct ABuff_TekArmor_Gloves_C_SetAudioParamsandPlay_Params
	{
	public:
		class UAudioComponent*                                     Audio;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		double                                                     Volume;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Pitch;                                                   // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PlaySound;                                               // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.OnRep_CurrentPunchState
	 */
	struct ABuff_TekArmor_Gloves_C_OnRep_CurrentPunchState_Params
	{	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.GetRelativeCenterOfMass
	 */
	struct ABuff_TekArmor_Gloves_C_GetRelativeCenterOfMass_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.DrawBuffFloatingHUD
	 */
	struct ABuff_TekArmor_Gloves_C_DrawBuffFloatingHUD_Params
	{
	public:
		int32_t                                                    BuffIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CTSN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterHUD*                                         HUD;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		float                                                      CenterX;                                                 // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CenterY;                                                 // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DrawScale;                                               // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3JTZ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.ScanForRocketFistTargets
	 */
	struct ABuff_TekArmor_Gloves_C_ScanForRocketFistTargets_Params
	{
	public:
		double                                                     Range;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       anyHit;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8NQ8[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x0010(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APrimalCharacter*                                    hitPawn;                                                 // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.AccurateSphereCheck
	 */
	struct ABuff_TekArmor_Gloves_C_AccurateSphereCheck_Params
	{
	public:
		struct FVector                                             EndLocation;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     SphereRadius;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IgnoreFriendlies;                                        // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HitPawnOrStructure;                                      // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Spawn Sound at Fist Location
	 */
	struct ABuff_TekArmor_Gloves_C_SpawnSoundatFistLocation_Params
	{
	public:
		class USoundBase*                                          SoundToSpawn;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                                     VolumeMultiplier;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     PitchMultiplier;                                         // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.BuffTickClient
	 */
	struct ABuff_TekArmor_Gloves_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1QD5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Get Punch Location
	 */
	struct ABuff_TekArmor_Gloves_C_GetPunchLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.RocketPunchStart
	 */
	struct ABuff_TekArmor_Gloves_C_RocketPunchStart_Params
	{	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Punch
	 */
	struct ABuff_TekArmor_Gloves_C_Punch_Params
	{	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.CanUseTekAbility
	 */
	struct ABuff_TekArmor_Gloves_C_CanUseTekAbility_Params
	{
	public:
		bool                                                       bNotifyIfOutOfElement;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bResult;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.SetCastedArmorPieceRef
	 */
	struct ABuff_TekArmor_Gloves_C_SetCastedArmorPieceRef_Params
	{	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.UserConstructionScript
	 */
	struct ABuff_TekArmor_Gloves_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Targeting_K2Node_InputActionEvent_6
	 */
	struct ABuff_TekArmor_Gloves_C_InpActEvt_Targeting_K2Node_InputActionEvent_6_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Targeting_K2Node_InputActionEvent_5
	 */
	struct ABuff_TekArmor_Gloves_C_InpActEvt_Targeting_K2Node_InputActionEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_AltFire_K2Node_InputActionEvent_4
	 */
	struct ABuff_TekArmor_Gloves_C_InpActEvt_AltFire_K2Node_InputActionEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_AltFire_K2Node_InputActionEvent_3
	 */
	struct ABuff_TekArmor_Gloves_C_InpActEvt_AltFire_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Fire_K2Node_InputActionEvent_2
	 */
	struct ABuff_TekArmor_Gloves_C_InpActEvt_Fire_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Fire_K2Node_InputActionEvent_1
	 */
	struct ABuff_TekArmor_Gloves_C_InpActEvt_Fire_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_4
	 */
	struct ABuff_TekArmor_Gloves_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_3
	 */
	struct ABuff_TekArmor_Gloves_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_2
	 */
	struct ABuff_TekArmor_Gloves_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_1
	 */
	struct ABuff_TekArmor_Gloves_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.OnSuperPunch_Pressed
	 */
	struct ABuff_TekArmor_Gloves_C_OnSuperPunch_Pressed_Params
	{	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.OnSuperPunch_Released
	 */
	struct ABuff_TekArmor_Gloves_C_OnSuperPunch_Released_Params
	{	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Server_SetPunchChargeState
	 */
	struct ABuff_TekArmor_Gloves_C_Server_SetPunchChargeState_Params
	{
	public:
		E_TekGlovePunchState                                       newPunchState;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.ResetCanLandAfterDelay
	 */
	struct ABuff_TekArmor_Gloves_C_ResetCanLandAfterDelay_Params
	{	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.UpdateClientHasValidRocketPunchTarget
	 */
	struct ABuff_TekArmor_Gloves_C_UpdateClientHasValidRocketPunchTarget_Params
	{
	public:
		bool                                                       newHasTarget;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7YX8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    newTargetPawn;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.ResetPunchStateAfterDelay
	 */
	struct ABuff_TekArmor_Gloves_C_ResetPunchStateAfterDelay_Params
	{	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Gloves_AltFirePressed
	 */
	struct ABuff_TekArmor_Gloves_C_Gloves_AltFirePressed_Params
	{	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.Gloves_AltFireReleased
	 */
	struct ABuff_TekArmor_Gloves_C_Gloves_AltFireReleased_Params
	{	};

	/**
	 * Function Buff_TekArmor_Gloves.Buff_TekArmor_Gloves_C.ExecuteUbergraph_Buff_TekArmor_Gloves
	 */
	struct ABuff_TekArmor_Gloves_C_ExecuteUbergraph_Buff_TekArmor_Gloves_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AGMG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
