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
	 * Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.CanUseItemPing
	 */
	struct UPrimalItem_WeaponSpyglass_C_CanUseItemPing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.BPPreventWeaponEquip
	 */
	struct UPrimalItem_WeaponSpyglass_C_BPPreventWeaponEquip_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.TimerDoubleTap
	 */
	struct UPrimalItem_WeaponSpyglass_C_TimerDoubleTap_Params
	{	};

	/**
	 * Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.TimerUsePingWheel
	 */
	struct UPrimalItem_WeaponSpyglass_C_TimerUsePingWheel_Params
	{	};

	/**
	 * Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.LocalUseStartHoldBP
	 */
	struct UPrimalItem_WeaponSpyglass_C_LocalUseStartHoldBP_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.LocalUseItemReleaseBP
	 */
	struct UPrimalItem_WeaponSpyglass_C_LocalUseItemReleaseBP_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.LocalUseAfterHoldBP
	 */
	struct UPrimalItem_WeaponSpyglass_C_LocalUseAfterHoldBP_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.BPServerHandleItemNetExecCommand
	 */
	struct UPrimalItem_WeaponSpyglass_C_BPServerHandleItemNetExecCommand_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PrimalItem_WeaponSpyglass.PrimalItem_WeaponSpyglass_C.ExecuteUbergraph_PrimalItem_WeaponSpyglass
	 */
	struct UPrimalItem_WeaponSpyglass_C_ExecuteUbergraph_PrimalItem_WeaponSpyglass_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RI6V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
