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
	 * Function Weap_Torch_Base.Weap_Torch_Base_C.CanUseNiagaraFire
	 */
	struct AWeap_Torch_Base_C_CanUseNiagaraFire_Params
	{
	public:
		bool                                                       bCanUse;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Weap_Torch_Base.Weap_Torch_Base_C.GetFPVNiagaraFire
	 */
	struct AWeap_Torch_Base_C_GetFPVNiagaraFire_Params
	{
	public:
		class UNiagaraComponent*                                   FPVNiagaraComponent;                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Weap_Torch_Base.Weap_Torch_Base_C.GetTPVNiagaraFire
	 */
	struct AWeap_Torch_Base_C_GetTPVNiagaraFire_Params
	{
	public:
		class UNiagaraComponent*                                   TPVNiagaraComponent;                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Weap_Torch_Base.Weap_Torch_Base_C.BPCanEquip
	 */
	struct AWeap_Torch_Base_C_BPCanEquip_Params
	{
	public:
		class AShooterCharacter*                                   ByCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Weap_Torch_Base.Weap_Torch_Base_C.StartSecondaryActionEvent
	 */
	struct AWeap_Torch_Base_C_StartSecondaryActionEvent_Params
	{	};

	/**
	 * Function Weap_Torch_Base.Weap_Torch_Base_C.Server_AttemptPutOnBelt
	 */
	struct AWeap_Torch_Base_C_Server_AttemptPutOnBelt_Params
	{	};

	/**
	 * Function Weap_Torch_Base.Weap_Torch_Base_C.ReceiveBeginPlay
	 */
	struct AWeap_Torch_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Weap_Torch_Base.Weap_Torch_Base_C.StartUnequipEvent
	 */
	struct AWeap_Torch_Base_C_StartUnequipEvent_Params
	{	};

	/**
	 * Function Weap_Torch_Base.Weap_Torch_Base_C.FireTick
	 */
	struct AWeap_Torch_Base_C_FireTick_Params
	{	};

	/**
	 * Function Weap_Torch_Base.Weap_Torch_Base_C.BPAppliedPrimalItemToWeapon
	 */
	struct AWeap_Torch_Base_C_BPAppliedPrimalItemToWeapon_Params
	{	};

	/**
	 * Function Weap_Torch_Base.Weap_Torch_Base_C.OnInstigatorSleepingStateChanged
	 */
	struct AWeap_Torch_Base_C_OnInstigatorSleepingStateChanged_Params
	{	};

	/**
	 * Function Weap_Torch_Base.Weap_Torch_Base_C.ExecuteUbergraph_Weap_Torch_Base
	 */
	struct AWeap_Torch_Base_C_ExecuteUbergraph_Weap_Torch_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HRA2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
