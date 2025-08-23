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
	 * 		Name   -> Function DinoCharacterStatusComponent_BP_TorpidityControl.DinoCharacterStatusComponent_BP_TorpidityControl_C.BPAdjustStatusValueModification
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalCharacterStatusValue                        ValueType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      DamageTypeClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		bool                                               bManualModification                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UDinoCharacterStatusComponent_BP_TorpidityControl_C::BPAdjustStatusValueModification(EPrimalCharacterStatusValue ValueType, float Amount, class UClass* DamageTypeClass, bool bManualModification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_TorpidityControl.DinoCharacterStatusComponent_BP_TorpidityControl_C.BPAdjustStatusValueModification");
		
		UDinoCharacterStatusComponent_BP_TorpidityControl_C_BPAdjustStatusValueModification_Params params {};
		params.ValueType = ValueType;
		params.Amount = Amount;
		params.DamageTypeClass = DamageTypeClass;
		params.bManualModification = bManualModification;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoCharacterStatusComponent_BP_TorpidityControl_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoCharacterStatusComponent_BP_TorpidityControl_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoCharacterStatusComponent_BP_TorpidityControl.DinoCharacterStatusComponent_BP_TorpidityControl_C");
		return ptr;
	}

}


