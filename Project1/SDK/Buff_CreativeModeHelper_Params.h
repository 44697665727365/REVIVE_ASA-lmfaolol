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
	 * Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPCheckPreventInput
	 */
	struct ABuff_CreativeModeHelper_C_BPCheckPreventInput_Params
	{
	public:
		EPrimalCharacterInputType                                  inputType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPDrawBuffStatusHUD
	 */
	struct ABuff_CreativeModeHelper_C_BPDrawBuffStatusHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		float                                                      XPos;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      YPos;                                                    // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ScaleMult;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CGDP[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BuffTickServer
	 */
	struct ABuff_CreativeModeHelper_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7C1L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.IsNotRidingDino
	 */
	struct ABuff_CreativeModeHelper_C_IsNotRidingDino_Params
	{
	public:
		bool                                                       NotRidingDino;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ExecConsoleCommand
	 */
	struct ABuff_CreativeModeHelper_C_ExecConsoleCommand_Params
	{
	public:
		class FString                                              Command;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPDeactivated
	 */
	struct ABuff_CreativeModeHelper_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPActivated
	 */
	struct ABuff_CreativeModeHelper_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPSetupForInstigator
	 */
	struct ABuff_CreativeModeHelper_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Jump_K2Node_InputActionEvent_6
	 */
	struct ABuff_CreativeModeHelper_C_InpActEvt_Jump_K2Node_InputActionEvent_6_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Run_K2Node_InputActionEvent_5
	 */
	struct ABuff_CreativeModeHelper_C_InpActEvt_Run_K2Node_InputActionEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Run_K2Node_InputActionEvent_4
	 */
	struct ABuff_CreativeModeHelper_C_InpActEvt_Run_K2Node_InputActionEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_3
	 */
	struct ABuff_CreativeModeHelper_C_InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_2
	 */
	struct ABuff_CreativeModeHelper_C_InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Ctrl_F1_K2Node_InputKeyEvent_4
	 */
	struct ABuff_CreativeModeHelper_C_InpActEvt_Ctrl_F1_K2Node_InputKeyEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_3
	 */
	struct ABuff_CreativeModeHelper_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_2
	 */
	struct ABuff_CreativeModeHelper_C_InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_G_K2Node_InputKeyEvent_1
	 */
	struct ABuff_CreativeModeHelper_C_InpActEvt_G_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_1
	 */
	struct ABuff_CreativeModeHelper_C_InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ServerSetFlight
	 */
	struct ABuff_CreativeModeHelper_C_ServerSetFlight_Params
	{
	public:
		bool                                                       IsFlying;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ServerSetFlySpeed
	 */
	struct ABuff_CreativeModeHelper_C_ServerSetFlySpeed_Params
	{
	public:
		double                                                     NewSpeed;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.SetFlySpeed
	 */
	struct ABuff_CreativeModeHelper_C_SetFlySpeed_Params
	{
	public:
		double                                                     NewSpeed;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.NetServerDestroyStructure
	 */
	struct ABuff_CreativeModeHelper_C_NetServerDestroyStructure_Params
	{
	public:
		class APrimalStructure*                                    StructureToDestroy;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ClientUpdateFlightStatus
	 */
	struct ABuff_CreativeModeHelper_C_ClientUpdateFlightStatus_Params
	{
	public:
		bool                                                       IsFlying;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.MultiReplicationDebugData
	 */
	struct ABuff_CreativeModeHelper_C_MultiReplicationDebugData_Params
	{
	public:
		TArray<struct FHitResult>                                  Hits;                                                    // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		TArray<struct FVector>                                     HitStarts;                                               // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FVector>                                     HitEnds;                                                 // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTransform>                                  Chars;                                                   // 0x0030(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FVector                                             Player;                                                  // 0x0040(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BuffTickClient
	 */
	struct ABuff_CreativeModeHelper_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ServerRequestReplicationDebugging
	 */
	struct ABuff_CreativeModeHelper_C_ServerRequestReplicationDebugging_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ExecuteUbergraph_Buff_CreativeModeHelper
	 */
	struct ABuff_CreativeModeHelper_C_ExecuteUbergraph_Buff_CreativeModeHelper_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VH3X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
