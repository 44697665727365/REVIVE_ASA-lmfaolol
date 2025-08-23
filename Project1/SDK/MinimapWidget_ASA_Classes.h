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
	 * WidgetBlueprintGeneratedClass MinimapWidget_ASA.MinimapWidget_ASA_C
	 * Size -> 0x0192 (FullSize[0x04C2] - InheritedSize[0x0330])
	 */
	class UMinimapWidget_ASA_C : public UPrimalUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0330(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        CanvasExtra;                                             // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        MainCanvas;                                              // 0x0340(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Minimap_Image;                                           // 0x0348(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMapMarkWidget_ASA_C*                                PlayerMark_Owner;                                        // 0x0350(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        PoiCanvas;                                               // 0x0358(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            MiniMapMAT;                                              // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<struct FPointOfInterestData>                        MarkPOIs;                                                // 0x0368(0x0010) Edit, BlueprintVisible
		class APrimalCharacter*                                    primalChar;                                              // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     ScaleMinimap;                                            // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UMapMarkWidget_ASA_C*>                        MapMarksWidgets;                                         // 0x0388(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		int32_t                                                    NextPlayerMarkIndex;                                     // 0x0398(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LREU[0x4];                                   // 0x039C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           PlayerLocation;                                          // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FMapData                                            CachedMinimapData;                                       // 0x03B0(0x0078) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     LasTimeUpdate;                                           // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           ScalePOI;                                                // 0x0430(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     OriginalScaleMinimap;                                    // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           OriginalScaleOverridePOI;                                // 0x0448(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           MaxScaleOverridePOI;                                     // 0x0458(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             RefreshTracking;                                         // 0x0468(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             RefreshCachedData;                                       // 0x0478(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    OverrideSelectedCacheMap;                                // 0x0488(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsOverridingCacheMap;                                    // 0x048C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SJ7E[0x3];                                   // 0x048D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeShowLastDeath;                                       // 0x0490(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LastDeathMarkRemoveTime;                                 // 0x0494(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsCornerMinimap;                                         // 0x0498(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UKEC[0x7];                                   // 0x0499(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             HandleEditMark;                                          // 0x04A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FVector2D                                           PlayerCoords;                                            // 0x04B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDontShowPOI;                                            // 0x04C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsSpawnUI;                                               // 0x04C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void TraceGroundLocation(const struct FVector& WithLocation, bool* Found, double* Z);
		struct FVector2D GetRenderScaleforPOI();
		void IncrementCacheOverride(int32_t Qty);
		void UpdateCachedData();
		void GetLocationWIthCoords(const struct FVector2D& Coords, struct FVector* Location);
		void CalculateWorldLocationMinimap(const struct FVector2D& Vector, struct FVector* Loc);
		void GetAllPois(TArray<struct FPointOfInterestData>* MarkPOIs);
		void LocAndRotYourself(const struct FVector2D& InPosition);
		void UpdateOwnPlayerMark();
		void GeneratePOIs();
		struct FVector2D GetMinimapLocation(const struct FVector& InputPin, bool NoUseScaleMinimap, struct FVector2D* Coords);
		void GetCurrentMiniMapData(struct FMapData* CurrentMinimapData);
		void GetMiniMapData(TArray<struct FMapData>* Minimaps);
		void GetPawnLoc(class APrimalCharacter* Pawn, struct FVector* WorldLocation);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void UpdateZoomMap(double Zoom);
		void AssignOnHandleMark(class UMapMarkWidget_ASA_C* ref);
		void HandleTracking_Event(const struct FMinimapMark& Mark, bool IsTracking);
		void PreConstruct(bool IsDesignTime);
		void HaandleEditMark_Event(const struct FMinimapMark& Mark);
		void ExecuteUbergraph_MinimapWidget_ASA(int32_t EntryPoint);
		void HandleEditMark__DelegateSignature(const struct FMinimapMark& Mark);
		void RefreshCachedData__DelegateSignature();
		void RefreshTracking__DelegateSignature(const struct FMinimapMark& Mark, bool IsTracking);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
