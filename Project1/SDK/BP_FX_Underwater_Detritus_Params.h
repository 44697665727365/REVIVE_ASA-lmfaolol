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
	 * Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.PlayerSourceLocation
	 */
	struct ABP_FX_Underwater_Detritus_C_PlayerSourceLocation_Params
	{
	public:
		bool                                                       ValidCamera;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L4VP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0008(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.CullSystemsAtDistance
	 */
	struct ABP_FX_Underwater_Detritus_C_CullSystemsAtDistance_Params
	{	};

	/**
	 * Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.CheckEmitterPools
	 */
	struct ABP_FX_Underwater_Detritus_C_CheckEmitterPools_Params
	{
	public:
		int32_t                                                    Used;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Max;                                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.SetupEmitterPools
	 */
	struct ABP_FX_Underwater_Detritus_C_SetupEmitterPools_Params
	{	};

	/**
	 * Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.CheckEmitterPool
	 */
	struct ABP_FX_Underwater_Detritus_C_CheckEmitterPool_Params
	{
	public:
		E_EmitterPool                                              Pool;                                                    // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       RoomLeft;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SUKQ[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.SpawnEnvEffect
	 */
	struct ABP_FX_Underwater_Detritus_C_SpawnEnvEffect_Params
	{
	public:
		struct FSTR_DynamicEnvEffectSettings                       DynamicEffectSettings;                                   // 0x0000(0x0158)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0158(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.AdjustEmitterCount
	 */
	struct ABP_FX_Underwater_Detritus_C_AdjustEmitterCount_Params
	{
	public:
		bool                                                       Add;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_EmitterPool                                              EffectSettings;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FKC5[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.SetSystemParamaters
	 */
	struct ABP_FX_Underwater_Detritus_C_SetSystemParamaters_Params
	{
	public:
		class UFXSystemComponent*                                  System;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		struct FSTR_DynamicEnvEffectCustomParameters               EffectParameters;                                        // 0x0008(0x00A0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.GetTraceOffsetsAroundPlayer
	 */
	struct ABP_FX_Underwater_Detritus_C_GetTraceOffsetsAroundPlayer_Params
	{
	public:
		bool                                                       Valid;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CGHB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Start;                                                   // 0x0008(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             End;                                                     // 0x0020(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.IsEnabled
	 */
	struct ABP_FX_Underwater_Detritus_C_IsEnabled_Params
	{
	public:
		bool                                                       _TRUE__;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.Update Niagara Collection
	 */
	struct ABP_FX_Underwater_Detritus_C_UpdateNiagaraCollection_Params
	{	};

	/**
	 * Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.Setup Emitter Data
	 */
	struct ABP_FX_Underwater_Detritus_C_SetupEmitterData_Params
	{	};

	/**
	 * Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.GetParticleForSurface
	 */
	struct ABP_FX_Underwater_Detritus_C_GetParticleForSurface_Params
	{
	public:
		EPhysicalSurface                                           PhysMat;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Underwater;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Valid;                                                   // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RGS4[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSTR_DynamicEnvEffectSettings                       Effect;                                                  // 0x0008(0x0158)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.Try Spawn Emitter
	 */
	struct ABP_FX_Underwater_Detritus_C_TrySpawnEmitter_Params
	{
	public:
		bool                                                       Sucess;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.ReceiveBeginPlay
	 */
	struct ABP_FX_Underwater_Detritus_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C.ExecuteUbergraph_BP_FX_Underwater_Detritus
	 */
	struct ABP_FX_Underwater_Detritus_C_ExecuteUbergraph_BP_FX_Underwater_Detritus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7NUW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
