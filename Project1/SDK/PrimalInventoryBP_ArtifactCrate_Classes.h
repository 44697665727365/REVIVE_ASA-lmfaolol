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
	 * BlueprintGeneratedClass PrimalInventoryBP_ArtifactCrate.PrimalInventoryBP_ArtifactCrate_C
	 * Size -> 0x0008 (FullSize[0x0668] - InheritedSize[0x0660])
	 */
	class UPrimalInventoryBP_ArtifactCrate_C : public UPrimalInventoryComponent
	{
	public:
		class UClass*                                              SingleplayerDefaultItemToRemove;                         // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void BPPreInitDefaultInventory();
		void BPRequestedInventoryItems(class AShooterPlayerController* ForPC);
		void BPInventoryRefresh();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
