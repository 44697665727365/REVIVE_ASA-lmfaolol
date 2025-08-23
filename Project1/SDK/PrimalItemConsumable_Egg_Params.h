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
	 * Function PrimalItemConsumable_Egg.PrimalItemConsumable_Egg_C.BPAllowRemoteAddToInventory
	 */
	struct UPrimalItemConsumable_Egg_C_BPAllowRemoteAddToInventory_Params
	{
	public:
		class UPrimalInventoryComponent*                           invComp;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class AShooterPlayerController*                            ByPC;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bRequestedByPlayer;                                      // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemConsumable_Egg.PrimalItemConsumable_Egg_C.BPGetCustomInventoryWidgetText
	 */
	struct UPrimalItemConsumable_Egg_C_BPGetCustomInventoryWidgetText_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
