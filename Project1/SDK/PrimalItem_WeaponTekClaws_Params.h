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
	 * Function PrimalItem_WeaponTekClaws.PrimalItem_WeaponTekClaws_C.BPAddedAttachments
	 */
	struct UPrimalItem_WeaponTekClaws_C_BPAddedAttachments_Params
	{	};

	/**
	 * Function PrimalItem_WeaponTekClaws.PrimalItem_WeaponTekClaws_C.CanRunCosmeticEvents
	 */
	struct UPrimalItem_WeaponTekClaws_C_CanRunCosmeticEvents_Params
	{
	public:
		bool                                                       CanRun;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_WeaponTekClaws.PrimalItem_WeaponTekClaws_C.BlueprintUnequipped
	 */
	struct UPrimalItem_WeaponTekClaws_C_BlueprintUnequipped_Params
	{	};

	/**
	 * Function PrimalItem_WeaponTekClaws.PrimalItem_WeaponTekClaws_C.BlueprintOwnerPosssessed
	 */
	struct UPrimalItem_WeaponTekClaws_C_BlueprintOwnerPosssessed_Params
	{
	public:
		class AController*                                         PossessedByController;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_WeaponTekClaws.PrimalItem_WeaponTekClaws_C.BlueprintEquipped
	 */
	struct UPrimalItem_WeaponTekClaws_C_BlueprintEquipped_Params
	{
	public:
		bool                                                       bIsFromSaveGame;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZUA4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
