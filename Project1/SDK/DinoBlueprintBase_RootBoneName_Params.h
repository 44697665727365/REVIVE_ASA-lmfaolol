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
	 * Function DinoBlueprintBase_RootBoneName.DinoBlueprintBase_RootBoneName_C.AnimGraph
	 */
	struct UDinoBlueprintBase_RootBoneName_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function DinoBlueprintBase_RootBoneName.DinoBlueprintBase_RootBoneName_C.BlueprintPlayAnimationEvent
	 */
	struct UDinoBlueprintBase_RootBoneName_C_BlueprintPlayAnimationEvent_Params
	{
	public:
		class UAnimMontage*                                        AnimationMontage;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		float                                                      PlayRate;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bPauseOnFinish;                                          // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AH5O[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      StartPosition;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      playedAnimLength;                                        // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DinoBlueprintBase_RootBoneName.DinoBlueprintBase_RootBoneName_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_AnimGraphNode_BlendListByBool_2A69076B409A6A5A4503CBB734CDA6E8
	 */
	struct UDinoBlueprintBase_RootBoneName_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_AnimGraphNode_BlendListByBool_2A69076B409A6A5A4503CBB734CDA6E8_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootBoneName.DinoBlueprintBase_RootBoneName_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_AnimGraphNode_BlendListByBool_4C8A824841EB977EF5EEF79FC0F2DC67
	 */
	struct UDinoBlueprintBase_RootBoneName_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_AnimGraphNode_BlendListByBool_4C8A824841EB977EF5EEF79FC0F2DC67_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootBoneName.DinoBlueprintBase_RootBoneName_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_AnimGraphNode_LinkedAnimGraph_C59290F648F911C9FA3384855DCF9365
	 */
	struct UDinoBlueprintBase_RootBoneName_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_AnimGraphNode_LinkedAnimGraph_C59290F648F911C9FA3384855DCF9365_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootBoneName.DinoBlueprintBase_RootBoneName_C.BlueprintUpdateAnimation
	 */
	struct UDinoBlueprintBase_RootBoneName_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DinoBlueprintBase_RootBoneName.DinoBlueprintBase_RootBoneName_C.BlueprintInitializeAnimation
	 */
	struct UDinoBlueprintBase_RootBoneName_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function DinoBlueprintBase_RootBoneName.DinoBlueprintBase_RootBoneName_C.ExecuteUbergraph_DinoBlueprintBase_RootBoneName
	 */
	struct UDinoBlueprintBase_RootBoneName_C_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
