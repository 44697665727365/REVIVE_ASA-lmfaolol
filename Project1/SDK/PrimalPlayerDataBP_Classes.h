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
	 * BlueprintGeneratedClass PrimalPlayerDataBP.PrimalPlayerDataBP_C
	 * Size -> 0x0000 (FullSize[0x0610] - InheritedSize[0x0610])
	 */
	class UPrimalPlayerDataBP_C : public UPrimalPlayerDataBP_Base_C
	{
	public:
		void BPAppliedToPlayerState(class AShooterPlayerState* ForPlayerState);
		void BPApplyToPlayerCharacter(class AShooterPlayerState* ForPlayerState, class AShooterCharacter* NewPlayerCharacter);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
