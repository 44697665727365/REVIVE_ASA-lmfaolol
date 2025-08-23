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
	 * 		Name   -> Function Megalodon_Character_BP.Megalodon_Character_BP_C.BPHandleControllerInitiatedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AMegalodon_Character_BP_C::BPHandleControllerInitiatedAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalodon_Character_BP.Megalodon_Character_BP_C.BPHandleControllerInitiatedAttack");
		
		AMegalodon_Character_BP_C_BPHandleControllerInitiatedAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Megalodon_Character_BP.Megalodon_Character_BP_C.BPHandleOnStopTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	bool AMegalodon_Character_BP_C::BPHandleOnStopTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalodon_Character_BP.Megalodon_Character_BP_C.BPHandleOnStopTargeting");
		
		AMegalodon_Character_BP_C_BPHandleOnStopTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Megalodon_Character_BP.Megalodon_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AMegalodon_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalodon_Character_BP.Megalodon_Character_BP_C.BPNotifyClearRider");
		
		AMegalodon_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Megalodon_Character_BP.Megalodon_Character_BP_C.BPModifyFOV
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              FOVIn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float AMegalodon_Character_BP_C::BPModifyFOV(float FOVIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalodon_Character_BP.Megalodon_Character_BP_C.BPModifyFOV");
		
		AMegalodon_Character_BP_C_BPModifyFOV_Params params {};
		params.FOVIn = FOVIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Megalodon_Character_BP.Megalodon_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMegalodon_Character_BP_C::InpActEvt_AltFire_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalodon_Character_BP.Megalodon_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_2");
		
		AMegalodon_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Megalodon_Character_BP.Megalodon_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMegalodon_Character_BP_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalodon_Character_BP.Megalodon_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_1");
		
		AMegalodon_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Megalodon_Character_BP.Megalodon_Character_BP_C.ExecuteUbergraph_Megalodon_Character_BP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMegalodon_Character_BP_C::ExecuteUbergraph_Megalodon_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Megalodon_Character_BP.Megalodon_Character_BP_C.ExecuteUbergraph_Megalodon_Character_BP");
		
		AMegalodon_Character_BP_C_ExecuteUbergraph_Megalodon_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMegalodon_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMegalodon_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Megalodon_Character_BP.Megalodon_Character_BP_C");
		return ptr;
	}

}


