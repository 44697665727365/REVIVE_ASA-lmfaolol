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
	 * Function PrimalItem_DungeonEntrance_Base.PrimalItem_DungeonEntrance_Base_C.BPCrafted
	 */
	struct UPrimalItem_DungeonEntrance_Base_C_BPCrafted_Params
	{	};

	/**
	 * Function PrimalItem_DungeonEntrance_Base.PrimalItem_DungeonEntrance_Base_C.BPAllowCrafting
	 */
	struct UPrimalItem_DungeonEntrance_Base_C_BPAllowCrafting_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
