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
	 * 		Name   -> Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverridePivotLocation
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            CameraOwnerCharacter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     CurrentPivotLocation                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     DesiredPivotLocation                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UASACameraFunctionLibrary_C::STATIC_FinalOverridePivotLocation(class APrimalCharacter* CameraOwnerCharacter, const struct FVector& CurrentPivotLocation, struct FVector* DesiredPivotLocation, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverridePivotLocation");
		
		UASACameraFunctionLibrary_C_FinalOverridePivotLocation_Params params {};
		params.CameraOwnerCharacter = CameraOwnerCharacter;
		params.CurrentPivotLocation = CurrentPivotLocation;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DesiredPivotLocation != nullptr)
			*DesiredPivotLocation = params.DesiredPivotLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ShouldApplyAnyPitchBasedModifier
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            CameraOwnerCharacter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bShouldApplyAnyModifier                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UASACameraFunctionLibrary_C::STATIC_ShouldApplyAnyPitchBasedModifier(class APrimalCharacter* CameraOwnerCharacter, class UObject* __WorldContext, bool* bShouldApplyAnyModifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ShouldApplyAnyPitchBasedModifier");
		
		UASACameraFunctionLibrary_C_ShouldApplyAnyPitchBasedModifier_Params params {};
		params.CameraOwnerCharacter = CameraOwnerCharacter;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bShouldApplyAnyModifier != nullptr)
			*bShouldApplyAnyModifier = params.bShouldApplyAnyModifier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToArmLengthInterp
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            CameraOwnerCharacter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPrimalCameraParams                         CameraParams                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FPrimalCameraInterpParams                   ArmLengthInterpParams                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		TArray<struct FPrimalCameraPitchBasedModifier>     PitchBasedModifiers                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UASACameraFunctionLibrary_C::STATIC_ApplyPitchBasedModifierToArmLengthInterp(class APrimalCharacter* CameraOwnerCharacter, struct FPrimalCameraParams* CameraParams, struct FPrimalCameraInterpParams* ArmLengthInterpParams, TArray<struct FPrimalCameraPitchBasedModifier>* PitchBasedModifiers, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToArmLengthInterp");
		
		UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToArmLengthInterp_Params params {};
		params.CameraOwnerCharacter = CameraOwnerCharacter;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CameraParams != nullptr)
			*CameraParams = params.CameraParams;
		if (ArmLengthInterpParams != nullptr)
			*ArmLengthInterpParams = params.ArmLengthInterpParams;
		if (PitchBasedModifiers != nullptr)
			*PitchBasedModifiers = params.PitchBasedModifiers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.DebugPitchBasedModifier
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            CameraOwnerCharacter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPrimalCameraPitchBasedModifier             PitchBasedModifier                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		int32_t                                            entryIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ModifierAlpha                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UASACameraFunctionLibrary_C::STATIC_DebugPitchBasedModifier(class APrimalCharacter* CameraOwnerCharacter, struct FPrimalCameraPitchBasedModifier* PitchBasedModifier, int32_t entryIndex, double ModifierAlpha, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.DebugPitchBasedModifier");
		
		UASACameraFunctionLibrary_C_DebugPitchBasedModifier_Params params {};
		params.CameraOwnerCharacter = CameraOwnerCharacter;
		params.entryIndex = entryIndex;
		params.ModifierAlpha = ModifierAlpha;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PitchBasedModifier != nullptr)
			*PitchBasedModifier = params.PitchBasedModifier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverridePivotOffset
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            CameraOwnerCharacter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPrimalCameraParams                         CameraParams                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FPrimalCameraPitchBasedModifier>     PitchBasedModifiers                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     DesiredPivotOffset                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UASACameraFunctionLibrary_C::STATIC_FinalOverridePivotOffset(class APrimalCharacter* CameraOwnerCharacter, struct FPrimalCameraParams* CameraParams, TArray<struct FPrimalCameraPitchBasedModifier>* PitchBasedModifiers, struct FVector* DesiredPivotOffset, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverridePivotOffset");
		
		UASACameraFunctionLibrary_C_FinalOverridePivotOffset_Params params {};
		params.CameraOwnerCharacter = CameraOwnerCharacter;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CameraParams != nullptr)
			*CameraParams = params.CameraParams;
		if (PitchBasedModifiers != nullptr)
			*PitchBasedModifiers = params.PitchBasedModifiers;
		if (DesiredPivotOffset != nullptr)
			*DesiredPivotOffset = params.DesiredPivotOffset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToPivotOffset
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            CameraOwnerCharacter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPrimalCameraParams                         CameraParams                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FPrimalCameraPitchBasedModifier>     PitchBasedModifiers                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     DesiredPivotOffset                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UASACameraFunctionLibrary_C::STATIC_ApplyPitchBasedModifierToPivotOffset(class APrimalCharacter* CameraOwnerCharacter, struct FPrimalCameraParams* CameraParams, TArray<struct FPrimalCameraPitchBasedModifier>* PitchBasedModifiers, struct FVector* DesiredPivotOffset, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToPivotOffset");
		
		UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToPivotOffset_Params params {};
		params.CameraOwnerCharacter = CameraOwnerCharacter;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CameraParams != nullptr)
			*CameraParams = params.CameraParams;
		if (PitchBasedModifiers != nullptr)
			*PitchBasedModifiers = params.PitchBasedModifiers;
		if (DesiredPivotOffset != nullptr)
			*DesiredPivotOffset = params.DesiredPivotOffset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToArmLength
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            CameraOwnerCharacter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPrimalCameraParams                         CameraParams                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<struct FPrimalCameraPitchBasedModifier>     PitchBasedModifiers                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		double                                             CurrentArmLength                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             DesiredArmLength                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UASACameraFunctionLibrary_C::STATIC_ApplyPitchBasedModifierToArmLength(class APrimalCharacter* CameraOwnerCharacter, struct FPrimalCameraParams* CameraParams, TArray<struct FPrimalCameraPitchBasedModifier>* PitchBasedModifiers, double CurrentArmLength, double* DesiredArmLength, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToArmLength");
		
		UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToArmLength_Params params {};
		params.CameraOwnerCharacter = CameraOwnerCharacter;
		params.CurrentArmLength = CurrentArmLength;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CameraParams != nullptr)
			*CameraParams = params.CameraParams;
		if (PitchBasedModifiers != nullptr)
			*PitchBasedModifiers = params.PitchBasedModifiers;
		if (DesiredArmLength != nullptr)
			*DesiredArmLength = params.DesiredArmLength;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ShouldApplyPitchBasedModifier
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            CameraOwnerCharacter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPrimalCameraPitchBasedModifier             PitchBasedModifier                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bShouldApplyModifier                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bShouldLerp                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             LerpAlpha                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UASACameraFunctionLibrary_C::STATIC_ShouldApplyPitchBasedModifier(class APrimalCharacter* CameraOwnerCharacter, struct FPrimalCameraPitchBasedModifier* PitchBasedModifier, class UObject* __WorldContext, bool* bShouldApplyModifier, bool* bShouldLerp, double* LerpAlpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ShouldApplyPitchBasedModifier");
		
		UASACameraFunctionLibrary_C_ShouldApplyPitchBasedModifier_Params params {};
		params.CameraOwnerCharacter = CameraOwnerCharacter;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PitchBasedModifier != nullptr)
			*PitchBasedModifier = params.PitchBasedModifier;
		if (bShouldApplyModifier != nullptr)
			*bShouldApplyModifier = params.bShouldApplyModifier;
		if (bShouldLerp != nullptr)
			*bShouldLerp = params.bShouldLerp;
		if (LerpAlpha != nullptr)
			*LerpAlpha = params.LerpAlpha;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToInterpParams
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            CameraOwnerCharacter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPrimalCameraParams                         CameraParams                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FPrimalCameraInterpParams                   InterpParamsX                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		struct FPrimalCameraInterpParams                   InterpParamsY                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		struct FPrimalCameraInterpParams                   InterpParamsZ                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		TArray<struct FPrimalCameraPitchBasedModifier>     PitchBasedModifiers                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UASACameraFunctionLibrary_C::STATIC_ApplyPitchBasedModifierToInterpParams(class APrimalCharacter* CameraOwnerCharacter, struct FPrimalCameraParams* CameraParams, struct FPrimalCameraInterpParams* InterpParamsX, struct FPrimalCameraInterpParams* InterpParamsY, struct FPrimalCameraInterpParams* InterpParamsZ, TArray<struct FPrimalCameraPitchBasedModifier>* PitchBasedModifiers, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyPitchBasedModifierToInterpParams");
		
		UASACameraFunctionLibrary_C_ApplyPitchBasedModifierToInterpParams_Params params {};
		params.CameraOwnerCharacter = CameraOwnerCharacter;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CameraParams != nullptr)
			*CameraParams = params.CameraParams;
		if (InterpParamsX != nullptr)
			*InterpParamsX = params.InterpParamsX;
		if (InterpParamsY != nullptr)
			*InterpParamsY = params.InterpParamsY;
		if (InterpParamsZ != nullptr)
			*InterpParamsZ = params.InterpParamsZ;
		if (PitchBasedModifiers != nullptr)
			*PitchBasedModifiers = params.PitchBasedModifiers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverrideCameraArmLengthInterpParams
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            CameraOwnerCharacter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPrimalCameraParams                         CameraParams                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FPrimalCameraInterpParams                   OutInterpParams                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UASACameraFunctionLibrary_C::STATIC_FinalOverrideCameraArmLengthInterpParams(class APrimalCharacter* CameraOwnerCharacter, struct FPrimalCameraParams* CameraParams, struct FPrimalCameraInterpParams* OutInterpParams, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverrideCameraArmLengthInterpParams");
		
		UASACameraFunctionLibrary_C_FinalOverrideCameraArmLengthInterpParams_Params params {};
		params.CameraOwnerCharacter = CameraOwnerCharacter;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CameraParams != nullptr)
			*CameraParams = params.CameraParams;
		if (OutInterpParams != nullptr)
			*OutInterpParams = params.OutInterpParams;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverrideCameraArmLength
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            CharacterToKeepOnScreen                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPrimalCameraParams                         CameraParams                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class APrimalCharacter*                            CameraOwnerCharacter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             CurrentCameraArmLength                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             DesiredCameraArmLength                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UASACameraFunctionLibrary_C::STATIC_FinalOverrideCameraArmLength(class APrimalCharacter* CharacterToKeepOnScreen, struct FPrimalCameraParams* CameraParams, class APrimalCharacter* CameraOwnerCharacter, double CurrentCameraArmLength, double* DesiredCameraArmLength, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.FinalOverrideCameraArmLength");
		
		UASACameraFunctionLibrary_C_FinalOverrideCameraArmLength_Params params {};
		params.CharacterToKeepOnScreen = CharacterToKeepOnScreen;
		params.CameraOwnerCharacter = CameraOwnerCharacter;
		params.CurrentCameraArmLength = CurrentCameraArmLength;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CameraParams != nullptr)
			*CameraParams = params.CameraParams;
		if (DesiredCameraArmLength != nullptr)
			*DesiredCameraArmLength = params.DesiredCameraArmLength;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.Final Override Pivot Interp Params
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            CameraOwnerCharacter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPrimalCameraParams                         CameraParams                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FPrimalCameraPivotZInterpOverrides          PivotZInterpOverrides                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		struct FPrimalCameraInterpParams                   LastPivotInterpParamsX                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPrimalCameraInterpParams                   LastPivotInterpParamsY                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPrimalCameraInterpParams                   LastPivotInterpParamsZ                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPrimalCameraInterpParams                   PivotInterpParamsX                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		struct FPrimalCameraInterpParams                   PivotInterpParamsY                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		struct FPrimalCameraInterpParams                   PivotInterpParamsZ                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UASACameraFunctionLibrary_C::STATIC_FinalOverridePivotInterpParams(class APrimalCharacter* CameraOwnerCharacter, struct FPrimalCameraParams* CameraParams, struct FPrimalCameraPivotZInterpOverrides* PivotZInterpOverrides, const struct FPrimalCameraInterpParams& LastPivotInterpParamsX, const struct FPrimalCameraInterpParams& LastPivotInterpParamsY, const struct FPrimalCameraInterpParams& LastPivotInterpParamsZ, struct FPrimalCameraInterpParams* PivotInterpParamsX, struct FPrimalCameraInterpParams* PivotInterpParamsY, struct FPrimalCameraInterpParams* PivotInterpParamsZ, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.Final Override Pivot Interp Params");
		
		UASACameraFunctionLibrary_C_FinalOverridePivotInterpParams_Params params {};
		params.CameraOwnerCharacter = CameraOwnerCharacter;
		params.LastPivotInterpParamsX = LastPivotInterpParamsX;
		params.LastPivotInterpParamsY = LastPivotInterpParamsY;
		params.LastPivotInterpParamsZ = LastPivotInterpParamsZ;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CameraParams != nullptr)
			*CameraParams = params.CameraParams;
		if (PivotZInterpOverrides != nullptr)
			*PivotZInterpOverrides = params.PivotZInterpOverrides;
		if (PivotInterpParamsX != nullptr)
			*PivotInterpParamsX = params.PivotInterpParamsX;
		if (PivotInterpParamsY != nullptr)
			*PivotInterpParamsY = params.PivotInterpParamsY;
		if (PivotInterpParamsZ != nullptr)
			*PivotInterpParamsZ = params.PivotInterpParamsZ;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyModifiersToInterpParams
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            CameraOwnerCharacter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPrimalCameraParams                         CameraParams                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FPrimalCameraInterpParams                   InterpParams                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		TArray<struct FPrimalCameraInterpScreenAreaModifier> InterpParamsModifiers                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FName                                        DebugScreenModifierId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UASACameraFunctionLibrary_C::STATIC_ApplyModifiersToInterpParams(class APrimalCharacter* CameraOwnerCharacter, struct FPrimalCameraParams* CameraParams, struct FPrimalCameraInterpParams* InterpParams, TArray<struct FPrimalCameraInterpScreenAreaModifier>* InterpParamsModifiers, const class FName& DebugScreenModifierId, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.ApplyModifiersToInterpParams");
		
		UASACameraFunctionLibrary_C_ApplyModifiersToInterpParams_Params params {};
		params.CameraOwnerCharacter = CameraOwnerCharacter;
		params.DebugScreenModifierId = DebugScreenModifierId;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CameraParams != nullptr)
			*CameraParams = params.CameraParams;
		if (InterpParams != nullptr)
			*InterpParams = params.InterpParams;
		if (InterpParamsModifiers != nullptr)
			*InterpParamsModifiers = params.InterpParamsModifiers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.WorldLocationToScreenArea
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            CameraOwnerCharacter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     WorldLocationToProject                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ScreenAreaX                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ScreenAreaY                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ViewportSizeX                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ViewportSizeY                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ScreenRawPosX                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             ScreenRawPosY                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UASACameraFunctionLibrary_C::STATIC_WorldLocationToScreenArea(class APrimalCharacter* CameraOwnerCharacter, const struct FVector& WorldLocationToProject, class UObject* __WorldContext, double* ScreenAreaX, double* ScreenAreaY, double* ViewportSizeX, double* ViewportSizeY, double* ScreenRawPosX, double* ScreenRawPosY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ASACameraFunctionLibrary.ASACameraFunctionLibrary_C.WorldLocationToScreenArea");
		
		UASACameraFunctionLibrary_C_WorldLocationToScreenArea_Params params {};
		params.CameraOwnerCharacter = CameraOwnerCharacter;
		params.WorldLocationToProject = WorldLocationToProject;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScreenAreaX != nullptr)
			*ScreenAreaX = params.ScreenAreaX;
		if (ScreenAreaY != nullptr)
			*ScreenAreaY = params.ScreenAreaY;
		if (ViewportSizeX != nullptr)
			*ViewportSizeX = params.ViewportSizeX;
		if (ViewportSizeY != nullptr)
			*ViewportSizeY = params.ViewportSizeY;
		if (ScreenRawPosX != nullptr)
			*ScreenRawPosX = params.ScreenRawPosX;
		if (ScreenRawPosY != nullptr)
			*ScreenRawPosY = params.ScreenRawPosY;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UASACameraFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UASACameraFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ASACameraFunctionLibrary.ASACameraFunctionLibrary_C");
		return ptr;
	}

}


