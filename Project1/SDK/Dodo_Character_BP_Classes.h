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
	 * BlueprintGeneratedClass Dodo_Character_BP.Dodo_Character_BP_C
	 * Size -> 0x0020 (FullSize[0x3308] - InheritedSize[0x32E8])
	 */
	class ADodo_Character_BP_C : public ADino_Character_BP_C
	{
	public:
		class UProximitySound_C*                                   ProximitySound;                                          // 0x32E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNS_DinoFootprint_BP_C*                              NS_DinoFootprint_BP;                                     // 0x32F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_PrimalWindSourceComponent_Base_C*                BP_PrimalWindSourceComponent_Base;                       // 0x32F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UDinoCharacterStatusComponent_BP_Dodo_C*             DinoCharacterStatus_BP_Dodo_C1;                          // 0x3300(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
