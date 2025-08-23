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
	 * 		Name   -> Function Female_Hair_Mohawk_Short_AnimBP.Female_Hair_Mohawk_Short_AnimBP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UFemale_Hair_Mohawk_Short_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Female_Hair_Mohawk_Short_AnimBP.Female_Hair_Mohawk_Short_AnimBP_C.AnimGraph");
		
		UFemale_Hair_Mohawk_Short_AnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Female_Hair_Mohawk_Short_AnimBP.Female_Hair_Mohawk_Short_AnimBP_C.ExecuteUbergraph_Female_Hair_Mohawk_Short_AnimBP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFemale_Hair_Mohawk_Short_AnimBP_C::ExecuteUbergraph_Female_Hair_Mohawk_Short_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Female_Hair_Mohawk_Short_AnimBP.Female_Hair_Mohawk_Short_AnimBP_C.ExecuteUbergraph_Female_Hair_Mohawk_Short_AnimBP");
		
		UFemale_Hair_Mohawk_Short_AnimBP_C_ExecuteUbergraph_Female_Hair_Mohawk_Short_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFemale_Hair_Mohawk_Short_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFemale_Hair_Mohawk_Short_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Female_Hair_Mohawk_Short_AnimBP.Female_Hair_Mohawk_Short_AnimBP_C");
		return ptr;
	}

}


