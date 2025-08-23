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
	 * Function StreamlineBlueprint.StreamlineLibrary.QueryStreamlineFeatureSupport
	 */
	struct UStreamlineLibrary_QueryStreamlineFeatureSupport_Params
	{
	public:
		EUStreamlineFeature                                        Feature;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EUStreamlineFeatureSupport                                 ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibrary.IsStreamlineFeatureSupported
	 */
	struct UStreamlineLibrary_IsStreamlineFeatureSupported_Params
	{
	public:
		EUStreamlineFeature                                        Feature;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibrary.GetStreamlineFeatureInformation
	 */
	struct UStreamlineLibrary_GetStreamlineFeatureInformation_Params
	{
	public:
		EUStreamlineFeature                                        Feature;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Z8OP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FStreamlineFeatureRequirements                      ReturnValue;                                             // 0x0004(0x0034)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibrary.BreakStreamlineFeatureRequirements
	 */
	struct UStreamlineLibrary_BreakStreamlineFeatureRequirements_Params
	{
	public:
		EUStreamlineFeatureRequirementsFlags                       Requirements;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       D3D11Supported;                                          // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       D3D12Supported;                                          // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       VulkanSupported;                                         // 0x0003(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       VSyncOffRequired;                                        // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       HardwareSchedulingRequired;                              // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibraryDLSSG.SetDLSSGMode
	 */
	struct UStreamlineLibraryDLSSG_SetDLSSGMode_Params
	{
	public:
		EUStreamlineDLSSGMode                                      DLSSGMode;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibraryDLSSG.QueryDLSSGSupport
	 */
	struct UStreamlineLibraryDLSSG_QueryDLSSGSupport_Params
	{
	public:
		EUStreamlineFeatureSupport                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGSupported
	 */
	struct UStreamlineLibraryDLSSG_IsDLSSGSupported_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGModeSupported
	 */
	struct UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Params
	{
	public:
		EUStreamlineDLSSGMode                                      DLSSGMode;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetSupportedDLSSGModes
	 */
	struct UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Params
	{
	public:
		TArray<EUStreamlineDLSSGMode>                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGMode
	 */
	struct UStreamlineLibraryDLSSG_GetDLSSGMode_Params
	{
	public:
		EUStreamlineDLSSGMode                                      ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGFrameTiming
	 */
	struct UStreamlineLibraryDLSSG_GetDLSSGFrameTiming_Params
	{
	public:
		float                                                      FrameRateInHertz;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    FramesPresented;                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDefaultDLSSGMode
	 */
	struct UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Params
	{
	public:
		EUStreamlineDLSSGMode                                      ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibraryReflex.SetReflexMode
	 */
	struct UStreamlineLibraryReflex_SetReflexMode_Params
	{
	public:
		EUStreamlineReflexMode                                     Mode;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibraryReflex.QueryReflexSupport
	 */
	struct UStreamlineLibraryReflex_QueryReflexSupport_Params
	{
	public:
		EUStreamlineFeatureSupport                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibraryReflex.IsReflexSupported
	 */
	struct UStreamlineLibraryReflex_IsReflexSupported_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibraryReflex.GetRenderLatencyInMs
	 */
	struct UStreamlineLibraryReflex_GetRenderLatencyInMs_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibraryReflex.GetReflexMode
	 */
	struct UStreamlineLibraryReflex_GetReflexMode_Params
	{
	public:
		EUStreamlineReflexMode                                     ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibraryReflex.GetGameToRenderLatencyInMs
	 */
	struct UStreamlineLibraryReflex_GetGameToRenderLatencyInMs_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibraryReflex.GetGameLatencyInMs
	 */
	struct UStreamlineLibraryReflex_GetGameLatencyInMs_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function StreamlineBlueprint.StreamlineLibraryReflex.GetDefaultReflexMode
	 */
	struct UStreamlineLibraryReflex_GetDefaultReflexMode_Params
	{
	public:
		EUStreamlineReflexMode                                     ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
