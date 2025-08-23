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
	 * BlueprintGeneratedClass WeapBaseClub.WeapBaseClub_C
	 * Size -> 0x0000 (FullSize[0x1040] - InheritedSize[0x1040])
	 */
	class AWeapBaseClub_C : public AShooterWeapon_Melee
	{
	public:
		void DoAppliedDamageToTarget(class AActor* DamageTarget, double ElementCostMultiplier, int32_t DamageIn, bool* bExtraDamage);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
