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
	 * BlueprintGeneratedClass WeapTekClaws_Base.WeapTekClaws_Base_C
	 * Size -> 0x0000 (FullSize[0x1128] - InheritedSize[0x1128])
	 */
	class AWeapTekClaws_Base_C : public AShooterWeapon_MeleeLock
	{
	public:
		void OnPrimalItemEquipped();
		void OnAttachmentsAdded();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
