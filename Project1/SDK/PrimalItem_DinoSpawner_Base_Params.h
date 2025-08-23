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
	 * Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.BPGetCustomInventoryWidgetTextColor
	 */
	struct UPrimalItem_DinoSpawner_Base_C_BPGetCustomInventoryWidgetTextColor_Params
	{
	public:
		struct FColor                                              ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.BPGetCustomInventoryWidgetText
	 */
	struct UPrimalItem_DinoSpawner_Base_C_BPGetCustomInventoryWidgetText_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.DoesClientHaveStatData
	 */
	struct UPrimalItem_DinoSpawner_Base_C_DoesClientHaveStatData_Params
	{
	public:
		bool                                                       HasData;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.BPCanUse
	 */
	struct UPrimalItem_DinoSpawner_Base_C_BPCanUse_Params
	{
	public:
		bool                                                       bIgnoreCooldown;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4ROC[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.GetDinoColorizationData
	 */
	struct UPrimalItem_DinoSpawner_Base_C_GetDinoColorizationData_Params
	{
	public:
		bool                                                       HasAnyColorData;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2LDG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<unsigned char>                                      ColorData;                                               // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.PreDinoSpawned
	 */
	struct UPrimalItem_DinoSpawner_Base_C_PreDinoSpawned_Params
	{	};

	/**
	 * Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.CopyDinoStatsFromDino
	 */
	struct UPrimalItem_DinoSpawner_Base_C_CopyDinoStatsFromDino_Params
	{
	public:
		class UPrimalCharacterStatusComponent*                     StatusComp;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            StatOffsets;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<unsigned char>                                      Colorization;                                            // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.GetStatDisplayString
	 */
	struct UPrimalItem_DinoSpawner_Base_C_GetStatDisplayString_Params
	{
	public:
		EPrimalCharacterStatusValue                                Stat;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_89P3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StatConvertMapIndex;                                     // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P9OB[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              StatDisplay;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ValueDisplay;                                            // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ShowInTooltip;                                           // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0MOA[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.GetDinoStat
	 */
	struct UPrimalItem_DinoSpawner_Base_C_GetDinoStat_Params
	{
	public:
		EPrimalCharacterStatusValue                                StatType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_R63A[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    NumDinoLevels;                                           // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StatMapIndexUsed;                                        // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FH4O[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.BPGetItemDescription
	 */
	struct UPrimalItem_DinoSpawner_Base_C_BPGetItemDescription_Params
	{
	public:
		class FString                                              InDescription;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bGetLongDescription;                                     // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FV4X[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterPlayerController*                            ForPC;                                                   // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.OnDinoSpawned
	 */
	struct UPrimalItem_DinoSpawner_Base_C_OnDinoSpawned_Params
	{
	public:
		class APrimalDinoCharacter*                                NewDino;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.BlueprintUsed
	 */
	struct UPrimalItem_DinoSpawner_Base_C_BlueprintUsed_Params
	{	};

	/**
	 * Function PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C.ExecuteUbergraph_PrimalItem_DinoSpawner_Base
	 */
	struct UPrimalItem_DinoSpawner_Base_C_ExecuteUbergraph_PrimalItem_DinoSpawner_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
