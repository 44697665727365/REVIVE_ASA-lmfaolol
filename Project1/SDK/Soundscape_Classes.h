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
	 * Class Soundscape.SoundscapeBPFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USoundscapeBPFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_SpawnSoundscapePalette(class UObject* WorldContextObject, class USoundscapePalette* SoundscapePaletteIn, class UActiveSoundscapePalette** SoundscapePaletteAgentsOut);
		bool STATIC_SpawnSoundscapeColor(class UObject* WorldContextObject, class USoundscapeColor* SoundscapeColorIn, class UActiveSoundscapeColor** ActiveSoundscapeColor);
		static UClass* StaticClass();
	};

	/**
	 * Class Soundscape.SoundscapeColor
	 * Size -> 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
	 */
	class USoundscapeColor : public UObject
	{
	public:
		class USoundBase*                                          Sound;                                                   // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VolumeBase;                                              // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PitchBase;                                               // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoundscapeColorModulationSettings                  ModulationBehavior;                                      // 0x0038(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FSoundscapeColorPlaybackSettings                    PlaybackBehavior;                                        // 0x0068(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VFW3[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoundscapeColorSpawnSettings                       SpawnBehavior;                                           // 0x0078(0x0088) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Soundscape.ActiveSoundscapeColorVoice
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UActiveSoundscapeColorVoice : public UObject
	{
	public:
		class UAudioComponent*                                     AudioComponent;                                          // 0x0028(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTimerHandle                                        TimerHandle;                                             // 0x0030(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFree;                                                   // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CJFJ[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		void StopLimitedDurationVoice(float FadeOutTime);
		static UClass* StaticClass();
	};

	/**
	 * Class Soundscape.ActiveSoundscapeColor
	 * Size -> 0x0168 (FullSize[0x0190] - InheritedSize[0x0028])
	 */
	class UActiveSoundscapeColor : public UObject
	{
	public:
		class USoundBase*                                          Sound;                                                   // 0x0028(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6DRQ[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoundscapeColorModulationSettings                  ModulationBehavior;                                      // 0x0038(0x0030) NoDestructor, NativeAccessSpecifierPrivate
		struct FSoundscapeColorPlaybackSettings                    PlaybackBehavior;                                        // 0x0068(0x000C) NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GFP1[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoundscapeColorSpawnSettings                       SpawnBehavior;                                           // 0x0078(0x0088) NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CE6M[0x78];                                  // 0x0100(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UActiveSoundscapeColorVoice*>                 SoundscapeColorVoicePool;                                // 0x0178(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_T32P[0x8];                                   // 0x0188(0x0008) MISSED OFFSET (PADDING)

	public:
		void UpdateSoundscapeColor();
		void Stop(float ColorFadeOutTime);
		void Play(float ColorVolume, float ColorPitch, float ColorFadeInTime);
		bool IsPlaying();
		static UClass* StaticClass();
	};

	/**
	 * Class Soundscape.SoundscapeColorPointComponent
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class USoundscapeColorPointComponent : public UActorComponent
	{
	public:
		struct FGameplayTag                                        ColorPoint;                                              // 0x00B8(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Soundscape.SoundscapePalette
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class USoundscapePalette : public UObject
	{
	public:
		struct FGameplayTagQuery                                   SoundscapePalettePlaybackConditions;                     // 0x0028(0x0048) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FSoundscapePaletteColor>                     Colors;                                                  // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Soundscape.ActiveSoundscapePalette
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UActiveSoundscapePalette : public UObject
	{
	public:
		class UWorld*                                              World;                                                   // 0x0028(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UActiveSoundscapeColor*>                      ActiveSoundscapeColors;                                  // 0x0030(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate

	public:
		void Stop();
		void Play();
		static UClass* StaticClass();
	};

	/**
	 * Class Soundscape.SoundscapeSettings
	 * Size -> 0x0070 (FullSize[0x00A8] - InheritedSize[0x0038])
	 */
	class USoundscapeSettings : public UDeveloperSettings
	{
	public:
		unsigned char                                              SoundscapePaletteCollection[0x50];                       // 0x0038(0x0050) UNKNOWN PROPERTY: SetProperty
		bool                                                       bDebugDraw;                                              // 0x0088(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1X3N[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LOD1ColorPointHashWidth;                                 // 0x008C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LOD1ColorPointHashDistance;                              // 0x0090(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LOD2ColorPointHashWidth;                                 // 0x0094(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LOD2ColorPointHashDistance;                              // 0x0098(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LOD3ColorPointHashWidth;                                 // 0x009C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActiveColorPointHashWidth;                               // 0x00A0(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActiveColorPointHashUpdateTimeSeconds;                   // 0x00A4(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Soundscape.SoundscapeColorPointHashCellDensity
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class USoundscapeColorPointHashCellDensity : public UObject
	{
	public:
		TMap<uint64_t, int32_t>                                    ColorPointHashCellDensity;                               // 0x0028(0x0050) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Soundscape.SoundscapeColorPointHashMap
	 * Size -> 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
	 */
	class USoundscapeColorPointHashMap : public UObject
	{
	public:
		TMap<struct FGameplayTag, class USoundscapeColorPointHashCellDensity*> ColorPointHashMap;                                       // 0x0028(0x0050) UObjectWrapper, NativeAccessSpecifierPrivate
		float                                                      HashCellSize;                                            // 0x0078(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    GridWidth;                                               // 0x007C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int64_t                                                    NumCells;                                                // 0x0080(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      HashCellFactor;                                          // 0x0088(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0MYF[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             GridCenter;                                              // 0x0090(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             GridOriginOffset;                                        // 0x00A8(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetGridCenterpoint(const struct FVector& Location);
		int32_t NumColorPointsInCell(const struct FVector& Location, const struct FGameplayTag& ColorPoint);
		void InitializeHash(float HashCellSizeIn, const struct FVector& GridCenterIn);
		void ClearHash();
		uint64_t CalculateHashIndex(const struct FVector& Location);
		bool AddColorPointToHash(const struct FVector& Location, const struct FGameplayTag& ColorPoint);
		void AddColorPointArrayToHash(TArray<struct FVector> Locations, const struct FGameplayTag& ColorPoint);
		static UClass* StaticClass();
	};

	/**
	 * Class Soundscape.SoundscapeColorPointHashMapCollection
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class USoundscapeColorPointHashMapCollection : public UObject
	{
	public:
		class USoundscapeColorPointHashMap*                        ColorPointHashMapLOD1;                                   // 0x0028(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundscapeColorPointHashMap*                        ColorPointHashMapLOD2;                                   // 0x0030(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundscapeColorPointHashMap*                        ColorPointHashMapLOD3;                                   // 0x0038(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      LOD1ColorPointHashWidth;                                 // 0x0040(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      LOD1ColorPointHashDistance;                              // 0x0044(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      LOD2ColorPointHashWidth;                                 // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      LOD2ColorPointHashDistance;                              // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      LOD3ColorPointHashWidth;                                 // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_V2TY[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Soundscape.SoundscapeSubsystem
	 * Size -> 0x01E8 (FullSize[0x0218] - InheritedSize[0x0030])
	 */
	class USoundscapeSubsystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_K69N[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              LoadedPaletteCollectionSet[0x50];                        // 0x0038(0x0050) UNKNOWN PROPERTY: SetProperty
		TMap<class FName, struct FSoundscapePaletteCollection>     UnloadedPaletteCollections;                              // 0x0088(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E6XM[0x20];                                  // 0x00D8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class USoundscapePalette*, class UActiveSoundscapePalette*> ActivePalettes;                                          // 0x00F8(0x0050) UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_06LX[0x8];                                   // 0x0148(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USoundscapeColorPointHashMapCollection*>      ColorPointHashMapCollections;                            // 0x0150(0x0010) ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EBTK[0x60];                                  // 0x0160(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundscapeColorPointHashMap*                        ColorPointHashMapLOD1;                                   // 0x01C0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundscapeColorPointHashMap*                        ColorPointHashMapLOD2;                                   // 0x01C8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundscapeColorPointHashMap*                        ColorPointHashMapLOD3;                                   // 0x01D0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundscapeColorPointHashMap*                        ActiveColorPointHashMap;                                 // 0x01D8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_22QV[0x38];                                  // 0x01E0(0x0038) MISSED OFFSET (PADDING)

	public:
		void SetState(const struct FGameplayTag& SoundscapeState);
		void RestartSoundscape();
		bool RemovePaletteCollection(const class FName& PaletteCollectionName);
		bool RemoveColorPointCollection(const class FName& ColorPointCollectionName);
		void ClearState(const struct FGameplayTag& SoundscapeState);
		int32_t CheckColorPointDensity(const struct FVector& Location, const struct FGameplayTag& ColorPoint);
		bool AddPaletteCollection(const class FName& PaletteCollectionName, const struct FSoundscapePaletteCollection& PaletteCollection);
		void AddColorPointCollection(const class FName& ColorPointCollectionName, const struct FSoundscapeColorPointCollection& ColorPointCollection);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
