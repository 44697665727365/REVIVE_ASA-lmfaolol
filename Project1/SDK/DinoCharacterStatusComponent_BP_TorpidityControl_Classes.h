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
	 * BlueprintGeneratedClass DinoCharacterStatusComponent_BP_TorpidityControl.DinoCharacterStatusComponent_BP_TorpidityControl_C
	 * Size -> 0x0001 (FullSize[0x10E9] - InheritedSize[0x10E8])
	 */
	class UDinoCharacterStatusComponent_BP_TorpidityControl_C : public UDinoCharacterStatusComponent_BP_C
	{
	public:
		bool                                                       bAllowTorpidityIncrease;                                 // 0x10E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		float BPAdjustStatusValueModification(EPrimalCharacterStatusValue ValueType, float Amount, class UClass* DamageTypeClass, bool bManualModification);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
