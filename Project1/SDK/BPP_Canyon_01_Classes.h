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
	 * BlueprintGeneratedClass BPP_Canyon_01.BPP_Canyon_01_C
	 * Size -> 0x0018 (FullSize[0x0560] - InheritedSize[0x0548])
	 */
	class ABPP_Canyon_01_C : public APackedLevelActor
	{
	public:
		class UInstancedStaticMeshComponent*                       InstancedStaticMesh2;                                    // 0x0548(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UInstancedStaticMeshComponent*                       InstancedStaticMesh1;                                    // 0x0550(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UInstancedStaticMeshComponent*                       InstancedStaticMesh;                                     // 0x0558(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
