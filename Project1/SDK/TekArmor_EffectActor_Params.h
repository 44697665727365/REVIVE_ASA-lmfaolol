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
	 * Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_ParticleScale
	 */
	struct ATekArmor_EffectActor_C_OnRep_ParticleScale_Params
	{	};

	/**
	 * Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_bParticlesOn
	 */
	struct ATekArmor_EffectActor_C_OnRep_bParticlesOn_Params
	{	};

	/**
	 * Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_bSoundOn
	 */
	struct ATekArmor_EffectActor_C_OnRep_bSoundOn_Params
	{	};

	/**
	 * Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_TekSoundRef
	 */
	struct ATekArmor_EffectActor_C_OnRep_TekSoundRef_Params
	{	};

	/**
	 * Function TekArmor_EffectActor.TekArmor_EffectActor_C.OnRep_TekParticleTemplate
	 */
	struct ATekArmor_EffectActor_C_OnRep_TekParticleTemplate_Params
	{	};

	/**
	 * Function TekArmor_EffectActor.TekArmor_EffectActor_C.SetSoundActive
	 */
	struct ATekArmor_EffectActor_C_SetSoundActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IEO5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     StartTime;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TekArmor_EffectActor.TekArmor_EffectActor_C.Set ParticleActive
	 */
	struct ATekArmor_EffectActor_C_SetParticleActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TekArmor_EffectActor.TekArmor_EffectActor_C.InitTekEffect
	 */
	struct ATekArmor_EffectActor_C_InitTekEffect_Params
	{
	public:
		class UParticleSystem*                                     particle;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ParticleScale;                                           // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Sound;                                                   // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class APrimalCharacter*                                    Player;                                                  // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TekArmor_EffectActor.TekArmor_EffectActor_C.PlayerDied
	 */
	struct ATekArmor_EffectActor_C_PlayerDied_Params
	{
	public:
		class APrimalCharacter*                                    DiedCharacter;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TekArmor_EffectActor.TekArmor_EffectActor_C.SetTekFX
	 */
	struct ATekArmor_EffectActor_C_SetTekFX_Params
	{
	public:
		class UParticleSystem*                                     particle;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ParticleScale;                                           // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USoundBase*                                          Sound;                                                   // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TekArmor_EffectActor.TekArmor_EffectActor_C.Replicate_SetSoundState
	 */
	struct ATekArmor_EffectActor_C_Replicate_SetSoundState_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TekArmor_EffectActor.TekArmor_EffectActor_C.Replicate_SetParticleState
	 */
	struct ATekArmor_EffectActor_C_Replicate_SetParticleState_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TekArmor_EffectActor.TekArmor_EffectActor_C.ExecuteUbergraph_TekArmor_EffectActor
	 */
	struct ATekArmor_EffectActor_C_ExecuteUbergraph_TekArmor_EffectActor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M9QT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
