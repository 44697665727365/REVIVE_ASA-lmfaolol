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
	 * Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.AttachWindSourceComps
	 */
	struct ASupplyCrateBaseBP_C_AttachWindSourceComps_Params
	{	};

	/**
	 * Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.BPGetMultiUseEntries
	 */
	struct ASupplyCrateBaseBP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ReturnParm, ContainsInstancedReference)
	};

	/**
	 * Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.UpdateCollisionComps
	 */
	struct ASupplyCrateBaseBP_C_UpdateCollisionComps_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.UpdateCloudEmissive
	 */
	struct ASupplyCrateBaseBP_C_UpdateCloudEmissive_Params
	{	};

	/**
	 * Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.OnRep_bWasOpened
	 */
	struct ASupplyCrateBaseBP_C_OnRep_bWasOpened_Params
	{	};

	/**
	 * Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.GetComponentsToMoveForMatinee
	 */
	struct ASupplyCrateBaseBP_C_GetComponentsToMoveForMatinee_Params
	{
	public:
		class USceneComponent*                                     ComponentsToMove;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.Get Matinee Rotation for Alpha and Segment
	 */
	struct ASupplyCrateBaseBP_C_GetMatineeRotationforAlphaandSegment_Params
	{
	public:
		double                                                     Alpha;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FRotator>                                    Array;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    Segmant;                                                 // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MDUI[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            ReturnValue;                                             // 0x0020(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.Get Matinee Position for Alpha and Segment
	 */
	struct ASupplyCrateBaseBP_C_GetMatineePositionforAlphaandSegment_Params
	{
	public:
		double                                                     Alpha;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FVector>                                     Array;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    Segmant;                                                 // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9VGM[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x0020(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.UserConstructionScript
	 */
	struct ASupplyCrateBaseBP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.OnRep_FinishedCrateMovement
	 */
	struct ASupplyCrateBaseBP_C_OnRep_FinishedCrateMovement_Params
	{	};

	/**
	 * Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.BPNotifyInventoryItemChange
	 */
	struct ASupplyCrateBaseBP_C_BPNotifyInventoryItemChange_Params
	{
	public:
		bool                                                       bIsItemAdd;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8M1G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimalItem*                                         theItem;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       bEquipItem;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.Multi_PlayOpenAnim
	 */
	struct ASupplyCrateBaseBP_C_Multi_PlayOpenAnim_Params
	{	};

	/**
	 * Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.ReceiveBeginPlay
	 */
	struct ASupplyCrateBaseBP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.ReceiveDestroyed
	 */
	struct ASupplyCrateBaseBP_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.BPPlayDying
	 */
	struct ASupplyCrateBaseBP_C_BPPlayDying_Params
	{
	public:
		float                                                      KillingDamage;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EU6U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class APawn*                                               InstigatingPawn;                                         // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.MoveToLandTick
	 */
	struct ASupplyCrateBaseBP_C_MoveToLandTick_Params
	{	};

	/**
	 * Function SupplyCrateBaseBP.SupplyCrateBaseBP_C.ExecuteUbergraph_SupplyCrateBaseBP
	 */
	struct ASupplyCrateBaseBP_C_ExecuteUbergraph_SupplyCrateBaseBP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
