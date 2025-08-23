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
	 * 		Name   -> Function CactusHarvestComponent.CactusHarvestComponent_C.BPCustomHarvestResource
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalInventoryComponent*                   invComp                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumToGive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      DamageTypeClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		class AActor*                                      ToActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UCactusHarvestComponent_C::BPCustomHarvestResource(class UPrimalInventoryComponent* invComp, int32_t NumToGive, class UClass* DamageTypeClass, class AActor* ToActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CactusHarvestComponent.CactusHarvestComponent_C.BPCustomHarvestResource");
		
		UCactusHarvestComponent_C_BPCustomHarvestResource_Params params {};
		params.invComp = invComp;
		params.NumToGive = NumToGive;
		params.DamageTypeClass = DamageTypeClass;
		params.ToActor = ToActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCactusHarvestComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCactusHarvestComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CactusHarvestComponent.CactusHarvestComponent_C");
		return ptr;
	}

}


