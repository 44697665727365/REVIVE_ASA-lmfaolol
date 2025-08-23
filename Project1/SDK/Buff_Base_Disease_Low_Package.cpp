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
	 * 		Name   -> Function Buff_Base_Disease_Low.Buff_Base_Disease_Low_C.BPCustomAllowAddBuff
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class APrimalCharacter*                            ForCharacter                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABuff_Base_Disease_Low_C::BPCustomAllowAddBuff(class APrimalCharacter* ForCharacter, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Base_Disease_Low.Buff_Base_Disease_Low_C.BPCustomAllowAddBuff");
		
		ABuff_Base_Disease_Low_C_BPCustomAllowAddBuff_Params params {};
		params.ForCharacter = ForCharacter;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Base_Disease_Low_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Base_Disease_Low_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Base_Disease_Low.Buff_Base_Disease_Low_C");
		return ptr;
	}

}


