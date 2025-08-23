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
	 * BlueprintGeneratedClass NinjaLiveFunctions.NinjaLiveFunctions_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNinjaLiveFunctions_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_CameraFacing(class USceneComponent* InMesh, bool UseLegacyFacing, bool LockY, const struct FRotator& TraceMeshInitRot, class UObject* __WorldContext);
		void STATIC_RenderTgAcquisitionStatus(class UObject* SelfRef, int32_t RTnumberadded, ESimPrecision_Enum SimPrecision, int32_t ResX, int32_t ResY, bool PoolManDetected, bool HalfRes, int32_t NumberOfChannels, class UObject* __WorldContext, class FString* Print, double* MemConsumtion);
		void STATIC_AcquireRenderTargetsFromPool(int32_t Request0RGBA1RG2R, int32_t HostRenderTGListIndex, TArray<class FString>* RenderTargetList, class ANinjaLive_MemoryPoolManager_C* MemoryPoolManager, class UObject* __WorldContext, TMap<class FString, class UTextureRenderTarget2D*>* RenderTargetsMapTmp);
		void STATIC_TemplateLoader(const class FName& TemplateDefinition, class UDataTable* LoadedDataTable, const class FString& LoadedDatatablePath, class UObject* __WorldContext, bool* LoadFailed, class UObject** LoadedTemplateObject, class FString* LoadedTmpFullPath, class FString* LoadedTemplateNameOnly, bool* UsesAbsolutePath);
		void STATIC_SingleKeyPicker(class UDataTable* DataTableIn, const class FString& KeyToPick, class UObject* __WorldContext, class FString* PickedKeyValue, bool* NotFound);
		void STATIC_CreateRenderTarget(int32_t Width, int32_t Height, ETextureRenderTargetFormat Format, bool Clamping, ETextureGroup LODGroup, ETextureFilter Filter, bool ASA_Compute_Material, class UObject* __WorldContext, class UTextureRenderTarget2D** RTout);
		void STATIC_PresetLoader(const class FString& PresetName, TArray<class FName>* AssetPath, const class FName& AssetTrimmedName, bool ForcePreferredPreset, class UDataTable* PreferredPreset, class UObject* __WorldContext, class UDataTable** LoadedDataTable, class FString* LoadedDatatablePath, TMap<class FString, double>* PresetMap);
		void STATIC_TraceOverlap(const struct FVector& Start, const struct FVector& End, double TracelineOvershoot, ETraceTypeQuery TraceChannel, TArray<class AActor*>* FluidNinjaLIVEActors, class UObject* __WorldContext, struct FLinearColor* HitUV, struct FVector* TracePosition);
		void STATIC_TraceMouse(class UObject* HitComponent, bool TouchSensitive, unsigned char FingerIndex, ETraceTypeQuery TraceChannel, TArray<class AActor*> FluidNinjaLIVEActors, class UObject* __WorldContext, struct FLinearColor* HitUV, bool* SimHitByMouse, bool* MouseClickValid, bool* TouchValid);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
