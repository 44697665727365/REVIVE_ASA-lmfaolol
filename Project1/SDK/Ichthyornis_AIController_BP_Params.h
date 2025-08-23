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
	 * Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.GetTargetingDesireTamed
	 */
	struct AIchthyornis_AIController_BP_C_GetTargetingDesireTamed_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                                     initialDesire;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     initialMultiplier;                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     desire;                                                  // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     desireMultiplier;                                        // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.StandardTargetChecks
	 */
	struct AIchthyornis_AIController_BP_C_StandardTargetChecks_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AIchthyornis_Character_BP_C*                         IchthyPawn;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       canTarget;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.Get Targeting Desire Wild
	 */
	struct AIchthyornis_AIController_BP_C_GetTargetingDesireWild_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                                     initialDesire;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     initialMultiplier;                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     desire;                                                  // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Multiplier;                                              // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.GetAggroNotifyNeighborsRange
	 */
	struct AIchthyornis_AIController_BP_C_GetAggroNotifyNeighborsRange_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BDAL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.GetTargetingRangeForPlayers
	 */
	struct AIchthyornis_AIController_BP_C_GetTargetingRangeForPlayers_Params
	{
	public:
		double                                                     targetingRange;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.DoDepthCheck
	 */
	struct AIchthyornis_AIController_BP_C_DoDepthCheck_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       NotTooDeep;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.UpdateFlyingOffset
	 */
	struct AIchthyornis_AIController_BP_C_UpdateFlyingOffset_Params
	{	};

	/**
	 * Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.Update Combat Offset
	 */
	struct AIchthyornis_AIController_BP_C_UpdateCombatOffset_Params
	{	};

	/**
	 * Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.ChangedAITarget
	 */
	struct AIchthyornis_AIController_BP_C_ChangedAITarget_Params
	{	};

	/**
	 * Function Ichthyornis_AIController_BP.Ichthyornis_AIController_BP_C.BPGetTargetingDesire
	 */
	struct AIchthyornis_AIController_BP_C_BPGetTargetingDesire_Params
	{
	public:
		class AActor*                                              ForTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		float                                                      ForTargetingDesireValue;                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
