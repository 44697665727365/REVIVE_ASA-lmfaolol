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
	 * BlueprintGeneratedClass PrimalItem_WeaponTekGrenadeLauncher.PrimalItem_WeaponTekGrenadeLauncher_C
	 * Size -> 0x0000 (FullSize[0x0EB0] - InheritedSize[0x0EB0])
	 */
	class UPrimalItem_WeaponTekGrenadeLauncher_C : public UPrimalItemWeaponGeneric_C
	{
	public:
		class FString BPGetItemDescription(const class FString& InDescription, bool bGetLongDescription, class AShooterPlayerController* ForPC);
		class FString BPGetCustomInventoryWidgetText();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
