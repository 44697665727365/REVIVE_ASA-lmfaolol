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
	 * BlueprintGeneratedClass AttackMove_DR.AttackMove_DR_C
	 * Size -> 0x0008 (FullSize[0x00A8] - InheritedSize[0x00A0])
	 */
	class UAttackMove_DR_C : public UBTDecorator_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceiveConditionCheck(class AActor* OwnerActor);
		void ExecuteUbergraph_AttackMove_DR(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
