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
	 * BlueprintGeneratedClass WeapClimbPick.WeapClimbPick_C
	 * Size -> 0x0070 (FullSize[0x17F0] - InheritedSize[0x1780])
	 */
	class AWeapClimbPick_C : public AShooterWeapon_Climb
	{
	public:
		class UStaticMeshComponent*                                ClimbingPickLeftTPV;                                     // 0x1780(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ClimbAnchorParticles;                                    // 0x1788(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ClimbAnchor;                                             // 0x1790(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ClimbTargetParticles;                                    // 0x1798(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ClimbTarget;                                             // 0x17A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                ClimbingPickLeft;                                        // 0x17A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                ClimbingPickTPV;                                         // 0x17B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                ClimbingPick;                                            // 0x17B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     ClimbAnchorInterpSpeed;                                  // 0x17C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClimbTargetInterpSpeed;                                  // 0x17C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     ValidTemplate;                                           // 0x17D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     WalkableTemplate;                                        // 0x17D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UParticleSystem*                                     InvalidTemplate;                                         // 0x17E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     ClimbingFOVMultiplier;                                   // 0x17E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BPOnWeaponAnimPlayedNotify(const struct FWeaponAnim& Animation, float InPlayRate, bool bPlayBothFirstAndThirdPerson, bool bReplicate, bool bReplicateToInstigator, bool bPauseOnFinish1P, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer);
		void StartUnequipEvent();
		float BPModifyFOV(float inFOV);
		void SetSourceLocation(class UParticleSystemComponent* ParticleSystem, const struct FVector& NewSourcePoint);
		void SetTemplateTo(class UParticleSystemComponent* ParticleSystem, class UParticleSystem* NewTemplate);
		void BPUpdateClimbTarget(float DeltaSeconds, bool bClimbing, const struct FVector& AnchorPosition, const struct FVector& AnchorNormal, bool bCanClimb, bool bCanLand, const struct FVector& ClimbLocation, const struct FVector& ClimbNormal, bool bHudVisible);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
