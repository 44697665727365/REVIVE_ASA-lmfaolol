/**
 * Name: Ark_Survival_Ascended
 * Version: 0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPCheckPreventInput
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalCharacterInputType                          inputType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABuff_CreativeModeHelper_C::BPCheckPreventInput(EPrimalCharacterInputType inputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPCheckPreventInput");
		
		ABuff_CreativeModeHelper_C_BPCheckPreventInput_Params params {};
		params.inputType = inputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPDrawBuffStatusHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              XPos                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              YPos                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ScaleMult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_CreativeModeHelper_C::BPDrawBuffStatusHUD(class AShooterHUD* HUD, float XPos, float YPos, float ScaleMult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPDrawBuffStatusHUD");
		
		ABuff_CreativeModeHelper_C_BPDrawBuffStatusHUD_Params params {};
		params.HUD = HUD;
		params.XPos = XPos;
		params.YPos = YPos;
		params.ScaleMult = ScaleMult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BuffTickServer
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_CreativeModeHelper_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BuffTickServer");
		
		ABuff_CreativeModeHelper_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.IsNotRidingDino
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               NotRidingDino                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_CreativeModeHelper_C::IsNotRidingDino(bool* NotRidingDino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.IsNotRidingDino");
		
		ABuff_CreativeModeHelper_C_IsNotRidingDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NotRidingDino != nullptr)
			*NotRidingDino = params.NotRidingDino;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ExecConsoleCommand
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Command                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABuff_CreativeModeHelper_C::ExecConsoleCommand(const class FString& Command)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ExecConsoleCommand");
		
		ABuff_CreativeModeHelper_C_ExecConsoleCommand_Params params {};
		params.Command = Command;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_CreativeModeHelper_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPDeactivated");
		
		ABuff_CreativeModeHelper_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPActivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_CreativeModeHelper_C::BPActivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPActivated");
		
		ABuff_CreativeModeHelper_C_BPActivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_CreativeModeHelper_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BPSetupForInstigator");
		
		ABuff_CreativeModeHelper_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Jump_K2Node_InputActionEvent_6
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABuff_CreativeModeHelper_C::InpActEvt_Jump_K2Node_InputActionEvent_6(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Jump_K2Node_InputActionEvent_6");
		
		ABuff_CreativeModeHelper_C_InpActEvt_Jump_K2Node_InputActionEvent_6_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Run_K2Node_InputActionEvent_5
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABuff_CreativeModeHelper_C::InpActEvt_Run_K2Node_InputActionEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Run_K2Node_InputActionEvent_5");
		
		ABuff_CreativeModeHelper_C_InpActEvt_Run_K2Node_InputActionEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Run_K2Node_InputActionEvent_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABuff_CreativeModeHelper_C::InpActEvt_Run_K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Run_K2Node_InputActionEvent_4");
		
		ABuff_CreativeModeHelper_C_InpActEvt_Run_K2Node_InputActionEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABuff_CreativeModeHelper_C::InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_3");
		
		ABuff_CreativeModeHelper_C_InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABuff_CreativeModeHelper_C::InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_2");
		
		ABuff_CreativeModeHelper_C_InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Ctrl_F1_K2Node_InputKeyEvent_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABuff_CreativeModeHelper_C::InpActEvt_Ctrl_F1_K2Node_InputKeyEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Ctrl_F1_K2Node_InputKeyEvent_4");
		
		ABuff_CreativeModeHelper_C_InpActEvt_Ctrl_F1_K2Node_InputKeyEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABuff_CreativeModeHelper_C::InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_3");
		
		ABuff_CreativeModeHelper_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABuff_CreativeModeHelper_C::InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_2");
		
		ABuff_CreativeModeHelper_C_InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_G_K2Node_InputKeyEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABuff_CreativeModeHelper_C::InpActEvt_G_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_G_K2Node_InputKeyEvent_1");
		
		ABuff_CreativeModeHelper_C_InpActEvt_G_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABuff_CreativeModeHelper_C::InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_1");
		
		ABuff_CreativeModeHelper_C_InpActEvt_ArkGamepadFaceButtonBottom_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ServerSetFlight
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsFlying                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_CreativeModeHelper_C::ServerSetFlight(bool IsFlying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ServerSetFlight");
		
		ABuff_CreativeModeHelper_C_ServerSetFlight_Params params {};
		params.IsFlying = IsFlying;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ServerSetFlySpeed
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             NewSpeed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_CreativeModeHelper_C::ServerSetFlySpeed(double NewSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ServerSetFlySpeed");
		
		ABuff_CreativeModeHelper_C_ServerSetFlySpeed_Params params {};
		params.NewSpeed = NewSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.SetFlySpeed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             NewSpeed                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_CreativeModeHelper_C::SetFlySpeed(double NewSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.SetFlySpeed");
		
		ABuff_CreativeModeHelper_C_SetFlySpeed_Params params {};
		params.NewSpeed = NewSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.NetServerDestroyStructure
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            StructureToDestroy                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_CreativeModeHelper_C::NetServerDestroyStructure(class APrimalStructure* StructureToDestroy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.NetServerDestroyStructure");
		
		ABuff_CreativeModeHelper_C_NetServerDestroyStructure_Params params {};
		params.StructureToDestroy = StructureToDestroy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ClientUpdateFlightStatus
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsFlying                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_CreativeModeHelper_C::ClientUpdateFlightStatus(bool IsFlying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ClientUpdateFlightStatus");
		
		ABuff_CreativeModeHelper_C_ClientUpdateFlightStatus_Params params {};
		params.IsFlying = IsFlying;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.MultiReplicationDebugData
	 * 		Flags  -> (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FHitResult>                          Hits                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		TArray<struct FVector>                             HitStarts                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FVector>                             HitEnds                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FTransform>                          Chars                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_CreativeModeHelper_C::MultiReplicationDebugData(TArray<struct FHitResult> Hits, TArray<struct FVector> HitStarts, TArray<struct FVector> HitEnds, TArray<struct FTransform> Chars, const struct FVector& Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.MultiReplicationDebugData");
		
		ABuff_CreativeModeHelper_C_MultiReplicationDebugData_Params params {};
		params.Hits = Hits;
		params.HitStarts = HitStarts;
		params.HitEnds = HitEnds;
		params.Chars = Chars;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_CreativeModeHelper_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.BuffTickClient");
		
		ABuff_CreativeModeHelper_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ServerRequestReplicationDebugging
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_CreativeModeHelper_C::ServerRequestReplicationDebugging(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ServerRequestReplicationDebugging");
		
		ABuff_CreativeModeHelper_C_ServerRequestReplicationDebugging_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ExecuteUbergraph_Buff_CreativeModeHelper
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_CreativeModeHelper_C::ExecuteUbergraph_Buff_CreativeModeHelper(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_CreativeModeHelper.Buff_CreativeModeHelper_C.ExecuteUbergraph_Buff_CreativeModeHelper");
		
		ABuff_CreativeModeHelper_C_ExecuteUbergraph_Buff_CreativeModeHelper_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_CreativeModeHelper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_CreativeModeHelper_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_CreativeModeHelper.Buff_CreativeModeHelper_C");
		return ptr;
	}

}


