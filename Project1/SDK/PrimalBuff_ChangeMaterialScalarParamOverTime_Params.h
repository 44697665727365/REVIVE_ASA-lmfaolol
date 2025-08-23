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
	 * Function PrimalBuff_ChangeMaterialScalarParamOverTime.PrimalBuff_ChangeMaterialScalarParamOverTime_C.Set Param Value
	 */
	struct APrimalBuff_ChangeMaterialScalarParamOverTime_C_SetParamValue_Params
	{
	public:
		class UMeshComponent*                                      Mesh;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		double                                                     Value;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalBuff_ChangeMaterialScalarParamOverTime.PrimalBuff_ChangeMaterialScalarParamOverTime_C.BPSetupForInstigator
	 */
	struct APrimalBuff_ChangeMaterialScalarParamOverTime_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalBuff_ChangeMaterialScalarParamOverTime.PrimalBuff_ChangeMaterialScalarParamOverTime_C.ParamTimeline__FinishedFunc
	 */
	struct APrimalBuff_ChangeMaterialScalarParamOverTime_C_ParamTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function PrimalBuff_ChangeMaterialScalarParamOverTime.PrimalBuff_ChangeMaterialScalarParamOverTime_C.ParamTimeline__UpdateFunc
	 */
	struct APrimalBuff_ChangeMaterialScalarParamOverTime_C_ParamTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function PrimalBuff_ChangeMaterialScalarParamOverTime.PrimalBuff_ChangeMaterialScalarParamOverTime_C.StartTimeline
	 */
	struct APrimalBuff_ChangeMaterialScalarParamOverTime_C_StartTimeline_Params
	{
	public:
		bool                                                       Forward;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalBuff_ChangeMaterialScalarParamOverTime.PrimalBuff_ChangeMaterialScalarParamOverTime_C.ReceiveBeginPlay
	 */
	struct APrimalBuff_ChangeMaterialScalarParamOverTime_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PrimalBuff_ChangeMaterialScalarParamOverTime.PrimalBuff_ChangeMaterialScalarParamOverTime_C.SetValues
	 */
	struct APrimalBuff_ChangeMaterialScalarParamOverTime_C_SetValues_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalBuff_ChangeMaterialScalarParamOverTime.PrimalBuff_ChangeMaterialScalarParamOverTime_C.ExecuteUbergraph_PrimalBuff_ChangeMaterialScalarParamOverTime
	 */
	struct APrimalBuff_ChangeMaterialScalarParamOverTime_C_ExecuteUbergraph_PrimalBuff_ChangeMaterialScalarParamOverTime_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
