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
	 * BlueprintGeneratedClass UDS_Planet_Preset.UDS_Planet_Preset_C
	 * Size -> 0x0278 (FullSize[0x02A8] - InheritedSize[0x0030])
	 */
	class UUDS_Planet_Preset_C : public UPrimaryDataAsset
	{
	public:
		struct FUDS_Space_Planet                                   PlanetData;                                              // 0x0030(0x0278) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
