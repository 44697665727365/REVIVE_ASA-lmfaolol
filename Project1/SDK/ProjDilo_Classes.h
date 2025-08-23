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
	 * BlueprintGeneratedClass ProjDilo.ProjDilo_C
	 * Size -> 0x0018 (FullSize[0x07A0] - InheritedSize[0x0788])
	 */
	class AProjDilo_C : public APrimalProjectileDilo
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0788(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Audio1;                                                  // 0x0790(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                ChildProjectile;                                         // 0x0798(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void OnImpact(const struct FHitResult& HitResult, bool bFromReplication);
		void ExecuteUbergraph_ProjDilo(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
