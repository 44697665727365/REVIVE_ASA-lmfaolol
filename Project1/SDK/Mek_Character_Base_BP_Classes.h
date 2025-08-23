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
	 * BlueprintGeneratedClass Mek_Character_Base_BP.Mek_Character_Base_BP_C
	 * Size -> 0x0001 (FullSize[0x32E9] - InheritedSize[0x32E8])
	 */
	class AMek_Character_Base_BP_C : public ADino_Character_BP_C
	{
	public:
		bool                                                       SkipDurabilityPercentLossOnCryo;                         // 0x32E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
