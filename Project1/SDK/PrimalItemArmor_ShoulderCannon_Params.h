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
	 * Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.HasAmmoOrElement
	 */
	struct UPrimalItemArmor_ShoulderCannon_C_HasAmmoOrElement_Params
	{
	public:
		bool                                                       Allowed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.ConsumeAmmo
	 */
	struct UPrimalItemArmor_ShoulderCannon_C_ConsumeAmmo_Params
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UpdatedAmount;                                           // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.GetBuff
	 */
	struct UPrimalItemArmor_ShoulderCannon_C_GetBuff_Params
	{	};

	/**
	 * Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.InitBuff
	 */
	struct UPrimalItemArmor_ShoulderCannon_C_InitBuff_Params
	{	};

	/**
	 * Function PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C.BPAddedAttachments
	 */
	struct UPrimalItemArmor_ShoulderCannon_C_BPAddedAttachments_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
