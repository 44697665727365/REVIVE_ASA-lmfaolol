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
	 * BlueprintGeneratedClass PrimalItem_BossTributeGeneric.PrimalItem_BossTributeGeneric_C
	 * Size -> 0x0040 (FullSize[0x0EF0] - InheritedSize[0x0EB0])
	 */
	class UPrimalItem_BossTributeGeneric_C : public UPrimalItem_Base_C
	{
	public:
		unsigned char                                              BossArenaManagerClass[0x30];                             // 0x0EB0(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              AdditionalBossArenaManagersToCheck[0x10];                // 0x0EE0(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		class FString BPAllowCrafting(class AShooterPlayerController* ForPC);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
