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
	 * Function UDS_Occlusion_Volume.UDS_Occlusion_Volume_C.Get Occlusion Result
	 */
	struct AUDS_Occlusion_Volume_C_GetOcclusionResult_Params
	{
	public:
		bool                                                       Weather;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Occluded;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UDS_Occlusion_Volume.UDS_Occlusion_Volume_C.UserConstructionScript
	 */
	struct AUDS_Occlusion_Volume_C_UserConstructionScript_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
