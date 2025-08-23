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
	 * BlueprintGeneratedClass BP_FallingTree.BP_FallingTree_C
	 * Size -> 0x0028 (FullSize[0x0618] - InheritedSize[0x05F0])
	 */
	class ABP_FallingTree_C : public APrimalFallingTreeActor
	{
	public:
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Base;                       // 0x05F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      WindSourceSizeOld;                                       // 0x05F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bWindFalling;                                            // 0x05FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PPG5[0x3];                                   // 0x05FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             init_bounds;                                             // 0x0600(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateWindSource(float DeltaTime);
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
