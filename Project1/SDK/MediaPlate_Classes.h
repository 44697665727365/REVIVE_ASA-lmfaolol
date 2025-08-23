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
	 * Class MediaPlate.MediaPlate
	 * Size -> 0x0010 (FullSize[0x04C8] - InheritedSize[0x04B8])
	 */
	class AMediaPlate : public AActor
	{
	public:
		class UMediaPlateComponent*                                MediaPlateComponent;                                     // 0x04B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x04C0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MediaPlate.MediaPlateAssetUserData
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UMediaPlateAssetUserData : public UAssetUserData
	{
	public:
		unsigned char                                              UnknownData_8P15[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MediaPlate.MediaPlateComponent
	 * Size -> 0x00C8 (FullSize[0x0180] - InheritedSize[0x00B8])
	 */
	class UMediaPlateComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_N4H6[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bPlayOnOpen;                                             // 0x00C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoPlay;                                               // 0x00C1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableAudio;                                            // 0x00C2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M36G[0x1];                                   // 0x00C3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartTime;                                               // 0x00C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMediaSoundComponent*                                SoundComponent;                                          // 0x00C8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                StaticMeshComponent;                                     // 0x00D0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UStaticMeshComponent*>                        Letterboxes;                                             // 0x00D8(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPublic
		class UMediaPlaylist*                                      MediaPlaylist;                                           // 0x00E8(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlaylistIndex;                                           // 0x00F0(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMediaSourceCacheSettings                           CacheSettings;                                           // 0x00F4(0x0008) Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       bIsMediaPlatePlaying;                                    // 0x00FC(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W090[0x7];                                   // 0x00FD(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bPlayOnlyWhenVisible;                                    // 0x0104(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bLoop;                                                   // 0x0105(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EMediaTextureVisibleMipsTiles                              VisibleMipsTilesCalculations;                            // 0x0106(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UTMI[0x1];                                   // 0x0107(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MipMapBias;                                              // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsAspectRatioAuto;                                      // 0x010C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bEnableMipMapUpscaling;                                  // 0x010D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RFJP[0x2];                                   // 0x010E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MipLevelToUpscale;                                       // 0x0110(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      LetterboxAspectRatio;                                    // 0x0114(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_I7O3[0x8];                                   // 0x0118(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           MeshRange;                                               // 0x0120(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UMediaTexture*>                               MediaTextures;                                           // 0x0130(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate
		class UMediaPlayer*                                        MediaPlayer;                                             // 0x0140(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_H26I[0x38];                                  // 0x0148(0x0038) MISSED OFFSET (PADDING)

	public:
		void SetPlayOnlyWhenVisible(bool bInPlayOnlyWhenVisible);
		void SetMeshRange(const struct FVector2D& InMeshRange);
		void SetLoop(bool bInLoop);
		void SetLetterboxAspectRatio(float AspectRatio);
		void SetIsAspectRatioAuto(bool bInIsAspectRatioAuto);
		bool Seek(const struct FTimespan& Time);
		bool Rewind();
		void Play();
		void Pause();
		void Open();
		void OnMediaOpened(const class FString& DeviceUrl);
		void OnMediaEnd();
		bool IsMediaPlatePlaying();
		struct FVector2D GetMeshRange();
		class UMediaTexture* GetMediaTexture(int32_t Index);
		class UMediaPlayer* GetMediaPlayer();
		bool GetLoop();
		float GetLetterboxAspectRatio();
		bool GetIsAspectRatioAuto();
		void Close();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
