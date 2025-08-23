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
	 * 		Name   -> Function DroppedItemGenericLowQuality.DroppedItemGenericLowQuality_C.BPDroppedItemImpacted
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  impactHitInfo                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ADroppedItemGenericLowQuality_C::BPDroppedItemImpacted(const struct FHitResult& impactHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGenericLowQuality.DroppedItemGenericLowQuality_C.BPDroppedItemImpacted");
		
		ADroppedItemGenericLowQuality_C_BPDroppedItemImpacted_Params params {};
		params.impactHitInfo = impactHitInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function DroppedItemGenericLowQuality.DroppedItemGenericLowQuality_C.ExecuteUbergraph_DroppedItemGenericLowQuality
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADroppedItemGenericLowQuality_C::ExecuteUbergraph_DroppedItemGenericLowQuality(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DroppedItemGenericLowQuality.DroppedItemGenericLowQuality_C.ExecuteUbergraph_DroppedItemGenericLowQuality");
		
		ADroppedItemGenericLowQuality_C_ExecuteUbergraph_DroppedItemGenericLowQuality_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADroppedItemGenericLowQuality_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADroppedItemGenericLowQuality_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItemGenericLowQuality.DroppedItemGenericLowQuality_C");
		return ptr;
	}

}


