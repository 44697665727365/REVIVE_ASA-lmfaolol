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
	 * 		Name   -> Function Buff_StegoBackplate.Buff_StegoBackplate_C.BPAdjustStatusValueModification
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalCharacterStatusComponent*             ForComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		EPrimalCharacterStatusValue                        ValueType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      DamageTypeClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		bool                                               bManualModification                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float ABuff_StegoBackplate_C::BPAdjustStatusValueModification(class UPrimalCharacterStatusComponent* ForComponent, EPrimalCharacterStatusValue ValueType, float InAmount, class UClass* DamageTypeClass, bool bManualModification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StegoBackplate.Buff_StegoBackplate_C.BPAdjustStatusValueModification");
		
		ABuff_StegoBackplate_C_BPAdjustStatusValueModification_Params params {};
		params.ForComponent = ForComponent;
		params.ValueType = ValueType;
		params.InAmount = InAmount;
		params.DamageTypeClass = DamageTypeClass;
		params.bManualModification = bManualModification;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_StegoBackplate.Buff_StegoBackplate_C.GetBuffDescription
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	struct FStatusValueModifierDescription ABuff_StegoBackplate_C::GetBuffDescription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StegoBackplate.Buff_StegoBackplate_C.GetBuffDescription");
		
		ABuff_StegoBackplate_C_GetBuffDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_StegoBackplate.Buff_StegoBackplate_C.Set Backplate Mode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_StegoBackplateMode                               StegoBackplateMode                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_StegoBackplate_C::SetBackplateMode(E_StegoBackplateMode StegoBackplateMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StegoBackplate.Buff_StegoBackplate_C.Set Backplate Mode");
		
		ABuff_StegoBackplate_C_SetBackplateMode_Params params {};
		params.StegoBackplateMode = StegoBackplateMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Buff_StegoBackplate.Buff_StegoBackplate_C.GetBackplateMode
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		E_StegoBackplateMode                               BackplateMode                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuff_StegoBackplate_C::GetBackplateMode(E_StegoBackplateMode* BackplateMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_StegoBackplate.Buff_StegoBackplate_C.GetBackplateMode");
		
		ABuff_StegoBackplate_C_GetBackplateMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BackplateMode != nullptr)
			*BackplateMode = params.BackplateMode;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_StegoBackplate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_StegoBackplate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_StegoBackplate.Buff_StegoBackplate_C");
		return ptr;
	}

}


