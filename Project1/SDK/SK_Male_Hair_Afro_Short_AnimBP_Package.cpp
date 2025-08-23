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
	 * 		Name   -> Function SK_Male_Hair_Afro_Short_AnimBP.SK_Male_Hair_Afro_Short_AnimBP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void USK_Male_Hair_Afro_Short_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_Male_Hair_Afro_Short_AnimBP.SK_Male_Hair_Afro_Short_AnimBP_C.AnimGraph");
		
		USK_Male_Hair_Afro_Short_AnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SK_Male_Hair_Afro_Short_AnimBP.SK_Male_Hair_Afro_Short_AnimBP_C.ExecuteUbergraph_SK_Male_Hair_Afro_Short_AnimBP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USK_Male_Hair_Afro_Short_AnimBP_C::ExecuteUbergraph_SK_Male_Hair_Afro_Short_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_Male_Hair_Afro_Short_AnimBP.SK_Male_Hair_Afro_Short_AnimBP_C.ExecuteUbergraph_SK_Male_Hair_Afro_Short_AnimBP");
		
		USK_Male_Hair_Afro_Short_AnimBP_C_ExecuteUbergraph_SK_Male_Hair_Afro_Short_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USK_Male_Hair_Afro_Short_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USK_Male_Hair_Afro_Short_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_Male_Hair_Afro_Short_AnimBP.SK_Male_Hair_Afro_Short_AnimBP_C");
		return ptr;
	}

}


