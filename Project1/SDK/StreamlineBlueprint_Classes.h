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
	 * Class StreamlineBlueprint.StreamlineLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UStreamlineLibrary : public UBlueprintFunctionLibrary
	{
	public:
		EUStreamlineFeatureSupport STATIC_QueryStreamlineFeatureSupport(EUStreamlineFeature Feature);
		bool STATIC_IsStreamlineFeatureSupported(EUStreamlineFeature Feature);
		struct FStreamlineFeatureRequirements STATIC_GetStreamlineFeatureInformation(EUStreamlineFeature Feature);
		void STATIC_BreakStreamlineFeatureRequirements(EUStreamlineFeatureRequirementsFlags Requirements, bool* D3D11Supported, bool* D3D12Supported, bool* VulkanSupported, bool* VSyncOffRequired, bool* HardwareSchedulingRequired);
		static UClass* StaticClass();
	};

	/**
	 * Class StreamlineBlueprint.StreamlineLibraryDLSSG
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UStreamlineLibraryDLSSG : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetDLSSGMode(EUStreamlineDLSSGMode DLSSGMode);
		EUStreamlineFeatureSupport STATIC_QueryDLSSGSupport();
		bool STATIC_IsDLSSGSupported();
		bool STATIC_IsDLSSGModeSupported(EUStreamlineDLSSGMode DLSSGMode);
		TArray<EUStreamlineDLSSGMode> STATIC_GetSupportedDLSSGModes();
		EUStreamlineDLSSGMode STATIC_GetDLSSGMode();
		void STATIC_GetDLSSGFrameTiming(float* FrameRateInHertz, int32_t* FramesPresented);
		EUStreamlineDLSSGMode STATIC_GetDefaultDLSSGMode();
		static UClass* StaticClass();
	};

	/**
	 * Class StreamlineBlueprint.StreamlineLibraryReflex
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UStreamlineLibraryReflex : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetReflexMode(EUStreamlineReflexMode Mode);
		EUStreamlineFeatureSupport STATIC_QueryReflexSupport();
		bool STATIC_IsReflexSupported();
		float STATIC_GetRenderLatencyInMs();
		EUStreamlineReflexMode STATIC_GetReflexMode();
		float STATIC_GetGameToRenderLatencyInMs();
		float STATIC_GetGameLatencyInMs();
		EUStreamlineReflexMode STATIC_GetDefaultReflexMode();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
