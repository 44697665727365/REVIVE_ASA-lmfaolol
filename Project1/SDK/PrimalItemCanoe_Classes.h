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
	 * BlueprintGeneratedClass PrimalItemCanoe.PrimalItemCanoe_C
	 * Size -> 0x0000 (FullSize[0x0EB0] - InheritedSize[0x0EB0])
	 */
	class UPrimalItemCanoe_C : public UPrimalItem_Base_C
	{
	public:
		bool BPCanUse(bool bIgnoreCooldown);
		class UTexture2D* BPGetItemIcon(class AShooterPlayerController* ForPC);
		class UMaterialInterface* BPGetCustomIconMaterialParent();
		void SetColors();
		void BPInitIconMaterial();
		class FString BPGetItemName(const class FString& ItemNameIn, class AShooterPlayerController* ForPC);
		class FString BPGetCustomDurabilityText();
		float BPGetItemDurabilityPercentage();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
