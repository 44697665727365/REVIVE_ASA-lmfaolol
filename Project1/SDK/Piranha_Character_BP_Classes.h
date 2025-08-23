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
	 * BlueprintGeneratedClass Piranha_Character_BP.Piranha_Character_BP_C
	 * Size -> 0x0010 (FullSize[0x32F8] - InheritedSize[0x32E8])
	 */
	class APiranha_Character_BP_C : public ADino_Character_BP_C
	{
	public:
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Base;                       // 0x32E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDinoCharacterStatusComponent_BP_Piranha_C*          DinoCharacterStatus_BP_Piranha_C1;                       // 0x32F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void BPTimerServer();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
