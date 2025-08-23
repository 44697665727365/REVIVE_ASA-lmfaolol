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
	 * BlueprintGeneratedClass MoveAroundBlockade_DR.MoveAroundBlockade_DR_C
	 * Size -> 0x0030 (FullSize[0x00D0] - InheritedSize[0x00A0])
	 */
	class UMoveAroundBlockade_DR_C : public UBTDecorator_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              MoveAroundBlocakdeKey;                                   // 0x00A8(0x0028) Edit, BlueprintVisible

	public:
		void ReceiveExecutionFinish(class AActor* OwnerActor, EBTNodeResult NodeResult);
		void ReceiveConditionCheck(class AActor* OwnerActor);
		void ReceiveExecutionStart(class AActor* OwnerActor);
		void ExecuteUbergraph_MoveAroundBlockade_DR(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
