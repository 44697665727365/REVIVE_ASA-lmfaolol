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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum SP_Camera.ECameraAutoFollowMode
	 */
	enum class ECameraAutoFollowMode : uint8_t
	{
		None       = 0,
		LazyFollow = 1,
		FullFollow = 2,
		MAX        = 3
	};

	/**
	 * Enum SP_Camera.EDebugCameraStyle
	 */
	enum class EDebugCameraStyle : uint8_t
	{
		None            = 0,
		Fixed           = 1,
		ThirdPerson     = 2,
		FreeCam         = 3,
		FreeCam_Default = 4,
		FirstPerson     = 5,
		MAX             = 6
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct SP_Camera.PenetrationAvoidanceRay
	 * Size -> 0x0030
	 */
	struct FPenetrationAvoidanceRay
	{
	public:
		struct FRotator                                            AdjustmentRot;                                           // 0x0000(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      WorldWeight;                                             // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TraceInterval;                                           // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FramesUntilNextTrace;                                    // 0x0024(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnabled;                                                // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPrimaryRay;                                             // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AVCG[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SP_Camera.ActiveSPCamera
	 * Size -> 0x0890
	 */
	struct FActiveSPCamera
	{
	public:
		class USPCameraMode*                                       Camera;                                                  // 0x0000(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              ViewTarget;                                              // 0x0008(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PASF[0x880];                                 // 0x0010(0x0880) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct SP_Camera.SPCameraModeInstance
	 * Size -> 0x0020
	 */
	struct FSPCameraModeInstance
	{
	public:
		class UClass*                                              CameraModeClass;                                         // 0x0000(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              ViewTarget;                                              // 0x0008(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USPCameraMode*                                       CameraMode;                                              // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCineCameraComponent*                                CineCameraComponent;                                     // 0x0018(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
