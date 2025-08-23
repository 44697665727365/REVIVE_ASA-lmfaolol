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
	 * Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.Test Point for Occlusion
	 */
	struct UUDS_PlayerOcclusion_C_TestPointforOcclusion_Params
	{
	public:
		TArray<class AActor*>                                      ActorstoIgnore;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FVector                                             TestLocation;                                            // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<double>                                             OcclusionProfile;                                        // 0x0028(0x0010)  (Parm, OutParm)
		double                                                     OverallOcclusion;                                        // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.Set Target Fully Unoccluded
	 */
	struct UUDS_PlayerOcclusion_C_SetTargetFullyUnoccluded_Params
	{	};

	/**
	 * Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.Set Target Fully Occluded
	 */
	struct UUDS_PlayerOcclusion_C_SetTargetFullyOccluded_Params
	{	};

	/**
	 * Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.Get Occlusion Location
	 */
	struct UUDS_PlayerOcclusion_C_GetOcclusionLocation_Params
	{	};

	/**
	 * Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.Get Starting Occlusion Profile
	 */
	struct UUDS_PlayerOcclusion_C_GetStartingOcclusionProfile_Params
	{	};

	/**
	 * Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.Initialize
	 */
	struct UUDS_PlayerOcclusion_C_Initialize_Params
	{	};

	/**
	 * Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.Update Current Occlusion Profile
	 */
	struct UUDS_PlayerOcclusion_C_UpdateCurrentOcclusionProfile_Params
	{	};

	/**
	 * Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.Update Target Occlusion Profile
	 */
	struct UUDS_PlayerOcclusion_C_UpdateTargetOcclusionProfile_Params
	{	};

	/**
	 * Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.ReceiveTick
	 */
	struct UUDS_PlayerOcclusion_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UDS_PlayerOcclusion.UDS_PlayerOcclusion_C.ExecuteUbergraph_UDS_PlayerOcclusion
	 */
	struct UUDS_PlayerOcclusion_C_ExecuteUbergraph_UDS_PlayerOcclusion_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
