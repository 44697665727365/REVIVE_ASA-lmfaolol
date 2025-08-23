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
	 * BlueprintGeneratedClass IsTamed.IsTamed_C
	 * Size -> 0x0008 (FullSize[0x00A8] - InheritedSize[0x00A0])
	 */
	class UIsTamed_C : public UBTDecorator_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceiveConditionCheck(class AActor* OwnerActor);
		void ExecuteUbergraph_IsTamed(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
