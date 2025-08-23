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
	 * BlueprintGeneratedClass PrimalItem_WeaponTekClaws.PrimalItem_WeaponTekClaws_C
	 * Size -> 0x0000 (FullSize[0x0EB0] - InheritedSize[0x0EB0])
	 */
	class UPrimalItem_WeaponTekClaws_C : public UPrimalItem_WeaponBaseClub_C
	{
	public:
		void BPAddedAttachments();
		void CanRunCosmeticEvents(bool* CanRun);
		void BlueprintUnequipped();
		void BlueprintOwnerPosssessed(class AController* PossessedByController);
		void BlueprintEquipped(bool bIsFromSaveGame);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
