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
	 * 		Name   -> Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraDesiredPivotLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     CurrentCameraPivotLocation                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     DesiredCameraPivotLocation                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ADino_Character_BP_C::BPOverrideCameraDesiredPivotLocation(const struct FVector& CurrentCameraPivotLocation, struct FVector* DesiredCameraPivotLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraDesiredPivotLocation");
		
		ADino_Character_BP_C_BPOverrideCameraDesiredPivotLocation_Params params {};
		params.CurrentCameraPivotLocation = CurrentCameraPivotLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DesiredCameraPivotLocation != nullptr)
			*DesiredCameraPivotLocation = params.DesiredCameraPivotLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraDesiredPivotRotation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    CurrentCameraPivotRotation                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    DesiredCameraPivotRotation                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	bool ADino_Character_BP_C::BPOverrideCameraDesiredPivotRotation(const struct FRotator& CurrentCameraPivotRotation, struct FRotator* DesiredCameraPivotRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraDesiredPivotRotation");
		
		ADino_Character_BP_C_BPOverrideCameraDesiredPivotRotation_Params params {};
		params.CurrentCameraPivotRotation = CurrentCameraPivotRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DesiredCameraPivotRotation != nullptr)
			*DesiredCameraPivotRotation = params.DesiredCameraPivotRotation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraDesiredPivotOffset
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPrimalCameraParams                         CameraParams                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     DesiredCameraOffset                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ADino_Character_BP_C::BPOverrideCameraDesiredPivotOffset(const struct FPrimalCameraParams& CameraParams, struct FVector* DesiredCameraOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraDesiredPivotOffset");
		
		ADino_Character_BP_C_BPOverrideCameraDesiredPivotOffset_Params params {};
		params.CameraParams = CameraParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DesiredCameraOffset != nullptr)
			*DesiredCameraOffset = params.DesiredCameraOffset;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraPivotLocationInterpParams
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPrimalCameraParams                         CameraParams                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FPrimalCameraPivotZInterpOverrides          PivotZInterpOverrides                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		struct FPrimalCameraInterpParams                   LastInterpParamsX                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		struct FPrimalCameraInterpParams                   LastInterpParamsY                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		struct FPrimalCameraInterpParams                   LastInterpParamsZ                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		struct FPrimalCameraInterpParams                   OutInterpParamsX                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		struct FPrimalCameraInterpParams                   OutInterpParamsY                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		struct FPrimalCameraInterpParams                   OutInterpParamsZ                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	bool ADino_Character_BP_C::BPOverrideCameraPivotLocationInterpParams(const struct FPrimalCameraParams& CameraParams, const struct FPrimalCameraPivotZInterpOverrides& PivotZInterpOverrides, const struct FPrimalCameraInterpParams& LastInterpParamsX, const struct FPrimalCameraInterpParams& LastInterpParamsY, const struct FPrimalCameraInterpParams& LastInterpParamsZ, struct FPrimalCameraInterpParams* OutInterpParamsX, struct FPrimalCameraInterpParams* OutInterpParamsY, struct FPrimalCameraInterpParams* OutInterpParamsZ)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraPivotLocationInterpParams");
		
		ADino_Character_BP_C_BPOverrideCameraPivotLocationInterpParams_Params params {};
		params.CameraParams = CameraParams;
		params.PivotZInterpOverrides = PivotZInterpOverrides;
		params.LastInterpParamsX = LastInterpParamsX;
		params.LastInterpParamsY = LastInterpParamsY;
		params.LastInterpParamsZ = LastInterpParamsZ;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutInterpParamsX != nullptr)
			*OutInterpParamsX = params.OutInterpParamsX;
		if (OutInterpParamsY != nullptr)
			*OutInterpParamsY = params.OutInterpParamsY;
		if (OutInterpParamsZ != nullptr)
			*OutInterpParamsZ = params.OutInterpParamsZ;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraArmLengthInterpParams
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPrimalCameraParams                         CameraParams                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FPrimalCameraInterpParams                   OutInterpParams                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	bool ADino_Character_BP_C::BPOverrideCameraArmLengthInterpParams(const struct FPrimalCameraParams& CameraParams, struct FPrimalCameraInterpParams* OutInterpParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraArmLengthInterpParams");
		
		ADino_Character_BP_C_BPOverrideCameraArmLengthInterpParams_Params params {};
		params.CameraParams = CameraParams;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutInterpParams != nullptr)
			*OutInterpParams = params.OutInterpParams;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraArmLength
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPrimalCameraParams                         CameraParams                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              CurrentCameraArmLength                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DesiredCameraArmLength                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ADino_Character_BP_C::BPOverrideCameraArmLength(const struct FPrimalCameraParams& CameraParams, float CurrentCameraArmLength, float* DesiredCameraArmLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP.Dino_Character_BP_C.BPOverrideCameraArmLength");
		
		ADino_Character_BP_C_BPOverrideCameraArmLength_Params params {};
		params.CameraParams = CameraParams;
		params.CurrentCameraArmLength = CurrentCameraArmLength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DesiredCameraArmLength != nullptr)
			*DesiredCameraArmLength = params.DesiredCameraArmLength;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP.Dino_Character_BP_C.GetFXBloodColor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FLinearColor ADino_Character_BP_C::GetFXBloodColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP.Dino_Character_BP_C.GetFXBloodColor");
		
		ADino_Character_BP_C_GetFXBloodColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP.Dino_Character_BP_C.BlueprintOverrideWantsToRun
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bInputWantsToRun                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ADino_Character_BP_C::BlueprintOverrideWantsToRun(bool bInputWantsToRun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP.Dino_Character_BP_C.BlueprintOverrideWantsToRun");
		
		ADino_Character_BP_C_BlueprintOverrideWantsToRun_Params params {};
		params.bInputWantsToRun = bInputWantsToRun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP.Dino_Character_BP_C.UpdateBabyAndRunValues
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_C::UpdateBabyAndRunValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP.Dino_Character_BP_C.UpdateBabyAndRunValues");
		
		ADino_Character_BP_C_UpdateBabyAndRunValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP.Dino_Character_BP_C.BPControlRigNotify
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        NotifyCustomTag                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  WorldSpaceHitResult                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		struct FVector                                     Velocity                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_C::BPControlRigNotify(const class FName& NotifyName, const class FName& NotifyCustomTag, const struct FHitResult& WorldSpaceHitResult, const struct FVector& Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP.Dino_Character_BP_C.BPControlRigNotify");
		
		ADino_Character_BP_C_BPControlRigNotify_Params params {};
		params.NotifyName = NotifyName;
		params.NotifyCustomTag = NotifyCustomTag;
		params.WorldSpaceHitResult = WorldSpaceHitResult;
		params.Velocity = Velocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP.Dino_Character_BP_C.GetDinoContentData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FDinoContentData                            DinoContentData                                            (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_C::GetDinoContentData(struct FDinoContentData* DinoContentData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP.Dino_Character_BP_C.GetDinoContentData");
		
		ADino_Character_BP_C_GetDinoContentData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DinoContentData != nullptr)
			*DinoContentData = params.DinoContentData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP.Dino_Character_BP_C.BPHandleRightShoulderButton
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	bool ADino_Character_BP_C::BPHandleRightShoulderButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP.Dino_Character_BP_C.BPHandleRightShoulderButton");
		
		ADino_Character_BP_C_BPHandleRightShoulderButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP.Dino_Character_BP_C.UpdateWildBabyNextRunTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_C::UpdateWildBabyNextRunTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP.Dino_Character_BP_C.UpdateWildBabyNextRunTime");
		
		ADino_Character_BP_C_UpdateWildBabyNextRunTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP.Dino_Character_BP_C.BlendSpaceGenerated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UBlendSpace*                                 BlendSpace                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_C::BlendSpaceGenerated(class UBlendSpace* BlendSpace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP.Dino_Character_BP_C.BlendSpaceGenerated");
		
		ADino_Character_BP_C_BlendSpaceGenerated_Params params {};
		params.BlendSpace = BlendSpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP.Dino_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADino_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP.Dino_Character_BP_C.ReceiveBeginPlay");
		
		ADino_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP.Dino_Character_BP_C.EditorBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ADino_Character_BP_C::EditorBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP.Dino_Character_BP_C.EditorBeginPlay");
		
		ADino_Character_BP_C_EditorBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP.Dino_Character_BP_C.BP_OnSetDeath
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADino_Character_BP_C::BP_OnSetDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP.Dino_Character_BP_C.BP_OnSetDeath");
		
		ADino_Character_BP_C_BP_OnSetDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP.Dino_Character_BP_C.BPBecomeBaby
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ADino_Character_BP_C::BPBecomeBaby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP.Dino_Character_BP_C.BPBecomeBaby");
		
		ADino_Character_BP_C_BPBecomeBaby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP.Dino_Character_BP_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADino_Character_BP_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP.Dino_Character_BP_C.ReceiveDestroyed");
		
		ADino_Character_BP_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP.Dino_Character_BP_C.BPTriggerStasisEvent
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ADino_Character_BP_C::BPTriggerStasisEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP.Dino_Character_BP_C.BPTriggerStasisEvent");
		
		ADino_Character_BP_C_BPTriggerStasisEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP.Dino_Character_BP_C.BPSpawnAttackerDamageImpactFX
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        SocketName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APrimalCharacter*                            VictimChar                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_C::BPSpawnAttackerDamageImpactFX(const class FName& SocketName, class APrimalCharacter* VictimChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP.Dino_Character_BP_C.BPSpawnAttackerDamageImpactFX");
		
		ADino_Character_BP_C_BPSpawnAttackerDamageImpactFX_Params params {};
		params.SocketName = SocketName;
		params.VictimChar = VictimChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP.Dino_Character_BP_C.BPBecomeAdult
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ADino_Character_BP_C::BPBecomeAdult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP.Dino_Character_BP_C.BPBecomeAdult");
		
		ADino_Character_BP_C_BPBecomeAdult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP.Dino_Character_BP_C.BPNotifyClaimed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ADino_Character_BP_C::BPNotifyClaimed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP.Dino_Character_BP_C.BPNotifyClaimed");
		
		ADino_Character_BP_C_BPNotifyClaimed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function Dino_Character_BP.Dino_Character_BP_C.ExecuteUbergraph_Dino_Character_BP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADino_Character_BP_C::ExecuteUbergraph_Dino_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dino_Character_BP.Dino_Character_BP_C.ExecuteUbergraph_Dino_Character_BP");
		
		ADino_Character_BP_C_ExecuteUbergraph_Dino_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADino_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADino_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Dino_Character_BP.Dino_Character_BP_C");
		return ptr;
	}

}


