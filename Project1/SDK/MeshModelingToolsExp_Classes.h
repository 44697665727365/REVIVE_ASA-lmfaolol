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
	 * Class MeshModelingToolsExp.BakeInputMeshProperties
	 * Size -> 0x0098 (FullSize[0x0140] - InheritedSize[0x00A8])
	 */
	class UBakeInputMeshProperties : public UInteractiveToolPropertySet
	{
	public:
		class UStaticMesh*                                         TargetStaticMesh;                                        // 0x00A8(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       TargetSkeletalMesh;                                      // 0x00B0(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              TargetDynamicMesh;                                       // 0x00B8(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TargetUVLayer;                                           // 0x00C0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasTargetUVLayer;                                       // 0x00D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RCT4[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         SourceStaticMesh;                                        // 0x00D8(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       SourceSkeletalMesh;                                      // 0x00E0(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              SourceDynamicMesh;                                       // 0x00E8(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHideSourceMesh;                                         // 0x00F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1TFK[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          SourceNormalMap;                                         // 0x00F8(0x0008) Edit, ZeroConstructor, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SourceNormalMapUVLayer;                                  // 0x0100(0x0010) Edit, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBakeNormalSpace                                           SourceNormalSpace;                                       // 0x0110(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5EB1[0x3];                                   // 0x0111(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bHasSourceNormalMap;                                     // 0x0114(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IKWO[0x3];                                   // 0x0115(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ProjectionDistance;                                      // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bProjectionInWorldSpace;                                 // 0x011C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PPRX[0x3];                                   // 0x011D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      TargetUVLayerNamesList;                                  // 0x0120(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      SourceUVLayerNamesList;                                  // 0x0130(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		TArray<class FString> GetTargetUVLayerNamesFunc();
		TArray<class FString> GetSourceUVLayerNamesFunc();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.BakeNormalMapToolProperties
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UBakeNormalMapToolProperties : public UInteractiveToolPropertySet
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.BakeOcclusionMapToolProperties
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UBakeOcclusionMapToolProperties : public UInteractiveToolPropertySet
	{
	public:
		int32_t                                                    OcclusionRays;                                           // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDistance;                                             // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpreadAngle;                                             // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BiasAngle;                                               // 0x00B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.BakeCurvatureMapToolProperties
	 * Size -> 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
	 */
	class UBakeCurvatureMapToolProperties : public UInteractiveToolPropertySet
	{
	public:
		EBakeCurvatureTypeMode                                     CurvatureType;                                           // 0x00A8(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WSF7[0x3];                                   // 0x00A9(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EBakeCurvatureColorMode                                    ColorMapping;                                            // 0x00AC(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UB8G[0x3];                                   // 0x00AD(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      ColorRangeMultiplier;                                    // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRangeMultiplier;                                      // 0x00B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBakeCurvatureClampMode                                    Clamping;                                                // 0x00B8(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EWE3[0x3];                                   // 0x00B9(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_KSTC[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.BakeTexture2DProperties
	 * Size -> 0x0028 (FullSize[0x00D0] - InheritedSize[0x00A8])
	 */
	class UBakeTexture2DProperties : public UInteractiveToolPropertySet
	{
	public:
		class UTexture2D*                                          SourceTexture;                                           // 0x00A8(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UVLayer;                                                 // 0x00B0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      UVLayerNamesList;                                        // 0x00C0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		TArray<class FString> GetUVLayerNamesFunc();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.BakeMultiTexture2DProperties
	 * Size -> 0x0040 (FullSize[0x00E8] - InheritedSize[0x00A8])
	 */
	class UBakeMultiTexture2DProperties : public UInteractiveToolPropertySet
	{
	public:
		TArray<class UTexture2D*>                                  MaterialIDSourceTextures;                                // 0x00A8(0x0010) Edit, EditFixedSize, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		class FString                                              UVLayer;                                                 // 0x00B8(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      UVLayerNamesList;                                        // 0x00C8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UTexture2D*>                                  AllSourceTextures;                                       // 0x00D8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, UObjectWrapper, NativeAccessSpecifierPublic

	public:
		TArray<class FString> GetUVLayerNamesFunc();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.BakeVisualizationProperties
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UBakeVisualizationProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bPreviewAsMaterial;                                      // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6JTT[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Brightness;                                              // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AOMultiplier;                                            // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QW04[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.ExtrudeMeshSelectionToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UExtrudeMeshSelectionToolBuilder : public USingleTargetWithSelectionToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.ExtrudeMeshSelectionToolProperties
	 * Size -> 0x0048 (FullSize[0x00F0] - InheritedSize[0x00A8])
	 */
	class UExtrudeMeshSelectionToolProperties : public UInteractiveToolPropertySet
	{
	public:
		EExtrudeMeshSelectionInteractionMode                       InputMode;                                               // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MDQN[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     ExtrudeDistance;                                         // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EExtrudeMeshSelectionRegionModifierMode                    RegionMode;                                              // 0x00B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZIQW[0x3];                                   // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumSubdivisions;                                         // 0x00BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     CreaseAngle;                                             // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     RaycastMaxDistance;                                      // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShellsToSolids;                                         // 0x00D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInferGroupsFromNbrs;                                    // 0x00D1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGroupPerSubdivision;                                    // 0x00D2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplaceSelectionGroups;                                 // 0x00D3(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QCTJ[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     UVScale;                                                 // 0x00D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUVIslandPerGroup;                                       // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInferMaterialID;                                        // 0x00E1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JSP4[0x2];                                   // 0x00E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SetMaterialID;                                           // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowInputMaterials;                                     // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S201[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.ExtrudeMeshSelectionTool
	 * Size -> 0x0748 (FullSize[0x0858] - InheritedSize[0x0110])
	 */
	class UExtrudeMeshSelectionTool : public USingleTargetWithSelectionTool
	{
	public:
		class UExtrudeMeshSelectionToolProperties*                 ExtrudeProperties;                                       // 0x0110(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I48B[0x720];                                 // 0x0118(0x0720) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPreviewMesh*                                        SourcePreview;                                           // 0x0838(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMeshOpPreviewWithBackgroundCompute*                 EditCompute;                                             // 0x0840(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCombinedTransformGizmo*                             TransformGizmo;                                          // 0x0848(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTransformProxy*                                     TransformProxy;                                          // 0x0850(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MeshSculptBrushOpProps
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UMeshSculptBrushOpProps : public UInteractiveToolPropertySet
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.BaseKelvinletBrushOpProps
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UBaseKelvinletBrushOpProps : public UMeshSculptBrushOpProps
	{
	public:
		float                                                      Stiffness;                                               // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Incompressiblity;                                        // 0x00AC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BrushSteps;                                              // 0x00B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QVWC[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.ScaleKelvinletBrushOpProps
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UScaleKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
	{
	public:
		float                                                      Strength;                                                // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x00BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.PullKelvinletBrushOpProps
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
	{
	public:
		float                                                      Falloff;                                                 // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Depth;                                                   // 0x00BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.SharpPullKelvinletBrushOpProps
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class USharpPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
	{
	public:
		float                                                      Falloff;                                                 // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Depth;                                                   // 0x00BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.TwistKelvinletBrushOpProps
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UTwistKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
	{
	public:
		float                                                      Strength;                                                // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x00BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.GroupEraseBrushOpProps
	 * Size -> 0x0048 (FullSize[0x00F0] - InheritedSize[0x00A8])
	 */
	class UGroupEraseBrushOpProps : public UMeshSculptBrushOpProps
	{
	public:
		int32_t                                                    Group;                                                   // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyEraseCurrent;                                       // 0x00AC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2TXW[0x43];                                  // 0x00AD(0x0043) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.GroupPaintBrushOpProps
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UGroupPaintBrushOpProps : public UMeshSculptBrushOpProps
	{
	public:
		int32_t                                                    Group;                                                   // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyPaintUngrouped;                                     // 0x00AC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6CP8[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.InflateBrushOpProps
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UInflateBrushOpProps : public UMeshSculptBrushOpProps
	{
	public:
		float                                                      Strength;                                                // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MoveBrushOpProps
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UMoveBrushOpProps : public UMeshSculptBrushOpProps
	{
	public:
		float                                                      Strength;                                                // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Depth;                                                   // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FModelingToolsAxisFilter                            AxisFilters;                                             // 0x00B4(0x0003) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VCVL[0x1];                                   // 0x00B7(0x0001) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.PinchBrushOpProps
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UPinchBrushOpProps : public UMeshSculptBrushOpProps
	{
	public:
		float                                                      Strength;                                                // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Depth;                                                   // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPerpDamping;                                            // 0x00B4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T8FG[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.BasePlaneBrushOpProps
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UBasePlaneBrushOpProps : public UMeshSculptBrushOpProps
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.PlaneBrushOpProps
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UPlaneBrushOpProps : public UBasePlaneBrushOpProps
	{
	public:
		float                                                      Strength;                                                // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Depth;                                                   // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlaneBrushSideMode                                        WhichSide;                                               // 0x00B4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MJKA[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.ViewAlignedPlaneBrushOpProps
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UViewAlignedPlaneBrushOpProps : public UBasePlaneBrushOpProps
	{
	public:
		float                                                      Strength;                                                // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Depth;                                                   // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlaneBrushSideMode                                        WhichSide;                                               // 0x00B4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_70PO[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.FixedPlaneBrushOpProps
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UFixedPlaneBrushOpProps : public UBasePlaneBrushOpProps
	{
	public:
		float                                                      Strength;                                                // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Depth;                                                   // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlaneBrushSideMode                                        WhichSide;                                               // 0x00B4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PB2T[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.StandardSculptBrushOpProps
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UStandardSculptBrushOpProps : public UMeshSculptBrushOpProps
	{
	public:
		float                                                      Strength;                                                // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.ViewAlignedSculptBrushOpProps
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UViewAlignedSculptBrushOpProps : public UMeshSculptBrushOpProps
	{
	public:
		float                                                      Strength;                                                // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.SculptMaxBrushOpProps
	 * Size -> 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
	 */
	class USculptMaxBrushOpProps : public UMeshSculptBrushOpProps
	{
	public:
		float                                                      Strength;                                                // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHeight;                                               // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseFixedHeight;                                         // 0x00B4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZISD[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FixedHeight;                                             // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_THWM[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.BaseSmoothBrushOpProps
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UBaseSmoothBrushOpProps : public UMeshSculptBrushOpProps
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.SmoothBrushOpProps
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class USmoothBrushOpProps : public UBaseSmoothBrushOpProps
	{
	public:
		float                                                      Strength;                                                // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreserveUVFlow;                                         // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FDVT[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.SecondarySmoothBrushOpProps
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class USecondarySmoothBrushOpProps : public UBaseSmoothBrushOpProps
	{
	public:
		float                                                      Strength;                                                // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreserveUVFlow;                                         // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M2D1[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.SmoothFillBrushOpProps
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class USmoothFillBrushOpProps : public UBaseSmoothBrushOpProps
	{
	public:
		float                                                      Strength;                                                // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreserveUVFlow;                                         // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C675[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.FlattenBrushOpProps
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UFlattenBrushOpProps : public UMeshSculptBrushOpProps
	{
	public:
		float                                                      Strength;                                                // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Depth;                                                   // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlaneBrushSideMode                                        WhichSide;                                               // 0x00B4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TIT2[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.EraseBrushOpProps
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UEraseBrushOpProps : public UMeshSculptBrushOpProps
	{
	public:
		float                                                      Strength;                                                // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Falloff;                                                 // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.OffsetMeshSelectionToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOffsetMeshSelectionToolBuilder : public USingleTargetWithSelectionToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.OffsetMeshSelectionToolProperties
	 * Size -> 0x0038 (FullSize[0x00E0] - InheritedSize[0x00A8])
	 */
	class UOffsetMeshSelectionToolProperties : public UInteractiveToolPropertySet
	{
	public:
		double                                                     OffsetDistance;                                          // 0x00A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOffsetMeshSelectionDirectionMode                          Direction;                                               // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8FCO[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumSubdivisions;                                         // 0x00B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     CreaseAngle;                                             // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShellsToSolids;                                         // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInferGroupsFromNbrs;                                    // 0x00C1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGroupPerSubdivision;                                    // 0x00C2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReplaceSelectionGroups;                                 // 0x00C3(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M33W[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     UVScale;                                                 // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUVIslandPerGroup;                                       // 0x00D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInferMaterialID;                                        // 0x00D1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FL7S[0x2];                                   // 0x00D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SetMaterialID;                                           // 0x00D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowInputMaterials;                                     // 0x00D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DX0D[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.OffsetMeshSelectionTool
	 * Size -> 0x0738 (FullSize[0x0848] - InheritedSize[0x0110])
	 */
	class UOffsetMeshSelectionTool : public USingleTargetWithSelectionTool
	{
	public:
		class UOffsetMeshSelectionToolProperties*                  OffsetProperties;                                        // 0x0110(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_68U0[0x720];                                 // 0x0118(0x0720) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPreviewMesh*                                        SourcePreview;                                           // 0x0838(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMeshOpPreviewWithBackgroundCompute*                 EditCompute;                                             // 0x0840(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.PatternToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPatternToolBuilder : public UMultiSelectionMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.PatternToolSettings
	 * Size -> 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
	 */
	class UPatternToolSettings : public UInteractiveToolPropertySet
	{
	public:
		int32_t                                                    Seed;                                                    // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bProjectElementsDown;                                    // 0x00AC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R1Y1[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ProjectionOffset;                                        // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHideSources;                                            // 0x00B4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRelativeTransforms;                                  // 0x00B5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPatternToolShape                                          Shape;                                                   // 0x00B6(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPatternToolSingleAxis                                     SingleAxis;                                              // 0x00B7(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPatternToolSinglePlane                                    SinglePlane;                                             // 0x00B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_APJ6[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.PatternTool_BoundingBoxSettings
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UPatternTool_BoundingBoxSettings : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bIgnoreTransforms;                                       // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PF7T[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Adjustment;                                              // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVisualize;                                              // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0GMM[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.PatternTool_LinearSettings
	 * Size -> 0x0020 (FullSize[0x00C8] - InheritedSize[0x00A8])
	 */
	class UPatternTool_LinearSettings : public UInteractiveToolPropertySet
	{
	public:
		EPatternToolAxisSpacingMode                                SpacingMode;                                             // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XIBA[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Count;                                                   // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     StepSize;                                                // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     Extent;                                                  // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCentered;                                               // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KWU9[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.PatternTool_GridSettings
	 * Size -> 0x0038 (FullSize[0x00E0] - InheritedSize[0x00A8])
	 */
	class UPatternTool_GridSettings : public UInteractiveToolPropertySet
	{
	public:
		EPatternToolAxisSpacingMode                                SpacingX;                                                // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S36C[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CountX;                                                  // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     StepSizeX;                                               // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     ExtentX;                                                 // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCenteredX;                                              // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPatternToolAxisSpacingMode                                SpacingY;                                                // 0x00C1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3LD8[0x2];                                   // 0x00C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CountY;                                                  // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     StepSizeY;                                               // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     ExtentY;                                                 // 0x00D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCenteredY;                                              // 0x00D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_14DT[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.PatternTool_RadialSettings
	 * Size -> 0x0038 (FullSize[0x00E0] - InheritedSize[0x00A8])
	 */
	class UPatternTool_RadialSettings : public UInteractiveToolPropertySet
	{
	public:
		EPatternToolAxisSpacingMode                                SpacingMode;                                             // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W9U8[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Count;                                                   // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     StepSize;                                                // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     Radius;                                                  // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     StartAngle;                                              // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     EndAngle;                                                // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     AngleShift;                                              // 0x00D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOriented;                                               // 0x00D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PSPT[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.PatternTool_RotationSettings
	 * Size -> 0x0050 (FullSize[0x00F8] - InheritedSize[0x00A8])
	 */
	class UPatternTool_RotationSettings : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bInterpolate;                                            // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bJitter;                                                 // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LHIM[0x6];                                   // 0x00AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            StartRotation;                                           // 0x00B0(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            EndRotation;                                             // 0x00C8(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            Jitter;                                                  // 0x00E0(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.PatternTool_TranslationSettings
	 * Size -> 0x0050 (FullSize[0x00F8] - InheritedSize[0x00A8])
	 */
	class UPatternTool_TranslationSettings : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bInterpolate;                                            // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bJitter;                                                 // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LNED[0x6];                                   // 0x00AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             StartTranslation;                                        // 0x00B0(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             EndTranslation;                                          // 0x00C8(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Jitter;                                                  // 0x00E0(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.PatternTool_ScaleSettings
	 * Size -> 0x0050 (FullSize[0x00F8] - InheritedSize[0x00A8])
	 */
	class UPatternTool_ScaleSettings : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bProportional;                                           // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInterpolate;                                            // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bJitter;                                                 // 0x00AA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_21PC[0x5];                                   // 0x00AB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             StartScale;                                              // 0x00B0(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             EndScale;                                                // 0x00C8(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Jitter;                                                  // 0x00E0(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.PatternTool_OutputSettings
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UPatternTool_OutputSettings : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bSeparateActors;                                         // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bConvertToDynamic;                                       // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCreateISMCs;                                            // 0x00AA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHaveStaticMeshes;                                       // 0x00AB(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_POMM[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.PatternTool
	 * Size -> 0x03F8 (FullSize[0x04B0] - InheritedSize[0x00B8])
	 */
	class UPatternTool : public UMultiSelectionMeshEditingTool
	{
	public:
		class UPatternToolSettings*                                Settings;                                                // 0x00B8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPatternTool_BoundingBoxSettings*                    BoundingBoxSettings;                                     // 0x00C0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPatternTool_LinearSettings*                         LinearSettings;                                          // 0x00C8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPatternTool_GridSettings*                           GridSettings;                                            // 0x00D0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPatternTool_RadialSettings*                         RadialSettings;                                          // 0x00D8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPatternTool_RotationSettings*                       RotationSettings;                                        // 0x00E0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPatternTool_TranslationSettings*                    TranslationSettings;                                     // 0x00E8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPatternTool_ScaleSettings*                          ScaleSettings;                                           // 0x00F0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ULGD[0x58];                                  // 0x00F8(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPatternTool_OutputSettings*                         OutputSettings;                                          // 0x0150(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z9VH[0x48];                                  // 0x0158(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTransformProxy*                                     PatternGizmoProxy;                                       // 0x01A0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCombinedTransformGizmo*                             PatternGizmo;                                            // 0x01A8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MYHO[0x18];                                  // 0x01B0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDragAlignmentMechanic*                              DragAlignmentMechanic;                                   // 0x01C8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UConstructionPlaneMechanic*                          PlaneMechanic;                                           // 0x01D0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ML89[0x1E0];                                 // 0x01D8(0x01E0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AllComponents[0x50];                                     // 0x03B8(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_FWY4[0xA0];                                  // 0x0408(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPreviewGeometry*                                    PreviewGeometry;                                         // 0x04A8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MeshConstraintProperties
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UMeshConstraintProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bPreserveSharpEdges;                                     // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMeshBoundaryConstraint                                    MeshBoundaryConstraint;                                  // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGroupBoundaryConstraint                                   GroupBoundaryConstraint;                                 // 0x00AA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMaterialBoundaryConstraint                                MaterialBoundaryConstraint;                              // 0x00AB(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventNormalFlips;                                     // 0x00AC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventTinyTriangles;                                   // 0x00AD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L5EY[0x2];                                   // 0x00AE(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.RemeshProperties
	 * Size -> 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
	 */
	class URemeshProperties : public UMeshConstraintProperties
	{
	public:
		float                                                      SmoothingStrength;                                       // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFlips;                                                  // 0x00B4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSplits;                                                 // 0x00B5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCollapses;                                              // 0x00B6(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NDLG[0x1];                                   // 0x00B7(0x0001) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.AddPatchToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAddPatchToolBuilder : public UInteractiveToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.AddPatchToolProperties
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UAddPatchToolProperties : public UInteractiveToolPropertySet
	{
	public:
		float                                                      Width;                                                   // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Rotation;                                                // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Subdivisions;                                            // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Shift;                                                   // 0x00B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.AddPatchTool
	 * Size -> 0x0088 (FullSize[0x0128] - InheritedSize[0x00A0])
	 */
	class UAddPatchTool : public USingleClickTool
	{
	public:
		unsigned char                                              UnknownData_RVF6[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAddPatchToolProperties*                             ShapeSettings;                                           // 0x00A8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNewMeshMaterialProperties*                          MaterialProperties;                                      // 0x00B0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPreviewMesh*                                        PreviewMesh;                                             // 0x00B8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PC7U[0x68];                                  // 0x00C0(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.AlignObjectsToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAlignObjectsToolBuilder : public UMultiSelectionMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.AlignObjectsToolProperties
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UAlignObjectsToolProperties : public UInteractiveToolPropertySet
	{
	public:
		EAlignObjectsAlignTypes                                    AlignType;                                               // 0x00A8(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8TE6[0x3];                                   // 0x00A9(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EAlignObjectsAlignToOptions                                AlignTo;                                                 // 0x00AC(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KPMN[0x3];                                   // 0x00AD(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EAlignObjectsBoxPoint                                      BoxPosition;                                             // 0x00B0(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6TAT[0x3];                                   // 0x00B1(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bAlignX;                                                 // 0x00B4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlignY;                                                 // 0x00B5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlignZ;                                                 // 0x00B6(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I77Q[0x1];                                   // 0x00B7(0x0001) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.AlignObjectsTool
	 * Size -> 0x00A0 (FullSize[0x0158] - InheritedSize[0x00B8])
	 */
	class UAlignObjectsTool : public UMultiSelectionMeshEditingTool
	{
	public:
		unsigned char                                              UnknownData_PFYC[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAlignObjectsToolProperties*                         AlignProps;                                              // 0x00C0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E997[0x90];                                  // 0x00C8(0x0090) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.BakeMeshAttributeMapsToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBakeMeshAttributeMapsToolBuilder : public UMultiSelectionMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.BakeMeshAttributeMapsToolProperties
	 * Size -> 0x0090 (FullSize[0x0138] - InheritedSize[0x00A8])
	 */
	class UBakeMeshAttributeMapsToolProperties : public UInteractiveToolPropertySet
	{
	public:
		int32_t                                                    MapTypes;                                                // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U1JI[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MapPreview;                                              // 0x00B0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBakeTextureResolution                                     Resolution;                                              // 0x00C0(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9207[0x3];                                   // 0x00C1(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EBakeTextureBitDepth                                       BitDepth;                                                // 0x00C4(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NF9E[0x3];                                   // 0x00C5(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EBakeTextureSamplesPerPixel                                SamplesPerPixel;                                         // 0x00C8(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SH58[0x3];                                   // 0x00C9(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_F5MO[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          SampleFilterMask;                                        // 0x00D0(0x0008) Edit, ZeroConstructor, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      MapPreviewNamesList;                                     // 0x00D8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QW2G[0x50];                                  // 0x00E8(0x0050) MISSED OFFSET (PADDING)

	public:
		TArray<class FString> GetMapPreviewNamesFunc();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.BakeMeshAttributeTool
	 * Size -> 0x03D8 (FullSize[0x0490] - InheritedSize[0x00B8])
	 */
	class UBakeMeshAttributeTool : public UMultiSelectionMeshEditingTool
	{
	public:
		unsigned char                                              UnknownData_8MN5[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBakeOcclusionMapToolProperties*                     OcclusionSettings;                                       // 0x00C0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBakeCurvatureMapToolProperties*                     CurvatureSettings;                                       // 0x00C8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBakeTexture2DProperties*                            TextureSettings;                                         // 0x00D0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBakeMultiTexture2DProperties*                       MultiTextureSettings;                                    // 0x00D8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            WorkingPreviewMaterial;                                  // 0x00E0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            ErrorPreviewMaterial;                                    // 0x00E8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZMAI[0x3A0];                                 // 0x00F0(0x03A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.BakeMeshAttributeMapsToolBase
	 * Size -> 0x0170 (FullSize[0x0600] - InheritedSize[0x0490])
	 */
	class UBakeMeshAttributeMapsToolBase : public UBakeMeshAttributeTool
	{
	public:
		class UBakeVisualizationProperties*                        VisualizationProps;                                      // 0x0490(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPreviewMesh*                                        PreviewMesh;                                             // 0x0498(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            PreviewMaterial;                                         // 0x04A0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            BentNormalPreviewMaterial;                               // 0x04A8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PCV0[0x50];                                  // 0x04B0(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EBakeMapType, class UTexture2D*>                      CachedMaps;                                              // 0x0500(0x0050) Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MBGD[0x98];                                  // 0x0550(0x0098) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          EmptyNormalMap;                                          // 0x05E8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          EmptyColorMapBlack;                                      // 0x05F0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          EmptyColorMapWhite;                                      // 0x05F8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.BakeMeshAttributeMapsTool
	 * Size -> 0x0070 (FullSize[0x0670] - InheritedSize[0x0600])
	 */
	class UBakeMeshAttributeMapsTool : public UBakeMeshAttributeMapsToolBase
	{
	public:
		class UBakeInputMeshProperties*                            InputMeshSettings;                                       // 0x0600(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBakeMeshAttributeMapsToolProperties*                Settings;                                                // 0x0608(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBakeMeshAttributeMapsResultToolProperties*          ResultSettings;                                          // 0x0610(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AH1C[0x58];                                  // 0x0618(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.BakeMeshAttributeMapsResultToolProperties
	 * Size -> 0x0050 (FullSize[0x00F8] - InheritedSize[0x00A8])
	 */
	class UBakeMeshAttributeMapsResultToolProperties : public UInteractiveToolPropertySet
	{
	public:
		TMap<EBakeMapType, class UTexture2D*>                      Result;                                                  // 0x00A8(0x0050) Edit, EditConst, UObjectWrapper, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.BakeMeshAttributeVertexToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBakeMeshAttributeVertexToolBuilder : public UMultiSelectionMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.BakeMeshAttributeVertexToolProperties
	 * Size -> 0x0020 (FullSize[0x00C8] - InheritedSize[0x00A8])
	 */
	class UBakeMeshAttributeVertexToolProperties : public UInteractiveToolPropertySet
	{
	public:
		EBakeVertexOutput                                          OutputMode;                                              // 0x00A8(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A35U[0x3];                                   // 0x00A9(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		int32_t                                                    OutputType;                                              // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OutputTypeR;                                             // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OutputTypeG;                                             // 0x00B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OutputTypeB;                                             // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OutputTypeA;                                             // 0x00BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBakeVertexChannel                                         PreviewMode;                                             // 0x00C0(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WOI1[0x3];                                   // 0x00C1(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bSplitAtNormalSeams;                                     // 0x00C4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSplitAtUVSeams;                                         // 0x00C5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_71VG[0x2];                                   // 0x00C6(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.BakeMeshAttributeVertexTool
	 * Size -> 0x0100 (FullSize[0x0590] - InheritedSize[0x0490])
	 */
	class UBakeMeshAttributeVertexTool : public UBakeMeshAttributeTool
	{
	public:
		class UBakeInputMeshProperties*                            InputMeshSettings;                                       // 0x0490(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBakeMeshAttributeVertexToolProperties*              Settings;                                                // 0x0498(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPreviewMesh*                                        PreviewMesh;                                             // 0x04A0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            PreviewMaterial;                                         // 0x04A8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            PreviewAlphaMaterial;                                    // 0x04B0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A3LY[0xD8];                                  // 0x04B8(0x00D8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.BakeMultiMeshAttributeMapsToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBakeMultiMeshAttributeMapsToolBuilder : public UMultiSelectionMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.BakeMultiMeshAttributeMapsToolProperties
	 * Size -> 0x0090 (FullSize[0x0138] - InheritedSize[0x00A8])
	 */
	class UBakeMultiMeshAttributeMapsToolProperties : public UInteractiveToolPropertySet
	{
	public:
		int32_t                                                    MapTypes;                                                // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QNLU[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MapPreview;                                              // 0x00B0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBakeTextureResolution                                     Resolution;                                              // 0x00C0(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N10M[0x3];                                   // 0x00C1(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EBakeTextureBitDepth                                       BitDepth;                                                // 0x00C4(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_24M6[0x3];                                   // 0x00C5(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EBakeTextureSamplesPerPixel                                SamplesPerPixel;                                         // 0x00C8(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RRNB[0x3];                                   // 0x00C9(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_AAGF[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          SampleFilterMask;                                        // 0x00D0(0x0008) Edit, ZeroConstructor, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      MapPreviewNamesList;                                     // 0x00D8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WKIO[0x50];                                  // 0x00E8(0x0050) MISSED OFFSET (PADDING)

	public:
		TArray<class FString> GetMapPreviewNamesFunc();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.BakeMultiMeshInputToolProperties
	 * Size -> 0x0050 (FullSize[0x00F8] - InheritedSize[0x00A8])
	 */
	class UBakeMultiMeshInputToolProperties : public UInteractiveToolPropertySet
	{
	public:
		class UStaticMesh*                                         TargetStaticMesh;                                        // 0x00A8(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       TargetSkeletalMesh;                                      // 0x00B0(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              TargetDynamicMesh;                                       // 0x00B8(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TargetUVLayer;                                           // 0x00C0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FBakeMultiMeshDetailProperties>              SourceMeshes;                                            // 0x00D0(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      ProjectionDistance;                                      // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RO05[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      TargetUVLayerNamesList;                                  // 0x00E8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		TArray<class FString> GetTargetUVLayerNamesFunc();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.BakeMultiMeshAttributeMapsTool
	 * Size -> 0x00B0 (FullSize[0x06B0] - InheritedSize[0x0600])
	 */
	class UBakeMultiMeshAttributeMapsTool : public UBakeMeshAttributeMapsToolBase
	{
	public:
		class UBakeMultiMeshAttributeMapsToolProperties*           Settings;                                                // 0x0600(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBakeMultiMeshInputToolProperties*                   InputMeshSettings;                                       // 0x0608(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBakeMeshAttributeMapsResultToolProperties*          ResultSettings;                                          // 0x0610(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OFIG[0x98];                                  // 0x0618(0x0098) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.BakeRenderCaptureResults
	 * Size -> 0x0048 (FullSize[0x00F0] - InheritedSize[0x00A8])
	 */
	class UBakeRenderCaptureResults : public UInteractiveToolPropertySet
	{
	public:
		class UTexture2D*                                          BaseColorMap;                                            // 0x00A8(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          NormalMap;                                               // 0x00B0(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          PackedMRSMap;                                            // 0x00B8(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          MetallicMap;                                             // 0x00C0(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          RoughnessMap;                                            // 0x00C8(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          SpecularMap;                                             // 0x00D0(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          EmissiveMap;                                             // 0x00D8(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          OpacityMap;                                              // 0x00E0(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          SubsurfaceColorMap;                                      // 0x00E8(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.BakeRenderCaptureToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBakeRenderCaptureToolBuilder : public UMultiSelectionMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.RenderCaptureProperties
	 * Size -> 0x0020 (FullSize[0x00C8] - InheritedSize[0x00A8])
	 */
	class URenderCaptureProperties : public UInteractiveToolPropertySet
	{
	public:
		EBakeTextureResolution                                     Resolution;                                              // 0x00A8(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6ZI0[0x3];                                   // 0x00A9(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bBaseColorMap;                                           // 0x00AC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNormalMap;                                              // 0x00AD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPackedMRSMap;                                           // 0x00AE(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMetallicMap;                                            // 0x00AF(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRoughnessMap;                                           // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpecularMap;                                            // 0x00B1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEmissiveMap;                                            // 0x00B2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOpacityMap;                                             // 0x00B3(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSubsurfaceColorMap;                                     // 0x00B4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAntiAliasing;                                           // 0x00B5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D3RF[0x2];                                   // 0x00B6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CaptureFieldOfView;                                      // 0x00B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NearPlaneDist;                                           // 0x00BC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDeviceDepthMap;                                         // 0x00C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KFT1[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.BakeRenderCaptureToolProperties
	 * Size -> 0x0030 (FullSize[0x00D8] - InheritedSize[0x00A8])
	 */
	class UBakeRenderCaptureToolProperties : public UInteractiveToolPropertySet
	{
	public:
		class FString                                              MapPreview;                                              // 0x00A8(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      MapPreviewNamesList;                                     // 0x00B8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		EBakeTextureSamplesPerPixel                                SamplesPerPixel;                                         // 0x00C8(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_237O[0x3];                                   // 0x00C9(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EBakeTextureResolution                                     TextureSize;                                             // 0x00CC(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MXI8[0x3];                                   // 0x00CD(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      ValidSampleDepthThreshold;                               // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BRNS[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (PADDING)

	public:
		TArray<class FString> GetMapPreviewNamesFunc();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.BakeRenderCaptureInputToolProperties
	 * Size -> 0x0028 (FullSize[0x00D0] - InheritedSize[0x00A8])
	 */
	class UBakeRenderCaptureInputToolProperties : public UInteractiveToolPropertySet
	{
	public:
		class UStaticMesh*                                         TargetStaticMesh;                                        // 0x00A8(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TargetUVLayer;                                           // 0x00B0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      TargetUVLayerNamesList;                                  // 0x00C0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		TArray<class FString> GetTargetUVLayerNamesFunc();
		int32_t GetTargetUVLayerIndex();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.BakeRenderCaptureVisualizationProperties
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UBakeRenderCaptureVisualizationProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bPreviewAsMaterial;                                      // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YN0Z[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Brightness;                                              // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SSBrightness;                                            // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EmissiveScale;                                           // 0x00B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.BakeRenderCaptureTool
	 * Size -> 0x04A8 (FullSize[0x0560] - InheritedSize[0x00B8])
	 */
	class UBakeRenderCaptureTool : public UMultiSelectionMeshEditingTool
	{
	public:
		unsigned char                                              UnknownData_APDQ[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      Actors;                                                  // 0x00C8(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		class UBakeRenderCaptureToolProperties*                    Settings;                                                // 0x00D8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class URenderCaptureProperties*                            RenderCaptureProperties;                                 // 0x00E0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBakeRenderCaptureInputToolProperties*               InputMeshSettings;                                       // 0x00E8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBakeRenderCaptureVisualizationProperties*           VisualizationProps;                                      // 0x00F0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBakeRenderCaptureResults*                           ResultSettings;                                          // 0x00F8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D61U[0x330];                                 // 0x0100(0x0330) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          EmptyNormalMap;                                          // 0x0430(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          EmptyColorMapBlack;                                      // 0x0438(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          EmptyColorMapWhite;                                      // 0x0440(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          EmptyEmissiveMap;                                        // 0x0448(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          EmptyOpacityMap;                                         // 0x0450(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          EmptySubsurfaceColorMap;                                 // 0x0458(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          EmptyPackedMRSMap;                                       // 0x0460(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          EmptyRoughnessMap;                                       // 0x0468(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          EmptyMetallicMap;                                        // 0x0470(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTexture2D*                                          EmptySpecularMap;                                        // 0x0478(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_92XW[0x8];                                   // 0x0480(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            WorkingPreviewMaterial;                                  // 0x0488(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            ErrorPreviewMaterial;                                    // 0x0490(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            PreviewMaterialRC;                                       // 0x0498(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            PreviewMaterialPackedRC;                                 // 0x04A0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            PreviewMaterialRC_Subsurface;                            // 0x04A8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            PreviewMaterialPackedRC_Subsurface;                      // 0x04B0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPreviewMesh*                                        PreviewMesh;                                             // 0x04B8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EYTD[0xA0];                                  // 0x04C0(0x00A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.BakeTransformToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBakeTransformToolBuilder : public UMultiSelectionMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.BakeTransformToolProperties
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UBakeTransformToolProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bBakeRotation;                                           // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBakeScaleMethod                                           BakeScale;                                               // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecenterPivot;                                          // 0x00AA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowNoScale;                                           // 0x00AB(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RUCJ[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.BakeTransformTool
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UBakeTransformTool : public UMultiSelectionMeshEditingTool
	{
	public:
		class UBakeTransformToolProperties*                        BasicProperties;                                         // 0x00B8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_M083[0x10];                                  // 0x00C0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.ConvertMeshesToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UConvertMeshesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.ConvertMeshesToolProperties
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UConvertMeshesToolProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bTransferMaterials;                                      // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowTransferMaterials;                                  // 0x00A9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4H6I[0x6];                                   // 0x00AA(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.ConvertMeshesTool
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UConvertMeshesTool : public UMultiSelectionMeshEditingTool
	{
	public:
		unsigned char                                              UnknownData_U0EZ[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UConvertMeshesToolProperties*                        BasicProperties;                                         // 0x00C0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCreateMeshObjectTypeProperties*                     OutputTypeProperties;                                    // 0x00C8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.ConvertToPolygonsToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UConvertToPolygonsToolBuilder : public USingleSelectionMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.ConvertToPolygonsToolProperties
	 * Size -> 0x0030 (FullSize[0x00D8] - InheritedSize[0x00A8])
	 */
	class UConvertToPolygonsToolProperties : public UInteractiveToolPropertySet
	{
	public:
		EConvertToPolygonsMode                                     ConversionMode;                                          // 0x00A8(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TKAX[0x3];                                   // 0x00A9(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      AngleTolerance;                                          // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumPoints;                                               // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSplitExisting;                                          // 0x00B4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNormalWeighted;                                         // 0x00B5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3TQQ[0x2];                                   // 0x00B6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NormalWeighting;                                         // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      QuadAdjacencyWeight;                                     // 0x00BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      QuadMetricClamp;                                         // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    QuadSearchRounds;                                        // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRespectUVSeams;                                         // 0x00C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRespectHardNormals;                                     // 0x00C9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PQBF[0x2];                                   // 0x00CA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinGroupSize;                                            // 0x00CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCalculateNormals;                                       // 0x00D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowGroupColors;                                        // 0x00D1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M4IF[0x6];                                   // 0x00D2(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.OutputPolygroupLayerProperties
	 * Size -> 0x0030 (FullSize[0x00D8] - InheritedSize[0x00A8])
	 */
	class UOutputPolygroupLayerProperties : public UInteractiveToolPropertySet
	{
	public:
		class FName                                                GroupLayer;                                              // 0x00A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      OptionsList;                                             // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bShowNewLayerName;                                       // 0x00C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KRID[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              NewLayerName;                                            // 0x00C8(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		TArray<class FString> GetGroupOptionsList();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.ConvertToPolygonsOperatorFactory
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UConvertToPolygonsOperatorFactory : public UObject
	{
	public:
		unsigned char                                              UnknownData_A2H6[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UConvertToPolygonsTool*                              ConvertToPolygonsTool;                                   // 0x0030(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.ConvertToPolygonsTool
	 * Size -> 0x0058 (FullSize[0x0110] - InheritedSize[0x00B8])
	 */
	class UConvertToPolygonsTool : public USingleSelectionMeshEditingTool
	{
	public:
		class UConvertToPolygonsToolProperties*                    Settings;                                                // 0x00B8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPolygroupLayersProperties*                          CopyFromLayerProperties;                                 // 0x00C0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UOutputPolygroupLayerProperties*                     OutputProperties;                                        // 0x00C8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMeshOpPreviewWithBackgroundCompute*                 PreviewCompute;                                          // 0x00D0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPreviewGeometry*                                    PreviewGeometry;                                         // 0x00D8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZB8I[0x30];                                  // 0x00E0(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.CubeGridToolBuilder
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UCubeGridToolBuilder : public UInteractiveToolWithToolTargetsBuilder
	{
	public:
		unsigned char                                              UnknownData_ICQH[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.CubeGridToolProperties
	 * Size -> 0x0100 (FullSize[0x01A8] - InheritedSize[0x00A8])
	 */
	class UCubeGridToolProperties : public UInteractiveToolPropertySet
	{
	public:
		struct FVector                                             GridFrameOrigin;                                         // 0x00A8(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            GridFrameOrientation;                                    // 0x00C0(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bShowGizmo;                                              // 0x00D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_27GA[0xF];                                   // 0x00D9(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              GridPower;                                               // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IB5Q[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CurrentBlockSize;                                        // 0x00F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BlocksPerStep;                                           // 0x00F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPowerOfTwoBlockSizes;                                   // 0x00FC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D575[0x3];                                   // 0x00FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     BlockBaseSize;                                           // 0x0100(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCrosswiseDiagonal;                                      // 0x0108(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bKeepSideGroups;                                         // 0x0109(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AZH9[0x6];                                   // 0x010A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     PlaneTolerance;                                          // 0x0110(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHitUnrelatedGeometry;                                   // 0x0118(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHitGridGroundPlaneIfCloser;                             // 0x0119(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U0B4[0x2];                                   // 0x011A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ECubeGridToolFaceSelectionMode                             FaceSelectionMode;                                       // 0x011C(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JWKW[0x3];                                   // 0x011D(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class FString                                              ToggleCornerMode;                                        // 0x0120(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PushPull;                                                // 0x0130(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ResizeGrid;                                              // 0x0140(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SlideSelection;                                          // 0x0150(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FlipSelection;                                           // 0x0160(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GridGizmo;                                               // 0x0170(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              QuickShiftGizmo;                                         // 0x0180(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AlignGizmo;                                              // 0x0190(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInCornerMode;                                           // 0x01A0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowedToEditGrid;                                      // 0x01A1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZNCV[0x6];                                   // 0x01A2(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.CubeGridToolActions
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UCubeGridToolActions : public UInteractiveToolPropertySet
	{
	public:
		unsigned char                                              UnknownData_GT4Q[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              GridSourceActor;                                         // 0x00B0(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SlideForward();
		void SlideBack();
		void ResetGridFromActor();
		void Push();
		void Pull();
		void Flip();
		void CornerMode();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.CubeGridDuringActivityActions
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UCubeGridDuringActivityActions : public UInteractiveToolPropertySet
	{
	public:
		unsigned char                                              UnknownData_9MBB[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	public:
		void Done();
		void Cancel();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.CubeGridTool
	 * Size -> 0x0588 (FullSize[0x0620] - InheritedSize[0x0098])
	 */
	class UCubeGridTool : public UInteractiveTool
	{
	public:
		unsigned char                                              UnknownData_9K4P[0x28];                                  // 0x0098(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCombinedTransformGizmo*                             GridGizmo;                                               // 0x00C0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDragAlignmentMechanic*                              GridGizmoAlignmentMechanic;                              // 0x00C8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTransformProxy*                                     GridGizmoTransformProxy;                                 // 0x00D0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPreviewGeometry*                                    LineSets;                                                // 0x00D8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClickDragInputBehavior*                             ClickDragBehavior;                                       // 0x00E0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMouseHoverBehavior*                                 HoverBehavior;                                           // 0x00E8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULocalSingleClickInputBehavior*                      CtrlMiddleClickBehavior;                                 // 0x00F0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULocalClickDragInputBehavior*                        MiddleClickDragBehavior;                                 // 0x00F8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCubeGridToolProperties*                             Settings;                                                // 0x0100(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCubeGridToolActions*                                ToolActions;                                             // 0x0108(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCubeGridDuringActivityActions*                      DuringActivityActions;                                   // 0x0110(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNewMeshMaterialProperties*                          MaterialProperties;                                      // 0x0118(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCreateMeshObjectTypeProperties*                     OutputTypeProperties;                                    // 0x0120(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UToolTarget*                                         Target;                                                  // 0x0128(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_O8PQ[0x180];                                 // 0x0130(0x0180) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMeshOpPreviewWithBackgroundCompute*                 Preview;                                                 // 0x02B0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A1IX[0x368];                                 // 0x02B8(0x0368) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.DeformMeshPolygonsToolBuilder
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDeformMeshPolygonsToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.DeformMeshPolygonsTransformProperties
	 * Size -> 0x0020 (FullSize[0x00C8] - InheritedSize[0x00A8])
	 */
	class UDeformMeshPolygonsTransformProperties : public UInteractiveToolPropertySet
	{
	public:
		EGroupTopologyDeformationStrategy                          DeformationStrategy;                                     // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EQuickTransformerMode                                      TransformMode;                                           // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSelectFaces;                                            // 0x00AA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSelectEdges;                                            // 0x00AB(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSelectVertices;                                         // 0x00AC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowWireframe;                                          // 0x00AD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FHZ0[0x2];                                   // 0x00AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EWeightScheme                                              SelectedWeightScheme;                                    // 0x00B0(0x0001) ELEMENT_SIZE_MISMATCH ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LD06[0x3];                                   // 0x00B1(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_G5AG[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     HandleWeight;                                            // 0x00B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPostFixHandles;                                         // 0x00C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B7OK[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.DeformMeshPolygonsTool
	 * Size -> 0x1710 (FullSize[0x1810] - InheritedSize[0x0100])
	 */
	class UDeformMeshPolygonsTool : public UMeshSurfacePointTool
	{
	public:
		unsigned char                                              UnknownData_02QF[0x8];                                   // 0x0100(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AInternalToolFrameworkActor*                         PreviewMeshActor;                                        // 0x0108(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDynamicMeshComponent*                               DynamicMeshComponent;                                    // 0x0110(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDeformMeshPolygonsTransformProperties*              TransformProps;                                          // 0x0118(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TFE3[0x16F0];                                // 0x0120(0x16F0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.DisplaceMeshCommonProperties
	 * Size -> 0x0038 (FullSize[0x00E0] - InheritedSize[0x00A8])
	 */
	class UDisplaceMeshCommonProperties : public UInteractiveToolPropertySet
	{
	public:
		EDisplaceMeshToolDisplaceType                              DisplacementType;                                        // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FWP4[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DisplaceIntensity;                                       // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RandomSeed;                                              // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDisplaceMeshToolSubdivisionType                           SubdivisionType;                                         // 0x00B4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YZQI[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Subdivisions;                                            // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                WeightMap;                                               // 0x00BC(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XI6N[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      WeightMapsList;                                          // 0x00C8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bInvertWeightMap;                                        // 0x00D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowWireframe;                                          // 0x00D9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableSizeWarning;                                     // 0x00DA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H3GO[0x5];                                   // 0x00DB(0x0005) MISSED OFFSET (PADDING)

	public:
		TArray<class FString> GetWeightMapsFunc();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.SelectiveTessellationProperties
	 * Size -> 0x0020 (FullSize[0x00C8] - InheritedSize[0x00A8])
	 */
	class USelectiveTessellationProperties : public UInteractiveToolPropertySet
	{
	public:
		EDisplaceMeshToolTriangleSelectionType                     SelectionType;                                           // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CU30[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ActiveMaterial;                                          // 0x00AC(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X53P[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      MaterialIDList;                                          // 0x00B8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		TArray<class FString> GetMaterialIDsFunc();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.DisplaceMeshTextureMapProperties
	 * Size -> 0x0048 (FullSize[0x00F0] - InheritedSize[0x00A8])
	 */
	class UDisplaceMeshTextureMapProperties : public UInteractiveToolPropertySet
	{
	public:
		class UTexture2D*                                          DisplacementMap;                                         // 0x00A8(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDisplaceMeshToolChannelType                               Channel;                                                 // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N2KP[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DisplacementMapBaseValue;                                // 0x00B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UVScale;                                                 // 0x00B8(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           UVOffset;                                                // 0x00C8(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyAdjustmentCurve;                                   // 0x00D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G367[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         AdjustmentCurve;                                         // 0x00E0(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRecalcNormals;                                          // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_15J3[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.DisplaceMeshDirectionalFilterProperties
	 * Size -> 0x0028 (FullSize[0x00D0] - InheritedSize[0x00A8])
	 */
	class UDisplaceMeshDirectionalFilterProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bEnableFilter;                                           // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8EDG[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             FilterDirection;                                         // 0x00B0(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FilterWidth;                                             // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TFJ6[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.DisplaceMeshPerlinNoiseProperties
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UDisplaceMeshPerlinNoiseProperties : public UInteractiveToolPropertySet
	{
	public:
		TArray<struct FPerlinLayerProperties>                      PerlinLayerProperties;                                   // 0x00A8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.DisplaceMeshSineWaveProperties
	 * Size -> 0x0020 (FullSize[0x00C8] - InheritedSize[0x00A8])
	 */
	class UDisplaceMeshSineWaveProperties : public UInteractiveToolPropertySet
	{
	public:
		float                                                      SineWaveFrequency;                                       // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SineWavePhaseShift;                                      // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SineWaveDirection;                                       // 0x00B0(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.DisplaceMeshToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDisplaceMeshToolBuilder : public USingleSelectionMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.DisplaceMeshTool
	 * Size -> 0x03A8 (FullSize[0x0460] - InheritedSize[0x00B8])
	 */
	class UDisplaceMeshTool : public USingleSelectionMeshEditingTool
	{
	public:
		class UDisplaceMeshCommonProperties*                       CommonProperties;                                        // 0x00B8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDisplaceMeshDirectionalFilterProperties*            DirectionalFilterProperties;                             // 0x00C0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDisplaceMeshTextureMapProperties*                   TextureMapProperties;                                    // 0x00C8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDisplaceMeshPerlinNoiseProperties*                  NoiseProperties;                                         // 0x00D0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDisplaceMeshSineWaveProperties*                     SineWaveProperties;                                      // 0x00D8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USelectiveTessellationProperties*                    SelectiveTessellationProperties;                         // 0x00E0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         ActiveContrastCurveTarget;                               // 0x00E8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L5YG[0x340];                                 // 0x00F0(0x0340) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AInternalToolFrameworkActor*                         PreviewMeshActor;                                        // 0x0430(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDynamicMeshComponent*                               DynamicMeshComponent;                                    // 0x0438(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3OUL[0x20];                                  // 0x0440(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.DrawPolyPathToolBuilder
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UDrawPolyPathToolBuilder : public UMeshSurfacePointToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.DrawPolyPathProperties
	 * Size -> 0x0028 (FullSize[0x00D0] - InheritedSize[0x00A8])
	 */
	class UDrawPolyPathProperties : public UInteractiveToolPropertySet
	{
	public:
		EDrawPolyPathWidthMode                                     WidthMode;                                               // 0x00A8(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PNCZ[0x3];                                   // 0x00A9(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      Width;                                                   // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRoundedCorners;                                         // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FO8B[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EDrawPolyPathRadiusMode                                    RadiusMode;                                              // 0x00B4(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UKYD[0x3];                                   // 0x00B5(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      CornerRadius;                                            // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RadialSlices;                                            // 0x00BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSinglePolyGroup;                                        // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J13E[0x3];                                   // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EDrawPolyPathExtrudeMode                                   ExtrudeMode;                                             // 0x00C4(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QZ94[0x3];                                   // 0x00C5(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      ExtrudeHeight;                                           // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RampStartRatio;                                          // 0x00CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.DrawPolyPathExtrudeProperties
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UDrawPolyPathExtrudeProperties : public UInteractiveToolPropertySet
	{
	public:
		EDrawPolyPathExtrudeDirection                              Direction;                                               // 0x00A8(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3JBB[0x3];                                   // 0x00A9(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_HPBG[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.DrawPolyPathTool
	 * Size -> 0x01E8 (FullSize[0x0280] - InheritedSize[0x0098])
	 */
	class UDrawPolyPathTool : public UInteractiveTool
	{
	public:
		unsigned char                                              UnknownData_703R[0x18];                                  // 0x0098(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCreateMeshObjectTypeProperties*                     OutputTypeProperties;                                    // 0x00B0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDrawPolyPathProperties*                             TransformProps;                                          // 0x00B8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDrawPolyPathExtrudeProperties*                      ExtrudeProperties;                                       // 0x00C0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNewMeshMaterialProperties*                          MaterialProperties;                                      // 0x00C8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Y8A4[0xC0];                                  // 0x00D0(0x00C0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UConstructionPlaneMechanic*                          PlaneMechanic;                                           // 0x0190(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8HJ6[0xC0];                                  // 0x0198(0x00C0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPolyEditPreviewMesh*                                EditPreview;                                             // 0x0258(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPlaneDistanceFromHitMechanic*                       ExtrudeHeightMechanic;                                   // 0x0260(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USpatialCurveDistanceMechanic*                       CurveDistMechanic;                                       // 0x0268(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCollectSurfacePathMechanic*                         SurfacePathMechanic;                                     // 0x0270(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TPPV[0x8];                                   // 0x0278(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.DynamicMeshBrushTool
	 * Size -> 0x0040 (FullSize[0x02C8] - InheritedSize[0x0288])
	 */
	class UDynamicMeshBrushTool : public UBaseBrushTool
	{
	public:
		class UPreviewMesh*                                        PreviewMesh;                                             // 0x0288(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8TOH[0x38];                                  // 0x0290(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.DynamicMeshSculptToolBuilder
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UDynamicMeshSculptToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
	{
	public:
		unsigned char                                              UnknownData_GSY9[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.DynamicMeshBrushProperties
	 * Size -> 0x0020 (FullSize[0x00C8] - InheritedSize[0x00A8])
	 */
	class UDynamicMeshBrushProperties : public UInteractiveToolPropertySet
	{
	public:
		struct FBrushToolRadius                                    BrushSize;                                               // 0x00A8(0x0014) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      BrushFalloffAmount;                                      // 0x00BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Depth;                                                   // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHitBackFaces;                                           // 0x00C4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O8G7[0x3];                                   // 0x00C5(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.DynamicMeshBrushSculptProperties
	 * Size -> 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
	 */
	class UDynamicMeshBrushSculptProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bIsRemeshingEnabled;                                     // 0x00A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDynamicMeshSculptBrushType                                PrimaryBrushType;                                        // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SC6H[0x2];                                   // 0x00AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PrimaryBrushSpeed;                                       // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreserveUVFlow;                                         // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFreezeTarget;                                           // 0x00B1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WNHB[0x2];                                   // 0x00B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SmoothBrushSpeed;                                        // 0x00B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDetailPreservingSmooth;                                 // 0x00B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M7ZB[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.DynamicSculptToolActions
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UDynamicSculptToolActions : public UInteractiveToolPropertySet
	{
	public:
		unsigned char                                              UnknownData_RC1K[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	public:
		void DiscardAttributes();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.BrushRemeshProperties
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class UBrushRemeshProperties : public URemeshProperties
	{
	public:
		bool                                                       bEnableRemeshing;                                        // 0x00B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JKLI[0x3];                                   // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TriangleSize;                                            // 0x00BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PreserveDetail;                                          // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Iterations;                                              // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.FixedPlaneBrushProperties
	 * Size -> 0x0048 (FullSize[0x00F0] - InheritedSize[0x00A8])
	 */
	class UFixedPlaneBrushProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bPropertySetEnabled;                                     // 0x00A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowGizmo;                                              // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M3KU[0x6];                                   // 0x00AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             position;                                                // 0x00B0(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CFIZ[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Rotation;                                                // 0x00D0(0x0020) Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.DynamicMeshSculptTool
	 * Size -> 0x0F10 (FullSize[0x1010] - InheritedSize[0x0100])
	 */
	class UDynamicMeshSculptTool : public UMeshSurfacePointTool
	{
	public:
		class UDynamicMeshBrushProperties*                         BrushProperties;                                         // 0x0100(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDynamicMeshBrushSculptProperties*                   SculptProperties;                                        // 0x0108(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USculptMaxBrushProperties*                           SculptMaxBrushProperties;                                // 0x0110(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UKelvinBrushProperties*                              KelvinBrushProperties;                                   // 0x0118(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBrushRemeshProperties*                              RemeshProperties;                                        // 0x0120(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFixedPlaneBrushProperties*                          GizmoProperties;                                         // 0x0128(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMeshEditingViewProperties*                          ViewProperties;                                          // 0x0130(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDynamicSculptToolActions*                           SculptToolActions;                                       // 0x0138(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JKC3[0x60];                                  // 0x0140(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBrushStampIndicator*                                BrushIndicator;                                          // 0x01A0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInstanceDynamic*                            BrushIndicatorMaterial;                                  // 0x01A8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPreviewMesh*                                        BrushIndicatorMesh;                                      // 0x01B0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UOctreeDynamicMeshComponent*                         DynamicMeshComponent;                                    // 0x01B8(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInstanceDynamic*                            ActiveOverrideMaterial;                                  // 0x01C0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7VPF[0xE28];                                 // 0x01C8(0x0E28) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCombinedTransformGizmo*                             PlaneTransformGizmo;                                     // 0x0FF0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTransformProxy*                                     PlaneTransformProxy;                                     // 0x0FF8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BWKS[0x10];                                  // 0x1000(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.EditNormalsToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEditNormalsToolBuilder : public UMultiSelectionMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.EditNormalsToolProperties
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UEditNormalsToolProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bRecomputeNormals;                                       // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ENormalCalculationMethod                                   NormalCalculationMethod;                                 // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFixInconsistentNormals;                                 // 0x00AA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvertNormals;                                          // 0x00AB(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESplitNormalMethod                                         SplitNormalMethod;                                       // 0x00AC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DL8W[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SharpEdgeAngleThreshold;                                 // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowSharpVertices;                                     // 0x00B4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EZ6K[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.EditNormalsAdvancedProperties
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UEditNormalsAdvancedProperties : public UInteractiveToolPropertySet
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.EditNormalsOperatorFactory
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UEditNormalsOperatorFactory : public UObject
	{
	public:
		unsigned char                                              UnknownData_IBMJ[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEditNormalsTool*                                    Tool;                                                    // 0x0030(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A24A[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.EditNormalsTool
	 * Size -> 0x0098 (FullSize[0x0150] - InheritedSize[0x00B8])
	 */
	class UEditNormalsTool : public UMultiSelectionMeshEditingTool
	{
	public:
		class UEditNormalsToolProperties*                          BasicProperties;                                         // 0x00B8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UEditNormalsAdvancedProperties*                      AdvancedProperties;                                      // 0x00C0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPolygroupLayersProperties*                          PolygroupLayerProperties;                                // 0x00C8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UMeshOpPreviewWithBackgroundCompute*>         Previews;                                                // 0x00D0(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MZLJ[0x70];                                  // 0x00E0(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.EditPivotToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEditPivotToolBuilder : public UMultiSelectionMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.EditPivotToolProperties
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UEditPivotToolProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bEnableSnapDragging;                                     // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EEditPivotSnapDragRotationMode                             RotationMode;                                            // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N1TV[0x6];                                   // 0x00AA(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.EditPivotToolActionPropertySet
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UEditPivotToolActionPropertySet : public UInteractiveToolPropertySet
	{
	public:
		unsigned char                                              UnknownData_Q3O3[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUseWorldBox;                                            // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UA09[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (PADDING)

	public:
		void WorldOrigin();
		void Top();
		void Right();
		void Left();
		void Front();
		void Center();
		void Bottom();
		void Back();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.EditPivotTool
	 * Size -> 0x0178 (FullSize[0x0230] - InheritedSize[0x00B8])
	 */
	class UEditPivotTool : public UMultiSelectionMeshEditingTool
	{
	public:
		unsigned char                                              UnknownData_9GYB[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEditPivotToolProperties*                            TransformProps;                                          // 0x00C0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEditPivotToolActionPropertySet*                     EditPivotActions;                                        // 0x00C8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y884[0xD0];                                  // 0x00D0(0x00D0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FEditPivotTarget>                            ActiveGizmos;                                            // 0x01A0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UDragAlignmentMechanic*                              DragAlignmentMechanic;                                   // 0x01B0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2LO8[0x78];                                  // 0x01B8(0x0078) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.EditUVIslandsToolBuilder
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEditUVIslandsToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.EditUVIslandsTool
	 * Size -> 0x03E0 (FullSize[0x04E0] - InheritedSize[0x0100])
	 */
	class UEditUVIslandsTool : public UMeshSurfacePointTool
	{
	public:
		class UExistingMeshMaterialProperties*                     MaterialSettings;                                        // 0x0100(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            CheckerMaterial;                                         // 0x0108(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AInternalToolFrameworkActor*                         PreviewMeshActor;                                        // 0x0110(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDynamicMeshComponent*                               DynamicMeshComponent;                                    // 0x0118(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPolygonSelectionMechanic*                           SelectionMechanic;                                       // 0x0120(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZW4B[0x8];                                   // 0x0128(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCombinedTransformGizmo*                             TransformGizmo;                                          // 0x0130(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTransformProxy*                                     TransformProxy;                                          // 0x0138(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WPGW[0x3A0];                                 // 0x0140(0x03A0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.HoleFillToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UHoleFillToolBuilder : public USingleSelectionMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.SmoothHoleFillProperties
	 * Size -> 0x0028 (FullSize[0x00D0] - InheritedSize[0x00A8])
	 */
	class USmoothHoleFillProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bConstrainToHoleInterior;                                // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BT2A[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RemeshingExteriorRegionWidth;                            // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SmoothingExteriorRegionWidth;                            // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SmoothingInteriorRegionWidth;                            // 0x00B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InteriorSmoothness;                                      // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ON0T[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     FillDensityScalar;                                       // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bProjectDuringRemesh;                                    // 0x00C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DOG5[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.HoleFillToolProperties
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UHoleFillToolProperties : public UInteractiveToolPropertySet
	{
	public:
		EHoleFillOpFillType                                        FillType;                                                // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRemoveIsolatedTriangles;                                // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bQuickFillSmallHoles;                                    // 0x00AA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LP5F[0x5];                                   // 0x00AB(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.HoleFillToolActions
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UHoleFillToolActions : public UInteractiveToolPropertySet
	{
	public:
		unsigned char                                              UnknownData_FP24[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	public:
		void SelectAll();
		void Clear();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.HoleFillStatisticsProperties
	 * Size -> 0x0050 (FullSize[0x00F8] - InheritedSize[0x00A8])
	 */
	class UHoleFillStatisticsProperties : public UInteractiveToolPropertySet
	{
	public:
		class FString                                              InitialHoles;                                            // 0x00A8(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SelectedHoles;                                           // 0x00B8(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SuccessfulFills;                                         // 0x00C8(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FailedFills;                                             // 0x00D8(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RemainingHoles;                                          // 0x00E8(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.HoleFillOperatorFactory
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UHoleFillOperatorFactory : public UObject
	{
	public:
		unsigned char                                              UnknownData_9BEU[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHoleFillTool*                                       FillTool;                                                // 0x0030(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.HoleFillTool
	 * Size -> 0x0188 (FullSize[0x0240] - InheritedSize[0x00B8])
	 */
	class UHoleFillTool : public USingleSelectionMeshEditingTool
	{
	public:
		class USmoothHoleFillProperties*                           SmoothHoleFillProperties;                                // 0x00B8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHoleFillToolProperties*                             Properties;                                              // 0x00C0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHoleFillToolActions*                                Actions;                                                 // 0x00C8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHoleFillStatisticsProperties*                       Statistics;                                              // 0x00D0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMeshOpPreviewWithBackgroundCompute*                 Preview;                                                 // 0x00D8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBoundarySelectionMechanic*                          SelectionMechanic;                                       // 0x00E0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z554[0x158];                                 // 0x00E8(0x0158) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.LatticeDeformerToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULatticeDeformerToolBuilder : public USingleSelectionMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.LatticeDeformerToolProperties
	 * Size -> 0x0028 (FullSize[0x00D0] - InheritedSize[0x00A8])
	 */
	class ULatticeDeformerToolProperties : public UInteractiveToolPropertySet
	{
	public:
		unsigned char                                              UnknownData_8GED[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    XAxisResolution;                                         // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    YAxisResolution;                                         // 0x00B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ZAxisResolution;                                         // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Padding;                                                 // 0x00BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELatticeInterpolationType                                  InterpolationType;                                       // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDeformNormals;                                          // 0x00C1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanChangeResolution;                                    // 0x00C2(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0GIC[0x1];                                   // 0x00C3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EToolContextCoordinateSystem                               GizmoCoordinateSystem;                                   // 0x00C4(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MXT5[0x3];                                   // 0x00C5(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bSetPivotMode;                                           // 0x00C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSoftDeformation;                                        // 0x00C9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y53Y[0x6];                                   // 0x00CA(0x0006) MISSED OFFSET (PADDING)

	public:
		void Constrain();
		void ClearConstraints();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.LatticeDeformerOperatorFactory
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class ULatticeDeformerOperatorFactory : public UObject
	{
	public:
		unsigned char                                              UnknownData_3IEH[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULatticeDeformerTool*                                LatticeDeformerTool;                                     // 0x0030(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.LatticeDeformerTool
	 * Size -> 0x00A8 (FullSize[0x0160] - InheritedSize[0x00B8])
	 */
	class ULatticeDeformerTool : public USingleSelectionMeshEditingTool
	{
	public:
		unsigned char                                              UnknownData_QVZH[0x20];                                  // 0x00B8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULatticeControlPointsMechanic*                       ControlPointsMechanic;                                   // 0x00D8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULatticeDeformerToolProperties*                      Settings;                                                // 0x00E0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMeshOpPreviewWithBackgroundCompute*                 Preview;                                                 // 0x00E8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bLatticeDeformed;                                        // 0x00F0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UFWX[0x6F];                                  // 0x00F1(0x006F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MeshAttributePaintToolBuilder
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	class UMeshAttributePaintToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
	{
	public:
		unsigned char                                              UnknownData_6HVD[0x40];                                  // 0x0030(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MeshAttributePaintBrushOperationProperties
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UMeshAttributePaintBrushOperationProperties : public UInteractiveToolPropertySet
	{
	public:
		EBrushActionMode                                           BrushAction;                                             // 0x00A8(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7L8Q[0x3];                                   // 0x00A9(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_FAYN[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MeshAttributePaintToolProperties
	 * Size -> 0x0020 (FullSize[0x00C8] - InheritedSize[0x00A8])
	 */
	class UMeshAttributePaintToolProperties : public UInteractiveToolPropertySet
	{
	public:
		class FString                                              Attribute;                                               // 0x00A8(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W0Y9[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (PADDING)

	public:
		TArray<class FString> GetAttributeNames();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MeshAttributePaintEditActions
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UMeshAttributePaintEditActions : public UInteractiveToolPropertySet
	{
	public:
		unsigned char                                              UnknownData_0TPO[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MeshAttributePaintTool
	 * Size -> 0x0508 (FullSize[0x07D0] - InheritedSize[0x02C8])
	 */
	class UMeshAttributePaintTool : public UDynamicMeshBrushTool
	{
	public:
		class UMeshAttributePaintBrushOperationProperties*         BrushActionProps;                                        // 0x02C8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMeshAttributePaintToolProperties*                   AttribProps;                                             // 0x02D0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WJLS[0x4F8];                                 // 0x02D8(0x04F8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MeshBoundaryToolBase
	 * Size -> 0x00F8 (FullSize[0x01B0] - InheritedSize[0x00B8])
	 */
	class UMeshBoundaryToolBase : public USingleSelectionMeshEditingTool
	{
	public:
		unsigned char                                              UnknownData_BIAR[0xE8];                                  // 0x00B8(0x00E8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPolygonSelectionMechanic*                           SelectionMechanic;                                       // 0x01A0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SWLB[0x8];                                   // 0x01A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MeshGroupPaintToolBuilder
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UMeshGroupPaintToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.GroupPaintBrushFilterProperties
	 * Size -> 0x0030 (FullSize[0x00D8] - InheritedSize[0x00A8])
	 */
	class UGroupPaintBrushFilterProperties : public UInteractiveToolPropertySet
	{
	public:
		EMeshGroupPaintBrushType                                   PrimaryBrushType;                                        // 0x00A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMeshGroupPaintInteractionType                             SubToolType;                                             // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U49G[0x2];                                   // 0x00AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BrushSize;                                               // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMeshGroupPaintBrushAreaType                               BrushAreaMode;                                           // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHitBackFaces;                                           // 0x00B1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AFRX[0x2];                                   // 0x00B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SetGroup;                                                // 0x00B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlySetUngrouped;                                       // 0x00B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E0BL[0x3];                                   // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    EraseGroup;                                              // 0x00BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyEraseCurrent;                                       // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XLM8[0x3];                                   // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AngleThreshold;                                          // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUVSeams;                                                // 0x00C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNormalSeams;                                            // 0x00C9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMeshGroupPaintVisibilityType                              VisibilityFilter;                                        // 0x00CA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WNRP[0x1];                                   // 0x00CB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinTriVertCount;                                         // 0x00CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowHitGroup;                                           // 0x00D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowAllGroups;                                          // 0x00D1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_35DQ[0x6];                                   // 0x00D2(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MeshGroupPaintToolActionPropertySet
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UMeshGroupPaintToolActionPropertySet : public UInteractiveToolPropertySet
	{
	public:
		unsigned char                                              UnknownData_2CR0[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MeshGroupPaintToolFreezeActions
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UMeshGroupPaintToolFreezeActions : public UMeshGroupPaintToolActionPropertySet
	{
	public:
		void UnfreezeAll();
		void ShrinkCurrent();
		void GrowCurrent();
		void FreezeOthers();
		void FreezeCurrent();
		void FloodFillCurrent();
		void ClearCurrent();
		void ClearAll();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MeshSculptToolBase
	 * Size -> 0x0A98 (FullSize[0x0B98] - InheritedSize[0x0100])
	 */
	class UMeshSculptToolBase : public UMeshSurfacePointTool
	{
	public:
		class USculptBrushProperties*                              BrushProperties;                                         // 0x0100(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWorkPlaneProperties*                                GizmoProperties;                                         // 0x0108(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F2V1[0x120];                                 // 0x0110(0x0120) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int32_t, class UMeshSculptBrushOpProps*>              BrushOpPropSets;                                         // 0x0230(0x0050) Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XTVD[0x50];                                  // 0x0280(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int32_t, class UMeshSculptBrushOpProps*>              SecondaryBrushOpPropSets;                                // 0x02D0(0x0050) Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SB7L[0x6F0];                                 // 0x0320(0x06F0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMeshEditingViewProperties*                          ViewProperties;                                          // 0x0A10(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            ActiveOverrideMaterial;                                  // 0x0A18(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBrushStampIndicator*                                BrushIndicator;                                          // 0x0A20(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsVolumetricIndicator;                                  // 0x0A28(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z0V0[0x7];                                   // 0x0A29(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            BrushIndicatorMaterial;                                  // 0x0A30(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPreviewMesh*                                        BrushIndicatorMesh;                                      // 0x0A38(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCombinedTransformGizmo*                             PlaneTransformGizmo;                                     // 0x0A40(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTransformProxy*                                     PlaneTransformProxy;                                     // 0x0A48(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I2X8[0x148];                                 // 0x0A50(0x0148) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MeshGroupPaintTool
	 * Size -> 0x0438 (FullSize[0x0FD0] - InheritedSize[0x0B98])
	 */
	class UMeshGroupPaintTool : public UMeshSculptToolBase
	{
	public:
		class UPolygroupLayersProperties*                          PolygroupLayerProperties;                                // 0x0B98(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGroupPaintBrushFilterProperties*                    FilterProperties;                                        // 0x0BA0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGroupPaintBrushOpProps*                             PaintBrushOpProperties;                                  // 0x0BA8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGroupEraseBrushOpProps*                             EraseBrushOpProperties;                                  // 0x0BB0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMeshGroupPaintToolFreezeActions*                    FreezeActions;                                           // 0x0BB8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CYW8[0x8];                                   // 0x0BC0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPolyLassoMarqueeMechanic*                           PolyLassoMechanic;                                       // 0x0BC8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AInternalToolFrameworkActor*                         PreviewMeshActor;                                        // 0x0BD0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDynamicMeshComponent*                               DynamicMeshComponent;                                    // 0x0BD8(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMeshElementsVisualizer*                             MeshElementsDisplay;                                     // 0x0BE0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FKUT[0x3E8];                                 // 0x0BE8(0x03E8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MeshInspectorToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMeshInspectorToolBuilder : public USingleSelectionMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MeshInspectorProperties
	 * Size -> 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
	 */
	class UMeshInspectorProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bWireframe;                                              // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBoundaryEdges;                                          // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBowtieVertices;                                         // 0x00AA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPolygonBorders;                                         // 0x00AB(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUVSeams;                                                // 0x00AC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUVBowties;                                              // 0x00AD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMissingUVs;                                             // 0x00AE(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNormalSeams;                                            // 0x00AF(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTangentSeams;                                           // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNormalVectors;                                          // 0x00B1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTangentVectors;                                         // 0x00B2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YX8Q[0x1];                                   // 0x00B3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NormalLength;                                            // 0x00B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TangentLength;                                           // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMeshInspectorToolDrawIndexMode                            ShowIndices;                                             // 0x00BC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QWJ7[0x3];                                   // 0x00BD(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MeshInspectorMaterialProperties
	 * Size -> 0x0078 (FullSize[0x0120] - InheritedSize[0x00A8])
	 */
	class UMeshInspectorMaterialProperties : public UInteractiveToolPropertySet
	{
	public:
		EMeshInspectorMaterialMode                                 MaterialMode;                                            // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WA0R[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CheckerDensity;                                          // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  OverrideMaterial;                                        // 0x00B0(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UVChannel;                                               // 0x00B8(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      UVChannelNamesList;                                      // 0x00C8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bFlatShading;                                            // 0x00D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WF81[0x3];                                   // 0x00D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x00DC(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OS5N[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     Opacity;                                                 // 0x00F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        TransparentMaterialColor;                                // 0x00F8(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTwoSided;                                               // 0x0108(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_60HV[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            CheckerMaterial;                                         // 0x0110(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceDynamic*                            ActiveCustomMaterial;                                    // 0x0118(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		TArray<class FString> GetUVChannelNamesFunc();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MeshInspectorTool
	 * Size -> 0x0198 (FullSize[0x0250] - InheritedSize[0x00B8])
	 */
	class UMeshInspectorTool : public USingleSelectionMeshEditingTool
	{
	public:
		class UMeshInspectorProperties*                            Settings;                                                // 0x00B8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPolygroupLayersProperties*                          PolygroupLayerProperties;                                // 0x00C0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMeshInspectorMaterialProperties*                    MaterialSettings;                                        // 0x00C8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2WMS[0x8];                                   // 0x00D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPreviewMesh*                                        PreviewMesh;                                             // 0x00D8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULineSetComponent*                                   DrawnLineSet;                                            // 0x00E0(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  DefaultMaterial;                                         // 0x00E8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J5RC[0x160];                                 // 0x00F0(0x0160) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MeshSelectionToolBuilder
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UMeshSelectionToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MeshSelectionToolActionPropertySet
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UMeshSelectionToolActionPropertySet : public UInteractiveToolPropertySet
	{
	public:
		unsigned char                                              UnknownData_Q1HD[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MeshSelectionEditActions
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UMeshSelectionEditActions : public UMeshSelectionToolActionPropertySet
	{
	public:
		void Shrink();
		void SelectAll();
		void OptimizeBorder();
		void LargestTriCountPart();
		void LargestAreaPart();
		void Invert();
		void Grow();
		void FloodFill();
		void ExpandToMaterials();
		void Clear();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MeshSelectionMeshEditActions
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UMeshSelectionMeshEditActions : public UMeshSelectionToolActionPropertySet
	{
	public:
		void SmoothBorder();
		void Separate();
		void FlipNormals();
		void Duplicate();
		void Disconnect();
		void Delete();
		void CreatePolygroup();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MeshSelectionToolProperties
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UMeshSelectionToolProperties : public UInteractiveToolPropertySet
	{
	public:
		EMeshSelectionToolPrimaryMode                              SelectionMode;                                           // 0x00A8(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FSDW[0x3];                                   // 0x00A9(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      AngleTolerance;                                          // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHitBackFaces;                                           // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowPoints;                                             // 0x00B1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZKXC[0x2];                                   // 0x00B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EMeshFacesColorMode                                        FaceColorMode;                                           // 0x00B4(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TM3K[0x3];                                   // 0x00B5(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MeshSelectionTool
	 * Size -> 0x0438 (FullSize[0x0700] - InheritedSize[0x02C8])
	 */
	class UMeshSelectionTool : public UDynamicMeshBrushTool
	{
	public:
		unsigned char                                              UnknownData_XJS1[0x8];                                   // 0x02C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMeshSelectionToolProperties*                        SelectionProps;                                          // 0x02D0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMeshSelectionEditActions*                           SelectionActions;                                        // 0x02D8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMeshSelectionToolActionPropertySet*                 EditActions;                                             // 0x02E0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMeshStatisticsProperties*                           MeshStatisticsProperties;                                // 0x02E8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMeshElementsVisualizer*                             MeshElementsDisplay;                                     // 0x02F0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMeshUVChannelProperties*                            UVChannelProperties;                                     // 0x02F8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPolygroupLayersProperties*                          PolygroupLayerProperties;                                // 0x0300(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7QE3[0x58];                                  // 0x0308(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMeshSelectionSet*                                   Selection;                                               // 0x0360(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class AActor*>                                      SpawnedActors;                                           // 0x0368(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YWIK[0x388];                                 // 0x0378(0x0388) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MeshSpaceDeformerToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMeshSpaceDeformerToolBuilder : public USingleSelectionMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MeshSpaceDeformerToolProperties
	 * Size -> 0x0028 (FullSize[0x00D0] - InheritedSize[0x00A8])
	 */
	class UMeshSpaceDeformerToolProperties : public UInteractiveToolPropertySet
	{
	public:
		ENonlinearOperationType                                    SelectedOperationType;                                   // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_447E[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UpperBoundsInterval;                                     // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LowerBoundsInterval;                                     // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BendDegrees;                                             // 0x00B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TwistDegrees;                                            // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFlareProfileType                                          FlareProfileType;                                        // 0x00BC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SU83[0x3];                                   // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FlarePercentY;                                           // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLockXAndYFlaring;                                       // 0x00C4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A3G0[0x3];                                   // 0x00C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FlarePercentX;                                           // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLockBottom;                                             // 0x00CC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowOriginalMesh;                                       // 0x00CD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawVisualization;                                      // 0x00CE(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlignToNormalOnCtrlClick;                               // 0x00CF(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MeshSpaceDeformerToolActionPropertySet
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UMeshSpaceDeformerToolActionPropertySet : public UInteractiveToolPropertySet
	{
	public:
		unsigned char                                              UnknownData_Z5WU[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	public:
		void ShiftToCenter();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.SpaceDeformerOperatorFactory
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USpaceDeformerOperatorFactory : public UObject
	{
	public:
		unsigned char                                              UnknownData_K13F[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMeshSpaceDeformerTool*                              SpaceDeformerTool;                                       // 0x0030(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MeshSpaceDeformerTool
	 * Size -> 0x0208 (FullSize[0x02C0] - InheritedSize[0x00B8])
	 */
	class UMeshSpaceDeformerTool : public USingleSelectionMeshEditingTool
	{
	public:
		class UMeshSpaceDeformerToolProperties*                    Settings;                                                // 0x00B8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMeshSpaceDeformerToolActionPropertySet*             ToolActions;                                             // 0x00C0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGizmoTransformChangeStateTarget*                    StateTarget;                                             // 0x00C8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDragAlignmentMechanic*                              DragAlignmentMechanic;                                   // 0x00D0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMeshOpPreviewWithBackgroundCompute*                 Preview;                                                 // 0x00D8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ERXS[0x10];                                  // 0x00E0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPreviewMesh*                                        OriginalMeshPreview;                                     // 0x00F0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UIntervalGizmo*                                      IntervalGizmo;                                           // 0x00F8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCombinedTransformGizmo*                             TransformGizmo;                                          // 0x0100(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTransformProxy*                                     TransformProxy;                                          // 0x0108(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGizmoLocalFloatParameterSource*                     UpIntervalSource;                                        // 0x0110(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGizmoLocalFloatParameterSource*                     DownIntervalSource;                                      // 0x0118(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UGizmoLocalFloatParameterSource*                     ForwardIntervalSource;                                   // 0x0120(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_38W0[0x198];                                 // 0x0128(0x0198) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MeshVertexSculptToolBuilder
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UMeshVertexSculptToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.VertexBrushSculptProperties
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UVertexBrushSculptProperties : public UInteractiveToolPropertySet
	{
	public:
		EMeshVertexSculptBrushType                                 PrimaryBrushType;                                        // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMeshSculptFalloffType                                     PrimaryFalloffType;                                      // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMeshVertexSculptBrushFilterType                           BrushFilter;                                             // 0x00AA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFreezeTarget;                                           // 0x00AB(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UMeshVertexSculptTool>                Tool;                                                    // 0x00AC(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SEBJ[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.VertexBrushAlphaProperties
	 * Size -> 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
	 */
	class UVertexBrushAlphaProperties : public UInteractiveToolPropertySet
	{
	public:
		class UTexture2D*                                          Alpha;                                                   // 0x00A8(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationAngle;                                           // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRandomize;                                              // 0x00B4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZHO3[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RandomRange;                                             // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UE6C[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MeshSymmetryProperties
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UMeshSymmetryProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bEnableSymmetry;                                         // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSymmetryCanBeEnabled;                                   // 0x00A9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7NGT[0x6];                                   // 0x00AA(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MeshVertexSculptTool
	 * Size -> 0x0948 (FullSize[0x14E0] - InheritedSize[0x0B98])
	 */
	class UMeshVertexSculptTool : public UMeshSculptToolBase
	{
	public:
		class UVertexBrushSculptProperties*                        SculptProperties;                                        // 0x0B98(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVertexBrushAlphaProperties*                         AlphaProperties;                                         // 0x0BA0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          BrushAlpha;                                              // 0x0BA8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMeshSymmetryProperties*                             SymmetryProperties;                                      // 0x0BB0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AInternalToolFrameworkActor*                         PreviewMeshActor;                                        // 0x0BB8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDynamicMeshComponent*                               DynamicMeshComponent;                                    // 0x0BC0(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DYKM[0x918];                                 // 0x0BC8(0x0918) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MirrorToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMirrorToolBuilder : public UMultiSelectionMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MirrorToolProperties
	 * Size -> 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
	 */
	class UMirrorToolProperties : public UInteractiveToolPropertySet
	{
	public:
		EMirrorOperationMode                                       OperationMode;                                           // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCropAlongMirrorPlaneFirst;                              // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWeldVerticesOnMirrorPlane;                              // 0x00AA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G5G0[0x5];                                   // 0x00AB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     PlaneTolerance;                                          // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowBowtieVertexCreation;                              // 0x00B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMirrorCtrlClickBehavior                                   CtrlClickBehavior;                                       // 0x00B9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bButtonsOnlyChangeOrientation;                           // 0x00BA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowPreview;                                            // 0x00BB(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMirrorSaveMode                                            SaveMode;                                                // 0x00BC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_59Z3[0x3];                                   // 0x00BD(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MirrorOperatorFactory
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UMirrorOperatorFactory : public UObject
	{
	public:
		unsigned char                                              UnknownData_I7DE[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMirrorTool*                                         MirrorTool;                                              // 0x0030(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8ACP[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MirrorToolActionPropertySet
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UMirrorToolActionPropertySet : public UInteractiveToolPropertySet
	{
	public:
		unsigned char                                              UnknownData_65UU[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	public:
		void Up();
		void ShiftToCenter();
		void Right();
		void Left();
		void Forward();
		void Down();
		void Backward();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MirrorTool
	 * Size -> 0x00B0 (FullSize[0x0168] - InheritedSize[0x00B8])
	 */
	class UMirrorTool : public UMultiSelectionMeshEditingTool
	{
	public:
		unsigned char                                              UnknownData_TK6E[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMirrorToolProperties*                               Settings;                                                // 0x00C0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMirrorToolActionPropertySet*                        ToolActions;                                             // 0x00C8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UDynamicMeshReplacementChangeTarget*>         MeshesToMirror;                                          // 0x00D0(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<class UMeshOpPreviewWithBackgroundCompute*>         Previews;                                                // 0x00E0(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_56U4[0x30];                                  // 0x00F0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UConstructionPlaneMechanic*                          PlaneMechanic;                                           // 0x0120(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IB3L[0x40];                                  // 0x0128(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.OffsetMeshToolProperties
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UOffsetMeshToolProperties : public UInteractiveToolPropertySet
	{
	public:
		EOffsetMeshToolOffsetType                                  OffsetType;                                              // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LW4O[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Distance;                                                // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCreateShell;                                            // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LZHJ[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.OffsetWeightMapSetProperties
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	class UOffsetWeightMapSetProperties : public UWeightMapSetProperties
	{
	public:
		float                                                      MinDistance;                                             // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8VRQ[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.IterativeOffsetProperties
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UIterativeOffsetProperties : public UInteractiveToolPropertySet
	{
	public:
		int32_t                                                    Steps;                                                   // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOffsetBoundaries;                                       // 0x00AC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HS1C[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SmoothingPerStep;                                        // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReprojectSmooth;                                        // 0x00B4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OTJK[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.ImplicitOffsetProperties
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UImplicitOffsetProperties : public UInteractiveToolPropertySet
	{
	public:
		float                                                      Smoothness;                                              // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreserveUVs;                                            // 0x00AC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P9NP[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.OffsetMeshTool
	 * Size -> 0x0020 (FullSize[0x0420] - InheritedSize[0x0400])
	 */
	class UOffsetMeshTool : public UBaseMeshProcessingTool
	{
	public:
		class UOffsetMeshToolProperties*                           OffsetProperties;                                        // 0x0400(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UIterativeOffsetProperties*                          IterativeProperties;                                     // 0x0408(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImplicitOffsetProperties*                           ImplicitProperties;                                      // 0x0410(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UOffsetWeightMapSetProperties*                       WeightMapProperties;                                     // 0x0418(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.OffsetMeshToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOffsetMeshToolBuilder : public UBaseMeshProcessingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.PhysicsObjectToolPropertySet
	 * Size -> 0x0068 (FullSize[0x0110] - InheritedSize[0x00A8])
	 */
	class UPhysicsObjectToolPropertySet : public UInteractiveToolPropertySet
	{
	public:
		class FString                                              ObjectName;                                              // 0x00A8(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionGeometryMode                                     CollisionType;                                           // 0x00B8(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QY24[0x3];                                   // 0x00B9(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_WPNL[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPhysicsSphereData>                          Spheres;                                                 // 0x00C0(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FPhysicsBoxData>                             Boxes;                                                   // 0x00D0(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FPhysicsCapsuleData>                         Capsules;                                                // 0x00E0(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FPhysicsConvexData>                          Convexes;                                                // 0x00F0(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FPhysicsLevelSetData>                        LevelSets;                                               // 0x0100(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.CollisionGeometryVisualizationProperties
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UCollisionGeometryVisualizationProperties : public UInteractiveToolPropertySet
	{
	public:
		float                                                      LineThickness;                                           // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowHidden;                                             // 0x00AC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRandomColors;                                           // 0x00AD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CUWQ[0x2];                                   // 0x00AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FColor                                              Color;                                                   // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6EEQ[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.ExtractCollisionGeometryToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UExtractCollisionGeometryToolBuilder : public USingleSelectionMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.ExtractCollisionToolProperties
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UExtractCollisionToolProperties : public UInteractiveToolPropertySet
	{
	public:
		EExtractCollisionOutputType                                CollisionType;                                           // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWeldEdges;                                              // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOutputSeparateMeshes;                                   // 0x00AA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowPreview;                                            // 0x00AB(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowInputMesh;                                          // 0x00AC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G2CQ[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.ExtractCollisionGeometryTool
	 * Size -> 0x0278 (FullSize[0x0330] - InheritedSize[0x00B8])
	 */
	class UExtractCollisionGeometryTool : public USingleSelectionMeshEditingTool
	{
	public:
		class UCreateMeshObjectTypeProperties*                     OutputTypeProperties;                                    // 0x00B8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UExtractCollisionToolProperties*                     Settings;                                                // 0x00C0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCollisionGeometryVisualizationProperties*           VizSettings;                                             // 0x00C8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPhysicsObjectToolPropertySet*                       ObjectProps;                                             // 0x00D0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPreviewGeometry*                                    PreviewElements;                                         // 0x00D8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPreviewMesh*                                        PreviewMesh;                                             // 0x00E0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MPJX[0x248];                                 // 0x00E8(0x0248) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.PhysicsInspectorToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPhysicsInspectorToolBuilder : public UMultiSelectionMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.PhysicsInspectorTool
	 * Size -> 0x0048 (FullSize[0x0100] - InheritedSize[0x00B8])
	 */
	class UPhysicsInspectorTool : public UMultiSelectionMeshEditingTool
	{
	public:
		class UCollisionGeometryVisualizationProperties*           VizSettings;                                             // 0x00B8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UPhysicsObjectToolPropertySet*>               ObjectData;                                              // 0x00C0(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  LineMaterial;                                            // 0x00D0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UPreviewGeometry*>                            PreviewElements;                                         // 0x00D8(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YCUK[0x18];                                  // 0x00E8(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.SetCollisionGeometryToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USetCollisionGeometryToolBuilder : public UMultiSelectionMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.SetCollisionGeometryToolProperties
	 * Size -> 0x0048 (FullSize[0x00F0] - InheritedSize[0x00A8])
	 */
	class USetCollisionGeometryToolProperties : public UInteractiveToolPropertySet
	{
	public:
		ECollisionGeometryType                                     GeometryType;                                            // 0x00A8(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BXOI[0x3];                                   // 0x00A9(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ESetCollisionGeometryInputMode                             InputMode;                                               // 0x00AC(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y7G6[0x3];                                   // 0x00AD(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		bool                                                       bUseWorldSpace;                                          // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRemoveContained;                                        // 0x00B1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableMaxCount;                                         // 0x00B2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_87ZY[0x1];                                   // 0x00B3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxCount;                                                // 0x00B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinThickness;                                            // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDetectBoxes;                                            // 0x00BC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDetectSpheres;                                          // 0x00BD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDetectCapsules;                                         // 0x00BE(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSimplifyHulls;                                          // 0x00BF(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HullTargetFaceCount;                                     // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxHullsPerMesh;                                         // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ConvexDecompositionSearchFactor;                         // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AddHullsErrorTolerance;                                  // 0x00CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinPartThickness;                                        // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSimplifyPolygons;                                       // 0x00D4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_21IE[0x3];                                   // 0x00D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HullTolerance;                                           // 0x00D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EProjectedHullAxis                                         SweepAxis;                                               // 0x00DC(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_67QY[0x3];                                   // 0x00DD(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		int32_t                                                    LevelSetResolution;                                      // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAppendToExisting;                                       // 0x00E4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0HBD[0x3];                                   // 0x00E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ECollisionGeometryMode                                     SetCollisionType;                                        // 0x00E8(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BU5J[0x3];                                   // 0x00E9(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_QH04[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.SetCollisionGeometryTool
	 * Size -> 0x0198 (FullSize[0x0250] - InheritedSize[0x00B8])
	 */
	class USetCollisionGeometryTool : public UMultiSelectionMeshEditingTool
	{
	public:
		unsigned char                                              UnknownData_APZC[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USetCollisionGeometryToolProperties*                 Settings;                                                // 0x00C0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPolygroupLayersProperties*                          PolygroupLayerProperties;                                // 0x00C8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCollisionGeometryVisualizationProperties*           VizSettings;                                             // 0x00D0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPhysicsObjectToolPropertySet*                       CollisionProps;                                          // 0x00D8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  LineMaterial;                                            // 0x00E0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_M8EM[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPreviewGeometry*                                    PreviewGeom;                                             // 0x00F0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WR1J[0x158];                                 // 0x00F8(0x0158) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.PlaneCutToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPlaneCutToolBuilder : public UMultiSelectionMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.AcceptOutputProperties
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UAcceptOutputProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bExportSeparatedPiecesAsNewMeshAssets;                   // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SD5Y[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.PlaneCutToolProperties
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UPlaneCutToolProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bKeepBothHalves;                                         // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4QQG[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpacingBetweenHalves;                                    // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowPreview;                                            // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFillCutHole;                                            // 0x00B1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFillSpans;                                              // 0x00B2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2TP6[0x5];                                   // 0x00B3(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.PlaneCutOperatorFactory
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UPlaneCutOperatorFactory : public UObject
	{
	public:
		unsigned char                                              UnknownData_D4NW[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlaneCutTool*                                       CutTool;                                                 // 0x0030(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZM2Y[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.PlaneCutTool
	 * Size -> 0x00E8 (FullSize[0x01A0] - InheritedSize[0x00B8])
	 */
	class UPlaneCutTool : public UMultiSelectionMeshEditingTool
	{
	public:
		class UPlaneCutToolProperties*                             BasicProperties;                                         // 0x00B8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAcceptOutputProperties*                             AcceptProperties;                                        // 0x00C0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UMeshOpPreviewWithBackgroundCompute*>         Previews;                                                // 0x00C8(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<class UDynamicMeshReplacementChangeTarget*>         MeshesToCut;                                             // 0x00D8(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		class UConstructionPlaneMechanic*                          PlaneMechanic;                                           // 0x00E8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9NBP[0xB0];                                  // 0x00F0(0x00B0) MISSED OFFSET (PADDING)

	public:
		void FlipPlane();
		void Cut();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.ProjectToTargetToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UProjectToTargetToolBuilder : public UMultiSelectionMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.RemeshMeshToolProperties
	 * Size -> 0x0028 (FullSize[0x00E0] - InheritedSize[0x00B8])
	 */
	class URemeshMeshToolProperties : public URemeshProperties
	{
	public:
		int32_t                                                    TargetTriangleCount;                                     // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERemeshSmoothingType                                       SmoothingType;                                           // 0x00BC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDiscardAttributes;                                      // 0x00BD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowGroupColors;                                        // 0x00BE(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERemeshType                                                RemeshType;                                              // 0x00BF(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RemeshIterations;                                        // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxRemeshIterations;                                     // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExtraProjectionIterations;                               // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTargetEdgeLength;                                    // 0x00CC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_91FJ[0x3];                                   // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TargetEdgeLength;                                        // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReproject;                                              // 0x00D4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReprojectConstraints;                                   // 0x00D5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A6KM[0x2];                                   // 0x00D6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BoundaryCornerAngleThreshold;                            // 0x00D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZYW0[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.ProjectToTargetToolProperties
	 * Size -> 0x0020 (FullSize[0x0100] - InheritedSize[0x00E0])
	 */
	class UProjectToTargetToolProperties : public URemeshMeshToolProperties
	{
	public:
		bool                                                       bWorldSpace;                                             // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bParallel;                                               // 0x00E1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UWYI[0x2];                                   // 0x00E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FaceProjectionPassesPerRemeshIteration;                  // 0x00E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SurfaceProjectionSpeed;                                  // 0x00E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NormalAlignmentSpeed;                                    // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSmoothInFillAreas;                                      // 0x00F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4AGB[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FillAreaDistanceMultiplier;                              // 0x00F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FillAreaSmoothMultiplier;                                // 0x00F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P6XU[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.RemeshMeshTool
	 * Size -> 0x0050 (FullSize[0x0108] - InheritedSize[0x00B8])
	 */
	class URemeshMeshTool : public UMultiSelectionMeshEditingTool
	{
	public:
		unsigned char                                              UnknownData_CMQP[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URemeshMeshToolProperties*                           BasicProperties;                                         // 0x00C0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMeshStatisticsProperties*                           MeshStatisticsProperties;                                // 0x00C8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMeshOpPreviewWithBackgroundCompute*                 Preview;                                                 // 0x00D0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMeshElementsVisualizer*                             MeshElementsDisplay;                                     // 0x00D8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OJBM[0x28];                                  // 0x00E0(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.ProjectToTargetTool
	 * Size -> 0x0010 (FullSize[0x0118] - InheritedSize[0x0108])
	 */
	class UProjectToTargetTool : public URemeshMeshTool
	{
	public:
		unsigned char                                              UnknownData_LX5L[0x10];                                  // 0x0108(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MeshAnalysisProperties
	 * Size -> 0x0020 (FullSize[0x00C8] - InheritedSize[0x00A8])
	 */
	class UMeshAnalysisProperties : public UInteractiveToolPropertySet
	{
	public:
		class FString                                              SurfaceArea;                                             // 0x00A8(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Volume;                                                  // 0x00B8(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.MeshStatisticsProperties
	 * Size -> 0x0030 (FullSize[0x00D8] - InheritedSize[0x00A8])
	 */
	class UMeshStatisticsProperties : public UInteractiveToolPropertySet
	{
	public:
		class FString                                              Mesh;                                                    // 0x00A8(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UV;                                                      // 0x00B8(0x0010) Edit, ZeroConstructor, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Attributes;                                              // 0x00C8(0x0010) Edit, ZeroConstructor, EditConst, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.RemeshMeshToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URemeshMeshToolBuilder : public UMultiSelectionMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.RemoveOccludedTrianglesToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URemoveOccludedTrianglesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.RemoveOccludedTrianglesToolProperties
	 * Size -> 0x0030 (FullSize[0x00D8] - InheritedSize[0x00A8])
	 */
	class URemoveOccludedTrianglesToolProperties : public UInteractiveToolPropertySet
	{
	public:
		EOcclusionCalculationUIMode                                OcclusionTestMethod;                                     // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOcclusionTriangleSamplingUIMode                           TriangleSampling;                                        // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CQC9[0x6];                                   // 0x00AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     WindingIsoValue;                                         // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AddRandomRays;                                           // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AddTriangleSamples;                                      // 0x00BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlySelfOcclude;                                        // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_26O6[0x3];                                   // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ShrinkRemoval;                                           // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     MinAreaIsland;                                           // 0x00C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinTriCountIsland;                                       // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOccludedAction                                            Action;                                                  // 0x00D4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CC09[0x3];                                   // 0x00D5(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.RemoveOccludedTrianglesAdvancedProperties
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class URemoveOccludedTrianglesAdvancedProperties : public UInteractiveToolPropertySet
	{
	public:
		unsigned char                                              UnknownData_51ID[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.RemoveOccludedTrianglesOperatorFactory
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class URemoveOccludedTrianglesOperatorFactory : public UObject
	{
	public:
		unsigned char                                              UnknownData_HH4U[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URemoveOccludedTrianglesTool*                        Tool;                                                    // 0x0030(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DGXO[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.RemoveOccludedTrianglesTool
	 * Size -> 0x0118 (FullSize[0x01D0] - InheritedSize[0x00B8])
	 */
	class URemoveOccludedTrianglesTool : public UMultiSelectionMeshEditingTool
	{
	public:
		class URemoveOccludedTrianglesToolProperties*              BasicProperties;                                         // 0x00B8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPolygroupLayersProperties*                          PolygroupLayersProperties;                               // 0x00C0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class URemoveOccludedTrianglesAdvancedProperties*          AdvancedProperties;                                      // 0x00C8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UMeshOpPreviewWithBackgroundCompute*>         Previews;                                                // 0x00D0(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<class UPreviewMesh*>                                PreviewCopies;                                           // 0x00E0(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EULJ[0xE0];                                  // 0x00F0(0x00E0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.RevolveBoundaryToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URevolveBoundaryToolBuilder : public USingleSelectionMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.RevolveBoundaryOperatorFactory
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class URevolveBoundaryOperatorFactory : public UObject
	{
	public:
		unsigned char                                              UnknownData_NJ1V[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URevolveBoundaryTool*                                RevolveBoundaryTool;                                     // 0x0030(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.RevolveBoundaryToolProperties
	 * Size -> 0x0030 (FullSize[0x0148] - InheritedSize[0x0118])
	 */
	class URevolveBoundaryToolProperties : public URevolveProperties
	{
	public:
		ERevolvePropertiesCapFillMode                              CapFillMode;                                             // 0x0118(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisplayInputMesh;                                       // 0x0119(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3VMJ[0x6];                                   // 0x011A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             AxisOrigin;                                              // 0x0120(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           AxisOrientation;                                         // 0x0138(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.RevolveBoundaryTool
	 * Size -> 0x0070 (FullSize[0x0220] - InheritedSize[0x01B0])
	 */
	class URevolveBoundaryTool : public UMeshBoundaryToolBase
	{
	public:
		unsigned char                                              UnknownData_UKLU[0x18];                                  // 0x01B0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCreateMeshObjectTypeProperties*                     OutputTypeProperties;                                    // 0x01C8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class URevolveBoundaryToolProperties*                      Settings;                                                // 0x01D0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UNewMeshMaterialProperties*                          MaterialProperties;                                      // 0x01D8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UConstructionPlaneMechanic*                          PlaneMechanic;                                           // 0x01E0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMeshOpPreviewWithBackgroundCompute*                 Preview;                                                 // 0x01E8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FYE8[0x30];                                  // 0x01F0(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.SculptBrushProperties
	 * Size -> 0x0038 (FullSize[0x00E0] - InheritedSize[0x00A8])
	 */
	class USculptBrushProperties : public UInteractiveToolPropertySet
	{
	public:
		struct FBrushToolRadius                                    BrushSize;                                               // 0x00A8(0x0014) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      BrushFalloffAmount;                                      // 0x00BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowFalloff;                                            // 0x00C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FYBO[0x3];                                   // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Depth;                                                   // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHitBackFaces;                                           // 0x00C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2GT3[0x3];                                   // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FlowRate;                                                // 0x00CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Spacing;                                                 // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Lazyness;                                                // 0x00D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowPerBrushProps;                                      // 0x00D8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowLazyness;                                           // 0x00D9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowFlowRate;                                           // 0x00DA(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowSpacing;                                            // 0x00DB(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CKLY[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.KelvinBrushProperties
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UKelvinBrushProperties : public UInteractiveToolPropertySet
	{
	public:
		float                                                      FalloffDistance;                                         // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Stiffness;                                               // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Incompressiblity;                                        // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BrushSteps;                                              // 0x00B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.WorkPlaneProperties
	 * Size -> 0x0048 (FullSize[0x00F0] - InheritedSize[0x00A8])
	 */
	class UWorkPlaneProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bPropertySetEnabled;                                     // 0x00A8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowGizmo;                                              // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IHLS[0x6];                                   // 0x00AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             position;                                                // 0x00B0(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F9CO[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               Rotation;                                                // 0x00D0(0x0020) Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.SculptMaxBrushProperties
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class USculptMaxBrushProperties : public UInteractiveToolPropertySet
	{
	public:
		float                                                      MaxHeight;                                               // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFreezeCurrentHeight;                                    // 0x00AC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NJJL[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.SeamSculptToolBuilder
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USeamSculptToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.SeamSculptToolProperties
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class USeamSculptToolProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bShowWireframe;                                          // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHitBackFaces;                                           // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6QFL[0x6];                                   // 0x00AA(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.SeamSculptTool
	 * Size -> 0x00F8 (FullSize[0x03C0] - InheritedSize[0x02C8])
	 */
	class USeamSculptTool : public UDynamicMeshBrushTool
	{
	public:
		class USeamSculptToolProperties*                           Settings;                                                // 0x02C8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPreviewGeometry*                                    PreviewGeom;                                             // 0x02D0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H5XQ[0xE8];                                  // 0x02D8(0x00E8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.SelfUnionMeshesToolProperties
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class USelfUnionMeshesToolProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bTrimFlaps;                                              // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTryFixHoles;                                            // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTryCollapseEdges;                                       // 0x00AA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SDMM[0x1];                                   // 0x00AB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WindingThreshold;                                        // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowNewBoundaryEdges;                                   // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyUseFirstMeshMaterials;                              // 0x00B1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UKTZ[0x6];                                   // 0x00B2(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.SelfUnionMeshesTool
	 * Size -> 0x0048 (FullSize[0x0148] - InheritedSize[0x0100])
	 */
	class USelfUnionMeshesTool : public UBaseCreateFromSelectedTool
	{
	public:
		class USelfUnionMeshesToolProperties*                      Properties;                                              // 0x0100(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULineSetComponent*                                   DrawnLineSet;                                            // 0x0108(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QMWD[0x38];                                  // 0x0110(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.SelfUnionMeshesToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USelfUnionMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.SkinWeightsBindingToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USkinWeightsBindingToolBuilder : public UMultiSelectionMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.SkinWeightsBindingToolProperties
	 * Size -> 0x0038 (FullSize[0x00E0] - InheritedSize[0x00A8])
	 */
	class USkinWeightsBindingToolProperties : public UInteractiveToolPropertySet
	{
	public:
		unsigned char                                              UnknownData_FDVC[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      CurrentBone;                                             // 0x00B0(0x0010) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
		ESkinWeightsBindType                                       BindingType;                                             // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GWP8[0x3];                                   // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Stiffness;                                               // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxInfluences;                                           // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VoxelResolution;                                         // 0x00CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GAR2[0x10];                                  // 0x00D0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.SkinWeightsBindingTool
	 * Size -> 0x02D0 (FullSize[0x0388] - InheritedSize[0x00B8])
	 */
	class USkinWeightsBindingTool : public UMultiSelectionMeshEditingTool
	{
	public:
		unsigned char                                              UnknownData_BM74[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkinWeightsBindingToolProperties*                   Properties;                                              // 0x00C0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMeshOpPreviewWithBackgroundCompute*                 Preview;                                                 // 0x00C8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TB40[0x2B8];                                 // 0x00D0(0x02B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.SkinWeightsPaintToolBuilder
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class USkinWeightsPaintToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.SkinWeightsPaintToolProperties
	 * Size -> 0x0020 (FullSize[0x00C8] - InheritedSize[0x00A8])
	 */
	class USkinWeightsPaintToolProperties : public UInteractiveToolPropertySet
	{
	public:
		unsigned char                                              UnknownData_17RL[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      CurrentBone;                                             // 0x00B0(0x0010) Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G7J0[0x8];                                   // 0x00C0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.SkinWeightsPaintTool
	 * Size -> 0x06C8 (FullSize[0x0990] - InheritedSize[0x02C8])
	 */
	class USkinWeightsPaintTool : public UDynamicMeshBrushTool
	{
	public:
		class USkinWeightsPaintToolProperties*                     ToolProps;                                               // 0x02C8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7TUC[0x6C0];                                 // 0x02D0(0x06C0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.SmoothMeshToolProperties
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class USmoothMeshToolProperties : public UInteractiveToolPropertySet
	{
	public:
		ESmoothMeshToolSmoothType                                  SmoothingType;                                           // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_31EA[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.IterativeSmoothProperties
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UIterativeSmoothProperties : public UInteractiveToolPropertySet
	{
	public:
		float                                                      SmoothingPerStep;                                        // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Steps;                                                   // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSmoothBoundary;                                         // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4U8T[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.DiffusionSmoothProperties
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UDiffusionSmoothProperties : public UInteractiveToolPropertySet
	{
	public:
		float                                                      SmoothingPerStep;                                        // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Steps;                                                   // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreserveUVs;                                            // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NZX3[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.ImplicitSmoothProperties
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UImplicitSmoothProperties : public UInteractiveToolPropertySet
	{
	public:
		float                                                      SmoothSpeed;                                             // 0x00A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Smoothness;                                              // 0x00AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreserveUVs;                                            // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BO9K[0x3];                                   // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VolumeCorrection;                                        // 0x00B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.SmoothWeightMapSetProperties
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	class USmoothWeightMapSetProperties : public UWeightMapSetProperties
	{
	public:
		float                                                      MinSmoothMultiplier;                                     // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AJOR[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.SmoothMeshTool
	 * Size -> 0x0030 (FullSize[0x0430] - InheritedSize[0x0400])
	 */
	class USmoothMeshTool : public UBaseMeshProcessingTool
	{
	public:
		class USmoothMeshToolProperties*                           SmoothProperties;                                        // 0x0400(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UIterativeSmoothProperties*                          IterativeProperties;                                     // 0x0408(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDiffusionSmoothProperties*                          DiffusionProperties;                                     // 0x0410(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImplicitSmoothProperties*                           ImplicitProperties;                                      // 0x0418(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USmoothWeightMapSetProperties*                       WeightMapProperties;                                     // 0x0420(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RDS9[0x8];                                   // 0x0428(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.SmoothMeshToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USmoothMeshToolBuilder : public UBaseMeshProcessingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.SplitMeshesToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USplitMeshesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.SplitMeshesToolProperties
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class USplitMeshesToolProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bTransferMaterials;                                      // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BSKE[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.SplitMeshesTool
	 * Size -> 0x0038 (FullSize[0x00F0] - InheritedSize[0x00B8])
	 */
	class USplitMeshesTool : public UMultiSelectionMeshEditingTool
	{
	public:
		class USplitMeshesToolProperties*                          BasicProperties;                                         // 0x00B8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCreateMeshObjectTypeProperties*                     OutputTypeProperties;                                    // 0x00C0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HEZR[0x28];                                  // 0x00C8(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.TransferMeshToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTransferMeshToolBuilder : public UMultiSelectionMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.TransferMeshToolProperties
	 * Size -> 0x0078 (FullSize[0x0120] - InheritedSize[0x00A8])
	 */
	class UTransferMeshToolProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bTransferMaterials;                                      // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O5Y2[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SourceLOD;                                               // 0x00B0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TargetLod;                                               // 0x00C0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsStaticMeshSource;                                     // 0x00D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P3EY[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      SourceLODNamesList;                                      // 0x00D8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HXM1[0x10];                                  // 0x00E8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      TargetLODNamesList;                                      // 0x00F8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_09U0[0x10];                                  // 0x0108(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsStaticMeshTarget;                                     // 0x0118(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CP3D[0x7];                                   // 0x0119(0x0007) MISSED OFFSET (PADDING)

	public:
		TArray<class FString> GetTargetLODNamesFunc();
		TArray<class FString> GetSourceLODNamesFunc();
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.TransferMeshTool
	 * Size -> 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
	 */
	class UTransferMeshTool : public UMultiSelectionMeshEditingTool
	{
	public:
		unsigned char                                              UnknownData_7MMW[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTransferMeshToolProperties*                         BasicProperties;                                         // 0x00C0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.TransformMeshesToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UTransformMeshesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.TransformMeshesToolProperties
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UTransformMeshesToolProperties : public UInteractiveToolPropertySet
	{
	public:
		ETransformMeshesTransformMode                              TransformMode;                                           // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyToInstances;                                       // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSetPivotMode;                                           // 0x00AA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableSnapDragging;                                     // 0x00AB(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETransformMeshesSnapDragSource                             SnapDragSource;                                          // 0x00AC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETransformMeshesSnapDragRotationMode                       RotationMode;                                            // 0x00AD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHaveInstances;                                          // 0x00AE(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WNUF[0x1];                                   // 0x00AF(0x0001) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.TransformMeshesTool
	 * Size -> 0x00D8 (FullSize[0x0190] - InheritedSize[0x00B8])
	 */
	class UTransformMeshesTool : public UMultiSelectionMeshEditingTool
	{
	public:
		unsigned char                                              UnknownData_8VB6[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTransformMeshesToolProperties*                      TransformProps;                                          // 0x00C0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FTransformMeshesTarget>                      ActiveGizmos;                                            // 0x00C8(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UDragAlignmentMechanic*                              DragAlignmentMechanic;                                   // 0x00D8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1CO8[0xB0];                                  // 0x00E0(0x00B0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.VolumeToMeshToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVolumeToMeshToolBuilder : public UInteractiveToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.VolumeToMeshToolProperties
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UVolumeToMeshToolProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bWeldEdges;                                              // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoRepair;                                             // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOptimizeMesh;                                           // 0x00AA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowWireframe;                                          // 0x00AB(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HER1[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.VolumeToMeshTool
	 * Size -> 0x0270 (FullSize[0x0308] - InheritedSize[0x0098])
	 */
	class UVolumeToMeshTool : public UInteractiveTool
	{
	public:
		class UVolumeToMeshToolProperties*                         Settings;                                                // 0x0098(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCreateMeshObjectTypeProperties*                     OutputTypeProperties;                                    // 0x00A0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPreviewMesh*                                        PreviewMesh;                                             // 0x00A8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TLazyObjectPtr<class AVolume>                              TargetVolume;                                            // 0x00B0(0x001C) IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HW71[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULineSetComponent*                                   VolumeEdgesSet;                                          // 0x00D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZDML[0x230];                                 // 0x00D8(0x0230) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.VoxelBlendMeshesToolProperties
	 * Size -> 0x0020 (FullSize[0x00C8] - InheritedSize[0x00A8])
	 */
	class UVoxelBlendMeshesToolProperties : public UInteractiveToolPropertySet
	{
	public:
		double                                                     BlendPower;                                              // 0x00A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     BlendFalloff;                                            // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVoxelBlendOperation                                       Operation;                                               // 0x00B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVoxWrap;                                                // 0x00B9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRemoveInternalsAfterVoxWrap;                            // 0x00BA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QUU5[0x5];                                   // 0x00BB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     ThickenShells;                                           // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.VoxelBlendMeshesTool
	 * Size -> 0x0008 (FullSize[0x0120] - InheritedSize[0x0118])
	 */
	class UVoxelBlendMeshesTool : public UBaseVoxelTool
	{
	public:
		class UVoxelBlendMeshesToolProperties*                     BlendProperties;                                         // 0x0118(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.VoxelBlendMeshesToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelBlendMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.VoxelMorphologyMeshesToolProperties
	 * Size -> 0x0020 (FullSize[0x00C8] - InheritedSize[0x00A8])
	 */
	class UVoxelMorphologyMeshesToolProperties : public UInteractiveToolPropertySet
	{
	public:
		EMorphologyOperation                                       Operation;                                               // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UHAU[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     Distance;                                                // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVoxWrap;                                                // 0x00B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRemoveInternalsAfterVoxWrap;                            // 0x00B9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I3QO[0x6];                                   // 0x00BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     ThickenShells;                                           // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.VoxelMorphologyMeshesTool
	 * Size -> 0x0008 (FullSize[0x0120] - InheritedSize[0x0118])
	 */
	class UVoxelMorphologyMeshesTool : public UBaseVoxelTool
	{
	public:
		class UVoxelMorphologyMeshesToolProperties*                MorphologyProperties;                                    // 0x0118(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.VoxelMorphologyMeshesToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelMorphologyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.VoxelSolidifyMeshesToolProperties
	 * Size -> 0x0020 (FullSize[0x00C8] - InheritedSize[0x00A8])
	 */
	class UVoxelSolidifyMeshesToolProperties : public UInteractiveToolPropertySet
	{
	public:
		double                                                     WindingThreshold;                                        // 0x00A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     ExtendBounds;                                            // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SurfaceSearchSteps;                                      // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSolidAtBoundaries;                                      // 0x00BC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyThickenShells;                                     // 0x00BD(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0JZQ[0x2];                                   // 0x00BE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     ThickenShells;                                           // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.VoxelSolidifyMeshesTool
	 * Size -> 0x0008 (FullSize[0x0120] - InheritedSize[0x0118])
	 */
	class UVoxelSolidifyMeshesTool : public UBaseVoxelTool
	{
	public:
		class UVoxelSolidifyMeshesToolProperties*                  SolidifyProperties;                                      // 0x0118(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.VoxelSolidifyMeshesToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoxelSolidifyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.WeldMeshEdgesToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWeldMeshEdgesToolBuilder : public USingleSelectionMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.WeldMeshEdgesToolProperties
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UWeldMeshEdgesToolProperties : public UInteractiveToolPropertySet
	{
	public:
		float                                                      Tolerance;                                               // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyUnique;                                             // 0x00AC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bResolveTJunctions;                                      // 0x00AD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_06JO[0x2];                                   // 0x00AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    InitialEdges;                                            // 0x00B0(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RemainingEdges;                                          // 0x00B4(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.WeldMeshEdgesOperatorFactory
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UWeldMeshEdgesOperatorFactory : public UObject
	{
	public:
		unsigned char                                              UnknownData_RQ9A[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWeldMeshEdgesTool*                                  WeldMeshEdgesTool;                                       // 0x0030(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MeshModelingToolsExp.WeldMeshEdgesTool
	 * Size -> 0x0030 (FullSize[0x00E8] - InheritedSize[0x00B8])
	 */
	class UWeldMeshEdgesTool : public USingleSelectionMeshEditingTool
	{
	public:
		class UWeldMeshEdgesToolProperties*                        Settings;                                                // 0x00B8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMeshOpPreviewWithBackgroundCompute*                 PreviewCompute;                                          // 0x00C0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMeshElementsVisualizer*                             MeshElementsDisplay;                                     // 0x00C8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWeldMeshEdgesOperatorFactory*                       OperatorFactory;                                         // 0x00D0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_M909[0x10];                                  // 0x00D8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
