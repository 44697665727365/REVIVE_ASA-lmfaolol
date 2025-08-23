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
	 * 		Name   -> Function PrimalCharAnimFunctions.PrimalCharAnimFunctions_C.UpdateGroundConformingVariables
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PrimalCharacter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasHitTheGroundOnce                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsBeingDragged                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsSwimming                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsFalling                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShouldMarkHasHitGroundonce                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Interpolate                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalCharAnimFunctions_C::STATIC_UpdateGroundConformingVariables(class APrimalCharacter* PrimalCharacter, bool HasHitTheGroundOnce, class UObject* __WorldContext, bool* IsBeingDragged, bool* IsSwimming, bool* IsFalling, bool* ShouldMarkHasHitGroundonce, bool* Interpolate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalCharAnimFunctions.PrimalCharAnimFunctions_C.UpdateGroundConformingVariables");
		
		UPrimalCharAnimFunctions_C_UpdateGroundConformingVariables_Params params {};
		params.PrimalCharacter = PrimalCharacter;
		params.HasHitTheGroundOnce = HasHitTheGroundOnce;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsBeingDragged != nullptr)
			*IsBeingDragged = params.IsBeingDragged;
		if (IsSwimming != nullptr)
			*IsSwimming = params.IsSwimming;
		if (IsFalling != nullptr)
			*IsFalling = params.IsFalling;
		if (ShouldMarkHasHitGroundonce != nullptr)
			*ShouldMarkHasHitGroundonce = params.ShouldMarkHasHitGroundonce;
		if (Interpolate != nullptr)
			*Interpolate = params.Interpolate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalCharAnimFunctions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalCharAnimFunctions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalCharAnimFunctions.PrimalCharAnimFunctions_C");
		return ptr;
	}

}


