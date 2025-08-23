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
	 * Function ASA_Global_PostProcess_Blueprint.ASA_Global_PostProcess_Blueprint_C.Apply Curve Exposure
	 */
	struct AASA_Global_PostProcess_Blueprint_C_ApplyCurveExposure_Params
	{	};

	/**
	 * Function ASA_Global_PostProcess_Blueprint.ASA_Global_PostProcess_Blueprint_C.Capture Settings
	 */
	struct AASA_Global_PostProcess_Blueprint_C_CaptureSettings_Params
	{	};

	/**
	 * Function ASA_Global_PostProcess_Blueprint.ASA_Global_PostProcess_Blueprint_C.ReceiveTick
	 */
	struct AASA_Global_PostProcess_Blueprint_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ASA_Global_PostProcess_Blueprint.ASA_Global_PostProcess_Blueprint_C.ExecuteUbergraph_ASA_Global_PostProcess_Blueprint
	 */
	struct AASA_Global_PostProcess_Blueprint_C_ExecuteUbergraph_ASA_Global_PostProcess_Blueprint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
