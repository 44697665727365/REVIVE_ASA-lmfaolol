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
	 * BlueprintGeneratedClass ProjTekDinoHelmet.ProjTekDinoHelmet_C
	 * Size -> 0x0030 (FullSize[0x07B8] - InheritedSize[0x0788])
	 */
	class AProjTekDinoHelmet_C : public AShooterProjectile
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0788(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UChildActorComponent*                                ChildActor1;                                             // 0x0790(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             StartLocation;                                           // 0x0798(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MaxStructureImpactDistance;                              // 0x07B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool BPIgnoreRadialDamageVictim(class AActor* Victim);
		void ReceiveBeginPlay();
		void OnExplode(const struct FHitResult& Result);
		void ExecuteUbergraph_ProjTekDinoHelmet(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
