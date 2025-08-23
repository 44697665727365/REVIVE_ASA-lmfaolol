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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C
	 * Size -> 0x0048 (FullSize[0x0610] - InheritedSize[0x05C8])
	 */
	class UPrimalPlayerDataBP_Base_C : public UPrimalPlayerData
	{
	public:
		int32_t                                                    NumAscensions;                                           // 0x05C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DPEX[0x4];                                   // 0x05CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<double>                                             AscensionData;                                           // 0x05D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic
		TArray<class FName>                                        BossDinoNameTagAscensionDataMap;                         // 0x05E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    SavedPlayerDataVersion;                                  // 0x05F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentPlayerDataVersion;                                // 0x05F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    HexagonCount;                                            // 0x05F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumChibiLevelUpsData;                                    // 0x05FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        GeneralizedUnlockedAchievementTags;                      // 0x0600(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic

	public:
		void EndActivityOnBoss(const class FName& Boss, class AShooterPlayerController* SPC);
		void SetChibiLevels(int32_t newLevels, class AShooterPlayerController* ForPC);
		bool HasGeneralizedAchievementTag(const class FName& Tag);
		void GrantGeneralizedAchievementTag(const class FName& ObtainedAchievementTag, class AShooterPlayerController* ForPC);
		void BPForceDefeatedBoss(int32_t DifficultyIndex, const class FName& BossName, class AShooterPlayerController* PlayerController);
		bool SetPlayerHexagonCount(int32_t NewHexagonCount);
		int32_t GetPlayerHexagonCount();
		void BPCreatedNewPlayerData();
		void DefeatedBoss(class APrimalDinoCharacter* BossChar, int32_t DifficultyIndex, const class FName& TagOverride, class AShooterPlayerController* ForPC);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
