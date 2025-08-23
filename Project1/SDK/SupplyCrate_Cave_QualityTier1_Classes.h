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
	 * BlueprintGeneratedClass SupplyCrate_Cave_QualityTier1.SupplyCrate_Cave_QualityTier1_C
	 * Size -> 0x0018 (FullSize[0x16B0] - InheritedSize[0x1698])
	 */
	class ASupplyCrate_Cave_QualityTier1_C : public ASupplyCrateBaseBP_Instantaneous_C
	{
	public:
		class UPrimalInventoryBP_SupplyCrate_C*                    PrimalInventoryBP_SupplyCrate_C1;                        // 0x1698(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SkeletalMesh1;                                           // 0x16A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ParticleSystem1;                                         // 0x16A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
