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
	 * BlueprintGeneratedClass PrimalItemArmor_HazardSuitHelmet.PrimalItemArmor_HazardSuitHelmet_C
	 * Size -> 0x0030 (FullSize[0x0EE8] - InheritedSize[0x0EB8])
	 */
	class UPrimalItemArmor_HazardSuitHelmet_C : public UPrimalItemArmor_BaseHelmet_C
	{
	public:
		unsigned char                                              BuffWhileEquipped[0x30];                                 // 0x0EB8(0x0030) UNKNOWN PROPERTY: SoftClassProperty

	public:
		void BlueprintEquipped(bool bIsFromSaveGame);
		void EquippedBlueprintTick(float DeltaSeconds);
		void SetForceGainOxygen(bool Enabled);
		void BlueprintUnequipped();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
