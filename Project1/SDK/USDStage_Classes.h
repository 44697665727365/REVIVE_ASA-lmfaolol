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
	 * Class USDStage.UsdPrimTwin
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UUsdPrimTwin : public UObject
	{
	public:
		unsigned char                                              UnknownData_KV9S[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PrimPath;                                                // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class USceneComponent>                      SceneComponent;                                          // 0x0050(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class UUsdPrimTwin*>                   Children;                                                // 0x0058(0x0050) Transient, UObjectWrapper, NativeAccessSpecifierPrivate
		TWeakObjectPtr<class UUsdPrimTwin>                         Parent;                                                  // 0x00A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class USDStage.UsdStageActor
	 * Size -> 0x0290 (FullSize[0x0748] - InheritedSize[0x04B8])
	 */
	class AUsdStageActor : public AActor
	{
	public:
		struct FFilePath                                           RootLayer;                                               // 0x04B8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UUsdAssetCache2*                                     UsdAssetCache;                                           // 0x04C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUsdInitialLoadSet                                         InitialLoadSet;                                          // 0x04D0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUsdInterpolationType                                      InterpolationType;                                       // 0x04D1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GX0A[0x2];                                   // 0x04D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    KindsToCollapse;                                         // 0x04D4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMergeIdenticalMaterialSlots;                            // 0x04D8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCollapseTopLevelPointInstancers;                        // 0x04D9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X7TT[0x2];                                   // 0x04DA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PurposesToLoad;                                          // 0x04DC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NaniteTriangleThreshold;                                 // 0x04E0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RenderContext;                                           // 0x04E4(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MaterialPurpose;                                         // 0x04EC(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUsdRootMotionHandling                                     RootMotionHandling;                                      // 0x04F4(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1RHH[0x3];                                   // 0x04F5(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_UONY[0x78];                                  // 0x04F8(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     SceneComponent;                                          // 0x0570(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Time;                                                    // 0x0578(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AVPG[0x4];                                   // 0x057C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULevelSequence*                                      LevelSequence;                                           // 0x0580(0x0008) Edit, ZeroConstructor, Transient, EditConst, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UUsdPrimTwin*                                        RootUsdTwin;                                             // 0x0588(0x0008) ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              PrimsToAnimate[0x50];                                    // 0x0590(0x0050) UNKNOWN PROPERTY: SetProperty
		TMap<class UObject*, class FString>                        ObjectsToWatch;                                          // 0x05E0(0x0050) Transient, Protected, NativeAccessSpecifierProtected
		class UUsdAssetCache*                                      AssetCache;                                              // 0x0630(0x0008) ZeroConstructor, NoDestructor, AdvancedDisplay, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UUsdTransactor*                                      Transactor;                                              // 0x0638(0x0008) ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RI9X[0x108];                                 // 0x0640(0x0108) MISSED OFFSET (PADDING)

	public:
		void SetTime(float InTime);
		void SetRootMotionHandling(EUsdRootMotionHandling NewHandlingStrategy);
		void SetRootLayer(const class FString& RootFilePath);
		void SetRenderContext(const class FName& NewRenderContext);
		void SetPurposesToLoad(int32_t NewPurposesToLoad);
		void SetNaniteTriangleThreshold(int32_t NewNaniteTriangleThreshold);
		void SetMergeIdenticalMaterialSlots(bool bMerge);
		void SetMaterialPurpose(const class FName& NewMaterialPurpose);
		void SetKindsToCollapse(int32_t NewKindsToCollapse);
		void SetIsolatedRootLayer(const class FString& IsolatedStageRootLayer);
		void SetInterpolationType(EUsdInterpolationType NewType);
		void SetInitialLoadSet(EUsdInitialLoadSet NewLoadSet);
		void SetCollapseTopLevelPointInstancers(bool bCollapse);
		void SetAssetCache(class UUsdAssetCache2* NewCache);
		void NewStage();
		float GetTime();
		class FString GetSourcePrimPath(class UObject* Object);
		class ULevelSequence* GetLevelSequence();
		class FString GetIsolatedRootLayer();
		class USceneComponent* GetGeneratedComponent(const class FString& PrimPath);
		TArray<class UObject*> GetGeneratedAssets(const class FString& PrimPath);
		static UClass* StaticClass();
	};

	/**
	 * Class USDStage.UsdTransactor
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UUsdTransactor : public UObject
	{
	public:
		unsigned char                                              UnknownData_97NH[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
