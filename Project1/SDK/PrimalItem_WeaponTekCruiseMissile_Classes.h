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
	 * BlueprintGeneratedClass PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C
	 * Size -> 0x0000 (FullSize[0x0EB0] - InheritedSize[0x0EB0])
	 */
	class UPrimalItem_WeaponTekCruiseMissile_C : public UPrimalItem_CruiseMissile
	{
	public:
		bool BPProcessEditText(class AShooterPlayerController* ForPC, const class FString& TextToUse);
		void SetScoutCharacterStatusValues(TArray<double>* Stats);
		void MissileReleasedPossessingSurvivor(bool delayforzoomout);
		void MissilePossessedbySurvivor();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
