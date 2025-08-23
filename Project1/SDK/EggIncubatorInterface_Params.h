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
	 * Function EggIncubatorInterface.EggIncubatorInterface_C.IsEggItemAllowed
	 */
	struct UEggIncubatorInterface_C_IsEggItemAllowed_Params
	{
	public:
		class UPrimalItemConsumable_Egg_C*                         EggItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsAllowed;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EggIncubatorInterface.EggIncubatorInterface_C.GetItemDisplaySlot
	 */
	struct UEggIncubatorInterface_C_GetItemDisplaySlot_Params
	{
	public:
		class UPrimalItem*                                         ForItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InSlot;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SlotFound;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
