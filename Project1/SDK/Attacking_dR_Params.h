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
	 * Function Attacking_dR.Attacking_DR_C.ReceiveExecutionStart
	 */
	struct UAttacking_DR_C_ReceiveExecutionStart_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Attacking_dR.Attacking_DR_C.ReceiveExecutionFinish
	 */
	struct UAttacking_DR_C_ReceiveExecutionFinish_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		EBTNodeResult                                              NodeResult;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Attacking_dR.Attacking_DR_C.ReceiveConditionCheck
	 */
	struct UAttacking_DR_C_ReceiveConditionCheck_Params
	{
	public:
		class AActor*                                              OwnerActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Attacking_dR.Attacking_DR_C.ExecuteUbergraph_Attacking_DR
	 */
	struct UAttacking_DR_C_ExecuteUbergraph_Attacking_DR_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M5A8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
