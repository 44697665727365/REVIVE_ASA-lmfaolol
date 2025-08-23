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
	 * BlueprintGeneratedClass Buff_Stunned.Buff_Stunned_C
	 * Size -> 0x001F (FullSize[0x0B78] - InheritedSize[0x0B59])
	 */
	class ABuff_Stunned_C : public ABuff_Base_C
	{
	public:
		unsigned char                                              UnknownData_ZVR9[0x7];                                   // 0x0B59(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     StunWeightLimit;                                         // 0x0B60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        HumanStunAnimWalking;                                    // 0x0B68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        HumanStunAnimSwimming;                                   // 0x0B70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		bool BPCustomAllowAddBuff(class APrimalCharacter* ForCharacter, class AActor* DamageCauser);
		bool BPCheckPreventInput(EPrimalCharacterInputType inputType);
		void BPDeactivated(class AActor* ForInstigator);
		void BPSetupForInstigator(class AActor* ForInstigator);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
