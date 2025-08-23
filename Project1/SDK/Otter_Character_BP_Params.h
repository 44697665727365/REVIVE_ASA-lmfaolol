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
	 * Function Otter_Character_BP.Otter_Character_BP_C.BPSetupTamed
	 */
	struct AOtter_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.OnLaunched
	 */
	struct AOtter_Character_BP_C_OnLaunched_Params
	{
	public:
		struct FVector                                             LaunchVelocity;                                          // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bXYOverride;                                             // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bZOverride;                                              // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_C14X[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.BPTimerServer
	 */
	struct AOtter_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.OnOwnerReached
	 */
	struct AOtter_Character_BP_C_OnOwnerReached_Params
	{	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.Returning To Owner Actions
	 */
	struct AOtter_Character_BP_C_ReturningToOwnerActions_Params
	{	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.Set Last Player Order
	 */
	struct AOtter_Character_BP_C_SetLastPlayerOrder_Params
	{
	public:
		class APawn*                                               Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.GetOwnerCharacter
	 */
	struct AOtter_Character_BP_C_GetOwnerCharacter_Params
	{
	public:
		class APawn*                                               Owner;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.ReturnToPlayer
	 */
	struct AOtter_Character_BP_C_ReturnToPlayer_Params
	{	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.SelectPearl
	 */
	struct AOtter_Character_BP_C_SelectPearl_Params
	{
	public:
		bool                                                       GotAPearl;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PVSJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    IndexOfSelectedItem;                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.AttemptToGetAPearl
	 */
	struct AOtter_Character_BP_C_AttemptToGetAPearl_Params
	{
	public:
		bool                                                       ObtainedAPearl;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.IsCharacterAFish
	 */
	struct AOtter_Character_BP_C_IsCharacterAFish_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsValid;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AV8T[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.BPKilledSomethingEvent
	 */
	struct AOtter_Character_BP_C_BPKilledSomethingEvent_Params
	{
	public:
		class APrimalCharacter*                                    killedTarget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.EatPlayersCarriedFood
	 */
	struct AOtter_Character_BP_C_EatPlayersCarriedFood_Params
	{
	public:
		class APrimalCharacter*                                    Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.Init
	 */
	struct AOtter_Character_BP_C_Init_Params
	{	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.IsCarriedFishValid
	 */
	struct AOtter_Character_BP_C_IsCarriedFishValid_Params
	{
	public:
		class APrimalCharacter*                                    Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsValid;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F4WY[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.BPTryMultiUse
	 */
	struct AOtter_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.BPGetMultiUseEntries
	 */
	struct AOtter_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ReturnParm, ContainsInstancedReference)
	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.BPClientDoMultiUse
	 */
	struct AOtter_Character_BP_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_31J6[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.ReceiveBeginPlay
	 */
	struct AOtter_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.AnimNotify_ShowPearl
	 */
	struct AOtter_Character_BP_C_AnimNotify_ShowPearl_Params
	{	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.MulticastPlayShowPearl
	 */
	struct AOtter_Character_BP_C_MulticastPlayShowPearl_Params
	{
	public:
		int32_t                                                    switchIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Otter_Character_BP.Otter_Character_BP_C.ExecuteUbergraph_Otter_Character_BP
	 */
	struct AOtter_Character_BP_C_ExecuteUbergraph_Otter_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
