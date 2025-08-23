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
	 * Function DinoBlueprintBase_RootTransform.DinoBlueprintBase_RootTransform_C.AnimGraph
	 */
	struct UDinoBlueprintBase_RootTransform_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function DinoBlueprintBase_RootTransform.DinoBlueprintBase_RootTransform_C.IsUsingRootTransform
	 */
	struct UDinoBlueprintBase_RootTransform_C_IsUsingRootTransform_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DinoBlueprintBase_RootTransform.DinoBlueprintBase_RootTransform_C.BlueprintPlayAnimationEvent
	 */
	struct UDinoBlueprintBase_RootTransform_C_BlueprintPlayAnimationEvent_Params
	{
	public:
		class UAnimMontage*                                        AnimationMontage;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		float                                                      PlayRate;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bPauseOnFinish;                                          // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O7UD[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      StartPosition;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      playedAnimLength;                                        // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DinoBlueprintBase_RootTransform.DinoBlueprintBase_RootTransform_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_AnimGraphNode_LinkedAnimGraph_4C214096403EAF14B6264E9CF171D25B
	 */
	struct UDinoBlueprintBase_RootTransform_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_AnimGraphNode_LinkedAnimGraph_4C214096403EAF14B6264E9CF171D25B_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform.DinoBlueprintBase_RootTransform_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_AnimGraphNode_BlendListByBool_F4B41D734CE9BB57CF0AA9979695D55C
	 */
	struct UDinoBlueprintBase_RootTransform_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_AnimGraphNode_BlendListByBool_F4B41D734CE9BB57CF0AA9979695D55C_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform.DinoBlueprintBase_RootTransform_C.BlueprintUpdateAnimation
	 */
	struct UDinoBlueprintBase_RootTransform_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DinoBlueprintBase_RootTransform.DinoBlueprintBase_RootTransform_C.BlueprintInitializeAnimation
	 */
	struct UDinoBlueprintBase_RootTransform_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform.DinoBlueprintBase_RootTransform_C.ExecuteUbergraph_DinoBlueprintBase_RootTransform
	 */
	struct UDinoBlueprintBase_RootTransform_C_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PFRM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
