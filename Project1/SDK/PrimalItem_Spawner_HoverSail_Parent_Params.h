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
	 * Function PrimalItem_Spawner_HoverSail_Parent.PrimalItem_Spawner_HoverSail_Parent_C.BPGetItemDescription
	 */
	struct UPrimalItem_Spawner_HoverSail_Parent_C_BPGetItemDescription_Params
	{
	public:
		class FString                                              InDescription;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bGetLongDescription;                                     // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JHCJ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterPlayerController*                            ForPC;                                                   // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_Spawner_HoverSail_Parent.PrimalItem_Spawner_HoverSail_Parent_C.notify hoversail destroyed
	 */
	struct UPrimalItem_Spawner_HoverSail_Parent_C_notifyhoversaildestroyed_Params
	{	};

	/**
	 * Function PrimalItem_Spawner_HoverSail_Parent.PrimalItem_Spawner_HoverSail_Parent_C.Delaymount
	 */
	struct UPrimalItem_Spawner_HoverSail_Parent_C_Delaymount_Params
	{	};

	/**
	 * Function PrimalItem_Spawner_HoverSail_Parent.PrimalItem_Spawner_HoverSail_Parent_C.BPCanUse
	 */
	struct UPrimalItem_Spawner_HoverSail_Parent_C_BPCanUse_Params
	{
	public:
		bool                                                       bIgnoreCooldown;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_Spawner_HoverSail_Parent.PrimalItem_Spawner_HoverSail_Parent_C.SpawnCraftedSkiff
	 */
	struct UPrimalItem_Spawner_HoverSail_Parent_C_SpawnCraftedSkiff_Params
	{	};

	/**
	 * Function PrimalItem_Spawner_HoverSail_Parent.PrimalItem_Spawner_HoverSail_Parent_C.ExecuteUbergraph_PrimalItem_Spawner_HoverSail_Parent
	 */
	struct UPrimalItem_Spawner_HoverSail_Parent_C_ExecuteUbergraph_PrimalItem_Spawner_HoverSail_Parent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
