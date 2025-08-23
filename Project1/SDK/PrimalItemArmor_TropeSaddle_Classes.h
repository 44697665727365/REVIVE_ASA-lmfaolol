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
	 * BlueprintGeneratedClass PrimalItemArmor_TropeSaddle.PrimalItemArmor_TropeSaddle_C
	 * Size -> 0x0004 (FullSize[0x0ECC] - InheritedSize[0x0EC8])
	 */
	class UPrimalItemArmor_TropeSaddle_C : public UPrimalItemArmor_SaddleGeneric_C
	{
	public:
		int32_t                                                    TooltipDisplayQualityOffset;                             // 0x0EC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class FString GetInventoryIconDisplayText();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
