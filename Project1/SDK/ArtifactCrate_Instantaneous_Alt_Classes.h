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
	 * BlueprintGeneratedClass ArtifactCrate_Instantaneous_Alt.ArtifactCrate_Instantaneous_Alt_C
	 * Size -> 0x0040 (FullSize[0x16D8] - InheritedSize[0x1698])
	 */
	class AArtifactCrate_Instantaneous_Alt_C : public ASupplyCrateBaseBP_Instantaneous_C
	{
	public:
		class UPointLightComponent*                                PointLight_1;                                            // 0x1698(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPrimalInventoryBP_ArtifactCrate_C*                  PrimalInventoryBP_ArtifactCrate_C1;                      // 0x16A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SkeletalMesh1;                                           // 0x16A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            ParticleSystem1;                                         // 0x16B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        LightColor;                                              // 0x16B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LightIntensity;                                          // 0x16C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LightAttenuation;                                        // 0x16D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
