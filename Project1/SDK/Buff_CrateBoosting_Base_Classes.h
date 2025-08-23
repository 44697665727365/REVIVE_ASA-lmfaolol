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
	 * BlueprintGeneratedClass Buff_CrateBoosting_Base.Buff_CrateBoosting_Base_C
	 * Size -> 0x000F (FullSize[0x0B68] - InheritedSize[0x0B59])
	 */
	class ABuff_CrateBoosting_Base_C : public ABuff_Base_C
	{
	public:
		unsigned char                                              UnknownData_PBVM[0x7];                                   // 0x0B59(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CrateQualityMultiplier;                                  // 0x0B60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
