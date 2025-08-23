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
	 * BlueprintGeneratedClass CORE_PrimalGameData.CORE_PrimalGameData_C
	 * Size -> 0x0020 (FullSize[0x2F48] - InheritedSize[0x2F28])
	 */
	class UCORE_PrimalGameData_C : public UPrimalGameData
	{
	public:
		TArray<struct FHairMetaData>                               FemaleHairStylesMetaDatas;                               // 0x2F28(0x0010) Edit, BlueprintVisible
		TArray<struct FHairMetaData>                               MaleHairStylesMetaDatas;                                 // 0x2F38(0x0010) Edit, BlueprintVisible

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
