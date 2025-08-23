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
	 * BlueprintGeneratedClass PrimalPlayerDataHelperFunctions.PrimalPlayerDataHelperFunctions_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPrimalPlayerDataHelperFunctions_C : public UObject
	{
	public:
		void ApplyToPlayerPawnCharacter(class AShooterPlayerState* ForPlayerState, class AShooterCharacter* NewPlayerCharacter, TArray<double>* AscensionData, int32_t HexagonCount, int32_t ChibiLevelUpsCount, bool bUnlockedAllExplorerNotes, TArray<class FName>* GeneralizedUnlockedAchievementTags);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
