#pragma once

/**
 * Name: Ark_Survival_Ascended
 * Version: 0.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class BinkMediaPlayer.BinkFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBinkFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FTimespan STATIC_BinkLoadingMovie_GetTime();
		struct FTimespan STATIC_BinkLoadingMovie_GetDuration();
		void STATIC_Bink_DrawOverlays();
		static UClass* StaticClass();
	};

	/**
	 * Class BinkMediaPlayer.BinkMediaPlayer
	 * Size -> 0x00F0 (FullSize[0x0118] - InheritedSize[0x0028])
	 */
	class UBinkMediaPlayer : public UObject
	{
	public:
		unsigned char                                              UnknownData_H4HG[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMediaClosed;                                           // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMediaOpened;                                           // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMediaReachedEnd;                                       // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlaybackSuspended;                                     // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       Looping : 1;                                             // 0x0070(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       StartImmediately : 1;                                    // 0x0070(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DelayedOpen : 1;                                         // 0x0070(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_30SA[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           BinkDestinationUpperLeft;                                // 0x0078(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           BinkDestinationLowerRight;                               // 0x0088(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              URL;                                                     // 0x0098(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBinkMediaPlayerBinkBufferModes                            BinkBufferMode;                                          // 0x00A8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBinkMediaPlayerBinkSoundTrack                             BinkSoundTrack;                                          // 0x00A9(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FBQ8[0x2];                                   // 0x00AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BinkSoundTrackStart;                                     // 0x00AC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBinkMediaPlayerBinkDrawStyle                              BinkDrawStyle;                                           // 0x00B0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J4OS[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BinkLayerDepth;                                          // 0x00B4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VolumeScale;                                             // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KCK5[0x5C];                                  // 0x00BC(0x005C) MISSED OFFSET (PADDING)

	public:
		bool SupportsSeeking();
		bool SupportsScrubbing();
		bool SupportsRate(float Rate, bool Unthinned);
		void Stop();
		void SetVolume(float Rate);
		bool SetRate(float Rate);
		bool SetLooping(bool InLooping);
		bool Seek(const struct FTimespan& InTime);
		bool Rewind();
		bool Play();
		bool Pause();
		bool OpenUrl(const class FString& NewUrl);
		bool IsStopped();
		bool IsPlaying();
		bool IsPaused();
		bool IsLooping();
		bool IsInitialized();
		class FString GetUrl();
		struct FTimespan GetTime();
		float GetRate();
		struct FTimespan GetDuration();
		void Draw(class UTexture* Texture, bool tonemap, int32_t out_nits, float Alpha, bool srgb_decode, bool hdr);
		void CloseUrl();
		bool CanPlay();
		bool CanPause();
		static UClass* StaticClass();
	};

	/**
	 * Class BinkMediaPlayer.BinkMediaTexture
	 * Size -> 0x0034 (FullSize[0x0210] - InheritedSize[0x01DC])
	 */
	class UBinkMediaTexture : public UTexture
	{
	public:
		unsigned char                                              UnknownData_7KC1[0x4];                                   // 0x01DC(0x0004) Fix Super Size
		class UBinkMediaPlayer*                                    MediaPlayer;                                             // 0x01E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPixelFormat                                               PixelFormat;                                             // 0x01E8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       tonemap;                                                 // 0x01E9(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FMKV[0x2];                                   // 0x01EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OutputNits;                                              // 0x01EC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Alpha;                                                   // 0x01F0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DecodeSRGB;                                              // 0x01F4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ONRT[0x1B];                                  // 0x01F5(0x001B) MISSED OFFSET (PADDING)

	public:
		void SetMediaPlayer(class UBinkMediaPlayer* InMediaPlayer);
		void Clear();
		static UClass* StaticClass();
	};

	/**
	 * Class BinkMediaPlayer.BinkMoviePlayerSettings
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UBinkMoviePlayerSettings : public UObject
	{
	public:
		EBinkMoviePlayerBinkBufferModes                            BinkBufferMode;                                          // 0x0028(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBinkMoviePlayerBinkSoundTrack                             BinkSoundTrack;                                          // 0x0029(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VPLC[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BinkSoundTrackStart;                                     // 0x002C(0x0004) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           BinkDestinationUpperLeft;                                // 0x0030(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           BinkDestinationLowerRight;                               // 0x0040(0x0010) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPixelFormat                                               BinkPixelFormat;                                         // 0x0050(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4ATH[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
