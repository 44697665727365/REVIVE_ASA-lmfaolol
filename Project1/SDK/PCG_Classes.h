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
	 * Class PCG.PCGAttributeExtractorTestObject
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UPCGAttributeExtractorTestObject : public UObject
	{
	public:
		double                                                     DoubleValue;                                             // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGAttributePropertySelectorBlueprintHelpers
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPCGAttributePropertySelectorBlueprintHelpers : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_SetPointProperty(struct FPCGAttributePropertySelector* Selector, EPCGPointProperties InPointProperty);
		bool STATIC_SetAttributeName(struct FPCGAttributePropertySelector* Selector, const class FName& InAttributeName);
		class FName STATIC_GetName(const struct FPCGAttributePropertySelector& Selector);
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGData
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UPCGData : public UObject
	{
	public:
		uint64_t                                                   UID;                                                     // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6L4Z[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGSpatialData
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UPCGSpatialData : public UPCGData
	{
	public:
		TWeakObjectPtr<class AActor>                               TargetActor;                                             // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPCGMetadata*                                        MetaData;                                                // 0x0040(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		class UPCGUnionData* UnionWith(class UPCGSpatialData* InOther);
		class UPCGPointData* ToPointDataWithContext(struct FPCGContext* Context);
		class UPCGPointData* ToPointData();
		class UPCGDifferenceData* Subtract(class UPCGSpatialData* InOther);
		bool SamplePoint(const struct FTransform& Transform, const struct FBox& Bounds, struct FPCGPoint* OutPoint, class UPCGMetadata* OutMetadata);
		bool ProjectPoint(const struct FTransform& InTransform, const struct FBox& InBounds, const struct FPCGProjectionParams& InParams, struct FPCGPoint* OutPoint, class UPCGMetadata* OutMetadata);
		class UPCGSpatialData* ProjectOn(class UPCGSpatialData* InOther, const struct FPCGProjectionParams& InParams);
		class UPCGMetadata* MutableMetadata();
		class UPCGIntersectionData* IntersectWith(class UPCGSpatialData* InOther);
		void InitializeFromData(class UPCGSpatialData* InSource, class UPCGMetadata* InMetadataParentOverride, bool bInheritMetadata, bool bInheritAttributes);
		bool HasNonTrivialTransform();
		struct FBox GetStrictBounds();
		struct FVector GetNormal();
		int32_t GetDimension();
		float GetDensityAtPosition(const struct FVector& InPosition);
		struct FBox GetBounds();
		class UPCGMetadata* CreateEmptyMetadata();
		class UPCGMetadata* ConstMetadata();
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGSpatialDataWithPointCache
	 * Size -> 0x0050 (FullSize[0x0098] - InheritedSize[0x0048])
	 */
	class UPCGSpatialDataWithPointCache : public UPCGSpatialData
	{
	public:
		class UPCGPointData*                                       CachedPointData;                                         // 0x0048(0x0008) ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FBox>                                        CachedBoundedPointDataBoxes;                             // 0x0050(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class UPCGPointData*>                               CachedBoundedPointData;                                  // 0x0060(0x0010) ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FAD3[0x28];                                  // 0x0070(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGCollisionShapeData
	 * Size -> 0x00F8 (FullSize[0x0190] - InheritedSize[0x0098])
	 */
	class UPCGCollisionShapeData : public UPCGSpatialDataWithPointCache
	{
	public:
		unsigned char                                              UnknownData_MABC[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x00A0(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_F21F[0x18];                                  // 0x0100(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBox                                                CachedBounds;                                            // 0x0118(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FBox                                                CachedStrictBounds;                                      // 0x0150(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_M4BL[0x8];                                   // 0x0188(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGSettingsInterface
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UPCGSettingsInterface : public UPCGData
	{
	public:
		bool                                                       bEnabled;                                                // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDebug;                                                  // 0x0039(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UBTU[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGSettings
	 * Size -> 0x0108 (FullSize[0x0148] - InheritedSize[0x0040])
	 */
	class UPCGSettings : public UPCGSettingsInterface
	{
	public:
		int32_t                                                    Seed;                                                    // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_15Y4[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              FilterOnTags[0x50];                                      // 0x0048(0x0050) UNKNOWN PROPERTY: SetProperty
		bool                                                       bPassThroughFilteredOutInputs;                           // 0x0098(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IM3S[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              TagsAppliedOnOutput[0x50];                               // 0x00A0(0x0050) UNKNOWN PROPERTY: SetProperty
		bool                                                       bUseSeed;                                                // 0x00F0(0x0001) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H008[0x3F];                                  // 0x00F1(0x003F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPCGSettingsOverridableParam>                CachedOverridableParams;                                 // 0x0130(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_T449[0x8];                                   // 0x0140(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGDistanceSettings
	 * Size -> 0x0020 (FullSize[0x0168] - InheritedSize[0x0148])
	 */
	class UPCGDistanceSettings : public UPCGSettings
	{
	public:
		class FName                                                AttributeName;                                           // 0x0148(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOutputDistanceVector;                                   // 0x0150(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSetDensity;                                             // 0x0151(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P6LC[0x6];                                   // 0x0152(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MaximumDistance;                                         // 0x0158(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPCGDistanceShape                                          SourceShape;                                             // 0x0160(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LKER[0x3];                                   // 0x0161(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EPCGDistanceShape                                          TargetShape;                                             // 0x0164(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MNZB[0x3];                                   // 0x0165(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGEngineSettings
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UPCGEngineSettings : public UObject
	{
	public:
		struct FVector                                             VolumeScale;                                             // 0x0028(0x0018) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerateOnDrop;                                         // 0x0040(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3R9X[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGGatherSettings
	 * Size -> 0x0000 (FullSize[0x0148] - InheritedSize[0x0148])
	 */
	class UPCGGatherSettings : public UPCGSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGNormalToDensitySettings
	 * Size -> 0x0030 (FullSize[0x0178] - InheritedSize[0x0148])
	 */
	class UPCGNormalToDensitySettings : public UPCGSettings
	{
	public:
		struct FVector                                             Normal;                                                  // 0x0148(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     Offset;                                                  // 0x0160(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     Strength;                                                // 0x0168(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPCGNormalToDensityMode                                    DensityMode;                                             // 0x0170(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FETL[0x7];                                   // 0x0171(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGRerouteSettings
	 * Size -> 0x0000 (FullSize[0x0148] - InheritedSize[0x0148])
	 */
	class UPCGRerouteSettings : public UPCGSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGUserParameterGetSettings
	 * Size -> 0x0018 (FullSize[0x0160] - InheritedSize[0x0148])
	 */
	class UPCGUserParameterGetSettings : public UPCGSettings
	{
	public:
		struct FGuid                                               PropertyGuid;                                            // 0x0148(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PropertyName;                                            // 0x0158(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGUserParametersData
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UPCGUserParametersData : public UPCGData
	{
	public:
		class UPCGGraphInterface*                                  OriginalGraph;                                           // 0x0038(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInstancedStruct                                    UserParameters;                                          // 0x0040(0x0010) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGDifferenceData
	 * Size -> 0x0028 (FullSize[0x00C0] - InheritedSize[0x0098])
	 */
	class UPCGDifferenceData : public UPCGSpatialDataWithPointCache
	{
	public:
		bool                                                       bDiffMetadata;                                           // 0x0098(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O9KZ[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPCGSpatialData*                                     Source;                                                  // 0x00A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPCGSpatialData*                                     Difference;                                              // 0x00A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPCGUnionData*                                       DifferencesUnion;                                        // 0x00B0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EPCGDifferenceDensityFunction                              DensityFunction;                                         // 0x00B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I5AF[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetDensityFunction(EPCGDifferenceDensityFunction InDensityFunction);
		void Initialize(class UPCGSpatialData* InData);
		void AddDifference(class UPCGSpatialData* InDifference);
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGIntersectionData
	 * Size -> 0x0088 (FullSize[0x0120] - InheritedSize[0x0098])
	 */
	class UPCGIntersectionData : public UPCGSpatialDataWithPointCache
	{
	public:
		EPCGIntersectionDensityFunction                            DensityFunction;                                         // 0x0098(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZSUJ[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPCGSpatialData*                                     A;                                                       // 0x00A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPCGSpatialData*                                     B;                                                       // 0x00A8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBox                                                CachedBounds;                                            // 0x00B0(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FBox                                                CachedStrictBounds;                                      // 0x00E8(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		void Initialize(class UPCGSpatialData* InA, class UPCGSpatialData* InB);
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGSurfaceData
	 * Size -> 0x0068 (FullSize[0x0100] - InheritedSize[0x0098])
	 */
	class UPCGSurfaceData : public UPCGSpatialDataWithPointCache
	{
	public:
		unsigned char                                              UnknownData_KMVJ[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x00A0(0x0060) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGLandscapeData
	 * Size -> 0x0070 (FullSize[0x0170] - InheritedSize[0x0100])
	 */
	class UPCGLandscapeData : public UPCGSurfaceData
	{
	public:
		unsigned char                                              Landscapes[0x10];                                        // 0x0100(0x0010) UNKNOWN PROPERTY: ArrayProperty
		struct FBox                                                Bounds;                                                  // 0x0110(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bHeightOnly;                                             // 0x0148(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseMetadata;                                            // 0x0149(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RR23[0x26];                                  // 0x014A(0x0026) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGPolyLineData
	 * Size -> 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
	 */
	class UPCGPolyLineData : public UPCGSpatialDataWithPointCache
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGLandscapeSplineData
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UPCGLandscapeSplineData : public UPCGPolyLineData
	{
	public:
		TWeakObjectPtr<class ULandscapeSplinesComponent>           Spline;                                                  // 0x0098(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGPointData
	 * Size -> 0x0128 (FullSize[0x0170] - InheritedSize[0x0048])
	 */
	class UPCGPointData : public UPCGSpatialData
	{
	public:
		TArray<struct FPCGPoint>                                   Points;                                                  // 0x0048(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L62X[0x118];                                 // 0x0058(0x0118) MISSED OFFSET (PADDING)

	public:
		void SetPoints(TArray<struct FPCGPoint> InPoints);
		TArray<struct FPCGPoint> GetPoints();
		struct FPCGPoint GetPoint(int32_t Index);
		void CopyPointsFrom(class UPCGPointData* InData, TArray<int32_t> InDataIndices);
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGPrimitiveData
	 * Size -> 0x0090 (FullSize[0x0128] - InheritedSize[0x0098])
	 */
	class UPCGPrimitiveData : public UPCGSpatialDataWithPointCache
	{
	public:
		struct FVector                                             VoxelSize;                                               // 0x0098(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UPrimitiveComponent>                  Primitive;                                               // 0x00B0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FBox                                                CachedBounds;                                            // 0x00B8(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FBox                                                CachedStrictBounds;                                      // 0x00F0(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGProjectionData
	 * Size -> 0x00A0 (FullSize[0x0138] - InheritedSize[0x0098])
	 */
	class UPCGProjectionData : public UPCGSpatialDataWithPointCache
	{
	public:
		class UPCGSpatialData*                                     Source;                                                  // 0x0098(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPCGSpatialData*                                     Target;                                                  // 0x00A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FBox                                                CachedBounds;                                            // 0x00A8(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FBox                                                CachedStrictBounds;                                      // 0x00E0(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FPCGProjectionParams                                ProjectionParams;                                        // 0x0118(0x0020) Edit, BlueprintVisible, EditConst, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGBaseTextureData
	 * Size -> 0x00B0 (FullSize[0x01B0] - InheritedSize[0x0100])
	 */
	class UPCGBaseTextureData : public UPCGSurfaceData
	{
	public:
		EPCGTextureDensityFunction                                 DensityFunction;                                         // 0x0100(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPCGTextureColorChannel                                    ColorChannel;                                            // 0x0101(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CWZU[0x2];                                   // 0x0102(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TexelSize;                                               // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAdvancedTiling;                                      // 0x0108(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XQDN[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Tiling;                                                  // 0x0110(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           CenterOffset;                                            // 0x0120(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Rotation;                                                // 0x0130(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTileBounds;                                          // 0x0134(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SLG9[0x3];                                   // 0x0135(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBox2D                                              TileBounds;                                              // 0x0138(0x0028) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FLinearColor>                                ColorData;                                               // 0x0160(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FBox                                                Bounds;                                                  // 0x0170(0x0038) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		int32_t                                                    Height;                                                  // 0x01A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Width;                                                   // 0x01AC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGRenderTargetData
	 * Size -> 0x0010 (FullSize[0x01C0] - InheritedSize[0x01B0])
	 */
	class UPCGRenderTargetData : public UPCGBaseTextureData
	{
	public:
		class UTextureRenderTarget2D*                              RenderTarget;                                            // 0x01B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1CGF[0x8];                                   // 0x01B8(0x0008) MISSED OFFSET (PADDING)

	public:
		void Initialize(class UTextureRenderTarget2D* InRenderTarget, const struct FTransform& InTransform);
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGSplineData
	 * Size -> 0x01A8 (FullSize[0x0240] - InheritedSize[0x0098])
	 */
	class UPCGSplineData : public UPCGPolyLineData
	{
	public:
		unsigned char                                              UnknownData_IG8G[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPCGSplineStruct                                    SplineStruct;                                            // 0x00A0(0x0160) NativeAccessSpecifierPublic
		struct FBox                                                CachedBounds;                                            // 0x0200(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PCE1[0x8];                                   // 0x0238(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGSplineProjectionData
	 * Size -> 0x0018 (FullSize[0x0150] - InheritedSize[0x0138])
	 */
	class UPCGSplineProjectionData : public UPCGProjectionData
	{
	public:
		struct FInterpCurveVector2D                                ProjectedPosition;                                       // 0x0138(0x0018) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGTextureData
	 * Size -> 0x0010 (FullSize[0x01C0] - InheritedSize[0x01B0])
	 */
	class UPCGTextureData : public UPCGBaseTextureData
	{
	public:
		TWeakObjectPtr<class UTexture2D>                           Texture;                                                 // 0x01B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7VK4[0x8];                                   // 0x01B8(0x0008) MISSED OFFSET (PADDING)

	public:
		void Initialize(class UTexture2D* InTexture, const struct FTransform& InTransform);
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGUnionData
	 * Size -> 0x0098 (FullSize[0x0130] - InheritedSize[0x0098])
	 */
	class UPCGUnionData : public UPCGSpatialDataWithPointCache
	{
	public:
		TArray<class UPCGSpatialData*>                             Data;                                                    // 0x0098(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		class UPCGSpatialData*                                     FirstNonTrivialTransformData;                            // 0x00A8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EPCGUnionType                                              UnionType;                                               // 0x00B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EPCGUnionDensityFunction                                   DensityFunction;                                         // 0x00B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SMGW[0x6];                                   // 0x00B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBox                                                CachedBounds;                                            // 0x00B8(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FBox                                                CachedStrictBounds;                                      // 0x00F0(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		int32_t                                                    CachedDimension;                                         // 0x0128(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WVQK[0x4];                                   // 0x012C(0x0004) MISSED OFFSET (PADDING)

	public:
		void Initialize(class UPCGSpatialData* InA, class UPCGSpatialData* InB);
		void AddData(class UPCGSpatialData* InData);
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGVolumeData
	 * Size -> 0x0090 (FullSize[0x0128] - InheritedSize[0x0098])
	 */
	class UPCGVolumeData : public UPCGSpatialDataWithPointCache
	{
	public:
		struct FVector                                             VoxelSize;                                               // 0x0098(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AVolume>                              Volume;                                                  // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FBox                                                Bounds;                                                  // 0x00B8(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FBox                                                StrictBounds;                                            // 0x00F0(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGWorldVolumetricData
	 * Size -> 0x0088 (FullSize[0x01B0] - InheritedSize[0x0128])
	 */
	class UPCGWorldVolumetricData : public UPCGVolumeData
	{
	public:
		TWeakObjectPtr<class UWorld>                               World;                                                   // 0x0128(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UPCGComponent>                        OriginatingComponent;                                    // 0x0130(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPCGWorldVolumetricQueryParams                      QueryParams;                                             // 0x0138(0x0078) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGWorldRayHitData
	 * Size -> 0x0100 (FullSize[0x0200] - InheritedSize[0x0100])
	 */
	class UPCGWorldRayHitData : public UPCGSurfaceData
	{
	public:
		TWeakObjectPtr<class UWorld>                               World;                                                   // 0x0100(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UPCGComponent>                        OriginatingComponent;                                    // 0x0108(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBox                                                Bounds;                                                  // 0x0110(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FPCGWorldRayHitQueryParams                          QueryParams;                                             // 0x0148(0x00B8) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGMetadataSettingsBase
	 * Size -> 0x0020 (FullSize[0x0168] - InheritedSize[0x0148])
	 */
	class UPCGMetadataSettingsBase : public UPCGSettings
	{
	public:
		struct FPCGAttributePropertySelector                       OutputTarget;                                            // 0x0148(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGMetadataBitwiseSettings
	 * Size -> 0x0048 (FullSize[0x01B0] - InheritedSize[0x0168])
	 */
	class UPCGMetadataBitwiseSettings : public UPCGMetadataSettingsBase
	{
	public:
		EPCGMedadataBitwiseOperation                               Operation;                                               // 0x0168(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UBAN[0x1];                                   // 0x0169(0x0001) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_ABGL[0x6];                                   // 0x016A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPCGAttributePropertySelector                       InputSource1;                                            // 0x0170(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPCGAttributePropertySelector                       InputSource2;                                            // 0x0190(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGMetadataBooleanSettings
	 * Size -> 0x0048 (FullSize[0x01B0] - InheritedSize[0x0168])
	 */
	class UPCGMetadataBooleanSettings : public UPCGMetadataSettingsBase
	{
	public:
		EPCGMedadataBooleanOperation                               Operation;                                               // 0x0168(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_25LT[0x1];                                   // 0x0169(0x0001) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_ONSZ[0x6];                                   // 0x016A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPCGAttributePropertySelector                       InputSource1;                                            // 0x0170(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPCGAttributePropertySelector                       InputSource2;                                            // 0x0190(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGMetadataBreakTransformSettings
	 * Size -> 0x0020 (FullSize[0x0188] - InheritedSize[0x0168])
	 */
	class UPCGMetadataBreakTransformSettings : public UPCGMetadataSettingsBase
	{
	public:
		struct FPCGAttributePropertySelector                       InputSource;                                             // 0x0168(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGMetadataBreakVectorSettings
	 * Size -> 0x0020 (FullSize[0x0188] - InheritedSize[0x0168])
	 */
	class UPCGMetadataBreakVectorSettings : public UPCGMetadataSettingsBase
	{
	public:
		struct FPCGAttributePropertySelector                       InputSource;                                             // 0x0168(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGMetadataCompareSettings
	 * Size -> 0x0050 (FullSize[0x01B8] - InheritedSize[0x0168])
	 */
	class UPCGMetadataCompareSettings : public UPCGMetadataSettingsBase
	{
	public:
		EPCGMedadataCompareOperation                               Operation;                                               // 0x0168(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5KZ1[0x1];                                   // 0x0169(0x0001) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_N43G[0x6];                                   // 0x016A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPCGAttributePropertySelector                       InputSource1;                                            // 0x0170(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPCGAttributePropertySelector                       InputSource2;                                            // 0x0190(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		double                                                     Tolerance;                                               // 0x01B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGMetadataOperationSettings
	 * Size -> 0x0040 (FullSize[0x0188] - InheritedSize[0x0148])
	 */
	class UPCGMetadataOperationSettings : public UPCGSettings
	{
	public:
		struct FPCGAttributePropertySelector                       InputSource;                                             // 0x0148(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPCGAttributePropertySelector                       OutputTarget;                                            // 0x0168(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGMetadataMakeTransformSettings
	 * Size -> 0x0060 (FullSize[0x01C8] - InheritedSize[0x0168])
	 */
	class UPCGMetadataMakeTransformSettings : public UPCGMetadataSettingsBase
	{
	public:
		struct FPCGAttributePropertySelector                       InputSource1;                                            // 0x0168(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPCGAttributePropertySelector                       InputSource2;                                            // 0x0188(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPCGAttributePropertySelector                       InputSource3;                                            // 0x01A8(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGMetadataMakeVectorSettings
	 * Size -> 0x0088 (FullSize[0x01F0] - InheritedSize[0x0168])
	 */
	class UPCGMetadataMakeVectorSettings : public UPCGMetadataSettingsBase
	{
	public:
		struct FPCGAttributePropertySelector                       InputSource1;                                            // 0x0168(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPCGAttributePropertySelector                       InputSource2;                                            // 0x0188(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPCGAttributePropertySelector                       InputSource3;                                            // 0x01A8(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPCGAttributePropertySelector                       InputSource4;                                            // 0x01C8(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EPCGMetadataTypes                                          OutputType;                                              // 0x01E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPCGMetadataMakeVector3                                    MakeVector3Op;                                           // 0x01E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPCGMetadataMakeVector4                                    MakeVector4Op;                                           // 0x01EA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8F0X[0x5];                                   // 0x01EB(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGMetadataMathsSettings
	 * Size -> 0x0068 (FullSize[0x01D0] - InheritedSize[0x0168])
	 */
	class UPCGMetadataMathsSettings : public UPCGMetadataSettingsBase
	{
	public:
		EPCGMedadataMathsOperation                                 Operation;                                               // 0x0168(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CS53[0x1];                                   // 0x0169(0x0001) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_GV7B[0x6];                                   // 0x016A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPCGAttributePropertySelector                       InputSource1;                                            // 0x0170(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPCGAttributePropertySelector                       InputSource2;                                            // 0x0190(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPCGAttributePropertySelector                       InputSource3;                                            // 0x01B0(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGMetadataPartitionSettings
	 * Size -> 0x0008 (FullSize[0x0150] - InheritedSize[0x0148])
	 */
	class UPCGMetadataPartitionSettings : public UPCGSettings
	{
	public:
		class FName                                                PartitionAttribute;                                      // 0x0148(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGMetadataRenameSettings
	 * Size -> 0x0010 (FullSize[0x0158] - InheritedSize[0x0148])
	 */
	class UPCGMetadataRenameSettings : public UPCGSettings
	{
	public:
		class FName                                                AttributeToRename;                                       // 0x0148(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                NewAttributeName;                                        // 0x0150(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGMetadataRotatorSettings
	 * Size -> 0x0068 (FullSize[0x01D0] - InheritedSize[0x0168])
	 */
	class UPCGMetadataRotatorSettings : public UPCGMetadataSettingsBase
	{
	public:
		EPCGMedadataRotatorOperation                               Operation;                                               // 0x0168(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KLIV[0x1];                                   // 0x0169(0x0001) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_XYES[0x6];                                   // 0x016A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPCGAttributePropertySelector                       InputSource1;                                            // 0x0170(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPCGAttributePropertySelector                       InputSource2;                                            // 0x0190(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPCGAttributePropertySelector                       InputSource3;                                            // 0x01B0(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGMetadataTransformSettings
	 * Size -> 0x0068 (FullSize[0x01D0] - InheritedSize[0x0168])
	 */
	class UPCGMetadataTransformSettings : public UPCGMetadataSettingsBase
	{
	public:
		EPCGMedadataTransformOperation                             Operation;                                               // 0x0168(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TIXW[0x1];                                   // 0x0169(0x0001) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EPCGTransformLerpMode                                      TransformLerpMode;                                       // 0x016A(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_450T[0x1];                                   // 0x016B(0x0001) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_OQIR[0x4];                                   // 0x016C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPCGAttributePropertySelector                       InputSource1;                                            // 0x0170(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPCGAttributePropertySelector                       InputSource2;                                            // 0x0190(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPCGAttributePropertySelector                       InputSource3;                                            // 0x01B0(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGMetadataTrigSettings
	 * Size -> 0x0048 (FullSize[0x01B0] - InheritedSize[0x0168])
	 */
	class UPCGMetadataTrigSettings : public UPCGMetadataSettingsBase
	{
	public:
		EPCGMedadataTrigOperation                                  Operation;                                               // 0x0168(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NMVA[0x1];                                   // 0x0169(0x0001) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_L3XO[0x6];                                   // 0x016A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPCGAttributePropertySelector                       InputSource1;                                            // 0x0170(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPCGAttributePropertySelector                       InputSource2;                                            // 0x0190(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGMetadataVectorSettings
	 * Size -> 0x0068 (FullSize[0x01D0] - InheritedSize[0x0168])
	 */
	class UPCGMetadataVectorSettings : public UPCGMetadataSettingsBase
	{
	public:
		EPCGMedadataVectorOperation                                Operation;                                               // 0x0168(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TQT7[0x1];                                   // 0x0169(0x0001) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_LLOF[0x6];                                   // 0x016A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPCGAttributePropertySelector                       InputSource1;                                            // 0x0170(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPCGAttributePropertySelector                       InputSource2;                                            // 0x0190(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FPCGAttributePropertySelector                       InputSource3;                                            // 0x01B0(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGAttributeFilterSettings
	 * Size -> 0x0018 (FullSize[0x0160] - InheritedSize[0x0148])
	 */
	class UPCGAttributeFilterSettings : public UPCGSettings
	{
	public:
		EPCGAttributeFilterOperation                               Operation;                                               // 0x0148(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DSLM[0x3];                                   // 0x0149(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_MMGP[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SelectedAttributes;                                      // 0x0150(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGAttributeGetFromPointIndexSettings
	 * Size -> 0x0030 (FullSize[0x0178] - InheritedSize[0x0148])
	 */
	class UPCGAttributeGetFromPointIndexSettings : public UPCGSettings
	{
	public:
		struct FPCGAttributePropertySelector                       InputSource;                                             // 0x0148(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x0168(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                OutputAttributeName;                                     // 0x016C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z2NW[0x4];                                   // 0x0174(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGAttributeReduceSettings
	 * Size -> 0x0030 (FullSize[0x0178] - InheritedSize[0x0148])
	 */
	class UPCGAttributeReduceSettings : public UPCGSettings
	{
	public:
		struct FPCGAttributePropertySelector                       InputSource;                                             // 0x0148(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FName                                                OutputAttributeName;                                     // 0x0168(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPCGAttributeReduceOperation                               Operation;                                               // 0x0170(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8Q77[0x3];                                   // 0x0171(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_JNSY[0x4];                                   // 0x0174(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGAttributeSelectSettings
	 * Size -> 0x0058 (FullSize[0x01A0] - InheritedSize[0x0148])
	 */
	class UPCGAttributeSelectSettings : public UPCGSettings
	{
	public:
		struct FPCGAttributePropertySelector                       InputSource;                                             // 0x0148(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FName                                                OutputAttributeName;                                     // 0x0168(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPCGAttributeSelectOperation                               Operation;                                               // 0x0170(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E0DW[0x3];                                   // 0x0171(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EPCGAttributeSelectAxis                                    Axis;                                                    // 0x0174(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A21Q[0x3];                                   // 0x0175(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_ET0V[0x8];                                   // 0x0178(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector4                                            CustomAxis;                                              // 0x0180(0x0020) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGAttributeTransferSettings
	 * Size -> 0x0010 (FullSize[0x0158] - InheritedSize[0x0148])
	 */
	class UPCGAttributeTransferSettings : public UPCGSettings
	{
	public:
		class FName                                                SourceAttributeName;                                     // 0x0148(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TargetAttributeName;                                     // 0x0150(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGBoundsModifierSettings
	 * Size -> 0x0040 (FullSize[0x0188] - InheritedSize[0x0148])
	 */
	class UPCGBoundsModifierSettings : public UPCGSettings
	{
	public:
		EPCGBoundsModifierMode                                     Mode;                                                    // 0x0148(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5VD7[0x7];                                   // 0x0149(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             BoundsMin;                                               // 0x0150(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BoundsMax;                                               // 0x0168(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectSteepness;                                        // 0x0180(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P7V4[0x3];                                   // 0x0181(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Steepness;                                               // 0x0184(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGCollapseSettings
	 * Size -> 0x0000 (FullSize[0x0148] - InheritedSize[0x0148])
	 */
	class UPCGCollapseSettings : public UPCGSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGCopyPointsSettings
	 * Size -> 0x0008 (FullSize[0x0150] - InheritedSize[0x0148])
	 */
	class UPCGCopyPointsSettings : public UPCGSettings
	{
	public:
		EPCGCopyPointsInheritanceMode                              RotationInheritance;                                     // 0x0148(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPCGCopyPointsInheritanceMode                              ScaleInheritance;                                        // 0x0149(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPCGCopyPointsInheritanceMode                              ColorInheritance;                                        // 0x014A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPCGCopyPointsInheritanceMode                              SeedInheritance;                                         // 0x014B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPCGCopyPointsMetadataInheritanceMode                      AttributeInheritance;                                    // 0x014C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3JMA[0x3];                                   // 0x014D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGCreateAttributeSettings
	 * Size -> 0x0188 (FullSize[0x02D0] - InheritedSize[0x0148])
	 */
	class UPCGCreateAttributeSettings : public UPCGSettings
	{
	public:
		class FName                                                OutputAttributeName;                                     // 0x0148(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFromSourceParam;                                        // 0x0150(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisplayFromSourceParamSetting;                          // 0x0151(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5VTL[0x2];                                   // 0x0152(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SourceParamAttributeName;                                // 0x0154(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P0AB[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPCGMetadataTypesConstantStruct                     AttributeTypes;                                          // 0x0160(0x0170) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGCreateAttributeSetSettings
	 * Size -> 0x0000 (FullSize[0x02D0] - InheritedSize[0x02D0])
	 */
	class UPCGCreateAttributeSetSettings : public UPCGCreateAttributeSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGCreateSplineSettings
	 * Size -> 0x0018 (FullSize[0x0160] - InheritedSize[0x0148])
	 */
	class UPCGCreateSplineSettings : public UPCGSettings
	{
	public:
		EPCGCreateSplineMode                                       Mode;                                                    // 0x0148(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClosedLoop;                                             // 0x0149(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLinear;                                                 // 0x014A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyCustomTangents;                                    // 0x014B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ArriveTangentAttribute;                                  // 0x014C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                LeaveTangentAttribute;                                   // 0x0154(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DFY0[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGDataFromActorSettings
	 * Size -> 0x0040 (FullSize[0x0188] - InheritedSize[0x0148])
	 */
	class UPCGDataFromActorSettings : public UPCGSettings
	{
	public:
		struct FPCGActorSelectorSettings                           ActorSelector;                                           // 0x0148(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EPCGGetDataFromActorMode                                   Mode;                                                    // 0x0168(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisplayModeSettings;                                    // 0x0169(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NIR2[0x6];                                   // 0x016A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        ExpectedPins;                                            // 0x0170(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                PropertyName;                                            // 0x0180(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGDataTableRowToParamDataSettings
	 * Size -> 0x0048 (FullSize[0x0190] - InheritedSize[0x0148])
	 */
	class UPCGDataTableRowToParamDataSettings : public UPCGSettings
	{
	public:
		class FName                                                RowName;                                                 // 0x0148(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PathOverride;                                            // 0x0150(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DataTable[0x30];                                         // 0x0160(0x0030) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGDebugSettings
	 * Size -> 0x0000 (FullSize[0x0148] - InheritedSize[0x0148])
	 */
	class UPCGDebugSettings : public UPCGSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGDensityFilterSettings
	 * Size -> 0x0010 (FullSize[0x0158] - InheritedSize[0x0148])
	 */
	class UPCGDensityFilterSettings : public UPCGSettings
	{
	public:
		float                                                      LowerBound;                                              // 0x0148(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UpperBound;                                              // 0x014C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvertFilter;                                           // 0x0150(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ADUE[0x7];                                   // 0x0151(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGDensityNoiseSettings
	 * Size -> 0x0010 (FullSize[0x0158] - InheritedSize[0x0148])
	 */
	class UPCGDensityNoiseSettings : public UPCGSettings
	{
	public:
		EPCGDensityNoiseMode                                       DensityMode;                                             // 0x0148(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LT6R[0x3];                                   // 0x0149(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DensityNoiseMin;                                         // 0x014C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DensityNoiseMax;                                         // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvertSourceDensity;                                    // 0x0154(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M7QP[0x3];                                   // 0x0155(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGLinearDensityRemapSettings
	 * Size -> 0x0010 (FullSize[0x0158] - InheritedSize[0x0148])
	 */
	class UPCGLinearDensityRemapSettings : public UPCGSettings
	{
	public:
		float                                                      RemapMin;                                                // 0x0148(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RemapMax;                                                // 0x014C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMultiplyDensity;                                        // 0x0150(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3RY1[0x7];                                   // 0x0151(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGDensityRemapSettings
	 * Size -> 0x0018 (FullSize[0x0160] - InheritedSize[0x0148])
	 */
	class UPCGDensityRemapSettings : public UPCGSettings
	{
	public:
		float                                                      InRangeMin;                                              // 0x0148(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InRangeMax;                                              // 0x014C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OutRangeMin;                                             // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OutRangeMax;                                             // 0x0154(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExcludeValuesOutsideInputRange;                         // 0x0158(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3VKK[0x7];                                   // 0x0159(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGDifferenceSettings
	 * Size -> 0x0008 (FullSize[0x0150] - InheritedSize[0x0148])
	 */
	class UPCGDifferenceSettings : public UPCGSettings
	{
	public:
		EPCGDifferenceDensityFunction                              DensityFunction;                                         // 0x0148(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPCGDifferenceMode                                         Mode;                                                    // 0x0149(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDiffMetadata;                                           // 0x014A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QMHE[0x5];                                   // 0x014B(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGBlueprintElement
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UPCGBlueprintElement : public UObject
	{
	public:
		bool                                                       bCreatesArtifacts;                                       // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCacheable;                                              // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanBeMultithreaded;                                     // 0x002A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OBB3[0x5];                                   // 0x002B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPCGPinProperties>                           CustomInputPins;                                         // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FPCGPinProperties>                           CustomOutputPins;                                        // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bHasDefaultInPin;                                        // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasDefaultOutPin;                                       // 0x0051(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BUF4[0xE];                                   // 0x0052(0x000E) MISSED OFFSET (PADDING)

	public:
		TArray<struct FPCGPoint> VariableLoopBody(const struct FPCGContext& InContext, class UPCGPointData* InData, const struct FPCGPoint& InPoint, class UPCGMetadata* OutMetadata);
		void VariableLoop(struct FPCGContext* InContext, class UPCGPointData* InData, class UPCGPointData** OutData, class UPCGPointData* OptionalOutData);
		bool PointLoopBody(const struct FPCGContext& InContext, class UPCGPointData* InData, const struct FPCGPoint& InPoint, struct FPCGPoint* OutPoint, class UPCGMetadata* OutMetadata);
		void PointLoop(struct FPCGContext* InContext, class UPCGPointData* InData, class UPCGPointData** OutData, class UPCGPointData* OptionalOutData);
		void OutputLabels();
		EPCGSettingsType NodeTypeOverride();
		class FName NodeTitleOverride();
		struct FLinearColor NodeColorOverride();
		bool NestedLoopBody(const struct FPCGContext& InContext, class UPCGPointData* InOuterData, class UPCGPointData* InInnerData, const struct FPCGPoint& InOuterPoint, const struct FPCGPoint& InInnerPoint, struct FPCGPoint* OutPoint, class UPCGMetadata* OutMetadata);
		void NestedLoop(struct FPCGContext* InContext, class UPCGPointData* InOuterData, class UPCGPointData* InInnerData, class UPCGPointData** OutData, class UPCGPointData* OptionalOutData);
		bool IterationLoopBody(const struct FPCGContext& InContext, int64_t Iteration, class UPCGSpatialData* InA, class UPCGSpatialData* InB, struct FPCGPoint* OutPoint, class UPCGMetadata* OutMetadata);
		void IterationLoop(struct FPCGContext* InContext, int64_t NumIterations, class UPCGPointData** OutData, class UPCGSpatialData* OptionalA, class UPCGSpatialData* OptionalB, class UPCGPointData* OptionalOutData);
		void InputLabels();
		int32_t GetSeed(struct FPCGContext* InContext);
		struct FRandomStream GetRandomStream(struct FPCGContext* InContext);
		void ExecuteWithContext(struct FPCGContext* InContext, const struct FPCGDataCollection& Input, struct FPCGDataCollection* Output);
		void Execute(const struct FPCGDataCollection& Input, struct FPCGDataCollection* Output);
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGBlueprintSettings
	 * Size -> 0x0010 (FullSize[0x0158] - InheritedSize[0x0148])
	 */
	class UPCGBlueprintSettings : public UPCGSettings
	{
	public:
		class UClass*                                              BlueprintElementType;                                    // 0x0148(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPCGBlueprintElement*                                BlueprintElementInstance;                                // 0x0150(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetElementType(class UClass* InElementType, class UPCGBlueprintElement** ElementInstance);
		class UClass* GetElementType();
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGFilterByTagSettings
	 * Size -> 0x0018 (FullSize[0x0160] - InheritedSize[0x0148])
	 */
	class UPCGFilterByTagSettings : public UPCGSettings
	{
	public:
		EPCGFilterByTagOperation                                   Operation;                                               // 0x0148(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q8DJ[0x3];                                   // 0x0149(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_YX5H[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SelectedTags;                                            // 0x0150(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGIntersectionSettings
	 * Size -> 0x0008 (FullSize[0x0150] - InheritedSize[0x0148])
	 */
	class UPCGIntersectionSettings : public UPCGSettings
	{
	public:
		EPCGIntersectionDensityFunction                            DensityFunction;                                         // 0x0148(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VP6H[0x7];                                   // 0x0149(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGMergeSettings
	 * Size -> 0x0008 (FullSize[0x0150] - InheritedSize[0x0148])
	 */
	class UPCGMergeSettings : public UPCGSettings
	{
	public:
		bool                                                       bMergeMetadata;                                          // 0x0148(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C8VW[0x7];                                   // 0x0149(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGPointExtentsModifierSettings
	 * Size -> 0x0020 (FullSize[0x0168] - InheritedSize[0x0148])
	 */
	class UPCGPointExtentsModifierSettings : public UPCGSettings
	{
	public:
		struct FVector                                             Extents;                                                 // 0x0148(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPCGPointExtentsModifierMode                               Mode;                                                    // 0x0160(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ET0C[0x7];                                   // 0x0161(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGPointFilterSettings
	 * Size -> 0x01C8 (FullSize[0x0310] - InheritedSize[0x0148])
	 */
	class UPCGPointFilterSettings : public UPCGSettings
	{
	public:
		EPCGPointFilterOperator                                    Operator;                                                // 0x0148(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9O9V[0x7];                                   // 0x0149(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPCGAttributePropertySelector                       TargetAttribute;                                         // 0x0150(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bUseConstantThreshold;                                   // 0x0170(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EOBR[0x7];                                   // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPCGAttributePropertySelector                       ThresholdAttribute;                                      // 0x0178(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bUseSpatialQuery;                                        // 0x0198(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VSCW[0x7];                                   // 0x0199(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPCGMetadataTypesConstantStruct                     AttributeTypes;                                          // 0x01A0(0x0170) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGPointMatchAndSetSettings
	 * Size -> 0x0038 (FullSize[0x0180] - InheritedSize[0x0148])
	 */
	class UPCGPointMatchAndSetSettings : public UPCGSettings
	{
	public:
		class UClass*                                              MatchAndSetType;                                         // 0x0148(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPCGMatchAndSetBase*                                 MatchAndSetInstance;                                     // 0x0150(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPCGAttributePropertySelector                       SetTarget;                                               // 0x0158(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EPCGMetadataTypes                                          SetTargetType;                                           // 0x0178(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FQZ6[0x3];                                   // 0x0179(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EPCGMetadataTypesConstantStructStringMode                  SetTargetStringMode;                                     // 0x017C(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y3HV[0x3];                                   // 0x017D(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	public:
		void SetMatchAndSetType(class UClass* InMatchAndSetType);
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGPointSamplerSettings
	 * Size -> 0x0008 (FullSize[0x0150] - InheritedSize[0x0148])
	 */
	class UPCGPointSamplerSettings : public UPCGSettings
	{
	public:
		float                                                      Ratio;                                                   // 0x0148(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LLV5[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGProjectionSettings
	 * Size -> 0x0020 (FullSize[0x0168] - InheritedSize[0x0148])
	 */
	class UPCGProjectionSettings : public UPCGSettings
	{
	public:
		struct FPCGProjectionParams                                ProjectionParams;                                        // 0x0148(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGPropertyToParamDataSettings
	 * Size -> 0x0068 (FullSize[0x01B0] - InheritedSize[0x0148])
	 */
	class UPCGPropertyToParamDataSettings : public UPCGSettings
	{
	public:
		struct FPCGActorSelectorSettings                           ActorSelector;                                           // 0x0148(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bSelectComponent;                                        // 0x0168(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KZ13[0x7];                                   // 0x0169(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ComponentClass;                                          // 0x0170(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PropertyName;                                            // 0x0178(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExtractObjectAndStruct;                                 // 0x0180(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FOW9[0x3];                                   // 0x0181(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                OutputAttributeName;                                     // 0x0184(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysRequeryActors;                                    // 0x018C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPCGActorSelection                                         ActorSelection;                                          // 0x018D(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DLFX[0x2];                                   // 0x018E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ActorSelectionTag;                                       // 0x0190(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FName                                                ActorSelectionName;                                      // 0x0198(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              ActorSelectionClass;                                     // 0x01A0(0x0008) ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EPCGActorFilter                                            ActorFilter;                                             // 0x01A8(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIncludeChildren;                                        // 0x01A9(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RANC[0x6];                                   // 0x01AA(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGSelfPruningSettings
	 * Size -> 0x0010 (FullSize[0x0158] - InheritedSize[0x0148])
	 */
	class UPCGSelfPruningSettings : public UPCGSettings
	{
	public:
		EPCGSelfPruningType                                        PruningType;                                             // 0x0148(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FJNJ[0x3];                                   // 0x0149(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RadiusSimilarityFactor;                                  // 0x014C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRandomizedPruning;                                      // 0x0150(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WWW1[0x7];                                   // 0x0151(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGBaseSubgraphSettings
	 * Size -> 0x0000 (FullSize[0x0148] - InheritedSize[0x0148])
	 */
	class UPCGBaseSubgraphSettings : public UPCGSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGSpawnActorSettings
	 * Size -> 0x0048 (FullSize[0x0190] - InheritedSize[0x0148])
	 */
	class UPCGSpawnActorSettings : public UPCGBaseSubgraphSettings
	{
	public:
		class UClass*                                              TemplateActorClass;                                      // 0x0148(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        PostSpawnFunctionNames;                                  // 0x0150(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EPCGSpawnActorOption                                       Option;                                                  // 0x0160(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceDisableActorParsing;                               // 0x0161(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPCGSpawnActorGenerationTrigger                            bGenerationTrigger;                                      // 0x0162(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInheritActorTags;                                       // 0x0163(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_60ZN[0x4];                                   // 0x0164(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        TagsToAddOnActors;                                       // 0x0168(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class AActor*                                              TemplateActor;                                           // 0x0178(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPCGActorPropertyOverride>                   ActorOverrides;                                          // 0x0180(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGNode
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UPCGNode : public UObject
	{
	public:
		class FName                                                NodeTitle;                                               // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPCGSettingsInterface*                               SettingsInterface;                                       // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UPCGNode*>                                    OutboundNodes;                                           // 0x0038(0x0010) ZeroConstructor, Deprecated, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<class UPCGEdge*>                                    InboundEdges;                                            // 0x0048(0x0010) ZeroConstructor, Deprecated, Protected, TextExportTransient, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<class UPCGEdge*>                                    OutboundEdges;                                           // 0x0058(0x0010) ZeroConstructor, Deprecated, Protected, TextExportTransient, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<class UPCGPin*>                                     InputPins;                                               // 0x0068(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<class UPCGPin*>                                     OutputPins;                                              // 0x0078(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		bool RemoveEdgeTo(const class FName& FromPinLable, class UPCGNode* To, const class FName& ToPinLabel);
		class UPCGSettings* GetSettings();
		class UPCGGraph* GetGraph();
		class UPCGNode* AddEdgeTo(const class FName& FromPinLabel, class UPCGNode* To, const class FName& ToPinLabel);
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGBaseSubgraphNode
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UPCGBaseSubgraphNode : public UPCGNode
	{
	public:
		bool                                                       bDynamicGraph;                                           // 0x0088(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UN05[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGSpawnActorNode
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UPCGSpawnActorNode : public UPCGBaseSubgraphNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGSplineSamplerSettings
	 * Size -> 0x00C8 (FullSize[0x0210] - InheritedSize[0x0148])
	 */
	class UPCGSplineSamplerSettings : public UPCGSettings
	{
	public:
		struct FPCGSplineSamplerParams                             SamplerParams;                                           // 0x0148(0x00C8) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGStaticMeshSpawnerSettings
	 * Size -> 0x0038 (FullSize[0x0180] - InheritedSize[0x0148])
	 */
	class UPCGStaticMeshSpawnerSettings : public UPCGSettings
	{
	public:
		class UClass*                                              MeshSelectorType;                                        // 0x0148(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPCGMeshSelectorBase*                                MeshSelectorInstance;                                    // 0x0150(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              InstancePackerType;                                      // 0x0158(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPCGInstancePackerBase*                              InstancePackerInstance;                                  // 0x0160(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                OutAttributeName;                                        // 0x0168(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPCGStaticMeshSpawnerEntry>                  Meshes;                                                  // 0x0170(0x0010) ZeroConstructor, Deprecated, NativeAccessSpecifierPublic

	public:
		void SetMeshSelectorType(class UClass* InMeshSelectorType);
		void SetInstancePackerType(class UClass* InInstancePackerType);
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGSurfaceSamplerSettings
	 * Size -> 0x0030 (FullSize[0x0178] - InheritedSize[0x0148])
	 */
	class UPCGSurfaceSamplerSettings : public UPCGSettings
	{
	public:
		float                                                      PointsPerSquaredMeter;                                   // 0x0148(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TRO7[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PointExtents;                                            // 0x0150(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Looseness;                                               // 0x0168(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUnbounded;                                              // 0x016C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyDensityToPoints;                                   // 0x016D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AC3M[0x2];                                   // 0x016E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PointSteepness;                                          // 0x0170(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JMR1[0x4];                                   // 0x0174(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGTextureSamplerSettings
	 * Size -> 0x00F8 (FullSize[0x0240] - InheritedSize[0x0148])
	 */
	class UPCGTextureSamplerSettings : public UPCGSettings
	{
	public:
		unsigned char                                              UnknownData_UKN4[0x8];                                   // 0x0148(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Transform;                                               // 0x0150(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAbsoluteTransform;                                   // 0x01B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C2CZ[0x7];                                   // 0x01B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Texture[0x30];                                           // 0x01B8(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		EPCGTextureDensityFunction                                 DensityFunction;                                         // 0x01E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPCGTextureColorChannel                                    ColorChannel;                                            // 0x01E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7LPT[0x2];                                   // 0x01EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TexelSize;                                               // 0x01EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAdvancedTiling;                                      // 0x01F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GM19[0x7];                                   // 0x01F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Tiling;                                                  // 0x01F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           CenterOffset;                                            // 0x0208(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Rotation;                                                // 0x0218(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTileBounds;                                          // 0x021C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SEAH[0x3];                                   // 0x021D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           TileBoundsMin;                                           // 0x0220(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           TileBoundsMax;                                           // 0x0230(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGTransformPointsSettings
	 * Size -> 0x00B8 (FullSize[0x0200] - InheritedSize[0x0148])
	 */
	class UPCGTransformPointsSettings : public UPCGSettings
	{
	public:
		bool                                                       bApplyToAttribute;                                       // 0x0148(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OFJW[0x3];                                   // 0x0149(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AttributeName;                                           // 0x014C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LD8V[0x4];                                   // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             OffsetMin;                                               // 0x0158(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             OffsetMax;                                               // 0x0170(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAbsoluteOffset;                                         // 0x0188(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H132[0x7];                                   // 0x0189(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            RotationMin;                                             // 0x0190(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            RotationMax;                                             // 0x01A8(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAbsoluteRotation;                                       // 0x01C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6WEH[0x7];                                   // 0x01C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ScaleMin;                                                // 0x01C8(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ScaleMax;                                                // 0x01E0(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAbsoluteScale;                                          // 0x01F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUniformScale;                                           // 0x01F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecomputeSeed;                                          // 0x01FA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WMR2[0x5];                                   // 0x01FB(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGGetLandscapeSettings
	 * Size -> 0x0000 (FullSize[0x0188] - InheritedSize[0x0188])
	 */
	class UPCGGetLandscapeSettings : public UPCGDataFromActorSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGGetSplineSettings
	 * Size -> 0x0000 (FullSize[0x0188] - InheritedSize[0x0188])
	 */
	class UPCGGetSplineSettings : public UPCGDataFromActorSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGGetVolumeSettings
	 * Size -> 0x0000 (FullSize[0x0188] - InheritedSize[0x0188])
	 */
	class UPCGGetVolumeSettings : public UPCGDataFromActorSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGGetPrimitiveSettings
	 * Size -> 0x0000 (FullSize[0x0188] - InheritedSize[0x0188])
	 */
	class UPCGGetPrimitiveSettings : public UPCGDataFromActorSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGUnionSettings
	 * Size -> 0x0008 (FullSize[0x0150] - InheritedSize[0x0148])
	 */
	class UPCGUnionSettings : public UPCGSettings
	{
	public:
		EPCGUnionType                                              Type;                                                    // 0x0148(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPCGUnionDensityFunction                                   DensityFunction;                                         // 0x0149(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AKDQ[0x6];                                   // 0x014A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGVolumeSamplerSettings
	 * Size -> 0x0020 (FullSize[0x0168] - InheritedSize[0x0148])
	 */
	class UPCGVolumeSamplerSettings : public UPCGSettings
	{
	public:
		struct FVector                                             VoxelSize;                                               // 0x0148(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUnbounded;                                              // 0x0160(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZP6B[0x7];                                   // 0x0161(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGWorldQuerySettings
	 * Size -> 0x0078 (FullSize[0x01C0] - InheritedSize[0x0148])
	 */
	class UPCGWorldQuerySettings : public UPCGSettings
	{
	public:
		struct FPCGWorldVolumetricQueryParams                      QueryParams;                                             // 0x0148(0x0078) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGWorldRayHitSettings
	 * Size -> 0x00B8 (FullSize[0x0200] - InheritedSize[0x0148])
	 */
	class UPCGWorldRayHitSettings : public UPCGSettings
	{
	public:
		struct FPCGWorldRayHitQueryParams                          QueryParams;                                             // 0x0148(0x00B8) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGLandscapeCache
	 * Size -> 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
	 */
	class UPCGLandscapeCache : public UObject
	{
	public:
		unsigned char                                              UnknownData_3HEU[0x50];                                  // 0x0028(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              CachedLayerNames[0x50];                                  // 0x0078(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_YIAY[0x10];                                  // 0x00C8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGPartitionActor
	 * Size -> 0x00B8 (FullSize[0x0570] - InheritedSize[0x04B8])
	 */
	class APCGPartitionActor : public APartitionActor
	{
	public:
		struct FGuid                                               PCGGuid;                                                 // 0x04B8(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ECRA[0x50];                                  // 0x04C8(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              LocalToOriginal[0x50];                                   // 0x0518(0x0050) UNKNOWN PROPERTY: MapProperty
		uint32_t                                                   PCGGridSize;                                             // 0x0568(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUse2DGrid;                                              // 0x056C(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ODA7[0x3];                                   // 0x056D(0x0003) MISSED OFFSET (PADDING)

	public:
		class UPCGComponent* GetOriginalComponent(class UPCGComponent* LocalComponent);
		class UPCGComponent* GetLocalComponent(class UPCGComponent* OriginalComponent);
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGActorHelpers
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPCGActorHelpers : public UBlueprintFunctionLibrary
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGBlueprintHelpers
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPCGBlueprintHelpers : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetSeedFromPosition(struct FPCGPoint* InPoint);
		void STATIC_SetLocalCenter(struct FPCGPoint* InPoint, const struct FVector& InLocalCenter);
		void STATIC_SetExtents(struct FPCGPoint* InPoint, const struct FVector& InExtents);
		struct FBox STATIC_GetTransformedBounds(const struct FPCGPoint& InPoint);
		int64_t STATIC_GetTaskId(struct FPCGContext* Context);
		class UPCGSettings* STATIC_GetSettings(struct FPCGContext* Context);
		struct FRandomStream STATIC_GetRandomStream(const struct FPCGPoint& InPoint, class UPCGSettings* OptionalSettings, class UPCGComponent* OptionalComponent);
		class UPCGComponent* STATIC_GetOriginalComponent(struct FPCGContext* Context);
		struct FVector STATIC_GetLocalCenter(const struct FPCGPoint& InPoint);
		TArray<struct FPCGLandscapeLayerWeight> STATIC_GetInterpolatedPCGLandscapeLayerWeights(class UObject* WorldContextObject, const struct FVector& Location);
		class UPCGData* STATIC_GetInputData(struct FPCGContext* Context);
		struct FVector STATIC_GetExtents(const struct FPCGPoint& InPoint);
		class UPCGComponent* STATIC_GetComponent(struct FPCGContext* Context);
		struct FBox STATIC_GetActorLocalBoundsPCG(class AActor* InActor, bool bIgnorePCGCreatedComponents);
		class UPCGData* STATIC_GetActorData(struct FPCGContext* Context);
		struct FBox STATIC_GetActorBoundsPCG(class AActor* InActor, bool bIgnorePCGCreatedComponents);
		class UPCGData* STATIC_CreatePCGDataFromActor(class AActor* InActor, bool bParseActor);
		int32_t STATIC_ComputeSeedFromPosition(const struct FVector& InPosition);
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGInstancePackerBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPCGInstancePackerBase : public UObject
	{
	public:
		void PackInstances(struct FPCGContext* Context, class UPCGSpatialData* InSpatialData, const struct FPCGMeshInstanceList& InstanceList, struct FPCGPackedCustomData* OutPackedCustomData);
		void PackCustomDataFromAttributes(const struct FPCGMeshInstanceList& InstanceList, class UPCGMetadata* MetaData, TArray<class FName> AttributeNames, struct FPCGPackedCustomData* OutPackedCustomData);
		bool AddTypeToPacking(int32_t TypeId, struct FPCGPackedCustomData* OutPackedCustomData);
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGInstancePackerByAttribute
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UPCGInstancePackerByAttribute : public UPCGInstancePackerBase
	{
	public:
		TArray<class FName>                                        AttributeNames;                                          // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGInstancePackerByRegex
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UPCGInstancePackerByRegex : public UPCGInstancePackerBase
	{
	public:
		TArray<class FString>                                      RegexPatterns;                                           // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGMatchAndSetBase
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UPCGMatchAndSetBase : public UObject
	{
	public:
		EPCGMetadataTypes                                          Type;                                                    // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_W71O[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EPCGMetadataTypesConstantStructStringMode                  StringMode;                                              // 0x002C(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_E58V[0x3];                                   // 0x002D(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	public:
		bool ValidatePreconditions(class UPCGPointData* InPointData);
		void MatchAndSet(struct FPCGContext* Context, class UPCGPointMatchAndSetSettings* InSettings, class UPCGPointData* InPointData, class UPCGPointData* OutPointData);
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGMatchAndSetByAttribute
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UPCGMatchAndSetByAttribute : public UPCGMatchAndSetBase
	{
	public:
		class FName                                                MatchSourceAttribute;                                    // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPCGMetadataTypes                                          MatchSourceType;                                         // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_00OE[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EPCGMetadataTypesConstantStructStringMode                  MatchSourceStringMode;                                   // 0x003C(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KG16[0x3];                                   // 0x003D(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TArray<struct FPCGMatchAndSetByAttributeEntry>             Entries;                                                 // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGMatchAndSetWeighted
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UPCGMatchAndSetWeighted : public UPCGMatchAndSetBase
	{
	public:
		TArray<struct FPCGMatchAndSetWeightedEntry>                Entries;                                                 // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bShouldMutateSeed;                                       // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_REUS[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGMatchAndSetWeightedByCategory
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UPCGMatchAndSetWeightedByCategory : public UPCGMatchAndSetBase
	{
	public:
		class FName                                                CategoryAttribute;                                       // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPCGMetadataTypes                                          CategoryType;                                            // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K59X[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EPCGMetadataTypesConstantStructStringMode                  CategoryStringMode;                                      // 0x003C(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_83XU[0x3];                                   // 0x003D(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TArray<struct FPCGMatchAndSetWeightedByCategoryEntryList>  Categories;                                              // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bShouldMutateSeed;                                       // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A2XH[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGMeshSelectorBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPCGMeshSelectorBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGMeshSelectorByAttribute
	 * Size -> 0x01F0 (FullSize[0x0218] - InheritedSize[0x0028])
	 */
	class UPCGMeshSelectorByAttribute : public UPCGMeshSelectorBase
	{
	public:
		class FName                                                AttributeName;                                           // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftISMComponentDescriptor                         TemplateDescriptor;                                      // 0x0030(0x01D0) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAttributeMaterialOverrides;                          // 0x0200(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C770[0x7];                                   // 0x0201(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        MaterialOverrideAttributes;                              // 0x0208(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGMeshSelectorWeighted
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UPCGMeshSelectorWeighted : public UPCGMeshSelectorBase
	{
	public:
		TArray<struct FPCGMeshSelectorWeightedEntry>               MeshEntries;                                             // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseAttributeMaterialOverrides;                          // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PWWK[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        MaterialOverrideAttributes;                              // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGMeshSelectorWeightedByCategory
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UPCGMeshSelectorWeightedByCategory : public UPCGMeshSelectorBase
	{
	public:
		class FName                                                CategoryAttribute;                                       // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPCGWeightedByCategoryEntryList>             Entries;                                                 // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseAttributeMaterialOverrides;                          // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QPAG[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        MaterialOverrideAttributes;                              // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGMetadata
	 * Size -> 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
	 */
	class UPCGMetadata : public UObject
	{
	public:
		class UPCGMetadata*                                        Parent;                                                  // 0x0028(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              OtherParents[0x50];                                      // 0x0030(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_3ZMD[0x88];                                  // 0x0080(0x0088) MISSED OFFSET (PADDING)

	public:
		void SetPointAttributes(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, struct FPCGPoint* OutPoint);
		void SetAttributesByKey(int64_t Key, class UPCGMetadata* InMetaData, int64_t TargetKey, int64_t* OutKey);
		void ResetWeightedAttributesByKey(int64_t TargetKey, int64_t* OutKey);
		void ResetPointWeightedAttributes(struct FPCGPoint* OutPoint);
		bool RenameAttribute(const class FName& AttributeToRename, const class FName& NewAttributeName);
		void MergePointAttributes(const struct FPCGPoint& PointA, class UPCGMetadata* MetadataA, const struct FPCGPoint& PointB, class UPCGMetadata* MetadataB, struct FPCGPoint* TargetPoint, EPCGMetadataOp Op);
		void MergeAttributesByKey(int64_t KeyA, class UPCGMetadata* MetadataA, int64_t KeyB, class UPCGMetadata* MetadataB, int64_t TargetKey, EPCGMetadataOp Op, int64_t* OutKey);
		void InitializeWithAttributeFilter(class UPCGMetadata* InParent, EPCGMetadataFilterMode InFilterMode);
		void InitializeAsCopyWithAttributeFilter(class UPCGMetadata* InMetadataToCopy, EPCGMetadataFilterMode InFilterMode);
		void InitializeAsCopy(class UPCGMetadata* InMetadataToCopy);
		void Initialize(class UPCGMetadata* InParent);
		bool HasCommonAttributes(class UPCGMetadata* InMetaData);
		bool HasAttribute(const class FName& AttributeName);
		void GetAttributes(TArray<class FName>* AttributeNames, TArray<EPCGMetadataTypes>* AttributeTypes);
		void DeleteAttribute(const class FName& AttributeName);
		void CreateVectorAttribute(const class FName& AttributeName, const struct FVector& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
		void CreateVector4Attribute(const class FName& AttributeName, const struct FVector4& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
		void CreateVector2Attribute(const class FName& AttributeName, const struct FVector2D& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
		void CreateTransformAttribute(const class FName& AttributeName, const struct FTransform& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
		void CreateStringAttribute(const class FName& AttributeName, const class FString& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
		void CreateRotatorAttribute(const class FName& AttributeName, const struct FRotator& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
		void CreateQuatAttribute(const class FName& AttributeName, const struct FQuat& DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
		void CreateInteger64Attribute(const class FName& AttributeName, int64_t DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
		void CreateInteger32Attribute(const class FName& AttributeName, int32_t DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
		void CreateFloatAttribute(const class FName& AttributeName, float DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
		void CreateDoubleAttribute(const class FName& AttributeName, double DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
		void CreateBoolAttribute(const class FName& AttributeName, bool DefaultValue, bool bAllowsInterpolation, bool bOverrideParent);
		bool CopyExistingAttribute(const class FName& AttributeToCopy, const class FName& NewAttributeName, bool bKeepParent);
		void CopyAttributes(class UPCGMetadata* InOther);
		void CopyAttribute(class UPCGMetadata* InOther, const class FName& AttributeToCopy, const class FName& NewAttributeName);
		void ClearAttribute(const class FName& AttributeToClear);
		int64_t AddEntry(int64_t ParentEntryKey);
		void AddAttributesFiltered(class UPCGMetadata* InOther, EPCGMetadataFilterMode InFilterMode);
		void AddAttributes(class UPCGMetadata* InOther);
		void AddAttribute(class UPCGMetadata* InOther, const class FName& AttributeName);
		void AccumulateWeightedAttributesByKey(int64_t Key, class UPCGMetadata* MetaData, float Weight, bool bSetNonInterpolableAttributes, int64_t TargetKey, int64_t* OutKey);
		void AccumulatePointWeightedAttributes(const struct FPCGPoint& InPoint, class UPCGMetadata* InMetaData, float Weight, bool bSetNonInterpolableAttributes, struct FPCGPoint* OutPoint);
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGMetadataAccessorHelpers
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPCGMetadataAccessorHelpers : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetVectorAttributeByMetadataKey(int64_t* Key, class UPCGMetadata* MetaData, const class FName& AttributeName, const struct FVector& Value);
		void STATIC_SetVectorAttribute(struct FPCGPoint* Point, class UPCGMetadata* MetaData, const class FName& AttributeName, const struct FVector& Value);
		void STATIC_SetVector4AttributeByMetadataKey(int64_t* Key, class UPCGMetadata* MetaData, const class FName& AttributeName, const struct FVector4& Value);
		void STATIC_SetVector4Attribute(struct FPCGPoint* Point, class UPCGMetadata* MetaData, const class FName& AttributeName, const struct FVector4& Value);
		void STATIC_SetVector2AttributeByMetadataKey(int64_t* Key, class UPCGMetadata* MetaData, const class FName& AttributeName, const struct FVector2D& Value);
		void STATIC_SetVector2Attribute(struct FPCGPoint* Point, class UPCGMetadata* MetaData, const class FName& AttributeName, const struct FVector2D& Value);
		void STATIC_SetTransformAttributeByMetadataKey(int64_t* Key, class UPCGMetadata* MetaData, const class FName& AttributeName, const struct FTransform& Value);
		void STATIC_SetTransformAttribute(struct FPCGPoint* Point, class UPCGMetadata* MetaData, const class FName& AttributeName, const struct FTransform& Value);
		void STATIC_SetStringAttributeByMetadataKey(int64_t* Key, class UPCGMetadata* MetaData, const class FName& AttributeName, const class FString& Value);
		void STATIC_SetStringAttribute(struct FPCGPoint* Point, class UPCGMetadata* MetaData, const class FName& AttributeName, const class FString& Value);
		void STATIC_SetRotatorAttributeByMetadataKey(int64_t* Key, class UPCGMetadata* MetaData, const class FName& AttributeName, const struct FRotator& Value);
		void STATIC_SetRotatorAttribute(struct FPCGPoint* Point, class UPCGMetadata* MetaData, const class FName& AttributeName, const struct FRotator& Value);
		void STATIC_SetQuatAttributeByMetadataKey(int64_t* Key, class UPCGMetadata* MetaData, const class FName& AttributeName, const struct FQuat& Value);
		void STATIC_SetQuatAttribute(struct FPCGPoint* Point, class UPCGMetadata* MetaData, const class FName& AttributeName, const struct FQuat& Value);
		void STATIC_SetInteger64AttributeByMetadataKey(int64_t* Key, class UPCGMetadata* MetaData, const class FName& AttributeName, int64_t Value);
		void STATIC_SetInteger64Attribute(struct FPCGPoint* Point, class UPCGMetadata* MetaData, const class FName& AttributeName, int64_t Value);
		void STATIC_SetInteger32AttributeByMetadataKey(int64_t* Key, class UPCGMetadata* MetaData, const class FName& AttributeName, int32_t Value);
		void STATIC_SetInteger32Attribute(struct FPCGPoint* Point, class UPCGMetadata* MetaData, const class FName& AttributeName, int32_t Value);
		void STATIC_SetFloatAttributeByMetadataKey(int64_t* Key, class UPCGMetadata* MetaData, const class FName& AttributeName, float Value);
		void STATIC_SetFloatAttribute(struct FPCGPoint* Point, class UPCGMetadata* MetaData, const class FName& AttributeName, float Value);
		void STATIC_SetDoubleAttributeByMetadataKey(int64_t* Key, class UPCGMetadata* MetaData, const class FName& AttributeName, double Value);
		void STATIC_SetDoubleAttribute(struct FPCGPoint* Point, class UPCGMetadata* MetaData, const class FName& AttributeName, double Value);
		void STATIC_SetBoolAttributeByMetadataKey(int64_t* Key, class UPCGMetadata* MetaData, const class FName& AttributeName, bool Value);
		void STATIC_SetBoolAttribute(struct FPCGPoint* Point, class UPCGMetadata* MetaData, const class FName& AttributeName, bool Value);
		bool STATIC_SetAttributeFromPropertyByMetadataKey(int64_t* Key, class UPCGMetadata* MetaData, const class FName& AttributeName, class UObject* Object, const class FName& PropertyName);
		void STATIC_InitializeMetadata(struct FPCGPoint* Point, class UPCGMetadata* MetaData, const struct FPCGPoint& ParentPoint, class UPCGMetadata* ParentMetadata);
		bool STATIC_HasAttributeSetByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, const class FName& AttributeName);
		bool STATIC_HasAttributeSet(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, const class FName& AttributeName);
		struct FVector STATIC_GetVectorAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, const class FName& AttributeName);
		struct FVector STATIC_GetVectorAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, const class FName& AttributeName);
		struct FVector4 STATIC_GetVector4AttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, const class FName& AttributeName);
		struct FVector4 STATIC_GetVector4Attribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, const class FName& AttributeName);
		struct FVector2D STATIC_GetVector2AttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, const class FName& AttributeName);
		struct FVector2D STATIC_GetVector2Attribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, const class FName& AttributeName);
		struct FTransform STATIC_GetTransformAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, const class FName& AttributeName);
		struct FTransform STATIC_GetTransformAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, const class FName& AttributeName);
		class FString STATIC_GetStringAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, const class FName& AttributeName);
		class FString STATIC_GetStringAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, const class FName& AttributeName);
		struct FRotator STATIC_GetRotatorAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, const class FName& AttributeName);
		struct FRotator STATIC_GetRotatorAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, const class FName& AttributeName);
		struct FQuat STATIC_GetQuatAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, const class FName& AttributeName);
		struct FQuat STATIC_GetQuatAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, const class FName& AttributeName);
		int64_t STATIC_GetInteger64AttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, const class FName& AttributeName);
		int64_t STATIC_GetInteger64Attribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, const class FName& AttributeName);
		int32_t STATIC_GetInteger32AttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, const class FName& AttributeName);
		int32_t STATIC_GetInteger32Attribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, const class FName& AttributeName);
		float STATIC_GetFloatAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, const class FName& AttributeName);
		float STATIC_GetFloatAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, const class FName& AttributeName);
		double STATIC_GetDoubleAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, const class FName& AttributeName);
		double STATIC_GetDoubleAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, const class FName& AttributeName);
		bool STATIC_GetBoolAttributeByMetadataKey(int64_t Key, class UPCGMetadata* MetaData, const class FName& AttributeName);
		bool STATIC_GetBoolAttribute(const struct FPCGPoint& Point, class UPCGMetadata* MetaData, const class FName& AttributeName);
		void STATIC_CopyPoint(const struct FPCGPoint& InPoint, struct FPCGPoint* OutPoint, bool bCopyMetadata, class UPCGMetadata* InMetaData, class UPCGMetadata* OutMetadata);
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGComponent
	 * Size -> 0x0100 (FullSize[0x01B8] - InheritedSize[0x00B8])
	 */
	class UPCGComponent : public UActorComponent
	{
	public:
		EPCGComponentInput                                         inputType;                                               // 0x00B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bParseActorComponents;                                   // 0x00B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I9PZ[0x2];                                   // 0x00BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Seed;                                                    // 0x00BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bActivated;                                              // 0x00C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsComponentPartitioned;                                 // 0x00C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPCGComponentGenerationTrigger                             GenerationTrigger;                                       // 0x00C2(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGenerated;                                              // 0x00C3(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRuntimeGenerated;                                       // 0x00C4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5FZ3[0x3];                                   // 0x00C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        PostGenerateFunctionNames;                               // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
		class UPCGGraphInstance*                                   GraphInstance;                                           // 0x00D8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPCGData*                                            CachedPCGData;                                           // 0x00E0(0x0008) ZeroConstructor, Transient, NoDestructor, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPCGData*                                            CachedInputData;                                         // 0x00E8(0x0008) ZeroConstructor, Transient, NoDestructor, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPCGData*                                            CachedActorData;                                         // 0x00F0(0x0008) ZeroConstructor, Transient, NoDestructor, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPCGData*                                            CachedLandscapeData;                                     // 0x00F8(0x0008) ZeroConstructor, Transient, NoDestructor, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPCGData*                                            CachedLandscapeHeightData;                               // 0x0100(0x0008) ZeroConstructor, Transient, NoDestructor, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UPCGManagedResource*>                         GeneratedResources;                                      // 0x0108(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TSXX[0x8];                                   // 0x0118(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBox                                                LastGeneratedBounds;                                     // 0x0120(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FPCGDataCollection                                  GeneratedGraphOutput;                                    // 0x0158(0x0020) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_I0OT[0x10];                                  // 0x0178(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsComponentLocal;                                       // 0x0188(0x0001) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Z4KZ[0x2F];                                  // 0x0189(0x002F) MISSED OFFSET (PADDING)

	public:
		void SetGraph(class UPCGGraphInterface* InGraph);
		void NotifyPropertiesChangedFromBlueprint();
		struct FPCGDataCollection GetGeneratedGraphOutput();
		void GenerateLocal(bool bForce);
		void Generate(bool bForce);
		class AActor* ClearPCGLink(class UClass* TemplateActor);
		void CleanupLocal(bool bRemoveComponents, bool bSave);
		void Cleanup(bool bRemoveComponents, bool bSave);
		void AddToManagedResources(class UPCGManagedResource* InResource);
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGDataFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPCGDataFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		TArray<struct FPCGTaggedData> STATIC_GetTaggedParams(const struct FPCGDataCollection& InCollection, const class FString& InTag);
		TArray<struct FPCGTaggedData> STATIC_GetTaggedInputs(const struct FPCGDataCollection& InCollection, const class FString& InTag);
		TArray<struct FPCGTaggedData> STATIC_GetParamsByPin(const struct FPCGDataCollection& InCollection, const class FName& InPinLabel);
		TArray<struct FPCGTaggedData> STATIC_GetParams(const struct FPCGDataCollection& InCollection);
		TArray<struct FPCGTaggedData> STATIC_GetInputsByPin(const struct FPCGDataCollection& InCollection, const class FName& InPinLabel);
		TArray<struct FPCGTaggedData> STATIC_GetInputs(const struct FPCGDataCollection& InCollection);
		TArray<struct FPCGTaggedData> STATIC_GetAllSettings(const struct FPCGDataCollection& InCollection);
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGEdge
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UPCGEdge : public UObject
	{
	public:
		class FName                                                InboundLabel;                                            // 0x0028(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPCGNode*                                            InboundNode;                                             // 0x0030(0x0008) ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                OutboundLabel;                                           // 0x0038(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPCGNode*                                            OutboundNode;                                            // 0x0040(0x0008) ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPCGPin*                                             InputPin;                                                // 0x0048(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPCGPin*                                             OutputPin;                                               // 0x0050(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGGraphInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPCGGraphInterface : public UObject
	{
	public:
		class UPCGGraph* GetMutablePCGGraph();
		class UPCGGraph* GetConstPCGGraph();
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGGraph
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UPCGGraph : public UPCGGraphInterface
	{
	public:
		bool                                                       bLandscapeUsesMetadata;                                  // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L3D9[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPCGNode*>                                    Nodes;                                                   // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		class UPCGNode*                                            InputNode;                                               // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPCGNode*                                            OutputNode;                                              // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FInstancedPropertyBag                               UserParameters;                                          // 0x0050(0x0010) Edit, Protected, NativeAccessSpecifierProtected

	public:
		void RemoveNode(class UPCGNode* InNode);
		bool RemoveEdge(class UPCGNode* From, const class FName& FromLabel, class UPCGNode* To, const class FName& ToLabel);
		class UPCGNode* GetOutputNode();
		class UPCGNode* GetInputNode();
		class UPCGNode* AddNodeOfType(class UClass* InSettingsClass, class UPCGSettings** DefaultNodeSettings);
		class UPCGNode* AddNodeInstance(class UPCGSettings* InSettings);
		class UPCGNode* AddNodeCopy(class UPCGSettings* InSettings, class UPCGSettings** DefaultNodeSettings);
		class UPCGNode* AddEdge(class UPCGNode* From, const class FName& FromPinLabel, class UPCGNode* To, const class FName& ToPinLabel);
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGGraphInstance
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UPCGGraphInstance : public UPCGGraphInterface
	{
	public:
		class UPCGGraphInterface*                                  Graph;                                                   // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPCGOverrideInstancedPropertyBag                    ParametersOverrides;                                     // 0x0030(0x0060) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGGraphInputOutputSettings
	 * Size -> 0x00A8 (FullSize[0x01F0] - InheritedSize[0x0148])
	 */
	class UPCGGraphInputOutputSettings : public UPCGSettings
	{
	public:
		unsigned char                                              PinLabels[0x50];                                         // 0x0148(0x0050) UNKNOWN PROPERTY: SetProperty
		TArray<struct FPCGPinProperties>                           CustomPins;                                              // 0x0198(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XJFC[0x48];                                  // 0x01A8(0x0048) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGManagedResource
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UPCGManagedResource : public UObject
	{
	public:
		struct FPCGCrc                                             Crc;                                                     // 0x0028(0x0008) Edit, EditConst, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bIsMarkedUnused;                                         // 0x0030(0x0001) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OB9W[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGManagedActors
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class UPCGManagedActors : public UPCGManagedResource
	{
	public:
		unsigned char                                              GeneratedActors[0x50];                                   // 0x0038(0x0050) UNKNOWN PROPERTY: SetProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGManagedComponent
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UPCGManagedComponent : public UPCGManagedResource
	{
	public:
		unsigned char                                              GeneratedComponent[0x30];                                // 0x0038(0x0030) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGManagedISMComponent
	 * Size -> 0x01C0 (FullSize[0x0228] - InheritedSize[0x0068])
	 */
	class UPCGManagedISMComponent : public UPCGManagedComponent
	{
	public:
		bool                                                       bHasDescriptor;                                          // 0x0068(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4167[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FISMComponentDescriptor                             Descriptor;                                              // 0x0070(0x01A8) Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		uint64_t                                                   SettingsUID;                                             // 0x0218(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4XYV[0x8];                                   // 0x0220(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGParamData
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	class UPCGParamData : public UPCGData
	{
	public:
		class UPCGMetadata*                                        MetaData;                                                // 0x0038(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, int64_t>                                 NameMap;                                                 // 0x0040(0x0050) Protected, NativeAccessSpecifierProtected

	public:
		class UPCGMetadata* MutableMetadata();
		int64_t FindOrAddMetadataKey(const class FName& InName);
		int64_t FindMetadataKey(const class FName& InName);
		class UPCGParamData* FilterParamsByName(const class FName& InName);
		class UPCGParamData* FilterParamsByKey(int64_t InKey);
		class UPCGMetadata* ConstMetadata();
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGPin
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UPCGPin : public UObject
	{
	public:
		class UPCGNode*                                            Node;                                                    // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Label;                                                   // 0x0030(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPCGEdge*>                                    Edges;                                                   // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, TextExportTransient, UObjectWrapper, NativeAccessSpecifierPublic
		struct FPCGPinProperties                                   Properties;                                              // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic

	public:
		void SetToolTip(const class FText& InTooltip);
		class FText GetTooltip();
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGSettingsInstance
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UPCGSettingsInstance : public UPCGSettingsInterface
	{
	public:
		class UPCGSettings*                                        Settings;                                                // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGTrivialSettings
	 * Size -> 0x0000 (FullSize[0x0148] - InheritedSize[0x0148])
	 */
	class UPCGTrivialSettings : public UPCGSettings
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGSubgraphSettings
	 * Size -> 0x0008 (FullSize[0x0150] - InheritedSize[0x0148])
	 */
	class UPCGSubgraphSettings : public UPCGBaseSubgraphSettings
	{
	public:
		class UPCGGraphInstance*                                   SubgraphInstance;                                        // 0x0148(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGSubgraphNode
	 * Size -> 0x0000 (FullSize[0x0090] - InheritedSize[0x0090])
	 */
	class UPCGSubgraphNode : public UPCGBaseSubgraphNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGSubsystem
	 * Size -> 0x0480 (FullSize[0x04C0] - InheritedSize[0x0040])
	 */
	class UPCGSubsystem : public UTickableWorldSubsystem
	{
	public:
		unsigned char                                              UnknownData_3ZAI[0x480];                                 // 0x0040(0x0480) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGVolume
	 * Size -> 0x0008 (FullSize[0x0510] - InheritedSize[0x0508])
	 */
	class APCGVolume : public AVolume
	{
	public:
		class UPCGComponent*                                       PCGComponent;                                            // 0x0508(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGWorldActor
	 * Size -> 0x0018 (FullSize[0x04D0] - InheritedSize[0x04B8])
	 */
	class APCGWorldActor : public AActor
	{
	public:
		uint32_t                                                   PartitionGridSize;                                       // 0x04B8(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OUTL[0x4];                                   // 0x04BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPCGLandscapeCache*                                  LandscapeCacheObject;                                    // 0x04C0(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUse2DGrid;                                              // 0x04C8(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1BFJ[0x7];                                   // 0x04C9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGDeterminismTestBlueprintBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPCGDeterminismTestBlueprintBase : public UObject
	{
	public:
		void ExecuteTest(class UPCGNode* InPCGNode, struct FDeterminismTestResult* InOutTestResult);
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGUnitTestDummyActor
	 * Size -> 0x0188 (FullSize[0x0640] - InheritedSize[0x04B8])
	 */
	class APCGUnitTestDummyActor : public AActor
	{
	public:
		int32_t                                                    IntProperty;                                             // 0x04B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatProperty;                                           // 0x04BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    Int64Property;                                           // 0x04C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     DoubleProperty;                                          // 0x04C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BoolProperty;                                            // 0x04D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_THN7[0x3];                                   // 0x04D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                NameProperty;                                            // 0x04D4(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J6EI[0x4];                                   // 0x04DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StringProperty;                                          // 0x04E0(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPCGUnitTestDummyEnum                                      EnumProperty;                                            // 0x04F0(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7UMH[0x7];                                   // 0x04F1(0x0007) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FVector                                             VectorProperty;                                          // 0x04F8(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            Vector4Property;                                         // 0x0510(0x0020) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          TransformProperty;                                       // 0x0530(0x0060) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RotatorProperty;                                         // 0x0590(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FYB1[0x8];                                   // 0x05A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               QuatProperty;                                            // 0x05B0(0x0020) IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     SoftObjectPathProperty;                                  // 0x05D0(0x0020) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftClassPath                                      SoftClassPathProperty;                                   // 0x05F0(0x0020) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ClassProperty;                                           // 0x0610(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             ObjectProperty;                                          // 0x0618(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Vector2Property;                                         // 0x0620(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              ColorProperty;                                           // 0x0630(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QLOJ[0xC];                                   // 0x0634(0x000C) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class PCG.PCGUnitTestDummyComponent
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UPCGUnitTestDummyComponent : public UActorComponent
	{
	public:
		int32_t                                                    IntProperty;                                             // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N2ZQ[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
