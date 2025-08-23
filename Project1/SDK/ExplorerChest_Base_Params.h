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
	 * Function ExplorerChest_Base.ExplorerChest_Base_C.BPGetExtraSpecialBlueprintInt
	 */
	struct AExplorerChest_Base_C_BPGetExtraSpecialBlueprintInt_Params
	{
	public:
		int32_t                                                    toCheck;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ExplorerChest_Base.ExplorerChest_Base_C.DrawBasicFloatingHUD
	 */
	struct AExplorerChest_Base_C_DrawBasicFloatingHUD_Params
	{
	public:
		class AHUD*                                                ForHUD;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ExplorerChest_Base.ExplorerChest_Base_C.ReceiveEndPlay
	 */
	struct AExplorerChest_Base_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3ZPZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ExplorerChest_Base.ExplorerChest_Base_C.ReceiveBeginPlay
	 */
	struct AExplorerChest_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ExplorerChest_Base.ExplorerChest_Base_C.PlayUnlock
	 */
	struct AExplorerChest_Base_C_PlayUnlock_Params
	{	};

	/**
	 * Function ExplorerChest_Base.ExplorerChest_Base_C.UserConstructionScript
	 */
	struct AExplorerChest_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ExplorerChest_Base.ExplorerChest_Base_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_133_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct AExplorerChest_Base_C_BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_133_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UXJ2[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x00F0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function ExplorerChest_Base.ExplorerChest_Base_C.CheckForPlayerState
	 */
	struct AExplorerChest_Base_C_CheckForPlayerState_Params
	{	};

	/**
	 * Function ExplorerChest_Base.ExplorerChest_Base_C.DoUnlock
	 */
	struct AExplorerChest_Base_C_DoUnlock_Params
	{	};

	/**
	 * Function ExplorerChest_Base.ExplorerChest_Base_C.ShortRefresh
	 */
	struct AExplorerChest_Base_C_ShortRefresh_Params
	{	};

	/**
	 * Function ExplorerChest_Base.ExplorerChest_Base_C.LongRefresh
	 */
	struct AExplorerChest_Base_C_LongRefresh_Params
	{	};

	/**
	 * Function ExplorerChest_Base.ExplorerChest_Base_C.ExecuteUbergraph_ExplorerChest_Base
	 */
	struct AExplorerChest_Base_C_ExecuteUbergraph_ExplorerChest_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
