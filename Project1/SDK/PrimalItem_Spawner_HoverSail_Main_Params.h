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
	 * Function PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C.BPInitIconMaterial
	 */
	struct UPrimalItem_Spawner_HoverSail_Main_C_BPInitIconMaterial_Params
	{	};

	/**
	 * Function PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C.BlueprintUsed
	 */
	struct UPrimalItem_Spawner_HoverSail_Main_C_BlueprintUsed_Params
	{	};

	/**
	 * Function PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C.OnDinoSpawned
	 */
	struct UPrimalItem_Spawner_HoverSail_Main_C_OnDinoSpawned_Params
	{
	public:
		class APrimalDinoCharacter*                                NewDino;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C.BPGetCustomInventoryWidgetText
	 */
	struct UPrimalItem_Spawner_HoverSail_Main_C_BPGetCustomInventoryWidgetText_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
