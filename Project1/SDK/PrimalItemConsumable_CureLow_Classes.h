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
	 * BlueprintGeneratedClass PrimalItemConsumable_CureLow.PrimalItemConsumable_CureLow_C
	 * Size -> 0x0008 (FullSize[0x0EB8] - InheritedSize[0x0EB0])
	 */
	class UPrimalItemConsumable_CureLow_C : public UPrimalItemConsumableGeneric_C
	{
	public:
		class UPrimalItem*                                         SelfObj;                                                 // 0x0EB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void BlueprintUsed();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
