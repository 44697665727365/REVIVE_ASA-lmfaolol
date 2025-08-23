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
	 * UserDefinedStruct RandomWeatherVariation_TransitionSettings.RandomWeatherVariation_TransitionSettings
	 * Size -> 0x0029
	 */
	struct FRandomWeatherVariation_TransitionSettings
	{
	public:
		TArray<class UUDS_Weather_Settings_C*>                     RandomWeatherTypesFrom_49_BBFDBC5E46C25F1DFB0037A44AB6D268; // 0x0000(0x0010) Edit, BlueprintVisible
		TArray<class UUDS_Weather_Settings_C*>                     RandomWeatherTypesTo_50_24CD85A3446FB26BAFDD83B9225FFA3A; // 0x0010(0x0010) Edit, BlueprintVisible
		double                                                     TransitionLength_46_F9461E064138A4CAAC1C17B84DDF02C8;    // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TransitionLengthIsFraction_40_D9E203C1414EBE167E2D479F8D0306B3; // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
