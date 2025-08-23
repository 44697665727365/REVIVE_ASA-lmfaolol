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
	 * BlueprintGeneratedClass WorldBuff_Asteroid_CrateQuality_Up.WorldBuff_Asteroid_CrateQuality_Up_C
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UWorldBuff_Asteroid_CrateQuality_Up_C : public UPrimalWorldBuffCustomImplement
	{
	public:
		TArray<struct FCrateTemporaryQualityModifiers>             CrateModifiers;                                          // 0x0030(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void PostConstruction();
		void PreDeconstruction();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
