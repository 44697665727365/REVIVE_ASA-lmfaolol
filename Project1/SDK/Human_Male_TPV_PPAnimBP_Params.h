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
	 * Function Human_Male_TPV_PPAnimBP.Human_Male_TPV_PPAnimBP_C.AnimGraph
	 */
	struct UHuman_Male_TPV_PPAnimBP_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           InPose;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           AnimGraph;                                               // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function Human_Male_TPV_PPAnimBP.Human_Male_TPV_PPAnimBP_C.BlueprintUpdateAnimation
	 */
	struct UHuman_Male_TPV_PPAnimBP_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Human_Male_TPV_PPAnimBP.Human_Male_TPV_PPAnimBP_C.ExecuteUbergraph_Human_Male_TPV_PPAnimBP
	 */
	struct UHuman_Male_TPV_PPAnimBP_C_ExecuteUbergraph_Human_Male_TPV_PPAnimBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
