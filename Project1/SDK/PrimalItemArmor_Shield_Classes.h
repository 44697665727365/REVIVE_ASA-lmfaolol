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
	 * BlueprintGeneratedClass PrimalItemArmor_Shield.PrimalItemArmor_Shield_C
	 * Size -> 0x0008 (FullSize[0x0EC0] - InheritedSize[0x0EB8])
	 */
	class UPrimalItemArmor_Shield_C : public UPrimalItemArmorGeneric_C
	{
	public:
		class UParticleSystem*                                     ShieldHitImpactFX;                                       // 0x0EB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void BPClientHandleItemNetExecCommand(const class FName& CommandName, const struct FBPNetExecParams& ExecParams, class AShooterPlayerController* ForPC);
		void PlayHitShieldEffect(bool LocalOnly, const struct FVector& HitLoc, const struct FVector& fromLoc);
		float HandleShieldDamageBlocking(class AShooterCharacter* ForShooterCharacter, float DamageIn, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, const struct FVector& HitPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
