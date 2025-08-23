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
	 * 		Name   -> Function DinoAttackStateRanged_Leading.DinoAttackStateRanged_Leading_C.BPCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              attackRangeOffset                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherTarget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool UDinoAttackStateRanged_Leading_C::BPCanAttack(float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateRanged_Leading.DinoAttackStateRanged_Leading_C.BPCanAttack");
		
		UDinoAttackStateRanged_Leading_C_BPCanAttack_Params params {};
		params.Distance = Distance;
		params.attackRangeOffset = attackRangeOffset;
		params.OtherTarget = OtherTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoAttackStateRanged_Leading_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAttackStateRanged_Leading_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateRanged_Leading.DinoAttackStateRanged_Leading_C");
		return ptr;
	}

}


