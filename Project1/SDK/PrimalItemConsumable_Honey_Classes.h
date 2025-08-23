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
	 * BlueprintGeneratedClass PrimalItemConsumable_Honey.PrimalItemConsumable_Honey_C
	 * Size -> 0x0008 (FullSize[0x0EB8] - InheritedSize[0x0EB0])
	 */
	class UPrimalItemConsumable_Honey_C : public UPrimalItemConsumableEatable_C
	{
	public:
		class UClass*                                              WasThrownBuffToAdd;                                      // 0x0EB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void BPNotifyDropped(class APrimalCharacter* FromCharacter, bool bWasThrown);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
