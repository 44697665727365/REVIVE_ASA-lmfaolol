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
	 * Function DroppedItemGenericLowQuality.DroppedItemGenericLowQuality_C.BPDroppedItemImpacted
	 */
	struct ADroppedItemGenericLowQuality_C_BPDroppedItemImpacted_Params
	{
	public:
		struct FHitResult                                          impactHitInfo;                                           // 0x0000(0x00F0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function DroppedItemGenericLowQuality.DroppedItemGenericLowQuality_C.ExecuteUbergraph_DroppedItemGenericLowQuality
	 */
	struct ADroppedItemGenericLowQuality_C_ExecuteUbergraph_DroppedItemGenericLowQuality_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LG66[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
