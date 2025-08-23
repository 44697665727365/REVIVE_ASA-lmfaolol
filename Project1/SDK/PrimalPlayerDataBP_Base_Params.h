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
	 * Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.EndActivityOnBoss
	 */
	struct UPrimalPlayerDataBP_Base_C_EndActivityOnBoss_Params
	{
	public:
		class FName                                                Boss;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AShooterPlayerController*                            SPC;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.SetChibiLevels
	 */
	struct UPrimalPlayerDataBP_Base_C_SetChibiLevels_Params
	{
	public:
		int32_t                                                    newLevels;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZOXU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterPlayerController*                            ForPC;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.HasGeneralizedAchievementTag
	 */
	struct UPrimalPlayerDataBP_Base_C_HasGeneralizedAchievementTag_Params
	{
	public:
		class FName                                                Tag;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.GrantGeneralizedAchievementTag
	 */
	struct UPrimalPlayerDataBP_Base_C_GrantGeneralizedAchievementTag_Params
	{
	public:
		class FName                                                ObtainedAchievementTag;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AShooterPlayerController*                            ForPC;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.BPForceDefeatedBoss
	 */
	struct UPrimalPlayerDataBP_Base_C_BPForceDefeatedBoss_Params
	{
	public:
		int32_t                                                    DifficultyIndex;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                BossName;                                                // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BYFE[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterPlayerController*                            PlayerController;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.SetPlayerHexagonCount
	 */
	struct UPrimalPlayerDataBP_Base_C_SetPlayerHexagonCount_Params
	{
	public:
		int32_t                                                    NewHexagonCount;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.GetPlayerHexagonCount
	 */
	struct UPrimalPlayerDataBP_Base_C_GetPlayerHexagonCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.BPCreatedNewPlayerData
	 */
	struct UPrimalPlayerDataBP_Base_C_BPCreatedNewPlayerData_Params
	{	};

	/**
	 * Function PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C.DefeatedBoss
	 */
	struct UPrimalPlayerDataBP_Base_C_DefeatedBoss_Params
	{
	public:
		class APrimalDinoCharacter*                                BossChar;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DifficultyIndex;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                TagOverride;                                             // 0x000C(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5W07[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterPlayerController*                            ForPC;                                                   // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
