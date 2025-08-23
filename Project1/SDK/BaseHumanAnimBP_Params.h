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
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.AnimGraph
	 */
	struct UBaseHumanAnimBP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.Update Character Creator Values
	 */
	struct UBaseHumanAnimBP_C_UpdateCharacterCreatorValues_Params
	{
	public:
		class AShooterCharacter*                                   ShooterCharacter;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.Debug Leaning
	 */
	struct UBaseHumanAnimBP_C_DebugLeaning_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.InterpLayeringValues
	 */
	struct UBaseHumanAnimBP_C_InterpLayeringValues_Params
	{
	public:
		double                                                     DeltaTime;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     InterpSpeed;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.Get IKWorld Interp Speed
	 */
	struct UBaseHumanAnimBP_C_GetIKWorldInterpSpeed_Params
	{
	public:
		double                                                     Out;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.GroundIK
	 */
	struct UBaseHumanAnimBP_C_GroundIK_Params
	{
	public:
		double                                                     DeltaTime;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdatePoseLayering
	 */
	struct UBaseHumanAnimBP_C_UpdatePoseLayering_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.GetLeanAmount
	 */
	struct UBaseHumanAnimBP_C_GetLeanAmount_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G9IA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           Output;                                                  // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.IsPoseLayeringSlotActive
	 */
	struct UBaseHumanAnimBP_C_IsPoseLayeringSlotActive_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateMoveAnim_Layering
	 */
	struct UBaseHumanAnimBP_C_UpdateMoveAnim_Layering_Params
	{
	public:
		struct FAnimUpdateContext                                  Context;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FAnimNodeReference                                  Node;                                                    // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateLayeringValues
	 */
	struct UBaseHumanAnimBP_C_UpdateLayeringValues_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateWeaponIKNonThreadSafe
	 */
	struct UBaseHumanAnimBP_C_UpdateWeaponIKNonThreadSafe_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateWeaponIK
	 */
	struct UBaseHumanAnimBP_C_UpdateWeaponIK_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.GetPredictedStopDistance
	 */
	struct UBaseHumanAnimBP_C_GetPredictedStopDistance_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.ShouldDistanceMatchStop
	 */
	struct UBaseHumanAnimBP_C_ShouldDistanceMatchStop_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateStopAnim
	 */
	struct UBaseHumanAnimBP_C_UpdateStopAnim_Params
	{
	public:
		struct FAnimUpdateContext                                  Context;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FAnimNodeReference                                  Node;                                                    // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.SetUpStopAnim
	 */
	struct UBaseHumanAnimBP_C_SetUpStopAnim_Params
	{
	public:
		struct FAnimUpdateContext                                  Context;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FAnimNodeReference                                  Node;                                                    // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateAccelerationData
	 */
	struct UBaseHumanAnimBP_C_UpdateAccelerationData_Params
	{
	public:
		double                                                     DeltaTime;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateMoveAnim
	 */
	struct UBaseHumanAnimBP_C_UpdateMoveAnim_Params
	{
	public:
		struct FAnimUpdateContext                                  Context;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FAnimNodeReference                                  Node;                                                    // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateVelocityData
	 */
	struct UBaseHumanAnimBP_C_UpdateVelocityData_Params
	{
	public:
		double                                                     DeltaTime;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.BlueprintThreadSafeUpdateAnimation
	 */
	struct UBaseHumanAnimBP_C_BlueprintThreadSafeUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_APN8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.SelectCardinalDirectionFromAngle
	 */
	struct UBaseHumanAnimBP_C_SelectCardinalDirectionFromAngle_Params
	{
	public:
		double                                                     Angle;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     DeadZone;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_CardinalDirection4                                       CurrentDirection;                                        // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       UseCurrentDirection;                                     // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_CardinalDirection4                                       Direction;                                               // 0x0012(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IR45[0x5];                                   // 0x0013(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.GliderSuit_CalcBlendspaceAxes
	 */
	struct UBaseHumanAnimBP_C_GliderSuit_CalcBlendspaceAxes_Params
	{
	public:
		class AShooterCharacter*                                   Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateGliderSuitVars
	 */
	struct UBaseHumanAnimBP_C_UpdateGliderSuitVars_Params
	{
	public:
		class AShooterCharacter*                                   Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.GliderSuit_CalcAimOffsets
	 */
	struct UBaseHumanAnimBP_C_GliderSuit_CalcAimOffsets_Params
	{
	public:
		class AShooterCharacter*                                   Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.MapVelocityToBlendSpace
	 */
	struct UBaseHumanAnimBP_C_MapVelocityToBlendSpace_Params
	{
	public:
		class UMovementComponent*                                  MovementComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Vector;                                                  // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.GetCharSequenceNew
	 */
	struct UBaseHumanAnimBP_C_GetCharSequenceNew_Params
	{
	public:
		class UAnimSequence*                                       AnimSeqIn;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UAnimSequence*                                       AnimSeqOut;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.GetCharMontageNew
	 */
	struct UBaseHumanAnimBP_C_GetCharMontageNew_Params
	{
	public:
		class UAnimMontage*                                        MontageIn;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UAnimMontage*                                        MontageOut;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.BlueprintPlayAnimationEvent
	 */
	struct UBaseHumanAnimBP_C_BlueprintPlayAnimationEvent_Params
	{
	public:
		class UAnimMontage*                                        AnimationMontage;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		float                                                      PlayRate;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bPauseOnFinish;                                          // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IZUO[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      StartPosition;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      playedAnimLength;                                        // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_9938D1BF4EEC4D9043394EA7B8679FB7
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_9938D1BF4EEC4D9043394EA7B8679FB7_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_BB3D89D5450B7DEE6F12A4A61858BED2
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_BB3D89D5450B7DEE6F12A4A61858BED2_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_AA4928244AA38C74645005A09634874E
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_AA4928244AA38C74645005A09634874E_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_6D7A0BED4964804CBA91988BD03B3D60
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_6D7A0BED4964804CBA91988BD03B3D60_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_75B5072D4E1970467933F5BB913B9B4B
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_75B5072D4E1970467933F5BB913B9B4B_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_A5CB0E6442D6561C90B91D99C6500B3B
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_A5CB0E6442D6561C90B91D99C6500B3B_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_BA304BA947DB9B3D679CFD916D88EBCE
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_BA304BA947DB9B3D679CFD916D88EBCE_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_LayeredBoneBlend_615C9DE34EF09BA781FE40A4E94F22CE
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_LayeredBoneBlend_615C9DE34EF09BA781FE40A4E94F22CE_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ModifyBone_29305B4049CD45DD1B835BB8C796C45B
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ModifyBone_29305B4049CD45DD1B835BB8C796C45B_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_5EAF21824F92A3D0D44AA08F511F7013
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_5EAF21824F92A3D0D44AA08F511F7013_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ControlRig_70F814824E1F2517DC3C5C9DBE08009C
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ControlRig_70F814824E1F2517DC3C5C9DBE08009C_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_E50B10714CE2586D6FB68BA8D0EF2121
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_E50B10714CE2586D6FB68BA8D0EF2121_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_F8C7F65041A2DBAE95E451BD53A2B640
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_F8C7F65041A2DBAE95E451BD53A2B640_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TwoWayBlend_F17C7EF747B351756943CF8954E814CA
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TwoWayBlend_F17C7EF747B351756943CF8954E814CA_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TwoWayBlend_02394B554084D0B34B6E7DA7519B758C
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TwoWayBlend_02394B554084D0B34B6E7DA7519B758C_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_E8E34A70472901D5B260E281AE4C4708
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_E8E34A70472901D5B260E281AE4C4708_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_2BAEBBB448F03B994C18C1B5A4C7E914
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_2BAEBBB448F03B994C18C1B5A4C7E914_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_LinkedAnimGraph_7EA4D54440723237DAFC2E8D1560D608
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_LinkedAnimGraph_7EA4D54440723237DAFC2E8D1560D608_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_873E9F10471227AE7DC010A9C3268AAD
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_873E9F10471227AE7DC010A9C3268AAD_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_24D6F0A045D17884EC333A93C92118D3
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_24D6F0A045D17884EC333A93C92118D3_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_626584B448D31E19750278A0D43665CE
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_626584B448D31E19750278A0D43665CE_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_RotationOffsetBlendSpace_F37F6E364733EA96DE10549DB5DA7970
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_RotationOffsetBlendSpace_F37F6E364733EA96DE10549DB5DA7970_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_E6B944074706C39D2C5988B0F2E15851
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_E6B944074706C39D2C5988B0F2E15851_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_7B60D41A4B1D3D8C1B5E7E8163B6F01F
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_7B60D41A4B1D3D8C1B5E7E8163B6F01F_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_FB8A227148C9C2643271CCA82DC4A28B
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_FB8A227148C9C2643271CCA82DC4A28B_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_842E80474F26231326E786B60EFC8268
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_842E80474F26231326E786B60EFC8268_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_LayeredBoneBlend_327B02BD463CD9814901179AFEC05B3B
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_LayeredBoneBlend_327B02BD463CD9814901179AFEC05B3B_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.Update Bot Animation
	 */
	struct UBaseHumanAnimBP_C_UpdateBotAnimation_Params
	{
	public:
		class APawn*                                               PawnOwner;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                                     DeltaTime;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             RootLocationOffset;                                      // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.BlueprintUpdateAnimation
	 */
	struct UBaseHumanAnimBP_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_9DFE83F24F2F7B3151FD95B364D7A094
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_9DFE83F24F2F7B3151FD95B364D7A094_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_63CBC28444204464758893AE9DF5705A
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_63CBC28444204464758893AE9DF5705A_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_AA33CDCC49044C52C2F7048F468ED36C
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_AA33CDCC49044C52C2F7048F468ED36C_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_5EAFE44C41B5D6C1666AA792FC557459
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_5EAFE44C41B5D6C1666AA792FC557459_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_A4199B444E6BF466F8E9EA9573D4293F
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_A4199B444E6BF466F8E9EA9573D4293F_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_45C7CCB04033D1FCA7A7268935C09DCC
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_45C7CCB04033D1FCA7A7268935C09DCC_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_B30C339C4722A19678123C938D56B5F4
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_B30C339C4722A19678123C938D56B5F4_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_A99BF2C74DEF6AA48F2A12809106DFD2
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_A99BF2C74DEF6AA48F2A12809106DFD2_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_AF6FE91045EF076E8F723E94E3EE2C66
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_AF6FE91045EF076E8F723E94E3EE2C66_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_EEBC4A6A463B5DB7CC0554B4237279BA
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_EEBC4A6A463B5DB7CC0554B4237279BA_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_906A4CF645BC965973E3E8941995C726
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_906A4CF645BC965973E3E8941995C726_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_800BD7D244A0F9CDB5377FA5291BFEF5
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_800BD7D244A0F9CDB5377FA5291BFEF5_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.BlueprintInitializeAnimation
	 */
	struct UBaseHumanAnimBP_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_190007EE4755BF9F8603878BA60CBE3D
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_190007EE4755BF9F8603878BA60CBE3D_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_E42788514DF362C1FC3B71915BAA4B08
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_E42788514DF362C1FC3B71915BAA4B08_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.OnCharacterStepped
	 */
	struct UBaseHumanAnimBP_C_OnCharacterStepped_Params
	{
	public:
		struct FVector                                             PrevLocation;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             NewLocation;                                             // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ModifyBone_00E1374640FCA35E735FAAB2A6F5F011
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ModifyBone_00E1374640FCA35E735FAAB2A6F5F011_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ModifyBone_657048094FA510B3E568948D273BF06C
	 */
	struct UBaseHumanAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ModifyBone_657048094FA510B3E568948D273BF06C_Params
	{	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.ExecuteUbergraph_BaseHumanAnimBP
	 */
	struct UBaseHumanAnimBP_C_ExecuteUbergraph_BaseHumanAnimBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseHumanAnimBP.BaseHumanAnimBP_C.NewEventDispatcher__DelegateSignature
	 */
	struct UBaseHumanAnimBP_C_NewEventDispatcher__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
