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
	 * Function DinoBlueprintBase_RootTransform_FlySwimming.DinoBlueprintBase_RootTransform_FlySwimming_C.AnimGraph
	 */
	struct UDinoBlueprintBase_RootTransform_FlySwimming_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function DinoBlueprintBase_RootTransform_FlySwimming.DinoBlueprintBase_RootTransform_FlySwimming_C.IsUsingRootTransform
	 */
	struct UDinoBlueprintBase_RootTransform_FlySwimming_C_IsUsingRootTransform_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DinoBlueprintBase_RootTransform_FlySwimming.DinoBlueprintBase_RootTransform_FlySwimming_C.BlueprintPlayAnimationEvent
	 */
	struct UDinoBlueprintBase_RootTransform_FlySwimming_C_BlueprintPlayAnimationEvent_Params
	{
	public:
		class UAnimMontage*                                        AnimationMontage;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		float                                                      PlayRate;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bPauseOnFinish;                                          // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IKQ6[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      StartPosition;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      playedAnimLength;                                        // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DinoBlueprintBase_RootTransform_FlySwimming.DinoBlueprintBase_RootTransform_FlySwimming_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_LinkedAnimGraph_F844710D46D9465E5DDADAB277BDC430
	 */
	struct UDinoBlueprintBase_RootTransform_FlySwimming_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_LinkedAnimGraph_F844710D46D9465E5DDADAB277BDC430_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_FlySwimming.DinoBlueprintBase_RootTransform_FlySwimming_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_BlendListByBool_63779C77421C07F25B1BA8AF35606FD1
	 */
	struct UDinoBlueprintBase_RootTransform_FlySwimming_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_BlendListByBool_63779C77421C07F25B1BA8AF35606FD1_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_FlySwimming.DinoBlueprintBase_RootTransform_FlySwimming_C.BlueprintUpdateAnimation
	 */
	struct UDinoBlueprintBase_RootTransform_FlySwimming_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DinoBlueprintBase_RootTransform_FlySwimming.DinoBlueprintBase_RootTransform_FlySwimming_C.BlueprintInitializeAnimation
	 */
	struct UDinoBlueprintBase_RootTransform_FlySwimming_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootTransform_FlySwimming.DinoBlueprintBase_RootTransform_FlySwimming_C.ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming
	 */
	struct UDinoBlueprintBase_RootTransform_FlySwimming_C_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_89BK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
