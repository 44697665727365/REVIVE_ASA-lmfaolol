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
	 * BlueprintGeneratedClass PlayerCharacterStatusComponent_BP.PlayerCharacterStatusComponent_BP_C
	 * Size -> 0x0020 (FullSize[0x1108] - InheritedSize[0x10E8])
	 */
	class UPlayerCharacterStatusComponent_BP_C : public UPrimalPlayerStatusComponent
	{
	public:
		TArray<class FName>                                        GeneralizedAchievementTags_GrantedExtraPlayerLevels_Fname; // 0x10E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<int32_t>                                            GeneralizedAchievementTags_GrantedExtraPlayerLevels_Value; // 0x10F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		float BPModifyMaxExperiencePoints(float InMaxExperiencePoints);
		int32_t BPModifyMaxLevel(int32_t InMaxLevel);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
