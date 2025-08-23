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
	 * Function StructureTekCavePortalTerminal.StructureTekCavePortalTerminal_C.BPTryMultiUse
	 */
	struct AStructureTekCavePortalTerminal_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StructureTekCavePortalTerminal.StructureTekCavePortalTerminal_C.BPGetMultiUseEntries
	 */
	struct AStructureTekCavePortalTerminal_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ReturnParm, ContainsInstancedReference)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
