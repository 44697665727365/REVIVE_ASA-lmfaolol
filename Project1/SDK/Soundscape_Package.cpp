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
	 * 		RVA    -> 0x02133A20
	 * 		Name   -> Function Soundscape.SoundscapeBPFunctionLibrary.SpawnSoundscapePalette
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundscapePalette*                          SoundscapePaletteIn                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UActiveSoundscapePalette*                    SoundscapePaletteAgentsOut                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USoundscapeBPFunctionLibrary::STATIC_SpawnSoundscapePalette(class UObject* WorldContextObject, class USoundscapePalette* SoundscapePaletteIn, class UActiveSoundscapePalette** SoundscapePaletteAgentsOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Soundscape.SoundscapeBPFunctionLibrary.SpawnSoundscapePalette");
		
		USoundscapeBPFunctionLibrary_SpawnSoundscapePalette_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SoundscapePaletteIn = SoundscapePaletteIn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SoundscapePaletteAgentsOut != nullptr)
			*SoundscapePaletteAgentsOut = params.SoundscapePaletteAgentsOut;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02133D00
	 * 		Name   -> Function Soundscape.SoundscapeBPFunctionLibrary.SpawnSoundscapeColor
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundscapeColor*                            SoundscapeColorIn                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UActiveSoundscapeColor*                      ActiveSoundscapeColor                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USoundscapeBPFunctionLibrary::STATIC_SpawnSoundscapeColor(class UObject* WorldContextObject, class USoundscapeColor* SoundscapeColorIn, class UActiveSoundscapeColor** ActiveSoundscapeColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Soundscape.SoundscapeBPFunctionLibrary.SpawnSoundscapeColor");
		
		USoundscapeBPFunctionLibrary_SpawnSoundscapeColor_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SoundscapeColorIn = SoundscapeColorIn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActiveSoundscapeColor != nullptr)
			*ActiveSoundscapeColor = params.ActiveSoundscapeColor;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundscapeBPFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundscapeBPFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Soundscape.SoundscapeBPFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundscapeColor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundscapeColor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Soundscape.SoundscapeColor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02134A10
	 * 		Name   -> Function Soundscape.ActiveSoundscapeColorVoice.StopLimitedDurationVoice
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		float                                              FadeOutTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UActiveSoundscapeColorVoice::StopLimitedDurationVoice(float FadeOutTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Soundscape.ActiveSoundscapeColorVoice.StopLimitedDurationVoice");
		
		UActiveSoundscapeColorVoice_StopLimitedDurationVoice_Params params {};
		params.FadeOutTime = FadeOutTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActiveSoundscapeColorVoice.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActiveSoundscapeColorVoice::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Soundscape.ActiveSoundscapeColorVoice");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02134C70
	 * 		Name   -> Function Soundscape.ActiveSoundscapeColor.UpdateSoundscapeColor
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UActiveSoundscapeColor::UpdateSoundscapeColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Soundscape.ActiveSoundscapeColor.UpdateSoundscapeColor");
		
		UActiveSoundscapeColor_UpdateSoundscapeColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02134CC0
	 * 		Name   -> Function Soundscape.ActiveSoundscapeColor.Stop
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              ColorFadeOutTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UActiveSoundscapeColor::Stop(float ColorFadeOutTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Soundscape.ActiveSoundscapeColor.Stop");
		
		UActiveSoundscapeColor_Stop_Params params {};
		params.ColorFadeOutTime = ColorFadeOutTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02134DC0
	 * 		Name   -> Function Soundscape.ActiveSoundscapeColor.Play
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              ColorVolume                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ColorPitch                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ColorFadeInTime                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UActiveSoundscapeColor::Play(float ColorVolume, float ColorPitch, float ColorFadeInTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Soundscape.ActiveSoundscapeColor.Play");
		
		UActiveSoundscapeColor_Play_Params params {};
		params.ColorVolume = ColorVolume;
		params.ColorPitch = ColorPitch;
		params.ColorFadeInTime = ColorFadeInTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02134CA0
	 * 		Name   -> Function Soundscape.ActiveSoundscapeColor.IsPlaying
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UActiveSoundscapeColor::IsPlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Soundscape.ActiveSoundscapeColor.IsPlaying");
		
		UActiveSoundscapeColor_IsPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActiveSoundscapeColor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActiveSoundscapeColor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Soundscape.ActiveSoundscapeColor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundscapeColorPointComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundscapeColorPointComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Soundscape.SoundscapeColorPointComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundscapePalette.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundscapePalette::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Soundscape.SoundscapePalette");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021359A0
	 * 		Name   -> Function Soundscape.ActiveSoundscapePalette.Stop
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UActiveSoundscapePalette::Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Soundscape.ActiveSoundscapePalette.Stop");
		
		UActiveSoundscapePalette_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02135A00
	 * 		Name   -> Function Soundscape.ActiveSoundscapePalette.Play
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UActiveSoundscapePalette::Play()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Soundscape.ActiveSoundscapePalette.Play");
		
		UActiveSoundscapePalette_Play_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActiveSoundscapePalette.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActiveSoundscapePalette::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Soundscape.ActiveSoundscapePalette");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundscapeSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundscapeSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Soundscape.SoundscapeSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundscapeColorPointHashCellDensity.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundscapeColorPointHashCellDensity::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Soundscape.SoundscapeColorPointHashCellDensity");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02136650
	 * 		Name   -> Function Soundscape.SoundscapeColorPointHashMap.SetGridCenterpoint
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USoundscapeColorPointHashMap::SetGridCenterpoint(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Soundscape.SoundscapeColorPointHashMap.SetGridCenterpoint");
		
		USoundscapeColorPointHashMap_SetGridCenterpoint_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02136C40
	 * 		Name   -> Function Soundscape.SoundscapeColorPointHashMap.NumColorPointsInCell
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                ColorPoint                                                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USoundscapeColorPointHashMap::NumColorPointsInCell(const struct FVector& Location, const struct FGameplayTag& ColorPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Soundscape.SoundscapeColorPointHashMap.NumColorPointsInCell");
		
		USoundscapeColorPointHashMap_NumColorPointsInCell_Params params {};
		params.Location = Location;
		params.ColorPoint = ColorPoint;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02136DF0
	 * 		Name   -> Function Soundscape.SoundscapeColorPointHashMap.InitializeHash
	 * 		Flags  -> (Final, Native, Public, HasDefaults)
	 * Parameters:
	 * 		float                                              HashCellSizeIn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     GridCenterIn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USoundscapeColorPointHashMap::InitializeHash(float HashCellSizeIn, const struct FVector& GridCenterIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Soundscape.SoundscapeColorPointHashMap.InitializeHash");
		
		USoundscapeColorPointHashMap_InitializeHash_Params params {};
		params.HashCellSizeIn = HashCellSizeIn;
		params.GridCenterIn = GridCenterIn;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02136DD0
	 * 		Name   -> Function Soundscape.SoundscapeColorPointHashMap.ClearHash
	 * 		Flags  -> (Final, Native, Public)
	 */
	void USoundscapeColorPointHashMap::ClearHash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Soundscape.SoundscapeColorPointHashMap.ClearHash");
		
		USoundscapeColorPointHashMap_ClearHash_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02136780
	 * 		Name   -> Function Soundscape.SoundscapeColorPointHashMap.CalculateHashIndex
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	uint64_t USoundscapeColorPointHashMap::CalculateHashIndex(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Soundscape.SoundscapeColorPointHashMap.CalculateHashIndex");
		
		USoundscapeColorPointHashMap_CalculateHashIndex_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02136AB0
	 * 		Name   -> Function Soundscape.SoundscapeColorPointHashMap.AddColorPointToHash
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                ColorPoint                                                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USoundscapeColorPointHashMap::AddColorPointToHash(const struct FVector& Location, const struct FGameplayTag& ColorPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Soundscape.SoundscapeColorPointHashMap.AddColorPointToHash");
		
		USoundscapeColorPointHashMap_AddColorPointToHash_Params params {};
		params.Location = Location;
		params.ColorPoint = ColorPoint;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02136900
	 * 		Name   -> Function Soundscape.SoundscapeColorPointHashMap.AddColorPointArrayToHash
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		TArray<struct FVector>                             Locations                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                ColorPoint                                                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USoundscapeColorPointHashMap::AddColorPointArrayToHash(TArray<struct FVector> Locations, const struct FGameplayTag& ColorPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Soundscape.SoundscapeColorPointHashMap.AddColorPointArrayToHash");
		
		USoundscapeColorPointHashMap_AddColorPointArrayToHash_Params params {};
		params.Locations = Locations;
		params.ColorPoint = ColorPoint;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundscapeColorPointHashMap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundscapeColorPointHashMap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Soundscape.SoundscapeColorPointHashMap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundscapeColorPointHashMapCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundscapeColorPointHashMapCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Soundscape.SoundscapeColorPointHashMapCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02137FA0
	 * 		Name   -> Function Soundscape.SoundscapeSubsystem.SetState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayTag                                SoundscapeState                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USoundscapeSubsystem::SetState(const struct FGameplayTag& SoundscapeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Soundscape.SoundscapeSubsystem.SetState");
		
		USoundscapeSubsystem_SetState_Params params {};
		params.SoundscapeState = SoundscapeState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02137E10
	 * 		Name   -> Function Soundscape.SoundscapeSubsystem.RestartSoundscape
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void USoundscapeSubsystem::RestartSoundscape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Soundscape.SoundscapeSubsystem.RestartSoundscape");
		
		USoundscapeSubsystem_RestartSoundscape_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02137A00
	 * 		Name   -> Function Soundscape.SoundscapeSubsystem.RemovePaletteCollection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        PaletteCollectionName                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USoundscapeSubsystem::RemovePaletteCollection(const class FName& PaletteCollectionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Soundscape.SoundscapeSubsystem.RemovePaletteCollection");
		
		USoundscapeSubsystem_RemovePaletteCollection_Params params {};
		params.PaletteCollectionName = PaletteCollectionName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021375E0
	 * 		Name   -> Function Soundscape.SoundscapeSubsystem.RemoveColorPointCollection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ColorPointCollectionName                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USoundscapeSubsystem::RemoveColorPointCollection(const class FName& ColorPointCollectionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Soundscape.SoundscapeSubsystem.RemoveColorPointCollection");
		
		USoundscapeSubsystem_RemoveColorPointCollection_Params params {};
		params.ColorPointCollectionName = ColorPointCollectionName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02137E30
	 * 		Name   -> Function Soundscape.SoundscapeSubsystem.ClearState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayTag                                SoundscapeState                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USoundscapeSubsystem::ClearState(const struct FGameplayTag& SoundscapeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Soundscape.SoundscapeSubsystem.ClearState");
		
		USoundscapeSubsystem_ClearState_Params params {};
		params.SoundscapeState = SoundscapeState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02137430
	 * 		Name   -> Function Soundscape.SoundscapeSubsystem.CheckColorPointDensity
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                ColorPoint                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USoundscapeSubsystem::CheckColorPointDensity(const struct FVector& Location, const struct FGameplayTag& ColorPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Soundscape.SoundscapeSubsystem.CheckColorPointDensity");
		
		USoundscapeSubsystem_CheckColorPointDensity_Params params {};
		params.Location = Location;
		params.ColorPoint = ColorPoint;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02137BA0
	 * 		Name   -> Function Soundscape.SoundscapeSubsystem.AddPaletteCollection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        PaletteCollectionName                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSoundscapePaletteCollection                PaletteCollection                                          (Parm, NativeAccessSpecifierPublic)
	 */
	bool USoundscapeSubsystem::AddPaletteCollection(const class FName& PaletteCollectionName, const struct FSoundscapePaletteCollection& PaletteCollection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Soundscape.SoundscapeSubsystem.AddPaletteCollection");
		
		USoundscapeSubsystem_AddPaletteCollection_Params params {};
		params.PaletteCollectionName = PaletteCollectionName;
		params.PaletteCollection = PaletteCollection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021376E0
	 * 		Name   -> Function Soundscape.SoundscapeSubsystem.AddColorPointCollection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        ColorPointCollectionName                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSoundscapeColorPointCollection             ColorPointCollection                                       (Parm, NativeAccessSpecifierPublic)
	 */
	void USoundscapeSubsystem::AddColorPointCollection(const class FName& ColorPointCollectionName, const struct FSoundscapeColorPointCollection& ColorPointCollection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Soundscape.SoundscapeSubsystem.AddColorPointCollection");
		
		USoundscapeSubsystem_AddColorPointCollection_Params params {};
		params.ColorPointCollectionName = ColorPointCollectionName;
		params.ColorPointCollection = ColorPointCollection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoundscapeSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundscapeSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Soundscape.SoundscapeSubsystem");
		return ptr;
	}

}


