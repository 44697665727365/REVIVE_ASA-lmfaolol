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
	 * Function PrimalItemCanoe.PrimalItemCanoe_C.BPCanUse
	 */
	struct UPrimalItemCanoe_C_BPCanUse_Params
	{
	public:
		bool                                                       bIgnoreCooldown;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemCanoe.PrimalItemCanoe_C.BPGetItemIcon
	 */
	struct UPrimalItemCanoe_C_BPGetItemIcon_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UTexture2D*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemCanoe.PrimalItemCanoe_C.BPGetCustomIconMaterialParent
	 */
	struct UPrimalItemCanoe_C_BPGetCustomIconMaterialParent_Params
	{
	public:
		class UMaterialInterface*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemCanoe.PrimalItemCanoe_C.SetColors
	 */
	struct UPrimalItemCanoe_C_SetColors_Params
	{	};

	/**
	 * Function PrimalItemCanoe.PrimalItemCanoe_C.BPInitIconMaterial
	 */
	struct UPrimalItemCanoe_C_BPInitIconMaterial_Params
	{	};

	/**
	 * Function PrimalItemCanoe.PrimalItemCanoe_C.BPGetItemName
	 */
	struct UPrimalItemCanoe_C_BPGetItemName_Params
	{
	public:
		class FString                                              ItemNameIn;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class AShooterPlayerController*                            ForPC;                                                   // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemCanoe.PrimalItemCanoe_C.BPGetCustomDurabilityText
	 */
	struct UPrimalItemCanoe_C_BPGetCustomDurabilityText_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemCanoe.PrimalItemCanoe_C.BPGetItemDurabilityPercentage
	 */
	struct UPrimalItemCanoe_C_BPGetItemDurabilityPercentage_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4O5U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
