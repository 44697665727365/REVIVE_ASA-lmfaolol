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
	 * Function WeapSword_Tek.WeapSword_Tek_C.DoAppliedDamageToTarget
	 */
	struct AWeapSword_Tek_C_DoAppliedDamageToTarget_Params
	{
	public:
		class AActor*                                              DamageTarget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                                     ElementCostMultiplier;                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DamageIn;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bExtraDamage;                                            // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeapSword_Tek.WeapSword_Tek_C.OnRep_HideWeapon
	 */
	struct AWeapSword_Tek_C_OnRep_HideWeapon_Params
	{	};

	/**
	 * Function WeapSword_Tek.WeapSword_Tek_C.AppliedDamageToTarget
	 */
	struct AWeapSword_Tek_C_AppliedDamageToTarget_Params
	{
	public:
		class AActor*                                              DamageTarget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                                     ElementCostMultiplier;                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DamageIn;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bExtraDamage;                                            // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeapSword_Tek.WeapSword_Tek_C.BPWeaponDealDamage
	 */
	struct AWeapSword_Tek_C_BPWeaponDealDamage_Params
	{
	public:
		struct FHitResult                                          Impact;                                                  // 0x0000(0x00F0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		struct FVector                                             ShootDir;                                                // 0x00F0(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DamageAmount;                                            // 0x0108(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LACN[0x4];                                   // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              DamageType;                                              // 0x0110(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		float                                                      Impulse;                                                 // 0x0118(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x011C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeapSword_Tek.WeapSword_Tek_C.BPStartEquippedNotify
	 */
	struct AWeapSword_Tek_C_BPStartEquippedNotify_Params
	{	};

	/**
	 * Function WeapSword_Tek.WeapSword_Tek_C.StartUnequipEvent
	 */
	struct AWeapSword_Tek_C_StartUnequipEvent_Params
	{	};

	/**
	 * Function WeapSword_Tek.WeapSword_Tek_C.ReceiveTick
	 */
	struct AWeapSword_Tek_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeapSword_Tek.WeapSword_Tek_C.BPHandleMeleeAttack
	 */
	struct AWeapSword_Tek_C_BPHandleMeleeAttack_Params
	{	};

	/**
	 * Function WeapSword_Tek.WeapSword_Tek_C.BPAppliedPrimalItemToWeapon
	 */
	struct AWeapSword_Tek_C_BPAppliedPrimalItemToWeapon_Params
	{	};

	/**
	 * Function WeapSword_Tek.WeapSword_Tek_C.UserConstructionScript
	 */
	struct AWeapSword_Tek_C_UserConstructionScript_Params
	{	};

	/**
	 * Function WeapSword_Tek.WeapSword_Tek_C.PlayAttackSound
	 */
	struct AWeapSword_Tek_C_PlayAttackSound_Params
	{	};

	/**
	 * Function WeapSword_Tek.WeapSword_Tek_C.NetDoPlayMeleeAttackSound
	 */
	struct AWeapSword_Tek_C_NetDoPlayMeleeAttackSound_Params
	{	};

	/**
	 * Function WeapSword_Tek.WeapSword_Tek_C.ExecuteUbergraph_WeapSword_Tek
	 */
	struct AWeapSword_Tek_C_ExecuteUbergraph_WeapSword_Tek_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
