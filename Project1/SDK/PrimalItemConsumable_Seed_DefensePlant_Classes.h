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
	 * BlueprintGeneratedClass PrimalItemConsumable_Seed_DefensePlant.PrimalItemConsumable_Seed_DefensePlant_C
	 * Size -> 0x0011 (FullSize[0x0EC1] - InheritedSize[0x0EB0])
	 */
	class UPrimalItemConsumable_Seed_DefensePlant_C : public UPrimalItemConsumableSeed_C
	{
	public:
		int32_t                                                    NumTurrets;                                              // 0x0EB0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_80X5[0x4];                                   // 0x0EB4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastCheckTime;                                           // 0x0EB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       lastCheckReturn;                                         // 0x0EC0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool BPAllowRemoteAddToInventory(class UPrimalInventoryComponent* invComp, class AShooterPlayerController* ByPC, bool bRequestedByPlayer);
		bool BPCanAddToInventory(class UPrimalInventoryComponent* ToInventory);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
