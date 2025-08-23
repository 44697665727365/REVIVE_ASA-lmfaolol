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
	 * Function Sarco_Character_BP.Sarco_Character_BP_C.BPCanBeBaseForCharacter
	 */
	struct ASarco_Character_BP_C_BPCanBeBaseForCharacter_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Sarco_Character_BP.Sarco_Character_BP_C.BPGetGravityZScale
	 */
	struct ASarco_Character_BP_C_BPGetGravityZScale_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Sarco_Character_BP.Sarco_Character_BP_C.TriggerLungeImpulse
	 */
	struct ASarco_Character_BP_C_TriggerLungeImpulse_Params
	{	};

	/**
	 * Function Sarco_Character_BP.Sarco_Character_BP_C.K2_OnMovementModeChanged
	 */
	struct ASarco_Character_BP_C_K2_OnMovementModeChanged_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMovementMode                                              newMovementMode;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              PrevCustomMode;                                          // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              newCustomMode;                                           // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Sarco_Character_BP.Sarco_Character_BP_C.BPNotifyBumpedPawn
	 */
	struct ASarco_Character_BP_C_BPNotifyBumpedPawn_Params
	{
	public:
		class APrimalCharacter*                                    BumpedPawn;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Sarco_Character_BP.Sarco_Character_BP_C.BPOverrideCharacterNewFallVelocity
	 */
	struct ASarco_Character_BP_C_BPOverrideCharacterNewFallVelocity_Params
	{
	public:
		struct FVector                                             InitialVelocity;                                         // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Gravity;                                                 // 0x0018(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      DeltaTime;                                               // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_06H1[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x0038(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Sarco_Character_BP.Sarco_Character_BP_C.BPGetCrosshairAlpha
	 */
	struct ASarco_Character_BP_C_BPGetCrosshairAlpha_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UF4K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Sarco_Character_BP.Sarco_Character_BP_C.BPAllowCarryCharacter
	 */
	struct ASarco_Character_BP_C_BPAllowCarryCharacter_Params
	{
	public:
		class APrimalCharacter*                                    checkCharacter;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Sarco_Character_BP.Sarco_Character_BP_C.Compute Allow Carry
	 */
	struct ASarco_Character_BP_C_ComputeAllowCarry_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       Allow;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Sarco_Character_BP.Sarco_Character_BP_C.BP_GetCustomModifier_RotationRate
	 */
	struct ASarco_Character_BP_C_BP_GetCustomModifier_RotationRate_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Sarco_Character_BP.Sarco_Character_BP_C.BPAdjustAttackIndex
	 */
	struct ASarco_Character_BP_C_BPAdjustAttackIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Sarco_Character_BP.Sarco_Character_BP_C.ComputeAttackIndex
	 */
	struct ASarco_Character_BP_C_ComputeAttackIndex_Params
	{
	public:
		int32_t                                                    AttackIndexIn;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    AttackIndexOut;                                          // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Sarco_Character_BP.Sarco_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_2
	 */
	struct ASarco_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Sarco_Character_BP.Sarco_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_1
	 */
	struct ASarco_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Sarco_Character_BP.Sarco_Character_BP_C.AnimNotify_TurnForAttack
	 */
	struct ASarco_Character_BP_C_AnimNotify_TurnForAttack_Params
	{	};

	/**
	 * Function Sarco_Character_BP.Sarco_Character_BP_C.RotateAttack
	 */
	struct ASarco_Character_BP_C_RotateAttack_Params
	{	};

	/**
	 * Function Sarco_Character_BP.Sarco_Character_BP_C.AnimNotify_AttackTurnFinished
	 */
	struct ASarco_Character_BP_C_AnimNotify_AttackTurnFinished_Params
	{	};

	/**
	 * Function Sarco_Character_BP.Sarco_Character_BP_C.AnimNotify_Lunge
	 */
	struct ASarco_Character_BP_C_AnimNotify_Lunge_Params
	{	};

	/**
	 * Function Sarco_Character_BP.Sarco_Character_BP_C.RequestLunge
	 */
	struct ASarco_Character_BP_C_RequestLunge_Params
	{
	public:
		class AActor*                                              LungeTarget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                                     Direction;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Sarco_Character_BP.Sarco_Character_BP_C.UpdateCrosshair
	 */
	struct ASarco_Character_BP_C_UpdateCrosshair_Params
	{	};

	/**
	 * Function Sarco_Character_BP.Sarco_Character_BP_C.AnimNotify_Roll
	 */
	struct ASarco_Character_BP_C_AnimNotify_Roll_Params
	{	};

	/**
	 * Function Sarco_Character_BP.Sarco_Character_BP_C.ExecuteUbergraph_Sarco_Character_BP
	 */
	struct ASarco_Character_BP_C_ExecuteUbergraph_Sarco_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
