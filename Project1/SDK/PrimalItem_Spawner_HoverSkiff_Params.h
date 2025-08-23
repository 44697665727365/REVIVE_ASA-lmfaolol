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
	 * Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.BPAllowCrafting
	 */
	struct UPrimalItem_Spawner_HoverSkiff_C_BPAllowCrafting_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.GetValidSpawnTransform
	 */
	struct UPrimalItem_Spawner_HoverSkiff_C_GetValidSpawnTransform_Params
	{
	public:
		struct FTransform                                          SpawnTransform;                                          // 0x0000(0x0060)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SpawnValid;                                              // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.BPCrafted
	 */
	struct UPrimalItem_Spawner_HoverSkiff_C_BPCrafted_Params
	{	};

	/**
	 * Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.SpawnCraftedSkiff
	 */
	struct UPrimalItem_Spawner_HoverSkiff_C_SpawnCraftedSkiff_Params
	{	};

	/**
	 * Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.ExecuteUbergraph_PrimalItem_Spawner_HoverSkiff
	 */
	struct UPrimalItem_Spawner_HoverSkiff_C_ExecuteUbergraph_PrimalItem_Spawner_HoverSkiff_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SQ52[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
