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
	 * 		Name   -> Function FPVMeleeWeaponAnimBP_Base.FPVMeleeWeaponAnimBP_Base_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UFPVMeleeWeaponAnimBP_Base_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FPVMeleeWeaponAnimBP_Base.FPVMeleeWeaponAnimBP_Base_C.AnimGraph");
		
		UFPVMeleeWeaponAnimBP_Base_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function FPVMeleeWeaponAnimBP_Base.FPVMeleeWeaponAnimBP_Base_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFPVMeleeWeaponAnimBP_Base_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FPVMeleeWeaponAnimBP_Base.FPVMeleeWeaponAnimBP_Base_C.BlueprintUpdateAnimation");
		
		UFPVMeleeWeaponAnimBP_Base_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function FPVMeleeWeaponAnimBP_Base.FPVMeleeWeaponAnimBP_Base_C.ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFPVMeleeWeaponAnimBP_Base_C::ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FPVMeleeWeaponAnimBP_Base.FPVMeleeWeaponAnimBP_Base_C.ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base");
		
		UFPVMeleeWeaponAnimBP_Base_C_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFPVMeleeWeaponAnimBP_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFPVMeleeWeaponAnimBP_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPVMeleeWeaponAnimBP_Base.FPVMeleeWeaponAnimBP_Base_C");
		return ptr;
	}

}


