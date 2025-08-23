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
	 * 		RVA    -> 0x00EA1670
	 * 		Name   -> Function BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetTime
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 */
	struct FTimespan UBinkFunctionLibrary::STATIC_BinkLoadingMovie_GetTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetTime");
		
		UBinkFunctionLibrary_BinkLoadingMovie_GetTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EA1760
	 * 		Name   -> Function BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetDuration
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 */
	struct FTimespan UBinkFunctionLibrary::STATIC_BinkLoadingMovie_GetDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BinkMediaPlayer.BinkFunctionLibrary.BinkLoadingMovie_GetDuration");
		
		UBinkFunctionLibrary_BinkLoadingMovie_GetDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EA1850
	 * 		Name   -> Function BinkMediaPlayer.BinkFunctionLibrary.Bink_DrawOverlays
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UBinkFunctionLibrary::STATIC_Bink_DrawOverlays()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BinkMediaPlayer.BinkFunctionLibrary.Bink_DrawOverlays");
		
		UBinkFunctionLibrary_Bink_DrawOverlays_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBinkFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBinkFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BinkMediaPlayer.BinkFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EA2330
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.SupportsSeeking
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBinkMediaPlayer::SupportsSeeking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BinkMediaPlayer.BinkMediaPlayer.SupportsSeeking");
		
		UBinkMediaPlayer_SupportsSeeking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EA2330
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.SupportsScrubbing
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBinkMediaPlayer::SupportsScrubbing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BinkMediaPlayer.BinkMediaPlayer.SupportsScrubbing");
		
		UBinkMediaPlayer_SupportsScrubbing_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EA2350
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.SupportsRate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              Rate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Unthinned                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBinkMediaPlayer::SupportsRate(float Rate, bool Unthinned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BinkMediaPlayer.BinkMediaPlayer.SupportsRate");
		
		UBinkMediaPlayer_SupportsRate_Params params {};
		params.Rate = Rate;
		params.Unthinned = Unthinned;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EA2500
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.Stop
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UBinkMediaPlayer::Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BinkMediaPlayer.BinkMediaPlayer.Stop");
		
		UBinkMediaPlayer_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EA2520
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.SetVolume
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Rate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBinkMediaPlayer::SetVolume(float Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BinkMediaPlayer.BinkMediaPlayer.SetVolume");
		
		UBinkMediaPlayer_SetVolume_Params params {};
		params.Rate = Rate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EA2630
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.SetRate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Rate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBinkMediaPlayer::SetRate(float Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BinkMediaPlayer.BinkMediaPlayer.SetRate");
		
		UBinkMediaPlayer_SetRate_Params params {};
		params.Rate = Rate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EA2730
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.SetLooping
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               InLooping                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBinkMediaPlayer::SetLooping(bool InLooping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BinkMediaPlayer.BinkMediaPlayer.SetLooping");
		
		UBinkMediaPlayer_SetLooping_Params params {};
		params.InLooping = InLooping;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EA2840
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.Seek
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FTimespan                                   InTime                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBinkMediaPlayer::Seek(const struct FTimespan& InTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BinkMediaPlayer.BinkMediaPlayer.Seek");
		
		UBinkMediaPlayer_Seek_Params params {};
		params.InTime = InTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EA2940
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.Rewind
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UBinkMediaPlayer::Rewind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BinkMediaPlayer.BinkMediaPlayer.Rewind");
		
		UBinkMediaPlayer_Rewind_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EA2980
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.Play
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UBinkMediaPlayer::Play()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BinkMediaPlayer.BinkMediaPlayer.Play");
		
		UBinkMediaPlayer_Play_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EA29C0
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.Pause
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	bool UBinkMediaPlayer::Pause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BinkMediaPlayer.BinkMediaPlayer.Pause");
		
		UBinkMediaPlayer_Pause_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EA2A50
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.OpenUrl
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      NewUrl                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UBinkMediaPlayer::OpenUrl(const class FString& NewUrl)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BinkMediaPlayer.BinkMediaPlayer.OpenUrl");
		
		UBinkMediaPlayer_OpenUrl_Params params {};
		params.NewUrl = NewUrl;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EA2C60
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.IsStopped
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBinkMediaPlayer::IsStopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BinkMediaPlayer.BinkMediaPlayer.IsStopped");
		
		UBinkMediaPlayer_IsStopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EA2C90
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.IsPlaying
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBinkMediaPlayer::IsPlaying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BinkMediaPlayer.BinkMediaPlayer.IsPlaying");
		
		UBinkMediaPlayer_IsPlaying_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EA2CC0
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.IsPaused
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBinkMediaPlayer::IsPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BinkMediaPlayer.BinkMediaPlayer.IsPaused");
		
		UBinkMediaPlayer_IsPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EA2CF0
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.IsLooping
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBinkMediaPlayer::IsLooping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BinkMediaPlayer.BinkMediaPlayer.IsLooping");
		
		UBinkMediaPlayer_IsLooping_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EA2300
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.IsInitialized
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBinkMediaPlayer::IsInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BinkMediaPlayer.BinkMediaPlayer.IsInitialized");
		
		UBinkMediaPlayer_IsInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EA2D20
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.GetUrl
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UBinkMediaPlayer::GetUrl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BinkMediaPlayer.BinkMediaPlayer.GetUrl");
		
		UBinkMediaPlayer_GetUrl_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EA2D50
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.GetTime
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTimespan UBinkMediaPlayer::GetTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BinkMediaPlayer.BinkMediaPlayer.GetTime");
		
		UBinkMediaPlayer_GetTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EA2D90
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.GetRate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UBinkMediaPlayer::GetRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BinkMediaPlayer.BinkMediaPlayer.GetRate");
		
		UBinkMediaPlayer_GetRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EA2E50
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.GetDuration
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTimespan UBinkMediaPlayer::GetDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BinkMediaPlayer.BinkMediaPlayer.GetDuration");
		
		UBinkMediaPlayer_GetDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EA1F20
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.Draw
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTexture*                                    Texture                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               tonemap                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            out_nits                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Alpha                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               srgb_decode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               hdr                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBinkMediaPlayer::Draw(class UTexture* Texture, bool tonemap, int32_t out_nits, float Alpha, bool srgb_decode, bool hdr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BinkMediaPlayer.BinkMediaPlayer.Draw");
		
		UBinkMediaPlayer_Draw_Params params {};
		params.Texture = Texture;
		params.tonemap = tonemap;
		params.out_nits = out_nits;
		params.Alpha = Alpha;
		params.srgb_decode = srgb_decode;
		params.hdr = hdr;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EA29F0
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.CloseUrl
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UBinkMediaPlayer::CloseUrl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BinkMediaPlayer.BinkMediaPlayer.CloseUrl");
		
		UBinkMediaPlayer_CloseUrl_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EA2300
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.CanPlay
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBinkMediaPlayer::CanPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BinkMediaPlayer.BinkMediaPlayer.CanPlay");
		
		UBinkMediaPlayer_CanPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EA2C90
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaPlayer.CanPause
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBinkMediaPlayer::CanPause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BinkMediaPlayer.BinkMediaPlayer.CanPause");
		
		UBinkMediaPlayer_CanPause_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBinkMediaPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBinkMediaPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BinkMediaPlayer.BinkMediaPlayer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EA38D0
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaTexture.SetMediaPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UBinkMediaPlayer*                            InMediaPlayer                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBinkMediaTexture::SetMediaPlayer(class UBinkMediaPlayer* InMediaPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BinkMediaPlayer.BinkMediaTexture.SetMediaPlayer");
		
		UBinkMediaTexture_SetMediaPlayer_Params params {};
		params.InMediaPlayer = InMediaPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EA3880
	 * 		Name   -> Function BinkMediaPlayer.BinkMediaTexture.Clear
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UBinkMediaTexture::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BinkMediaPlayer.BinkMediaTexture.Clear");
		
		UBinkMediaTexture_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBinkMediaTexture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBinkMediaTexture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BinkMediaPlayer.BinkMediaTexture");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBinkMoviePlayerSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBinkMoviePlayerSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BinkMediaPlayer.BinkMoviePlayerSettings");
		return ptr;
	}

}


