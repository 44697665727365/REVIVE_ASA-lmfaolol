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
	 * BlueprintGeneratedClass WeapSword_Tek.WeapSword_Tek_C
	 * Size -> 0x0238 (FullSize[0x1278] - InheritedSize[0x1040])
	 */
	class AWeapSword_Tek_C : public AWeapSword_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1040(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPointLightComponent*                                PointLight1;                                             // 0x1048(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight;                                              // 0x1050(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio1;                                                  // 0x1058(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ParticleSystem2;                                         // 0x1060(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM1P;                                                    // 0x1068(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ParticleSystem1;                                         // 0x1070(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM3P;                                                    // 0x1078(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       bRepHasAmmo;                                             // 0x1080(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4S92[0x7];                                   // 0x1081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CharacterElementCostPerHit;                              // 0x1088(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     GenericStructureSettingsElementCostPerHit;               // 0x1090(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<double>                                             SpecificStructureSettingsElementCostPerHit;              // 0x1098(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UClass*>                                      SpecificStructureSettings;                               // 0x10A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     ExtraStructureDamageMultiplier;                          // 0x10B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AmmoCostPerSwing;                                        // 0x10C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HideWeapon;                                              // 0x10C4(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CY3N[0x3];                                   // 0x10C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          AttackSound;                                             // 0x10C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseColorTypeParamForParticleSystem;                     // 0x10D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_M0QN[0x7];                                   // 0x10D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         WeaponStaticMesh;                                        // 0x10D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     WeaponParticleSystem;                                    // 0x10E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XWXJ[0x8];                                   // 0x10E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          _3PMeshTransformOverride;                                // 0x10F0(0x0060) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          _1PMeshTransformOverride;                                // 0x1150(0x0060) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          FPVWeaponParticleSystemTransformOverride;                // 0x11B0(0x0060) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          TPVWeaponParticleSystemTransformOverride;                // 0x1210(0x0060) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          OverrideLoopingIdleAudio;                                // 0x1270(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void DoAppliedDamageToTarget(class AActor* DamageTarget, double ElementCostMultiplier, int32_t DamageIn, bool* bExtraDamage);
		void OnRep_HideWeapon();
		void AppliedDamageToTarget(class AActor* DamageTarget, double ElementCostMultiplier, int32_t DamageIn, bool* bExtraDamage);
		int32_t BPWeaponDealDamage(const struct FHitResult& Impact, const struct FVector& ShootDir, int32_t DamageAmount, class UClass* DamageType, float Impulse);
		void BPStartEquippedNotify();
		void StartUnequipEvent();
		void ReceiveTick(float DeltaSeconds);
		void BPHandleMeleeAttack();
		void BPAppliedPrimalItemToWeapon();
		void UserConstructionScript();
		void PlayAttackSound();
		void NetDoPlayMeleeAttackSound();
		void ExecuteUbergraph_WeapSword_Tek(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
