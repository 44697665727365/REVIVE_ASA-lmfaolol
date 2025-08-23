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
	 * Function DmgType_Melee_Dino_Carnivore_Large_Gnash_TamedAttackerOnly.DmgType_Melee_Dino_Carnivore_Large_Gnash_TamedAttackerOnly_C.OverrideBuffToGiveVictimCharacter
	 */
	struct UDmgType_Melee_Dino_Carnivore_Large_Gnash_TamedAttackerOnly_C_OverrideBuffToGiveVictimCharacter_Params
	{
	public:
		class APrimalCharacter*                                    Victim;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		float                                                      IncomingDamage;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D889[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0010(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class AController*                                         EventInstigator;                                         // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
