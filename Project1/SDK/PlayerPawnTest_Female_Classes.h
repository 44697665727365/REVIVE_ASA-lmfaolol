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
	 * BlueprintGeneratedClass PlayerPawnTest_Female.PlayerPawnTest_Female_C
	 * Size -> 0x000F (FullSize[0x2AB0] - InheritedSize[0x2AA1])
	 */
	class APlayerPawnTest_Female_C : public APlayerPawnTest_Child_C
	{
	public:
		unsigned char                                              UnknownData_SFR3[0x7];                                   // 0x2AA1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayerCharacterStatusComponent_BP_C*                PlayerCharacterStatus;                                   // 0x2AA8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
