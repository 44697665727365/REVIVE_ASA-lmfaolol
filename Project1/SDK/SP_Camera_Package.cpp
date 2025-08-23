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
	 * 		RVA    -> 0x019B4C70
	 * 		Name   -> Function SP_Camera.SPCameraMode.ResetToDefaultSettings
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void USPCameraMode::ResetToDefaultSettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Camera.SPCameraMode.ResetToDefaultSettings");
		
		USPCameraMode_ResetToDefaultSettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04091020
	 * 		Name   -> Function SP_Camera.SPCameraMode.GetCustomFocusDistance
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      ViewTarget                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  ViewToWorld                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USPCameraMode::GetCustomFocusDistance(class AActor* ViewTarget, const struct FTransform& ViewToWorld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Camera.SPCameraMode.GetCustomFocusDistance");
		
		USPCameraMode_GetCustomFocusDistance_Params params {};
		params.ViewTarget = ViewTarget;
		params.ViewToWorld = ViewToWorld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USPCameraMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USPCameraMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SP_Camera.SPCameraMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025AE130
	 * 		Name   -> Function SP_Camera.SPCam_AttachedCamera.ChooseViewCameraComponent
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      ViewTarget                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UCameraComponent* USPCam_AttachedCamera::ChooseViewCameraComponent(class AActor* ViewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Camera.SPCam_AttachedCamera.ChooseViewCameraComponent");
		
		USPCam_AttachedCamera_ChooseViewCameraComponent_Params params {};
		params.ViewTarget = ViewTarget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USPCam_AttachedCamera.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USPCam_AttachedCamera::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SP_Camera.SPCam_AttachedCamera");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USPCam_ThirdPerson.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USPCam_ThirdPerson::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SP_Camera.SPCam_ThirdPerson");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025AEF80
	 * 		Name   -> Function SP_Camera.SPPlayerCameraManager.StopAmbientCameraShake
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bImmediate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASPPlayerCameraManager::StopAmbientCameraShake(bool bImmediate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Camera.SPPlayerCameraManager.StopAmbientCameraShake");
		
		ASPPlayerCameraManager_StopAmbientCameraShake_Params params {};
		params.bImmediate = bImmediate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025AF0A0
	 * 		Name   -> Function SP_Camera.SPPlayerCameraManager.StartAmbientCameraShake
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ASPPlayerCameraManager::StartAmbientCameraShake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Camera.SPPlayerCameraManager.StartAmbientCameraShake");
		
		ASPPlayerCameraManager_StartAmbientCameraShake_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025AF0E0
	 * 		Name   -> Function SP_Camera.SPPlayerCameraManager.SkipNextInterpolation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ASPPlayerCameraManager::SkipNextInterpolation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Camera.SPPlayerCameraManager.SkipNextInterpolation");
		
		ASPPlayerCameraManager_SkipNextInterpolation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025AF100
	 * 		Name   -> Function SP_Camera.SPPlayerCameraManager.SkipBlends
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ASPPlayerCameraManager::SkipBlends()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Camera.SPPlayerCameraManager.SkipBlends");
		
		ASPPlayerCameraManager_SkipBlends_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025AF4D0
	 * 		Name   -> Function SP_Camera.SPPlayerCameraManager.SetViewPitchLimits
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              MinPitch                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MaxPitch                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASPPlayerCameraManager::SetViewPitchLimits(float MinPitch, float MaxPitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Camera.SPPlayerCameraManager.SetViewPitchLimits");
		
		ASPPlayerCameraManager_SetViewPitchLimits_Params params {};
		params.MinPitch = MinPitch;
		params.MaxPitch = MaxPitch;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025AF190
	 * 		Name   -> Function SP_Camera.SPPlayerCameraManager.SetUsingAlternateCamera
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bNewUsingAltCamera                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASPPlayerCameraManager::SetUsingAlternateCamera(bool bNewUsingAltCamera)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Camera.SPPlayerCameraManager.SetUsingAlternateCamera");
		
		ASPPlayerCameraManager_SetUsingAlternateCamera_Params params {};
		params.bNewUsingAltCamera = bNewUsingAltCamera;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025AF660
	 * 		Name   -> Function SP_Camera.SPPlayerCameraManager.SetDebugCameraStyle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EDebugCameraStyle                                  NewDebugCameraStyle                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASPPlayerCameraManager::SetDebugCameraStyle(EDebugCameraStyle NewDebugCameraStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Camera.SPPlayerCameraManager.SetDebugCameraStyle");
		
		ASPPlayerCameraManager_SetDebugCameraStyle_Params params {};
		params.NewDebugCameraStyle = NewDebugCameraStyle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025AF4A0
	 * 		Name   -> Function SP_Camera.SPPlayerCameraManager.ResetViewPitchLimits
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ASPPlayerCameraManager::ResetViewPitchLimits()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Camera.SPPlayerCameraManager.ResetViewPitchLimits");
		
		ASPPlayerCameraManager_ResetViewPitchLimits_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025AF120
	 * 		Name   -> Function SP_Camera.SPPlayerCameraManager.IsUsingAlternateCamera
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ASPPlayerCameraManager::IsUsingAlternateCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Camera.SPPlayerCameraManager.IsUsingAlternateCamera");
		
		ASPPlayerCameraManager_IsUsingAlternateCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025AF7E0
	 * 		Name   -> Function SP_Camera.SPPlayerCameraManager.GetCurrentCameraMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class USPCameraMode* ASPPlayerCameraManager::GetCurrentCameraMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Camera.SPPlayerCameraManager.GetCurrentCameraMode");
		
		ASPPlayerCameraManager_GetCurrentCameraMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025AEEA0
	 * 		Name   -> Function SP_Camera.SPPlayerCameraManager.GetCameraClassForCharacter
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      InViewTarget                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UClass* ASPPlayerCameraManager::GetCameraClassForCharacter(class AActor* InViewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Camera.SPPlayerCameraManager.GetCameraClassForCharacter");
		
		ASPPlayerCameraManager_GetCameraClassForCharacter_Params params {};
		params.InViewTarget = InViewTarget;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025AF280
	 * 		Name   -> Function SP_Camera.SPPlayerCameraManager.ConfigureAlternateCamera
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      NewAltCameraMode                                           (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      NewAltViewTarget                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NewAltCameraTransitionTime                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASPPlayerCameraManager::ConfigureAlternateCamera(class UClass* NewAltCameraMode, class AActor* NewAltViewTarget, float NewAltCameraTransitionTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Camera.SPPlayerCameraManager.ConfigureAlternateCamera");
		
		ASPPlayerCameraManager_ConfigureAlternateCamera_Params params {};
		params.NewAltCameraMode = NewAltCameraMode;
		params.NewAltViewTarget = NewAltViewTarget;
		params.NewAltCameraTransitionTime = NewAltCameraTransitionTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x025AF140
	 * 		Name   -> Function SP_Camera.SPPlayerCameraManager.ClearAlternateCamera
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ASPPlayerCameraManager::ClearAlternateCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SP_Camera.SPPlayerCameraManager.ClearAlternateCamera");
		
		ASPPlayerCameraManager_ClearAlternateCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASPPlayerCameraManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASPPlayerCameraManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SP_Camera.SPPlayerCameraManager");
		return ptr;
	}

}


