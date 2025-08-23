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
	 * BlueprintGeneratedClass TekArmor_EffectActor.TekArmor_EffectActor_C
	 * Size -> 0x0060 (FullSize[0x0518] - InheritedSize[0x04B8])
	 */
	class ATekArmor_EffectActor_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     TekSound;                                                // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            TekParticle;                                             // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Root;                                                    // 0x04D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class APrimalCharacter*                                    Ref_Player;                                              // 0x04D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class ATekArmor_EffectActor_C*                             SelfAsObj;                                               // 0x04E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     TekParticleRef;                                          // 0x04E8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          TekSoundRef;                                             // 0x04F0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash
		bool                                                       bSoundOn;                                                // 0x04F8(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		bool                                                       bParticlesOn;                                            // 0x04F9(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_96TI[0x6];                                   // 0x04FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ParticleScale;                                           // 0x0500(0x0018) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash

	public:
		void OnRep_ParticleScale();
		void OnRep_bParticlesOn();
		void OnRep_bSoundOn();
		void OnRep_TekSoundRef();
		void OnRep_TekParticleTemplate();
		void SetSoundActive(bool Active, double StartTime);
		void SetParticleActive(bool Active);
		void InitTekEffect(class UParticleSystem* particle, const struct FVector& ParticleScale, class USoundBase* Sound, class APrimalCharacter* Player);
		void PlayerDied(class APrimalCharacter* DiedCharacter);
		void SetTekFX(class UParticleSystem* particle, const struct FVector& ParticleScale, class USoundBase* Sound);
		void Replicate_SetSoundState(bool Active);
		void Replicate_SetParticleState(bool Active);
		void ExecuteUbergraph_TekArmor_EffectActor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
