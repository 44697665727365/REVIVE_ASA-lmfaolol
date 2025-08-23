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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function PrimalPlayerDataBP.PrimalPlayerDataBP_C.BPAppliedToPlayerState
	 */
	struct UPrimalPlayerDataBP_C_BPAppliedToPlayerState_Params
	{
	public:
		class AShooterPlayerState*                                 ForPlayerState;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalPlayerDataBP.PrimalPlayerDataBP_C.BPApplyToPlayerCharacter
	 */
	struct UPrimalPlayerDataBP_C_BPApplyToPlayerCharacter_Params
	{
	public:
		class AShooterPlayerState*                                 ForPlayerState;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AShooterCharacter*                                   NewPlayerCharacter;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
