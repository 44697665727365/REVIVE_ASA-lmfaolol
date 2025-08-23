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
	 * Function PrimalItem_WeaponTekSword.PrimalItem_WeaponTekSword_C.BlueprintUnequipped
	 */
	struct UPrimalItem_WeaponTekSword_C_BlueprintUnequipped_Params
	{	};

	/**
	 * Function PrimalItem_WeaponTekSword.PrimalItem_WeaponTekSword_C.BlueprintOwnerPosssessed
	 */
	struct UPrimalItem_WeaponTekSword_C_BlueprintOwnerPosssessed_Params
	{
	public:
		class AController*                                         PossessedByController;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_WeaponTekSword.PrimalItem_WeaponTekSword_C.InitBuff
	 */
	struct UPrimalItem_WeaponTekSword_C_InitBuff_Params
	{	};

	/**
	 * Function PrimalItem_WeaponTekSword.PrimalItem_WeaponTekSword_C.BlueprintEquipped
	 */
	struct UPrimalItem_WeaponTekSword_C_BlueprintEquipped_Params
	{
	public:
		bool                                                       bIsFromSaveGame;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
