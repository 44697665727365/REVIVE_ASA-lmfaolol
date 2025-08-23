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
	 * 		Name   -> Function StructureItemContainerBaseBP.StructureItemContainerBaseBP_C.BPOnTransferAll
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalInventoryComponent*                   ToInventory                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void AStructureItemContainerBaseBP_C::BPOnTransferAll(class UPrimalInventoryComponent* ToInventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StructureItemContainerBaseBP.StructureItemContainerBaseBP_C.BPOnTransferAll");
		
		AStructureItemContainerBaseBP_C_BPOnTransferAll_Params params {};
		params.ToInventory = ToInventory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStructureItemContainerBaseBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStructureItemContainerBaseBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StructureItemContainerBaseBP.StructureItemContainerBaseBP_C");
		return ptr;
	}

}


