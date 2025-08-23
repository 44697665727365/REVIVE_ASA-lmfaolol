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
	 * BlueprintGeneratedClass COREMEDIA_PrimalGameData_BP.COREMEDIA_PrimalGameData_BP_C
	 * Size -> 0x0000 (FullSize[0x2F48] - InheritedSize[0x2F48])
	 */
	class UCOREMEDIA_PrimalGameData_BP_C : public UCORE_PrimalGameData_C
	{
	public:
		void BPMergeModGameData(class UPrimalGameData* AnotherGameData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
