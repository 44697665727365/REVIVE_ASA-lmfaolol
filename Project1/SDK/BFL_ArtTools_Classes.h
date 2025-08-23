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
	 * BlueprintGeneratedClass BFL_ArtTools.BFL_ArtTools_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBFL_ArtTools_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_BlendPostProcessSettings(TArray<struct FPostProcessSettings>* Settings, TArray<double>* Weights, class UObject* __WorldContext, struct FPostProcessSettings* BlendedResult);
		void STATIC_ResolvePostProcessTableRow(const struct FDataTableRowHandle& TableRow, class UObject* __WorldContext, bool* Success, struct FPostProcessSettings* Result);
		void STATIC_GetDCM(class UWorld* World, class UObject* __WorldContext, bool* Success, class AActor** DCM);
		void STATIC_GetGameTime(class UObject* __WorldContext, double* GameTime, double* UDSTime);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
