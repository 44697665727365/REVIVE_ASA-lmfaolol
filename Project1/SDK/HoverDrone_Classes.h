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
	 * Class HoverDrone.HoverDroneMovementComponent
	 * Size -> 0x03C0 (FullSize[0x0550] - InheritedSize[0x0190])
	 */
	class UHoverDroneMovementComponent : public USpectatorPawnMovement
	{
	public:
		unsigned char                                              UnknownData_1G1U[0x18];                                  // 0x0190(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxAllowedSpeedIndex;                                    // 0x01A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6KW5[0x4];                                   // 0x01AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             MaxAllowedSpeedUpdated;                                  // 0x01B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VRYC[0x48];                                  // 0x01C0(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DirectRotationInputYawScale;                             // 0x0208(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DirectRotationInputPitchScale;                           // 0x020C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_44ER[0x18];                                  // 0x0210(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DirectRotationInputInterpSpeed;                          // 0x0228(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseFOVScaling;                                          // 0x022C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ER9X[0x3];                                   // 0x022D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           CameraFovRange;                                          // 0x0230(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           InputFovScaleRange;                                      // 0x0240(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RotAcceleration;                                         // 0x0250(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RotDeceleration;                                         // 0x0254(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxPitchRotSpeed;                                        // 0x0258(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxYawRotSpeed;                                          // 0x025C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FullAirFrictionVelocity;                                 // 0x0260(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7S2O[0x4];                                   // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             MovementAccelFactor;                                     // 0x0268(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_02I2[0x170];                                 // 0x0280(0x0170) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDroneSpeedParameters>                       DroneSpeedParameters;                                    // 0x03F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FDroneSpeedParameters>                       DroneSpeedParameters_NewModel;                           // 0x0400(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		float                                                      Acceleration_NewModel;                                   // 0x0410(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Deceleration_NewModel;                                   // 0x0414(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxSpeed_NewModel;                                       // 0x0418(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxYawRotSpeed_NewModel;                                 // 0x041C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxPitchRotSpeed_NewModel;                               // 0x0420(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RotAcceleration_NewModel;                                // 0x0424(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RotDeceleration_NewModel;                                // 0x0428(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseNewDroneFlightModel;                                 // 0x042C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QWVJ[0x3];                                   // 0x042D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinAirFriction;                                          // 0x0430(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    DroneSpeedParamIndex;                                    // 0x0434(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JYUP[0x4];                                   // 0x0438(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinSpeedHeight;                                          // 0x043C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxSpeedHeight;                                          // 0x0440(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxSpeedHeightMultiplier;                                // 0x0444(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MinPitch;                                                // 0x0448(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxPitch;                                                // 0x044C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZYGG[0x4];                                   // 0x0450(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DroneMaxAltitude;                                        // 0x0454(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Q0BH[0x8];                                   // 0x0458(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinHoverHeight;                                          // 0x0460(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaintainHoverHeightTolerance;                            // 0x0464(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaintainHoverHeightPredictionTime;                       // 0x0468(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CEKW[0x3C];                                  // 0x046C(0x003C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ForceFacingInterpInTime;                                 // 0x04A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSimulateRotation : 1;                                   // 0x04AC(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreDroneLimiters : 1;                                // 0x04AC(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FJWY[0x33];                                  // 0x04AD(0x0033) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FollowedActorPositionInterpSpeed;                        // 0x04E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8300[0x6C];                                  // 0x04E4(0x006C) MISSED OFFSET (PADDING)

	public:
		void StopForceFacing();
		void SetCurrentFOV(float NewFOV);
		void ForceFacing(const struct FVector& Location);
		void AddVelocity(const struct FVector& VelocityImpulse);
		void AddRotationalVelocity(const struct FRotator& RotationalVel);
		static UClass* StaticClass();
	};

	/**
	 * Class HoverDrone.HoverDronePawnBase
	 * Size -> 0x0008 (FullSize[0x05A0] - InheritedSize[0x0598])
	 */
	class AHoverDronePawnBase : public ADefaultPawn
	{
	public:
		class UCameraComponent*                                    CameraComponent;                                         // 0x0598(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoverDrone.HoverDronePawn
	 * Size -> 0x00D0 (FullSize[0x0670] - InheritedSize[0x05A0])
	 */
	class AHoverDronePawn : public AHoverDronePawnBase
	{
	public:
		bool                                                       bIsTiltingEnabled;                                       // 0x05A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowSpeedChange;                                       // 0x05A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bConstrainMovementToXYPlane;                             // 0x05A2(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Y9U2[0x5];                                   // 0x05A3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIIRInterpolatorRotator                             DroneTiltInterpolator;                                   // 0x05A8(0x0078) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FVector                                             TiltUpVector;                                            // 0x0620(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableTiltLimits;                                       // 0x0638(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AUGR[0x7];                                   // 0x0639(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            TiltLimits;                                              // 0x0640(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6BEL[0x18];                                  // 0x0658(0x0018) MISSED OFFSET (PADDING)

	public:
		void TurnAccel(float Val);
		void SetToDefaultDroneSpeedIndex();
		void SetDroneSpeedIndex(int32_t SpeedIndex);
		void SetAllowSpeedChange(bool bOnOff);
		void MoveUp(float Val);
		void LookUpAccel(float Val);
		bool IsMaintainingConstantAltitude();
		struct FRotator GetTiltedDroneRotation(float DeltaTime);
		int32_t GetDroneSpeedIndex();
		float GetAltitude();
		void EndLookat();
		void BeginLookat();
		static UClass* StaticClass();
	};

	/**
	 * Class HoverDrone.HoverDroneSpeedLimitBox
	 * Size -> 0x0008 (FullSize[0x0510] - InheritedSize[0x0508])
	 */
	class AHoverDroneSpeedLimitBox : public AVolume
	{
	public:
		int32_t                                                    MaxAllowedSpeedIndex;                                    // 0x0508(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M2S6[0x4];                                   // 0x050C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class HoverDrone.HoverDroneVolumeManager
	 * Size -> 0x00B8 (FullSize[0x00E8] - InheritedSize[0x0030])
	 */
	class UHoverDroneVolumeManager : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              SpeedLimitBoxes[0x50];                                   // 0x0030(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              BlockingVolumes[0x50];                                   // 0x0080(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_1SGP[0x18];                                  // 0x00D0(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
