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
	 * BlueprintGeneratedClass Trilobite_Character.Trilobite_Character_C
	 * Size -> 0x0018 (FullSize[0x3300] - InheritedSize[0x32E8])
	 */
	class ATrilobite_Character_C : public AInsect_Character_Base_C
	{
	public:
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Base;                       // 0x32E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStructurePaintingComponent*                         StructurePainting;                                       // 0x32F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDinoCharacterStatusComponent_BP_Trilobite_C*        DinoCharacterStatus_BP_Trilobite_C1;                     // 0x32F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		bool BP_ForceAllowAddBuff(class UClass* BuffClass);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
