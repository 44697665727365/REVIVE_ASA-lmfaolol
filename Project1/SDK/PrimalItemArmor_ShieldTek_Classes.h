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
	 * BlueprintGeneratedClass PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C
	 * Size -> 0x0027 (FullSize[0x0F40] - InheritedSize[0x0F19])
	 */
	class UPrimalItemArmor_ShieldTek_C : public UPrimalItemArmor_Base_Tek_C
	{
	public:
		unsigned char                                              UnknownData_H1RE[0x7];                                   // 0x0F19(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     DurabilityCostPerReflection;                             // 0x0F20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              MjolnirProjectileClass;                                  // 0x0F28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FString                                              MjolnirProjectileSoftRef;                                // 0x0F30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void BPClientHandleItemNetExecCommand(const class FName& CommandName, const struct FBPNetExecParams& ExecParams, class AShooterPlayerController* ForPC);
		void PlayHitShieldEffect(bool bLocalOnly);
		bool BPConsumeProjectileImpact(class AShooterProjectile* TheProjectile, const struct FHitResult& HitResult);
		void BPAddedAttachments();
		void RefreshAmmoMaterial();
		void ClientUpdatedWeaponClipAmmo();
		float HandleShieldDamageBlocking(class AShooterCharacter* ForShooterCharacter, float DamageIn, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, const struct FVector& HitPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
