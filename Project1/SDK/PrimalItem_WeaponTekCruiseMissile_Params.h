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
	 * Function PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C.BPProcessEditText
	 */
	struct UPrimalItem_WeaponTekCruiseMissile_C_BPProcessEditText_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FString                                              TextToUse;                                               // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4IIT[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C.Set Scout Character Status Values
	 */
	struct UPrimalItem_WeaponTekCruiseMissile_C_SetScoutCharacterStatusValues_Params
	{
	public:
		TArray<double>                                             Stats;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C.Missile Released Possessing Survivor
	 */
	struct UPrimalItem_WeaponTekCruiseMissile_C_MissileReleasedPossessingSurvivor_Params
	{
	public:
		bool                                                       delayforzoomout;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8OTD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItem_WeaponTekCruiseMissile.PrimalItem_WeaponTekCruiseMissile_C.Missile Possessed by Survivor
	 */
	struct UPrimalItem_WeaponTekCruiseMissile_C_MissilePossessedbySurvivor_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
