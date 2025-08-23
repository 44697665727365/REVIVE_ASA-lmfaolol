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
	 * BlueprintGeneratedClass ExplorerChest_SheWhoWaits.ExplorerChest_SheWhoWaits_C
	 * Size -> 0x0010 (FullSize[0x0540] - InheritedSize[0x0530])
	 */
	class AExplorerChest_SheWhoWaits_C : public AExplorerChest_Base_C
	{
	public:
		class UPointLightComponent*                                PointLight1;                                             // 0x0530(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SkeletalMesh2;                                           // 0x0538(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
