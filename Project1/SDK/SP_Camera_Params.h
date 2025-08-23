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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function SP_Camera.SPCameraMode.ResetToDefaultSettings
	 */
	struct USPCameraMode_ResetToDefaultSettings_Params
	{	};

	/**
	 * Function SP_Camera.SPCameraMode.GetCustomFocusDistance
	 */
	struct USPCameraMode_GetCustomFocusDistance_Params
	{
	public:
		class AActor*                                              ViewTarget;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ONW1[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ViewToWorld;                                             // 0x0010(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0070(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SP_Camera.SPCam_AttachedCamera.ChooseViewCameraComponent
	 */
	struct USPCam_AttachedCamera_ChooseViewCameraComponent_Params
	{
	public:
		class AActor*                                              ViewTarget;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCameraComponent*                                    ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SP_Camera.SPPlayerCameraManager.StopAmbientCameraShake
	 */
	struct ASPPlayerCameraManager_StopAmbientCameraShake_Params
	{
	public:
		bool                                                       bImmediate;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SP_Camera.SPPlayerCameraManager.StartAmbientCameraShake
	 */
	struct ASPPlayerCameraManager_StartAmbientCameraShake_Params
	{	};

	/**
	 * Function SP_Camera.SPPlayerCameraManager.SkipNextInterpolation
	 */
	struct ASPPlayerCameraManager_SkipNextInterpolation_Params
	{	};

	/**
	 * Function SP_Camera.SPPlayerCameraManager.SkipBlends
	 */
	struct ASPPlayerCameraManager_SkipBlends_Params
	{	};

	/**
	 * Function SP_Camera.SPPlayerCameraManager.SetViewPitchLimits
	 */
	struct ASPPlayerCameraManager_SetViewPitchLimits_Params
	{
	public:
		float                                                      MinPitch;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MaxPitch;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SP_Camera.SPPlayerCameraManager.SetUsingAlternateCamera
	 */
	struct ASPPlayerCameraManager_SetUsingAlternateCamera_Params
	{
	public:
		bool                                                       bNewUsingAltCamera;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SP_Camera.SPPlayerCameraManager.SetDebugCameraStyle
	 */
	struct ASPPlayerCameraManager_SetDebugCameraStyle_Params
	{
	public:
		EDebugCameraStyle                                          NewDebugCameraStyle;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SP_Camera.SPPlayerCameraManager.ResetViewPitchLimits
	 */
	struct ASPPlayerCameraManager_ResetViewPitchLimits_Params
	{	};

	/**
	 * Function SP_Camera.SPPlayerCameraManager.IsUsingAlternateCamera
	 */
	struct ASPPlayerCameraManager_IsUsingAlternateCamera_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SP_Camera.SPPlayerCameraManager.GetCurrentCameraMode
	 */
	struct ASPPlayerCameraManager_GetCurrentCameraMode_Params
	{
	public:
		class USPCameraMode*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SP_Camera.SPPlayerCameraManager.GetCameraClassForCharacter
	 */
	struct ASPPlayerCameraManager_GetCameraClassForCharacter_Params
	{
	public:
		class AActor*                                              InViewTarget;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SP_Camera.SPPlayerCameraManager.ConfigureAlternateCamera
	 */
	struct ASPPlayerCameraManager_ConfigureAlternateCamera_Params
	{
	public:
		class UClass*                                              NewAltCameraMode;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              NewAltViewTarget;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewAltCameraTransitionTime;                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SP_Camera.SPPlayerCameraManager.ClearAlternateCamera
	 */
	struct ASPPlayerCameraManager_ClearAlternateCamera_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
