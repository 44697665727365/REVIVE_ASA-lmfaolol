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
	 * Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.AnimGraph
	 */
	struct UDinoBlueprintBase_Climber_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.IsDinoRunning
	 */
	struct UDinoBlueprintBase_Climber_C_IsDinoRunning_Params
	{
	public:
		class ADino_Character_BP_Climber_C*                        Dino;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       Running;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.GetStrafeBlendspacePlayRate
	 */
	struct UDinoBlueprintBase_Climber_C_GetStrafeBlendspacePlayRate_Params
	{
	public:
		double                                                     ForwardVelocity;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     RightVelocity;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           BlendspaceInputs;                                        // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     BlendspacePlayRate;                                      // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.ShouldPlayClimbRunAnim
	 */
	struct UDinoBlueprintBase_Climber_C_ShouldPlayClimbRunAnim_Params
	{
	public:
		bool                                                       PlayClimbRun;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.Update Climber Anim Vars
	 */
	struct UDinoBlueprintBase_Climber_C_UpdateClimberAnimVars_Params
	{
	public:
		class ADino_Character_BP_Climber_C*                        ClimberRef;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.BlueprintPlayAnimationEvent
	 */
	struct UDinoBlueprintBase_Climber_C_BlueprintPlayAnimationEvent_Params
	{
	public:
		class UAnimMontage*                                        AnimationMontage;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		float                                                      PlayRate;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bPauseOnFinish;                                          // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GQLC[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      StartPosition;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      playedAnimLength;                                        // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_8C5B987B4A7122513F5A34A47C192325
	 */
	struct UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_8C5B987B4A7122513F5A34A47C192325_Params
	{	};

	/**
	 * Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_FAA488EA4F4BDAEA0F1A8680D2676697
	 */
	struct UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_FAA488EA4F4BDAEA0F1A8680D2676697_Params
	{	};

	/**
	 * Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_67004B944555CC61F06B63816277E83F
	 */
	struct UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_67004B944555CC61F06B63816277E83F_Params
	{	};

	/**
	 * Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_0744380E4E6268AA38C21FBBE9A186CA
	 */
	struct UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_0744380E4E6268AA38C21FBBE9A186CA_Params
	{	};

	/**
	 * Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_0B2843E8494A6EF2D6561BB9C70E2EC3
	 */
	struct UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_0B2843E8494A6EF2D6561BB9C70E2EC3_Params
	{	};

	/**
	 * Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_FBBBBE9A41282D51E78556B367FBE509
	 */
	struct UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_FBBBBE9A41282D51E78556B367FBE509_Params
	{	};

	/**
	 * Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_C2EC33CE4D61062BAB880189BBDDB074
	 */
	struct UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_C2EC33CE4D61062BAB880189BBDDB074_Params
	{	};

	/**
	 * Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_6C133063450C1CD5D48E368861B81660
	 */
	struct UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_6C133063450C1CD5D48E368861B81660_Params
	{	};

	/**
	 * Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_E28D877645E0ADF913D7A7890589CF61
	 */
	struct UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_E28D877645E0ADF913D7A7890589CF61_Params
	{	};

	/**
	 * Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_BBB55E5E4132B214C6DD12A83B3A49BD
	 */
	struct UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_BBB55E5E4132B214C6DD12A83B3A49BD_Params
	{	};

	/**
	 * Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_CDCED0374F5C3C1AAA53F8936EA07887
	 */
	struct UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_CDCED0374F5C3C1AAA53F8936EA07887_Params
	{	};

	/**
	 * Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_59DB2E4E4996DD432A713A9B65A537A0
	 */
	struct UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_59DB2E4E4996DD432A713A9B65A537A0_Params
	{	};

	/**
	 * Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_798A2D8C44F00154DACADD8528CC099C
	 */
	struct UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_798A2D8C44F00154DACADD8528CC099C_Params
	{	};

	/**
	 * Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_C840D1ED42426815A30936A480050E30
	 */
	struct UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_C840D1ED42426815A30936A480050E30_Params
	{	};

	/**
	 * Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_73DAF87D416A9F6D1AB68DA85C54E7D2
	 */
	struct UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_73DAF87D416A9F6D1AB68DA85C54E7D2_Params
	{	};

	/**
	 * Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_799DB2814DEA80BA9009C5A1C777C24D
	 */
	struct UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_799DB2814DEA80BA9009C5A1C777C24D_Params
	{	};

	/**
	 * Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_LinkedAnimGraph_4B46153B4A19C46DEFA720BE3B51FD3B
	 */
	struct UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_LinkedAnimGraph_4B46153B4A19C46DEFA720BE3B51FD3B_Params
	{	};

	/**
	 * Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.BlueprintUpdateAnimation
	 */
	struct UDinoBlueprintBase_Climber_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.BlueprintInitializeAnimation
	 */
	struct UDinoBlueprintBase_Climber_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_AA09A6714F13F202F9B95F9F03562F22
	 */
	struct UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_AA09A6714F13F202F9B95F9F03562F22_Params
	{	};

	/**
	 * Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_B6FCAD6C4E767830B35BF9BCA9AFD3E1
	 */
	struct UDinoBlueprintBase_Climber_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_B6FCAD6C4E767830B35BF9BCA9AFD3E1_Params
	{	};

	/**
	 * Function DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C.ExecuteUbergraph_DinoBlueprintBase_Climber
	 */
	struct UDinoBlueprintBase_Climber_C_ExecuteUbergraph_DinoBlueprintBase_Climber_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FM12[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
