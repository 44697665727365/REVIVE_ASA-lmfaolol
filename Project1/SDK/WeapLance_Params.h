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
	 * Function WeapLance.WeapLance_C.DoTrace
	 */
	struct AWeapLance_C_DoTrace_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             End;                                                     // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeapLance.WeapLance_C.DamageActor
	 */
	struct AWeapLance_C_DamageActor_Params
	{
	public:
		class AActor*                                              Victim;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitInfo;                                                 // 0x0008(0x00F0)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function WeapLance.WeapLance_C.DoTraceAttacks
	 */
	struct AWeapLance_C_DoTraceAttacks_Params
	{	};

	/**
	 * Function WeapLance.WeapLance_C.BPForceTPVTargetingAnimation
	 */
	struct AWeapLance_C_BPForceTPVTargetingAnimation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeapLance.WeapLance_C.ReceiveTick
	 */
	struct AWeapLance_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WeapLance.WeapLance_C.BPHandleMeleeAttack
	 */
	struct AWeapLance_C_BPHandleMeleeAttack_Params
	{	};

	/**
	 * Function WeapLance.WeapLance_C.BPStopMeleeAttack
	 */
	struct AWeapLance_C_BPStopMeleeAttack_Params
	{	};

	/**
	 * Function WeapLance.WeapLance_C.DoPlayStartAttackingSound
	 */
	struct AWeapLance_C_DoPlayStartAttackingSound_Params
	{	};

	/**
	 * Function WeapLance.WeapLance_C.DoPlayStopAttackingSound
	 */
	struct AWeapLance_C_DoPlayStopAttackingSound_Params
	{	};

	/**
	 * Function WeapLance.WeapLance_C.DidDismountHit
	 */
	struct AWeapLance_C_DidDismountHit_Params
	{	};

	/**
	 * Function WeapLance.WeapLance_C.ExecuteUbergraph_WeapLance
	 */
	struct AWeapLance_C_ExecuteUbergraph_WeapLance_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
