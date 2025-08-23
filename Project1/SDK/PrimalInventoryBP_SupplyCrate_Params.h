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
	 * Function PrimalInventoryBP_SupplyCrate.PrimalInventoryBP_SupplyCrate_C.BPPreInitDefaultInventory
	 */
	struct UPrimalInventoryBP_SupplyCrate_C_BPPreInitDefaultInventory_Params
	{	};

	/**
	 * Function PrimalInventoryBP_SupplyCrate.PrimalInventoryBP_SupplyCrate_C.BPRequestedInventoryItems
	 */
	struct UPrimalInventoryBP_SupplyCrate_C_BPRequestedInventoryItems_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalInventoryBP_SupplyCrate.PrimalInventoryBP_SupplyCrate_C.BPInventoryRefresh
	 */
	struct UPrimalInventoryBP_SupplyCrate_C_BPInventoryRefresh_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
