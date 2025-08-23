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
	 * Function TrackBinocularsBuff.TrackBinocularsBuff_C.Handle Depth Of Field
	 */
	struct ATrackBinocularsBuff_C_HandleDepthOfField_Params
	{
	public:
		bool                                                       ShouldBeDisabled;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrackBinocularsBuff.TrackBinocularsBuff_C.ShouldPPBeActive
	 */
	struct ATrackBinocularsBuff_C_ShouldPPBeActive_Params
	{
	public:
		bool                                                       ShouldBeActive;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrackBinocularsBuff.TrackBinocularsBuff_C.BPDeactivated
	 */
	struct ATrackBinocularsBuff_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrackBinocularsBuff.TrackBinocularsBuff_C.UpdateCustomDepth
	 */
	struct ATrackBinocularsBuff_C_UpdateCustomDepth_Params
	{
	public:
		class AActor*                                              ForActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       Enable;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G9QA[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TrackBinocularsBuff.TrackBinocularsBuff_C.UpdatePP
	 */
	struct ATrackBinocularsBuff_C_UpdatePP_Params
	{
	public:
		bool                                                       ForceDisable;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrackBinocularsBuff.TrackBinocularsBuff_C.AllowPostProcessEffect
	 */
	struct ATrackBinocularsBuff_C_AllowPostProcessEffect_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrackBinocularsBuff.TrackBinocularsBuff_C.BPGetWaypointsBuff
	 */
	struct ATrackBinocularsBuff_C_BPGetWaypointsBuff_Params
	{
	public:
		TArray<struct FPointOfInterestData_ForCompanion>           IndicatorsOut;                                           // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function TrackBinocularsBuff.TrackBinocularsBuff_C.TryDeactivateTrackBino
	 */
	struct ATrackBinocularsBuff_C_TryDeactivateTrackBino_Params
	{
	public:
		bool                                                       RemoveWeaponRef;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrackBinocularsBuff.TrackBinocularsBuff_C.BPTryMultiUse
	 */
	struct ATrackBinocularsBuff_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrackBinocularsBuff.TrackBinocularsBuff_C.GetAllStatPoints
	 */
	struct ATrackBinocularsBuff_C_GetAllStatPoints_Params
	{
	public:
		class UPrimalCharacterStatusComponent*                     self2;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UPrimalActor*                                        Target;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            Wild;                                                    // 0x0010(0x0010)  (Parm, OutParm)
		TArray<int32_t>                                            Mutations;                                               // 0x0020(0x0010)  (Parm, OutParm)
		TArray<int32_t>                                            Tamed;                                                   // 0x0030(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function TrackBinocularsBuff.TrackBinocularsBuff_C.ReplicateCharStats
	 */
	struct ATrackBinocularsBuff_C_ReplicateCharStats_Params
	{
	public:
		class APrimalCharacter*                                    Char;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrackBinocularsBuff.TrackBinocularsBuff_C.ClientUpdateStatsChar
	 */
	struct ATrackBinocularsBuff_C_ClientUpdateStatsChar_Params
	{
	public:
		struct FCharacterStatusReplicatedBinoculars                Update;                                                  // 0x0000(0x0080)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class APrimalCharacter*                                    primalChar;                                              // 0x0080(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrackBinocularsBuff.TrackBinocularsBuff_C.BuffTickClient
	 */
	struct ATrackBinocularsBuff_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrackBinocularsBuff.TrackBinocularsBuff_C.ReceiveEndPlay
	 */
	struct ATrackBinocularsBuff_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrackBinocularsBuff.TrackBinocularsBuff_C.BPSetupForInstigator
	 */
	struct ATrackBinocularsBuff_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrackBinocularsBuff.TrackBinocularsBuff_C.SetupZoom
	 */
	struct ATrackBinocularsBuff_C_SetupZoom_Params
	{
	public:
		bool                                                       IsTargeting;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HXZ3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     ZoomPercent;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrackBinocularsBuff.TrackBinocularsBuff_C.BuffTickServer
	 */
	struct ATrackBinocularsBuff_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrackBinocularsBuff.TrackBinocularsBuff_C.SetupNewTrackActor
	 */
	struct ATrackBinocularsBuff_C_SetupNewTrackActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrackBinocularsBuff.TrackBinocularsBuff_C.TrackCurrentActorTraced
	 */
	struct ATrackBinocularsBuff_C_TrackCurrentActorTraced_Params
	{	};

	/**
	 * Function TrackBinocularsBuff.TrackBinocularsBuff_C.InputDismissPOI_BP
	 */
	struct ATrackBinocularsBuff_C_InputDismissPOI_BP_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TrackBinocularsBuff.TrackBinocularsBuff_C.ServerClearTrackBino
	 */
	struct ATrackBinocularsBuff_C_ServerClearTrackBino_Params
	{	};

	/**
	 * Function TrackBinocularsBuff.TrackBinocularsBuff_C.ExecuteUbergraph_TrackBinocularsBuff
	 */
	struct ATrackBinocularsBuff_C_ExecuteUbergraph_TrackBinocularsBuff_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
