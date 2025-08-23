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
	 * BlueprintGeneratedClass Buff_Base.Buff_Base_C
	 * Size -> 0x0009 (FullSize[0x0B59] - InheritedSize[0x0B50])
	 */
	class ABuff_Base_C : public APrimalBuff
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0B50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       bDismountingBuff;                                        // 0x0B58(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool BPCustomAllowAddBuff(class APrimalCharacter* ForCharacter, class AActor* DamageCauser);
		void BPDeactivated(class AActor* ForInstigator);
		void ExecuteUbergraph_Buff_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
