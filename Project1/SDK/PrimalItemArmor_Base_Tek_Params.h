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
	 * Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BPGetMaxAmmo
	 */
	struct UPrimalItemArmor_Base_Tek_C_BPGetMaxAmmo_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.IsInfiniteAmmo
	 */
	struct UPrimalItemArmor_Base_Tek_C_IsInfiniteAmmo_Params
	{
	public:
		bool                                                       IsInfinite;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.ApplyingSkinOntoItem
	 */
	struct UPrimalItemArmor_Base_Tek_C_ApplyingSkinOntoItem_Params
	{
	public:
		class UPrimalItem*                                         ToOwnerItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsFirstTime;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZH1D[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.RemovedSkinFromItem
	 */
	struct UPrimalItemArmor_Base_Tek_C_RemovedSkinFromItem_Params
	{
	public:
		class UPrimalItem*                                         FromOwnerItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsFirstTime;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FPKC[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.GetInternalMapRestrictedTekArmorBuff
	 */
	struct UPrimalItemArmor_Base_Tek_C_GetInternalMapRestrictedTekArmorBuff_Params
	{
	public:
		class AShooterCharacter*                                   OwningPlayer;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              TekArmorBuff;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.GetResolvedTekArmorBuff
	 */
	struct UPrimalItemArmor_Base_Tek_C_GetResolvedTekArmorBuff_Params
	{
	public:
		class UClass*                                              ResolvedTekArmorBuff;                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.FillEmptyArmorElementWhenAvailable
	 */
	struct UPrimalItemArmor_Base_Tek_C_FillEmptyArmorElementWhenAvailable_Params
	{	};

	/**
	 * Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.InitBuff
	 */
	struct UPrimalItemArmor_Base_Tek_C_InitBuff_Params
	{	};

	/**
	 * Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BlueprintOwnerPosssessed
	 */
	struct UPrimalItemArmor_Base_Tek_C_BlueprintOwnerPosssessed_Params
	{
	public:
		class AController*                                         PossessedByController;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BlueprintUnequipped
	 */
	struct UPrimalItemArmor_Base_Tek_C_BlueprintUnequipped_Params
	{	};

	/**
	 * Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BPGetCustomInventoryWidgetText
	 */
	struct UPrimalItemArmor_Base_Tek_C_BPGetCustomInventoryWidgetText_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.Can Element Decrease
	 */
	struct UPrimalItemArmor_Base_Tek_C_CanElementDecrease_Params
	{
	public:
		int32_t                                                    AmountToDecreaseBy;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PreventCheckingInventory;                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanDecrease;                                             // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BlueprintEquipped
	 */
	struct UPrimalItemArmor_Base_Tek_C_BlueprintEquipped_Params
	{
	public:
		bool                                                       bIsFromSaveGame;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.TryToDecreaseElement
	 */
	struct UPrimalItemArmor_Base_Tek_C_TryToDecreaseElement_Params
	{
	public:
		int32_t                                                    AmountToDecreaseBy;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.SetElementToMax
	 */
	struct UPrimalItemArmor_Base_Tek_C_SetElementToMax_Params
	{	};

	/**
	 * Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.IncreaseElement
	 */
	struct UPrimalItemArmor_Base_Tek_C_IncreaseElement_Params
	{
	public:
		double                                                     Percent;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	struct UPrimalItemArmor_Base_Tek_C_AmountToDecreaseBy_Params
	{
	public:
		int32_t                                                      AmountToDecreaseBy;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.TekArmorSkinApplied
	 */
	struct UPrimalItemArmor_Base_Tek_C_TekArmorSkinApplied_Params
	{	};

	/**
	 * Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.TekArmorSkinRemoved
	 */
	struct UPrimalItemArmor_Base_Tek_C_TekArmorSkinRemoved_Params
	{	};

	/**
	 * Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.ExecuteUbergraph_PrimalItemArmor_Base_Tek
	 */
	struct UPrimalItemArmor_Base_Tek_C_ExecuteUbergraph_PrimalItemArmor_Base_Tek_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
