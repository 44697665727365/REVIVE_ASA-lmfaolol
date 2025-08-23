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
	 * Class SP_Camera.SPCameraMode
	 * Size -> 0x0128 (FullSize[0x0150] - InheritedSize[0x0028])
	 */
	class USPCameraMode : public UObject
	{
	public:
		class ASPPlayerCameraManager*                              PlayerCamera;                                            // 0x0028(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TransitionInTime;                                        // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FViewTargetTransitionParams                         TransitionParams;                                        // 0x0034(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      FOV;                                                     // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseViewTargetCameraComponent;                           // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCineCam;                                             // 0x0049(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCineCamSettings;                                     // 0x004A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideFilmback;                                       // 0x004B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCameraFilmbackSettings                             CineCam_FilmbackOverride;                                // 0x004C(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CineCam_CurrentFocalLength;                              // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CineCam_CurrentAperture;                                 // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CineCam_FocusDistanceAdjustment;                         // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CineCam_DisplayOnly_FOV;                                 // 0x0064(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      BlockingActors;                                          // 0x0068(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I9RG[0x8];                                   // 0x0078(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CameraShakeClass;                                        // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCameraShakeBase*                                    CameraShakeInstance;                                     // 0x0088(0x0008) ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bScaleShakeWithViewTargetVelocity;                       // 0x0090(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YYZJ[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           ShakeScaling_SpeedRange;                                 // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           ShakeScaling_ScaleRange;                                 // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FIIRInterpolatorFloat                               ShakeScaleInterpolator;                                  // 0x00B8(0x0020) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bDrawDebugShake;                                         // 0x00D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseCustomFocusDistance;                                 // 0x00D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bOverrideViewPitchMinAndMax;                             // 0x00DA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AG5S[0x1];                                   // 0x00DB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ViewPitchMinOverride;                                    // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ViewPitchMaxOverride;                                    // 0x00E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Y9GH[0x6C];                                  // 0x00E4(0x006C) MISSED OFFSET (PADDING)

	public:
		void ResetToDefaultSettings();
		float GetCustomFocusDistance(class AActor* ViewTarget, const struct FTransform& ViewToWorld);
		static UClass* StaticClass();
	};

	/**
	 * Class SP_Camera.SPCam_AttachedCamera
	 * Size -> 0x0370 (FullSize[0x04C0] - InheritedSize[0x0150])
	 */
	class USPCam_AttachedCamera : public USPCameraMode
	{
	public:
		struct FDoubleIIRInterpolatorVector                        LocInterpolator;                                         // 0x0150(0x0108) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FDoubleIIRInterpolatorRotator                       RotInterpolator;                                         // 0x0258(0x0108) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bAllowPlayerRotationControl;                             // 0x0360(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WMU1[0x7];                                   // 0x0361(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDoubleIIRInterpolatorRotator                       PlayerControlRotInterpolator;                            // 0x0368(0x0108) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FIIRInterpolatorFloat                               ExtraLocZInterpolator;                                   // 0x0470(0x0020) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FVector2D                                           PivotPitchLimits;                                        // 0x0490(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           PivotYawLimits;                                          // 0x04A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCameraComponent*                                    LastViewCameraComponent;                                 // 0x04B0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EFTB[0x8];                                   // 0x04B8(0x0008) MISSED OFFSET (PADDING)

	public:
		class UCameraComponent* ChooseViewCameraComponent(class AActor* ViewTarget);
		static UClass* StaticClass();
	};

	/**
	 * Class SP_Camera.SPCam_ThirdPerson
	 * Size -> 0x06F0 (FullSize[0x0840] - InheritedSize[0x0150])
	 */
	class USPCam_ThirdPerson : public USPCameraMode
	{
	public:
		struct FTransform                                          PivotToViewTarget;                                       // 0x0150(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDoubleIIRInterpolatorVector                        PivotLocInterpolator;                                    // 0x01B0(0x0108) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FDoubleIIRInterpolatorRotator                       PivotRotInterpolator;                                    // 0x02B8(0x0108) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FIIRInterpolatorFloat                               ExtraPivotLocZInterpolator;                              // 0x03C0(0x0020) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FVector2D                                           PivotPitchLimits;                                        // 0x03E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           PivotYawLimits;                                          // 0x03F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTransform                                          CameraToPivot;                                           // 0x0400(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FDoubleIIRInterpolatorVector                        CameraToPivotTranslationInterpolator;                    // 0x0460(0x0108) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		class UCurveVector*                                        CameraToPivot_PitchAdjustmentCurve;                      // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CameraToPivot_PitchAdjustmentCurveScale;                 // 0x0570(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2Q2P[0x4];                                   // 0x0574(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveVector*                                        CameraToPivot_SpeedAdjustmentCurve;                      // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CameraToPivot_SpeedAdjustmentCurveScale;                 // 0x0580(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RLCL[0x4];                                   // 0x0584(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           CameraToPivot_SpeedAdjustment_SpeedRange;                // 0x0588(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ECameraAutoFollowMode                                      AutoFollowMode;                                          // 0x0598(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z2VP[0x7];                                   // 0x0599(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           LazyAutoFollowPitchLimits;                               // 0x05A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAllowLazyAutoFollowPitchControl;                        // 0x05B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4AT9[0x3];                                   // 0x05B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LazyFollowGoalPitch;                                     // 0x05B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LazyFollowLaziness;                                      // 0x05B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LazyFollowDelayAfterUserControl;                         // 0x05BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_39XD[0x8];                                   // 0x05C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LookatOffsetLocal;                                       // 0x05C8(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FIIRInterpolatorVector                              LookatWorldSpaceInterpolator;                            // 0x05E0(0x0078) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GNDJ[0x18];                                  // 0x0658(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUseLookatPoint : 1;                                     // 0x0670(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDoPredictiveLookat : 1;                                 // 0x0670(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EYAH[0x3];                                   // 0x0671(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PredictiveLookatTime;                                    // 0x0674(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FPenetrationAvoidanceRay>                    CameraPenetrationAvoidanceRays;                          // 0x0678(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FPenetrationAvoidanceRay>                    SafeLocPenetrationAvoidanceRays;                         // 0x0688(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FVector                                             SafeLocationOffset;                                      // 0x0698(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FIIRInterpolatorVector                              SafeLocationInterpolator;                                // 0x06B0(0x0078) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bValidateSafeLoc : 1;                                    // 0x0728(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bPreventCameraPenetration : 1;                           // 0x0728(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDoPredictiveAvoidance : 1;                              // 0x0728(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CZ5M[0x3];                                   // 0x0729(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PenetrationBlendInTime;                                  // 0x072C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PenetrationBlendOutTime;                                 // 0x0730(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8PVC[0x4];                                   // 0x0734(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LastSafeLocationLocal;                                   // 0x0738(0x0018) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LastPenetrationBlockedPct;                               // 0x0750(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_G4KQ[0xE4];                                  // 0x0754(0x00E4) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bDrawDebugPivot;                                         // 0x0838(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDrawDebugLookat;                                        // 0x0839(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDrawDebugSafeLoc;                                       // 0x083A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDrawDebugPenetrationAvoidance;                          // 0x083B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_238R[0x4];                                   // 0x083C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SP_Camera.SPPlayerCameraManager
	 * Size -> 0x08C0 (FullSize[0x4270] - InheritedSize[0x39B0])
	 */
	class ASPPlayerCameraManager : public APlayerCameraManager
	{
	public:
		float                                                      BasePelvisRelativeZ;                                     // 0x39B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PelvisBoneName;                                          // 0x39B4(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TG1A[0xC];                                   // 0x39BC(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              AltViewTarget;                                           // 0x39C8(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L9L1[0x8];                                   // 0x39D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              SavedMainViewTarget;                                     // 0x39D8(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FActiveSPCamera>                             CameraBlendStack;                                        // 0x39E0(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		TArray<struct FSPCameraModeInstance>                       CameraModeInstances;                                     // 0x39F0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZP1R[0x870];                                 // 0x3A00(0x0870) MISSED OFFSET (PADDING)

	public:
		void StopAmbientCameraShake(bool bImmediate);
		void StartAmbientCameraShake();
		void SkipNextInterpolation();
		void SkipBlends();
		void SetViewPitchLimits(float MinPitch, float MaxPitch);
		void SetUsingAlternateCamera(bool bNewUsingAltCamera);
		void SetDebugCameraStyle(EDebugCameraStyle NewDebugCameraStyle);
		void ResetViewPitchLimits();
		bool IsUsingAlternateCamera();
		class USPCameraMode* GetCurrentCameraMode();
		class UClass* GetCameraClassForCharacter(class AActor* InViewTarget);
		void ConfigureAlternateCamera(class UClass* NewAltCameraMode, class AActor* NewAltViewTarget, float NewAltCameraTransitionTime);
		void ClearAlternateCamera();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
