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
	 * 		Name   -> Function SpaceWhale_Character_Base_BP.SpaceWhale_Character_Base_BP_C.OnSaddleEquipped
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Equipped                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASpaceWhale_Character_Base_BP_C::OnSaddleEquipped(bool Equipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_Base_BP.SpaceWhale_Character_Base_BP_C.OnSaddleEquipped");
		
		ASpaceWhale_Character_Base_BP_C_OnSaddleEquipped_Params params {};
		params.Equipped = Equipped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpaceWhale_Character_Base_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpaceWhale_Character_Base_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpaceWhale_Character_Base_BP.SpaceWhale_Character_Base_BP_C");
		return ptr;
	}

}


