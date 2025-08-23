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
	 * 		Name   -> Function PrimalDinoAnimFunctions.PrimalDinoAnimFunctions_C.UpdateLimbWallAvoidanceVariables
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        PrimalDinoCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInterpolate                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bUpdateDinoLimbWallAvoidance                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalDinoAnimFunctions_C::STATIC_UpdateLimbWallAvoidanceVariables(class APrimalDinoCharacter* PrimalDinoCharacter, class UObject* __WorldContext, bool* bInterpolate, bool* bUpdateDinoLimbWallAvoidance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalDinoAnimFunctions.PrimalDinoAnimFunctions_C.UpdateLimbWallAvoidanceVariables");
		
		UPrimalDinoAnimFunctions_C_UpdateLimbWallAvoidanceVariables_Params params {};
		params.PrimalDinoCharacter = PrimalDinoCharacter;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bInterpolate != nullptr)
			*bInterpolate = params.bInterpolate;
		if (bUpdateDinoLimbWallAvoidance != nullptr)
			*bUpdateDinoLimbWallAvoidance = params.bUpdateDinoLimbWallAvoidance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalDinoAnimFunctions.PrimalDinoAnimFunctions_C.InitializeGroundConformVariables
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Interpolate                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalDinoAnimFunctions_C::STATIC_InitializeGroundConformVariables(class UObject* WorldContextObject, class UObject* __WorldContext, bool* Interpolate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalDinoAnimFunctions.PrimalDinoAnimFunctions_C.InitializeGroundConformVariables");
		
		UPrimalDinoAnimFunctions_C_InitializeGroundConformVariables_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Interpolate != nullptr)
			*Interpolate = params.Interpolate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalDinoAnimFunctions.PrimalDinoAnimFunctions_C.UpdateGroundConformVariables
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        PrimalDinoCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HasHitTheGroundOnce                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsBeingDragged                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsSwimming                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsFalling                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShouldMarkHasHitGroundonce                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Interpolate                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalDinoAnimFunctions_C::STATIC_UpdateGroundConformVariables(class APrimalDinoCharacter* PrimalDinoCharacter, bool HasHitTheGroundOnce, class UObject* __WorldContext, bool* IsBeingDragged, bool* IsSwimming, bool* IsFalling, bool* ShouldMarkHasHitGroundonce, bool* Interpolate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalDinoAnimFunctions.PrimalDinoAnimFunctions_C.UpdateGroundConformVariables");
		
		UPrimalDinoAnimFunctions_C_UpdateGroundConformVariables_Params params {};
		params.PrimalDinoCharacter = PrimalDinoCharacter;
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
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function PrimalDinoAnimFunctions.PrimalDinoAnimFunctions_C.SelectDeathAnim
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADino_Character_BP_C*                        Dino                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ImpactVelocity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       InstigatingPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimMontage*                                PlayedAnim                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UPrimalDinoAnimFunctions_C::STATIC_SelectDeathAnim(class ADino_Character_BP_C* Dino, const struct FVector& ImpactVelocity, class APawn* InstigatingPawn, class AActor* DamageCauser, class UObject* __WorldContext, class UAnimMontage** PlayedAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalDinoAnimFunctions.PrimalDinoAnimFunctions_C.SelectDeathAnim");
		
		UPrimalDinoAnimFunctions_C_SelectDeathAnim_Params params {};
		params.Dino = Dino;
		params.ImpactVelocity = ImpactVelocity;
		params.InstigatingPawn = InstigatingPawn;
		params.DamageCauser = DamageCauser;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayedAnim != nullptr)
			*PlayedAnim = params.PlayedAnim;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalDinoAnimFunctions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalDinoAnimFunctions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalDinoAnimFunctions.PrimalDinoAnimFunctions_C");
		return ptr;
	}

}


