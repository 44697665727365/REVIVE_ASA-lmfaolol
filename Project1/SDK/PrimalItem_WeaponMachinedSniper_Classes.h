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
	 * BlueprintGeneratedClass PrimalItem_WeaponMachinedSniper.PrimalItem_WeaponMachinedSniper_C
	 * Size -> 0x0010 (FullSize[0x0EC0] - InheritedSize[0x0EB0])
	 */
	class UPrimalItem_WeaponMachinedSniper_C : public UPrimalItemWeaponGenericGun_C
	{
	public:
		unsigned char                                              DinosNotAllowEquip[0x10];                                // 0x0EB0(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		bool BPPreventWeaponEquip();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
