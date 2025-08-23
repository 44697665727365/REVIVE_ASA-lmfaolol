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
	 * Class CinematicCamera.CameraRig_Crane
	 * Size -> 0x0030 (FullSize[0x04E8] - InheritedSize[0x04B8])
	 */
	class ACameraRig_Crane : public AActor
	{
	public:
		float                                                      CranePitch;                                              // 0x04B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CraneYaw;                                                // 0x04BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CraneArmLength;                                          // 0x04C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLockMountPitch;                                         // 0x04C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLockMountYaw;                                           // 0x04C5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2UXE[0x2];                                   // 0x04C6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     TransformComponent;                                      // 0x04C8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     CraneYawControl;                                         // 0x04D0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     CranePitchControl;                                       // 0x04D8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     CraneCameraMount;                                        // 0x04E0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class CinematicCamera.CameraRig_Rail
	 * Size -> 0x0020 (FullSize[0x04D8] - InheritedSize[0x04B8])
	 */
	class ACameraRig_Rail : public AActor
	{
	public:
		float                                                      CurrentPositionOnRail;                                   // 0x04B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLockOrientationToRail;                                  // 0x04BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I6YZ[0x3];                                   // 0x04BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     TransformComponent;                                      // 0x04C0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USplineComponent*                                    RailSplineComponent;                                     // 0x04C8(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USceneComponent*                                     RailCameraMount;                                         // 0x04D0(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		class USplineComponent* GetRailSplineComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class CinematicCamera.CineCameraActor
	 * Size -> 0x0080 (FullSize[0x0CE0] - InheritedSize[0x0C60])
	 */
	class ACineCameraActor : public ACameraActor
	{
	public:
		struct FCameraLookatTrackingSettings                       LookatTrackingSettings;                                  // 0x0C60(0x0070) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5HF9[0x10];                                  // 0x0CD0(0x0010) MISSED OFFSET (PADDING)

	public:
		class UCineCameraComponent* GetCineCameraComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class CinematicCamera.CineCameraComponent
	 * Size -> 0x0120 (FullSize[0x0C00] - InheritedSize[0x0AE0])
	 */
	class UCineCameraComponent : public UCameraComponent
	{
	public:
		struct FCameraFilmbackSettings                             FilmbackSettings;                                        // 0x0AE0(0x000C) Deprecated, NoDestructor, NativeAccessSpecifierPublic
		struct FCameraFilmbackSettings                             Filmback;                                                // 0x0AEC(0x000C) Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
		struct FCameraLensSettings                                 LensSettings;                                            // 0x0AF8(0x001C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_31MP[0x4];                                   // 0x0B14(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCameraFocusSettings                                FocusSettings;                                           // 0x0B18(0x0068) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPlateCropSettings                                  CropSettings;                                            // 0x0B80(0x0004) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CurrentFocalLength;                                      // 0x0B84(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentAperture;                                         // 0x0B88(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentFocusDistance;                                    // 0x0B8C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverride_CustomNearClippingPlane : 1;                   // 0x0B90(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SZGH[0x3];                                   // 0x0B91(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CustomNearClippingPlane;                                 // 0x0B94(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_97EP[0x8];                                   // 0x0B98(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNamedFilmbackPreset>                        FilmbackPresets;                                         // 0x0BA0(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		TArray<struct FNamedLensPreset>                            LensPresets;                                             // 0x0BB0(0x0010) ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected
		class FString                                              DefaultFilmbackPresetName;                               // 0x0BC0(0x0010) ZeroConstructor, Config, Deprecated, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              DefaultFilmbackPreset;                                   // 0x0BD0(0x0010) ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              DefaultLensPresetName;                                   // 0x0BE0(0x0010) ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DefaultLensFocalLength;                                  // 0x0BF0(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DefaultLensFStop;                                        // 0x0BF4(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YDOY[0x8];                                   // 0x0BF8(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetLensSettings(const struct FCameraLensSettings& NewLensSettings);
		void SetLensPresetByName(const class FString& InPresetName);
		void SetFocusSettings(const struct FCameraFocusSettings& NewFocusSettings);
		void SetFilmbackPresetByName(const class FString& InPresetName);
		void SetFilmback(const struct FCameraFilmbackSettings& NewFilmback);
		void SetCustomNearClippingPlane(float NewCustomNearClippingPlane);
		void SetCurrentFocalLength(float InFocalLength);
		void SetCurrentAperture(float NewCurrentAperture);
		void SetCropSettings(const struct FPlateCropSettings& NewCropSettings);
		void SetCropPresetByName(const class FString& InPresetName);
		float GetVerticalFieldOfView();
		TArray<struct FNamedLensPreset> STATIC_GetLensPresetsCopy();
		class FString GetLensPresetName();
		float GetHorizontalFieldOfView();
		TArray<struct FNamedFilmbackPreset> STATIC_GetFilmbackPresetsCopy();
		class FString GetFilmbackPresetName();
		class FString GetDefaultFilmbackPresetName();
		class FString GetCropPresetName();
		static UClass* StaticClass();
	};

	/**
	 * Class CinematicCamera.CineCameraSettings
	 * Size -> 0x0078 (FullSize[0x00B0] - InheritedSize[0x0038])
	 */
	class UCineCameraSettings : public UDeveloperSettings
	{
	public:
		class FString                                              DefaultLensPresetName;                                   // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultLensFocalLength;                                  // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultLensFStop;                                        // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNamedLensPreset>                            LensPresets;                                             // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic
		class FString                                              DefaultFilmbackPreset;                                   // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNamedFilmbackPreset>                        FilmbackPresets;                                         // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic
		class FString                                              DefaultCropPresetName;                                   // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNamedPlateCropPreset>                       CropPresets;                                             // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2L5O[0x10];                                  // 0x00A0(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetLensPresets(TArray<struct FNamedLensPreset> InLensPresets);
		void SetFilmbackPresets(TArray<struct FNamedFilmbackPreset> InFilmbackPresets);
		void SetDefaultLensPresetName(const class FString& InDefaultLensPresetName);
		void SetDefaultLensFStop(float InDefaultLensFStop);
		void SetDefaultLensFocalLength(float InDefaultLensFocalLength);
		void SetDefaultFilmbackPreset(const class FString& InDefaultFilmbackPreset);
		void SetDefaultCropPresetName(const class FString& InDefaultCropPresetName);
		void SetCropPresets(TArray<struct FNamedPlateCropPreset> InCropPresets);
		TArray<class FString> GetLensPresetNames();
		bool GetLensPresetByName(const class FString& PresetName, struct FCameraLensSettings* LensSettings);
		TArray<class FString> GetFilmbackPresetNames();
		bool GetFilmbackPresetByName(const class FString& PresetName, struct FCameraFilmbackSettings* FilmbackSettings);
		TArray<class FString> GetCropPresetNames();
		bool GetCropPresetByName(const class FString& PresetName, struct FPlateCropSettings* CropSettings);
		class UCineCameraSettings* STATIC_GetCineCameraSettings();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
