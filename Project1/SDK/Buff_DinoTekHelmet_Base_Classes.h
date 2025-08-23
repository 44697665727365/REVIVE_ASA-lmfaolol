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
	 * BlueprintGeneratedClass Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C
	 * Size -> 0x00D7 (FullSize[0x0C30] - InheritedSize[0x0B59])
	 */
	class ABuff_DinoTekHelmet_Base_C : public ABuff_Base_C
	{
	public:
		unsigned char                                              UnknownData_OVL1[0x7];                                   // 0x0B59(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0B60(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       bHelmetActivated;                                        // 0x0B68(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9L0O[0x7];                                   // 0x0B69(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        ActivatedMontage;                                        // 0x0B70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        DeactivatedMontage;                                      // 0x0B78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     LastActivatedHelmetTime;                                 // 0x0B80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bNextSide;                                               // 0x0B88(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GOGB[0x7];                                   // 0x0B89(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastAttackTime;                                          // 0x0B90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              ProjectileClass;                                         // 0x0B98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     ActivatedTPVZMult;                                       // 0x0BA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ActivatedFPVZMult;                                       // 0x0BA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        ShootAnimLeft;                                           // 0x0BB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        ShootAnimRight;                                          // 0x0BB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsTargetingModeEnabled;                                 // 0x0BC0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3X9H[0x7];                                   // 0x0BC1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     SocketClampDelta;                                        // 0x0BC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MinAttackInterval;                                       // 0x0BD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LastHelmetActivatedTime;                                 // 0x0BD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     HelmetActivatedAttackInterval;                           // 0x0BE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ElementDecreasePerShot;                                  // 0x0BE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9APB[0x4];                                   // 0x0BEC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              DisabledInVolumePreventWeaponClass[0x30];                // 0x0BF0(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		class UClass*                                              SaddleItemClass;                                         // 0x0C20(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     DurabilitycostPerShot;                                   // 0x0C28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void IsElectricalStormActive(bool* Return);
		void GetSocketClampDelta(double* OutSocketClampDelta);
		void BPSetupForInstigator(class AActor* ForInstigator);
		void BPDrawBuffStatusHUD(class AShooterHUD* HUD, float XPos, float YPos, float ScaleMult);
		void IsAllowedToFire(const struct FVector& AimAtLoc, const struct FVector& ServerSpawnAtLoc, bool* bAllowed);
		bool HideBuffFromHUD();
		void SetTargeting(bool bTargetingEnabled);
		void BuffTickClient(float DeltaTime);
		void LocalDoAttack(bool* bDidAttack);
		void PlayItemAnim(class UAnimMontage* PlayAnim);
		void GetTekSaddleItem(class UPrimalItem** TekSaddleItem);
		void ActivateHelmet();
		void DeactivateHelmet();
		void PressedAltFire();
		void DoServerActivateHelmet();
		void DoServerDeactivateHelmet();
		void ServerDoAttack(const struct FVector& AimAtLoc, const struct FVector& ServerSpawnAtLoc);
		void DoAttack(const struct FVector& AimAtLoc, bool bLeftSide, const struct FVector& ServerSpawnAtLoc);
		void CheckForItem();
		void ExecuteUbergraph_Buff_DinoTekHelmet_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
