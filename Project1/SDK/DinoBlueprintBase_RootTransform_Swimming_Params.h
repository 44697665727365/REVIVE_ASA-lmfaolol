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
	 * Function DinoBlueprintBase_RootTransform_Swimming.DinoBlueprintBase_RootTransform_Swimming_C.AnimGraph
	 */
	struct UDinoBlueprintBase_RootTransform_Swimming_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Swimming.DinoBlueprintBase_RootTransform_Swimming_C.IsUsingRootTransform
	 */
	struct UDinoBlueprintBase_RootTransform_Swimming_C_IsUsingRootTransform_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Swimming.DinoBlueprintBase_RootTransform_Swimming_C.BlueprintPlayAnimationEvent
	 */
	struct UDinoBlueprintBase_RootTransform_Swimming_C_BlueprintPlayAnimationEvent_Params
	{
	public:
		class UAnimMontage*                                        AnimationMontage;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		float                                                      PlayRate;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bPauseOnFinish;                                          // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LAS2[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      StartPosition;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      playedAnimLength;                                        // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Swimming.DinoBlueprintBase_RootTransform_Swimming_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Swimming_AnimGraphNode_LinkedAnimGraph_11D18D694E79535692C549A42359CABB
	 */
	struct UDinoBlueprintBase_RootTransform_Swimming_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Swimming_AnimGraphNode_LinkedAnimGraph_11D18D694E79535692C549A42359CABB_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Swimming.DinoBlueprintBase_RootTransform_Swimming_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Swimming_AnimGraphNode_BlendListByBool_1AA0027749A11519D59CE58C5A5BE251
	 */
	struct UDinoBlueprintBase_RootTransform_Swimming_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Swimming_AnimGraphNode_BlendListByBool_1AA0027749A11519D59CE58C5A5BE251_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Swimming.DinoBlueprintBase_RootTransform_Swimming_C.BlueprintUpdateAnimation
	 */
	struct UDinoBlueprintBase_RootTransform_Swimming_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Swimming.DinoBlueprintBase_RootTransform_Swimming_C.BlueprintInitializeAnimation
	 */
	struct UDinoBlueprintBase_RootTransform_Swimming_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_Swimming.DinoBlueprintBase_RootTransform_Swimming_C.ExecuteUbergraph_DinoBlueprintBase_RootTransform_Swimming
	 */
	struct UDinoBlueprintBase_RootTransform_Swimming_C_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Swimming_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9JVK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
