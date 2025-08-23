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
	 * BlueprintGeneratedClass IsWithinAttackRangeAndGetBestAttack_SRV.IsWithinAttackRangeAndGetBestAttack_SRV_C
	 * Size -> 0x00D0 (FullSize[0x0168] - InheritedSize[0x0098])
	 */
	class UIsWithinAttackRangeAndGetBestAttack_SRV_C : public UBTService_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0098(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              IsWithinAttackRangeKey;                                  // 0x00A0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              LastCheckAttackRangeClosestPointKey;                     // 0x00C8(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              UseAltenateMovePoint;                                    // 0x00F0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              BestAttackIndexKey;                                      // 0x0118(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              AttackIntervalKey;                                       // 0x0140(0x0028) Edit, BlueprintVisible

	public:
		void UpdateBlackboardKeys(class APrimalDinoAIController* OwnerController);
		void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
		void ExecuteUbergraph_IsWithinAttackRangeAndGetBestAttack_SRV(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
