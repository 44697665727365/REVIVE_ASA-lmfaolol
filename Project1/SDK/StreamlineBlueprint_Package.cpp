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
	 * 		RVA    -> 0x0256D790
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibrary.QueryStreamlineFeatureSupport
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		EUStreamlineFeature                                Feature                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EUStreamlineFeatureSupport UStreamlineLibrary::STATIC_QueryStreamlineFeatureSupport(EUStreamlineFeature Feature)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibrary.QueryStreamlineFeatureSupport");
		
		UStreamlineLibrary_QueryStreamlineFeatureSupport_Params params {};
		params.Feature = Feature;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0256D890
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibrary.IsStreamlineFeatureSupported
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		EUStreamlineFeature                                Feature                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UStreamlineLibrary::STATIC_IsStreamlineFeatureSupported(EUStreamlineFeature Feature)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibrary.IsStreamlineFeatureSupported");
		
		UStreamlineLibrary_IsStreamlineFeatureSupported_Params params {};
		params.Feature = Feature;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0256DDC0
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibrary.GetStreamlineFeatureInformation
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		EUStreamlineFeature                                Feature                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FStreamlineFeatureRequirements UStreamlineLibrary::STATIC_GetStreamlineFeatureInformation(EUStreamlineFeature Feature)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibrary.GetStreamlineFeatureInformation");
		
		UStreamlineLibrary_GetStreamlineFeatureInformation_Params params {};
		params.Feature = Feature;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0256D9B0
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibrary.BreakStreamlineFeatureRequirements
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		EUStreamlineFeatureRequirementsFlags               Requirements                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               D3D11Supported                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               D3D12Supported                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               VulkanSupported                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               VSyncOffRequired                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               HardwareSchedulingRequired                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStreamlineLibrary::STATIC_BreakStreamlineFeatureRequirements(EUStreamlineFeatureRequirementsFlags Requirements, bool* D3D11Supported, bool* D3D12Supported, bool* VulkanSupported, bool* VSyncOffRequired, bool* HardwareSchedulingRequired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibrary.BreakStreamlineFeatureRequirements");
		
		UStreamlineLibrary_BreakStreamlineFeatureRequirements_Params params {};
		params.Requirements = Requirements;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (D3D11Supported != nullptr)
			*D3D11Supported = params.D3D11Supported;
		if (D3D12Supported != nullptr)
			*D3D12Supported = params.D3D12Supported;
		if (VulkanSupported != nullptr)
			*VulkanSupported = params.VulkanSupported;
		if (VSyncOffRequired != nullptr)
			*VSyncOffRequired = params.VSyncOffRequired;
		if (HardwareSchedulingRequired != nullptr)
			*HardwareSchedulingRequired = params.HardwareSchedulingRequired;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStreamlineLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStreamlineLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StreamlineBlueprint.StreamlineLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0256E4C0
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryDLSSG.SetDLSSGMode
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EUStreamlineDLSSGMode                              DLSSGMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStreamlineLibraryDLSSG::STATIC_SetDLSSGMode(EUStreamlineDLSSGMode DLSSGMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryDLSSG.SetDLSSGMode");
		
		UStreamlineLibraryDLSSG_SetDLSSGMode_Params params {};
		params.DLSSGMode = DLSSGMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0256E950
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryDLSSG.QueryDLSSGSupport
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	EUStreamlineFeatureSupport UStreamlineLibraryDLSSG::STATIC_QueryDLSSGSupport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryDLSSG.QueryDLSSGSupport");
		
		UStreamlineLibraryDLSSG_QueryDLSSGSupport_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0256E990
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGSupported
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UStreamlineLibraryDLSSG::STATIC_IsDLSSGSupported()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGSupported");
		
		UStreamlineLibraryDLSSG_IsDLSSGSupported_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0256E7E0
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGModeSupported
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		EUStreamlineDLSSGMode                              DLSSGMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UStreamlineLibraryDLSSG::STATIC_IsDLSSGModeSupported(EUStreamlineDLSSGMode DLSSGMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGModeSupported");
		
		UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Params params {};
		params.DLSSGMode = DLSSGMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0256E6B0
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetSupportedDLSSGModes
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	TArray<EUStreamlineDLSSGMode> UStreamlineLibraryDLSSG::STATIC_GetSupportedDLSSGModes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetSupportedDLSSGModes");
		
		UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0256E3D0
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGMode
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	EUStreamlineDLSSGMode UStreamlineLibraryDLSSG::STATIC_GetDLSSGMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGMode");
		
		UStreamlineLibraryDLSSG_GetDLSSGMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0256E1E0
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGFrameTiming
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		float                                              FrameRateInHertz                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            FramesPresented                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStreamlineLibraryDLSSG::STATIC_GetDLSSGFrameTiming(float* FrameRateInHertz, int32_t* FramesPresented)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGFrameTiming");
		
		UStreamlineLibraryDLSSG_GetDLSSGFrameTiming_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FrameRateInHertz != nullptr)
			*FrameRateInHertz = params.FrameRateInHertz;
		if (FramesPresented != nullptr)
			*FramesPresented = params.FramesPresented;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0256E390
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDefaultDLSSGMode
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	EUStreamlineDLSSGMode UStreamlineLibraryDLSSG::STATIC_GetDefaultDLSSGMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDefaultDLSSGMode");
		
		UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStreamlineLibraryDLSSG.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStreamlineLibraryDLSSG::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StreamlineBlueprint.StreamlineLibraryDLSSG");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0256F080
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryReflex.SetReflexMode
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		EUStreamlineReflexMode                             Mode                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStreamlineLibraryReflex::STATIC_SetReflexMode(EUStreamlineReflexMode Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryReflex.SetReflexMode");
		
		UStreamlineLibraryReflex_SetReflexMode_Params params {};
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0256F200
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryReflex.QueryReflexSupport
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	EUStreamlineFeatureSupport UStreamlineLibraryReflex::STATIC_QueryReflexSupport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryReflex.QueryReflexSupport");
		
		UStreamlineLibraryReflex_QueryReflexSupport_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0256F230
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryReflex.IsReflexSupported
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UStreamlineLibraryReflex::STATIC_IsReflexSupported()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryReflex.IsReflexSupported");
		
		UStreamlineLibraryReflex_IsReflexSupported_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0256EDA0
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryReflex.GetRenderLatencyInMs
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UStreamlineLibraryReflex::STATIC_GetRenderLatencyInMs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryReflex.GetRenderLatencyInMs");
		
		UStreamlineLibraryReflex_GetRenderLatencyInMs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0256EFB0
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryReflex.GetReflexMode
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	EUStreamlineReflexMode UStreamlineLibraryReflex::STATIC_GetReflexMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryReflex.GetReflexMode");
		
		UStreamlineLibraryReflex_GetReflexMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0256EF00
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryReflex.GetGameToRenderLatencyInMs
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UStreamlineLibraryReflex::STATIC_GetGameToRenderLatencyInMs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryReflex.GetGameToRenderLatencyInMs");
		
		UStreamlineLibraryReflex_GetGameToRenderLatencyInMs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0256EE50
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryReflex.GetGameLatencyInMs
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	float UStreamlineLibraryReflex::STATIC_GetGameLatencyInMs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryReflex.GetGameLatencyInMs");
		
		UStreamlineLibraryReflex_GetGameLatencyInMs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EA2330
	 * 		Name   -> Function StreamlineBlueprint.StreamlineLibraryReflex.GetDefaultReflexMode
	 * 		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	EUStreamlineReflexMode UStreamlineLibraryReflex::STATIC_GetDefaultReflexMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StreamlineBlueprint.StreamlineLibraryReflex.GetDefaultReflexMode");
		
		UStreamlineLibraryReflex_GetDefaultReflexMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStreamlineLibraryReflex.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStreamlineLibraryReflex::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class StreamlineBlueprint.StreamlineLibraryReflex");
		return ptr;
	}

}


