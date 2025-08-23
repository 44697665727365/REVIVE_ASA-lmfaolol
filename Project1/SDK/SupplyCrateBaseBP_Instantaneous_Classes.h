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
	 * BlueprintGeneratedClass SupplyCrateBaseBP_Instantaneous.SupplyCrateBaseBP_Instantaneous_C
	 * Size -> 0x0020 (FullSize[0x1698] - InheritedSize[0x1678])
	 */
	class ASupplyCrateBaseBP_Instantaneous_C : public APrimalStructureItemContainer_SupplyCrate
	{
	public:
		class UStaticMeshComponent*                                LightBlocker;                                            // 0x1678(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight;                                              // 0x1680(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     Audio1;                                                  // 0x1688(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    StasisComponent;                                         // 0x1690(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
