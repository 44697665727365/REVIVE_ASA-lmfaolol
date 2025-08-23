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
	 * BlueprintGeneratedClass BPL_ASA_WaterSIm.BPL_ASA_WaterSIm_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPL_ASA_WaterSIm_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetWaterSimRTMap(class UObject* WorldContextObject, class UObject* __WorldContext, TMap<class FString, class UTextureRenderTarget2D*>* RenderTargetsMap);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
