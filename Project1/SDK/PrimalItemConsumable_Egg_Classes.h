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
	 * BlueprintGeneratedClass PrimalItemConsumable_Egg.PrimalItemConsumable_Egg_C
	 * Size -> 0x0030 (FullSize[0x0EE0] - InheritedSize[0x0EB0])
	 */
	class UPrimalItemConsumable_Egg_C : public UPrimalItemConsumableEatable_C
	{
	public:
		struct FVector                                             IncubatorDisplay3DScale;                                 // 0x0EB0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             IncubatorLocationOffset;                                 // 0x0EC8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool BPAllowRemoteAddToInventory(class UPrimalInventoryComponent* invComp, class AShooterPlayerController* ByPC, bool bRequestedByPlayer);
		class FString BPGetCustomInventoryWidgetText();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
