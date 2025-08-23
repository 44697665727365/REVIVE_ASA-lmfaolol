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
	 * Function Buff_BeltTorch.Buff_BeltTorch_C.ActivateVFX
	 */
	struct ABuff_BeltTorch_C_ActivateVFX_Params
	{	};

	/**
	 * Function Buff_BeltTorch.Buff_BeltTorch_C.UpdateTorchType
	 */
	struct ABuff_BeltTorch_C_UpdateTorchType_Params
	{
	public:
		bool                                                       FPV;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_06Q2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_BeltTorch.Buff_BeltTorch_C.BPTryMultiUse
	 */
	struct ABuff_BeltTorch_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_BeltTorch.Buff_BeltTorch_C.BPGetMultiUseEntries
	 */
	struct ABuff_BeltTorch_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ReturnParm, ContainsInstancedReference)
	};

	/**
	 * Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchFromItem
	 */
	struct ABuff_BeltTorch_C_InitializeTorchFromItem_Params
	{
	public:
		class UPrimalItem*                                         theItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              WeaponClassOverride;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_BeltTorch.Buff_BeltTorch_C.SetFlameColorIndex
	 */
	struct ABuff_BeltTorch_C_SetFlameColorIndex_Params
	{
	public:
		int32_t                                                    theIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_BeltTorch.Buff_BeltTorch_C.UpdateTorchFlameColor
	 */
	struct ABuff_BeltTorch_C_UpdateTorchFlameColor_Params
	{	};

	/**
	 * Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchFlameColor
	 */
	struct ABuff_BeltTorch_C_SetTorchFlameColor_Params
	{
	public:
		struct FLinearColor                                        theColor;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeAssociatedWeaponClass
	 */
	struct ABuff_BeltTorch_C_InitializeAssociatedWeaponClass_Params
	{
	public:
		class UClass*                                              WeaponClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_BeltTorch.Buff_BeltTorch_C.Update All Torch Colors
	 */
	struct ABuff_BeltTorch_C_UpdateAllTorchColors_Params
	{	};

	/**
	 * Function Buff_BeltTorch.Buff_BeltTorch_C.UpdateTorchColorsArray
	 */
	struct ABuff_BeltTorch_C_UpdateTorchColorsArray_Params
	{
	public:
		class UPrimalItem*                                         ForPrimalItem;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchColorByIndex
	 */
	struct ABuff_BeltTorch_C_SetTorchColorByIndex_Params
	{
	public:
		struct FLinearColor                                        theColor;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TheColorIndex;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AI6M[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_BeltTorch.Buff_BeltTorch_C.ApplyMeshColorization
	 */
	struct ABuff_BeltTorch_C_ApplyMeshColorization_Params
	{	};

	/**
	 * Function Buff_BeltTorch.Buff_BeltTorch_C.ShouldDeactivateBuff
	 */
	struct ABuff_BeltTorch_C_ShouldDeactivateBuff_Params
	{
	public:
		bool                                                       bShouldDeactivate;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YVG1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeDefaultTorchWeapon
	 */
	struct ABuff_BeltTorch_C_InitializeDefaultTorchWeapon_Params
	{	};

	/**
	 * Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchMesh
	 */
	struct ABuff_BeltTorch_C_InitializeTorchMesh_Params
	{	};

	/**
	 * Function Buff_BeltTorch.Buff_BeltTorch_C.DeactivateBeltTorch
	 */
	struct ABuff_BeltTorch_C_DeactivateBeltTorch_Params
	{
	public:
		bool                                                       bEquipTorchOnDeactivation;                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_BeltTorch.Buff_BeltTorch_C.AreValidTorchIDs
	 */
	struct ABuff_BeltTorch_C_AreValidTorchIDs_Params
	{
	public:
		int32_t                                                    TorchID1;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TorchID2;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bAreValid;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchItem
	 */
	struct ABuff_BeltTorch_C_InitializeTorchItem_Params
	{
	public:
		bool                                                       bInitialized;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_BeltTorch.Buff_BeltTorch_C.InitializeTorchIDs
	 */
	struct ABuff_BeltTorch_C_InitializeTorchIDs_Params
	{
	public:
		class UPrimalItem*                                         TorchItem;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_BeltTorch.Buff_BeltTorch_C.Server_DeactivateBeltTorch
	 */
	struct ABuff_BeltTorch_C_Server_DeactivateBeltTorch_Params
	{	};

	/**
	 * Function Buff_BeltTorch.Buff_BeltTorch_C.BuffTickServer
	 */
	struct ABuff_BeltTorch_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchColorByIndex_Multicast
	 */
	struct ABuff_BeltTorch_C_SetTorchColorByIndex_Multicast_Params
	{
	public:
		struct FLinearColor                                        theColor;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    theIndex;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_BeltTorch.Buff_BeltTorch_C.BPOnInputEvent
	 */
	struct ABuff_BeltTorch_C_BPOnInputEvent_Params
	{
	public:
		EPrimalCharacterInputType                                  inputType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_BeltTorch.Buff_BeltTorch_C.SetTorchFlameColor_Multicast
	 */
	struct ABuff_BeltTorch_C_SetTorchFlameColor_Multicast_Params
	{
	public:
		struct FLinearColor                                        theColor;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_BeltTorch.Buff_BeltTorch_C.BuffTickClient
	 */
	struct ABuff_BeltTorch_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_BeltTorch.Buff_BeltTorch_C.BPDeactivated
	 */
	struct ABuff_BeltTorch_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_BeltTorch.Buff_BeltTorch_C.ExecuteUbergraph_Buff_BeltTorch
	 */
	struct ABuff_BeltTorch_C_ExecuteUbergraph_Buff_BeltTorch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
