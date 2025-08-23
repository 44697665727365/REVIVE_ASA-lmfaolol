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
	 * BlueprintGeneratedClass WeapTekCruiseMissile_Base.WeapTekCruiseMissile_Base_C
	 * Size -> 0x0008 (FullSize[0x1118] - InheritedSize[0x1110])
	 */
	class AWeapTekCruiseMissile_Base_C : public AShooterWeapon_Projectile
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1110(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void delaybreakandironout(bool delayforzoomout);
		void ExecuteUbergraph_WeapTekCruiseMissile_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
