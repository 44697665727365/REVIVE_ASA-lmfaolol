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
	 * BlueprintGeneratedClass Dino_Character_BP_VariableAnim.Dino_Character_BP_VariableAnim_C
	 * Size -> 0x0049 (FullSize[0x3331] - InheritedSize[0x32E8])
	 */
	class ADino_Character_BP_VariableAnim_C : public ADino_Character_BP_C
	{
	public:
		class UAnimSequence*                                       SequenceChargeFwd;                                       // 0x32E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       SequenceChargeLft;                                       // 0x32F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       SequenceChargeRit;                                       // 0x32F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       SequenceIdle;                                            // 0x3300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       SequenceMoveFwd;                                         // 0x3308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       SequenceMoveLft;                                         // 0x3310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       SequenceMoveRit;                                         // 0x3318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       SequenceExtraAdditive;                                   // 0x3320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAimOffsetBlendSpace*                                DynAimOffset;                                            // 0x3328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       bUseExtraAdditive;                                       // 0x3330(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
