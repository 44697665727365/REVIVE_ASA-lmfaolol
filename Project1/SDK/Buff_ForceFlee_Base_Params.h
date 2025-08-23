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
	 * Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.ReEnterFleeState
	 */
	struct ABuff_ForceFlee_Base_C_ReEnterFleeState_Params
	{	};

	/**
	 * Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.Restore Flee State
	 */
	struct ABuff_ForceFlee_Base_C_RestoreFleeState_Params
	{	};

	/**
	 * Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.Set Flee State
	 */
	struct ABuff_ForceFlee_Base_C_SetFleeState_Params
	{	};

	/**
	 * Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.BPDeactivated
	 */
	struct ABuff_ForceFlee_Base_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.BPActivated
	 */
	struct ABuff_ForceFlee_Base_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
