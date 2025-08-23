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
	 * 		RVA    -> 0x025E96A0
	 * 		Name   -> Function HoverDrone.HoverDroneMovementComponent.StopForceFacing
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHoverDroneMovementComponent::StopForceFacing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverDrone.HoverDroneMovementComponent.StopForceFacing");
		
		UHoverDroneMovementComponent_StopForceFacing_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025E95B0
	 * 		Name   -> Function HoverDrone.HoverDroneMovementComponent.SetCurrentFOV
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewFOV                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHoverDroneMovementComponent::SetCurrentFOV(float NewFOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverDrone.HoverDroneMovementComponent.SetCurrentFOV");
		
		UHoverDroneMovementComponent_SetCurrentFOV_Params params {};
		params.NewFOV = NewFOV;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025E9710
	 * 		Name   -> Function HoverDrone.HoverDroneMovementComponent.ForceFacing
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHoverDroneMovementComponent::ForceFacing(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverDrone.HoverDroneMovementComponent.ForceFacing");
		
		UHoverDroneMovementComponent_ForceFacing_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025E94A0
	 * 		Name   -> Function HoverDrone.HoverDroneMovementComponent.AddVelocity
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     VelocityImpulse                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHoverDroneMovementComponent::AddVelocity(const struct FVector& VelocityImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverDrone.HoverDroneMovementComponent.AddVelocity");
		
		UHoverDroneMovementComponent_AddVelocity_Params params {};
		params.VelocityImpulse = VelocityImpulse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025E9390
	 * 		Name   -> Function HoverDrone.HoverDroneMovementComponent.AddRotationalVelocity
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRotator                                    RotationalVel                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UHoverDroneMovementComponent::AddRotationalVelocity(const struct FRotator& RotationalVel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverDrone.HoverDroneMovementComponent.AddRotationalVelocity");
		
		UHoverDroneMovementComponent_AddRotationalVelocity_Params params {};
		params.RotationalVel = RotationalVel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHoverDroneMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoverDroneMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoverDrone.HoverDroneMovementComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHoverDronePawnBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHoverDronePawnBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoverDrone.HoverDronePawnBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025ED780
	 * 		Name   -> Function HoverDrone.HoverDronePawn.TurnAccel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Val                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHoverDronePawn::TurnAccel(float Val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverDrone.HoverDronePawn.TurnAccel");
		
		AHoverDronePawn_TurnAccel_Params params {};
		params.Val = Val;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025ED420
	 * 		Name   -> Function HoverDrone.HoverDronePawn.SetToDefaultDroneSpeedIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AHoverDronePawn::SetToDefaultDroneSpeedIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverDrone.HoverDronePawn.SetToDefaultDroneSpeedIndex");
		
		AHoverDronePawn_SetToDefaultDroneSpeedIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025ED520
	 * 		Name   -> Function HoverDrone.HoverDronePawn.SetDroneSpeedIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            SpeedIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHoverDronePawn::SetDroneSpeedIndex(int32_t SpeedIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverDrone.HoverDronePawn.SetDroneSpeedIndex");
		
		AHoverDronePawn_SetDroneSpeedIndex_Params params {};
		params.SpeedIndex = SpeedIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025ED260
	 * 		Name   -> Function HoverDrone.HoverDronePawn.SetAllowSpeedChange
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bOnOff                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHoverDronePawn::SetAllowSpeedChange(bool bOnOff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverDrone.HoverDronePawn.SetAllowSpeedChange");
		
		AHoverDronePawn_SetAllowSpeedChange_Params params {};
		params.bOnOff = bOnOff;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025ED870
	 * 		Name   -> Function HoverDrone.HoverDronePawn.MoveUp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Val                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHoverDronePawn::MoveUp(float Val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverDrone.HoverDronePawn.MoveUp");
		
		AHoverDronePawn_MoveUp_Params params {};
		params.Val = Val;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025ED690
	 * 		Name   -> Function HoverDrone.HoverDronePawn.LookUpAccel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Val                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHoverDronePawn::LookUpAccel(float Val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverDrone.HoverDronePawn.LookUpAccel");
		
		AHoverDronePawn_LookUpAccel_Params params {};
		params.Val = Val;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025ED990
	 * 		Name   -> Function HoverDrone.HoverDronePawn.IsMaintainingConstantAltitude
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AHoverDronePawn::IsMaintainingConstantAltitude()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverDrone.HoverDronePawn.IsMaintainingConstantAltitude");
		
		AHoverDronePawn_IsMaintainingConstantAltitude_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025EDAA0
	 * 		Name   -> Function HoverDrone.HoverDronePawn.GetTiltedDroneRotation
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FRotator AHoverDronePawn::GetTiltedDroneRotation(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverDrone.HoverDronePawn.GetTiltedDroneRotation");
		
		AHoverDronePawn_GetTiltedDroneRotation_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025ED660
	 * 		Name   -> Function HoverDrone.HoverDronePawn.GetDroneSpeedIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t AHoverDronePawn::GetDroneSpeedIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverDrone.HoverDronePawn.GetDroneSpeedIndex");
		
		AHoverDronePawn_GetDroneSpeedIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025EDA10
	 * 		Name   -> Function HoverDrone.HoverDronePawn.GetAltitude
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float AHoverDronePawn::GetAltitude()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverDrone.HoverDronePawn.GetAltitude");
		
		AHoverDronePawn_GetAltitude_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025ED350
	 * 		Name   -> Function HoverDrone.HoverDronePawn.EndLookat
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void AHoverDronePawn::EndLookat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverDrone.HoverDronePawn.EndLookat");
		
		AHoverDronePawn_EndLookat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025ED400
	 * 		Name   -> Function HoverDrone.HoverDronePawn.BeginLookat
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void AHoverDronePawn::BeginLookat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverDrone.HoverDronePawn.BeginLookat");
		
		AHoverDronePawn_BeginLookat_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHoverDronePawn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHoverDronePawn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoverDrone.HoverDronePawn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHoverDroneSpeedLimitBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHoverDroneSpeedLimitBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoverDrone.HoverDroneSpeedLimitBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHoverDroneVolumeManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoverDroneVolumeManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class HoverDrone.HoverDroneVolumeManager");
		return ptr;
	}

}


