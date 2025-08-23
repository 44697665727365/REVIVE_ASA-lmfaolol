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
	 * BlueprintGeneratedClass Dino_AIController_BP.Dino_AIController_BP_C
	 * Size -> 0x0038 (FullSize[0x0A68] - InheritedSize[0x0A30])
	 */
	class ADino_AIController_BP_C : public APrimalDinoAIController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A30(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UGameplayTasksComponent*                             GameplayTasks;                                           // 0x0A38(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FBlackboardKeySelector                              NavKey;                                                  // 0x0A40(0x0028) Edit, BlueprintVisible

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Dino_AIController_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
