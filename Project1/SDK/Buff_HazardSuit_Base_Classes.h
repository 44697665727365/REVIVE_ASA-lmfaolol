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
	 * BlueprintGeneratedClass Buff_HazardSuit_Base.Buff_HazardSuit_Base_C
	 * Size -> 0x0027 (FullSize[0x0B80] - InheritedSize[0x0B59])
	 */
	class ABuff_HazardSuit_Base_C : public ABuff_Base_OnlyRelevantToOwner_C
	{
	public:
		unsigned char                                              UnknownData_4K0M[0x7];                                   // 0x0B59(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              PreventAddingBuffs[0x10];                                // 0x0B60(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<double>                                             DurabilityCostForPreventAddingBuff;                      // 0x0B70(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		bool BPPreventAddingOtherBuff(class UClass* anotherBuffClass);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
