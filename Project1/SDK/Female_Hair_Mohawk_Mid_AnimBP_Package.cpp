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
	 * 		Name   -> Function Female_Hair_Mohawk_Mid_AnimBP.Female_Hair_Mohawk_Mid_AnimBP_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UFemale_Hair_Mohawk_Mid_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Female_Hair_Mohawk_Mid_AnimBP.Female_Hair_Mohawk_Mid_AnimBP_C.AnimGraph");
		
		UFemale_Hair_Mohawk_Mid_AnimBP_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Female_Hair_Mohawk_Mid_AnimBP.Female_Hair_Mohawk_Mid_AnimBP_C.BlueprintThreadSafeUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFemale_Hair_Mohawk_Mid_AnimBP_C::BlueprintThreadSafeUpdateAnimation(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Female_Hair_Mohawk_Mid_AnimBP.Female_Hair_Mohawk_Mid_AnimBP_C.BlueprintThreadSafeUpdateAnimation");
		
		UFemale_Hair_Mohawk_Mid_AnimBP_C_BlueprintThreadSafeUpdateAnimation_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Female_Hair_Mohawk_Mid_AnimBP.Female_Hair_Mohawk_Mid_AnimBP_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UFemale_Hair_Mohawk_Mid_AnimBP_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Female_Hair_Mohawk_Mid_AnimBP.Female_Hair_Mohawk_Mid_AnimBP_C.BlueprintInitializeAnimation");
		
		UFemale_Hair_Mohawk_Mid_AnimBP_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Female_Hair_Mohawk_Mid_AnimBP.Female_Hair_Mohawk_Mid_AnimBP_C.ExecuteUbergraph_Female_Hair_Mohawk_Mid_AnimBP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UFemale_Hair_Mohawk_Mid_AnimBP_C::ExecuteUbergraph_Female_Hair_Mohawk_Mid_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Female_Hair_Mohawk_Mid_AnimBP.Female_Hair_Mohawk_Mid_AnimBP_C.ExecuteUbergraph_Female_Hair_Mohawk_Mid_AnimBP");
		
		UFemale_Hair_Mohawk_Mid_AnimBP_C_ExecuteUbergraph_Female_Hair_Mohawk_Mid_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFemale_Hair_Mohawk_Mid_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFemale_Hair_Mohawk_Mid_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Female_Hair_Mohawk_Mid_AnimBP.Female_Hair_Mohawk_Mid_AnimBP_C");
		return ptr;
	}

}


