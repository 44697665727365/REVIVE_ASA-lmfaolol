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
	 * BlueprintGeneratedClass Attack_SRV.Attack_SRV_C
	 * Size -> 0x0030 (FullSize[0x00C8] - InheritedSize[0x0098])
	 */
	class UAttack_SRV_C : public UBTService_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0098(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              IsAttackingKey;                                          // 0x00A0(0x0028) Edit, BlueprintVisible

	public:
		void ReceiveActivation(class AActor* OwnerActor);
		void ReceiveDeactivation(class AActor* OwnerActor);
		void ExecuteUbergraph_Attack_SRV(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
