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
	 * Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.BPClientHandleItemNetExecCommand
	 */
	struct UPrimalItemArmor_ShieldTek_C_BPClientHandleItemNetExecCommand_Params
	{
	public:
		class FName                                                CommandName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0008(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class AShooterPlayerController*                            ForPC;                                                   // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.PlayHitShieldEffect
	 */
	struct UPrimalItemArmor_ShieldTek_C_PlayHitShieldEffect_Params
	{
	public:
		bool                                                       bLocalOnly;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.BPConsumeProjectileImpact
	 */
	struct UPrimalItemArmor_ShieldTek_C_BPConsumeProjectileImpact_Params
	{
	public:
		class AShooterProjectile*                                  TheProjectile;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitResult;                                               // 0x0008(0x00F0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		bool                                                       ReturnValue;                                             // 0x00F8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MR8M[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.BPAddedAttachments
	 */
	struct UPrimalItemArmor_ShieldTek_C_BPAddedAttachments_Params
	{	};

	/**
	 * Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.RefreshAmmoMaterial
	 */
	struct UPrimalItemArmor_ShieldTek_C_RefreshAmmoMaterial_Params
	{	};

	/**
	 * Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.ClientUpdatedWeaponClipAmmo
	 */
	struct UPrimalItemArmor_ShieldTek_C_ClientUpdatedWeaponClipAmmo_Params
	{	};

	/**
	 * Function PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C.HandleShieldDamageBlocking
	 */
	struct UPrimalItemArmor_ShieldTek_C_HandleShieldDamageBlocking_Params
	{
	public:
		class AShooterCharacter*                                   ForShooterCharacter;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		float                                                      DamageIn;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XN29[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0010(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class AController*                                         EventInstigator;                                         // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitPoint;                                                // 0x0040(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0058(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FWLV[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
