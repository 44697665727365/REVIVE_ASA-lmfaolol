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
	 * Class ModelingComponents.MultiSelectionMeshEditingToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMultiSelectionMeshEditingToolBuilder : public UInteractiveToolWithToolTargetsBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.MultiSelectionMeshEditingTool
	 * Size -> 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
	 */
	class UMultiSelectionMeshEditingTool : public UMultiSelectionTool
	{
	public:
		TWeakObjectPtr<class UWorld>                               TargetWorld;                                             // 0x00B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.GeometrySelectionEditCommand
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGeometrySelectionEditCommand : public UInteractiveCommand
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.BaseCreateFromSelectedTool
	 * Size -> 0x0048 (FullSize[0x0100] - InheritedSize[0x00B8])
	 */
	class UBaseCreateFromSelectedTool : public UMultiSelectionMeshEditingTool
	{
	public:
		unsigned char                                              UnknownData_3JI1[0x8];                                   // 0x00B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTransformInputsToolProperties*                      TransformProperties;                                     // 0x00C0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCreateMeshObjectTypeProperties*                     OutputTypeProperties;                                    // 0x00C8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBaseCreateFromSelectedHandleSourceProperties*       HandleSourcesProperties;                                 // 0x00D0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMeshOpPreviewWithBackgroundCompute*                 Preview;                                                 // 0x00D8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UTransformProxy*>                             TransformProxies;                                        // 0x00E0(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<class UCombinedTransformGizmo*>                     TransformGizmos;                                         // 0x00F0(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.BaseCreateFromSelectedToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBaseCreateFromSelectedToolBuilder : public UMultiSelectionMeshEditingToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.SingleTargetWithSelectionToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USingleTargetWithSelectionToolBuilder : public UInteractiveToolWithToolTargetsBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.SingleTargetWithSelectionTool
	 * Size -> 0x0068 (FullSize[0x0110] - InheritedSize[0x00A8])
	 */
	class USingleTargetWithSelectionTool : public USingleSelectionTool
	{
	public:
		TWeakObjectPtr<class UWorld>                               TargetWorld;                                             // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CE0A[0x60];                                  // 0x00B0(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.SingleSelectionMeshEditingToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USingleSelectionMeshEditingToolBuilder : public UInteractiveToolWithToolTargetsBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.SingleSelectionMeshEditingTool
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class USingleSelectionMeshEditingTool : public USingleSelectionTool
	{
	public:
		TWeakObjectPtr<class UWorld>                               TargetWorld;                                             // 0x00A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPersistentMeshSelection*                            InputSelection;                                          // 0x00B0(0x0008) ZeroConstructor, Deprecated, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.InteractiveToolActivity
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UInteractiveToolActivity : public UInteractionMechanic
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.MeshTopologySelectionMechanic
	 * Size -> 0x0AC0 (FullSize[0x0AF0] - InheritedSize[0x0030])
	 */
	class UMeshTopologySelectionMechanic : public UInteractionMechanic
	{
	public:
		unsigned char                                              UnknownData_OGKK[0x48];                                  // 0x0030(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMeshTopologySelectionMechanicProperties*            Properties;                                              // 0x0078(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5CFA[0x60];                                  // 0x0080(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMouseHoverBehavior*                                 HoverBehavior;                                           // 0x00E0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USingleClickOrDragInputBehavior*                     ClickOrDragBehavior;                                     // 0x00E8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class URectangleMarqueeMechanic*                           MarqueeMechanic;                                         // 0x00F0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PHQQ[0x5C8];                                 // 0x00F8(0x05C8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APreviewGeometryActor*                               PreviewGeometryActor;                                    // 0x06C0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTriangleSetComponent*                               DrawnTriangleSetComponent;                               // 0x06C8(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_L4E2[0x50];                                  // 0x06D0(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  HighlightedFaceMaterial;                                 // 0x0720(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IY2I[0x3C8];                                 // 0x0728(0x03C8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.BoundarySelectionMechanic
	 * Size -> 0x0000 (FullSize[0x0AF0] - InheritedSize[0x0AF0])
	 */
	class UBoundarySelectionMechanic : public UMeshTopologySelectionMechanic
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.DynamicMeshCommitter
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDynamicMeshCommitter : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.DynamicMeshProvider
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDynamicMeshProvider : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PersistentDynamicMeshSource
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPersistentDynamicMeshSource : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.ToolActivityHost
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UToolActivityHost : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.MeshTopologySelectionMechanicProperties
	 * Size -> 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
	 */
	class UMeshTopologySelectionMechanicProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bSelectVertices;                                         // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSelectEdges;                                            // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSelectFaces;                                            // 0x00AA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSelectEdgeLoops;                                        // 0x00AB(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSelectEdgeRings;                                        // 0x00AC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHitBackFaces;                                           // 0x00AD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableMarquee;                                          // 0x00AE(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMarqueeIgnoreOcclusion;                                 // 0x00AF(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreferProjectedElement;                                 // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSelectDownRay;                                          // 0x00B1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreOcclusion;                                        // 0x00B2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ETIM[0xD];                                   // 0x00B3(0x000D) MISSED OFFSET (PADDING)

	public:
		void SelectAll();
		void InvertSelection();
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.GeometrySelectionEditCommandArguments
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UGeometrySelectionEditCommandArguments : public UInteractiveCommandArguments
	{
	public:
		unsigned char                                              UnknownData_90J6[0x20];                                  // 0x0030(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.GeometrySelectionEditCommandResult
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UGeometrySelectionEditCommandResult : public UInteractiveCommandResult
	{
	public:
		unsigned char                                              UnknownData_HZF0[0x78];                                  // 0x0028(0x0078) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.VoxelProperties
	 * Size -> 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
	 */
	class UVoxelProperties : public UInteractiveToolPropertySet
	{
	public:
		int32_t                                                    VoxelCount;                                              // 0x00A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoSimplify;                                           // 0x00AC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRemoveInternalSurfaces;                                 // 0x00AD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CLVT[0x2];                                   // 0x00AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     SimplifyMaxErrorFactor;                                  // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     CubeRootMinComponentVolume;                              // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.OnAcceptHandleSourcesPropertiesBase
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UOnAcceptHandleSourcesPropertiesBase : public UInteractiveToolPropertySet
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.OnAcceptHandleSourcesProperties
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UOnAcceptHandleSourcesProperties : public UOnAcceptHandleSourcesPropertiesBase
	{
	public:
		EHandleSourcesMethod                                       HandleInputs;                                            // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IUA1[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.BaseCreateFromSelectedHandleSourceProperties
	 * Size -> 0x0028 (FullSize[0x00D8] - InheritedSize[0x00B0])
	 */
	class UBaseCreateFromSelectedHandleSourceProperties : public UOnAcceptHandleSourcesProperties
	{
	public:
		EBaseCreateFromSelectedTargetType                          OutputWriteTo;                                           // 0x00B0(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0NWU[0x3];                                   // 0x00B1(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_T6MZ[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OutputNewName;                                           // 0x00B8(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OutputExistingName;                                      // 0x00C8(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.TransformInputsToolProperties
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UTransformInputsToolProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bShowTransformGizmo;                                     // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_03IW[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.BaseMeshProcessingToolBuilder
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBaseMeshProcessingToolBuilder : public UInteractiveToolWithToolTargetsBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.BaseMeshProcessingTool
	 * Size -> 0x0358 (FullSize[0x0400] - InheritedSize[0x00A8])
	 */
	class UBaseMeshProcessingTool : public USingleSelectionTool
	{
	public:
		unsigned char                                              UnknownData_JEEG[0x20];                                  // 0x00A8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMeshOpPreviewWithBackgroundCompute*                 Preview;                                                 // 0x00C8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1X12[0x330];                                 // 0x00D0(0x0330) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.BaseVoxelTool
	 * Size -> 0x0018 (FullSize[0x0118] - InheritedSize[0x0100])
	 */
	class UBaseVoxelTool : public UBaseCreateFromSelectedTool
	{
	public:
		class UVoxelProperties*                                    VoxProperties;                                           // 0x0100(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NKZI[0x10];                                  // 0x0108(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.MeshSurfacePointMeshEditingToolBuilder
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UMeshSurfacePointMeshEditingToolBuilder : public UMeshSurfacePointToolBuilder
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.DynamicMeshReplacementChangeTarget
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UDynamicMeshReplacementChangeTarget : public UObject
	{
	public:
		unsigned char                                              UnknownData_I1P5[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.OctreeDynamicMeshComponent
	 * Size -> 0x0110 (FullSize[0x0840] - InheritedSize[0x0730])
	 */
	class UOctreeDynamicMeshComponent : public UBaseDynamicMeshComponent
	{
	public:
		unsigned char                                              UnknownData_FZSW[0x50];                                  // 0x0730(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDynamicMesh*                                        MeshObject;                                              // 0x0780(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MF0M[0xB8];                                  // 0x0788(0x00B8) MISSED OFFSET (PADDING)

	public:
		void SetDynamicMesh(class UDynamicMesh* NewMesh);
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.LineSetComponent
	 * Size -> 0x0080 (FullSize[0x0740] - InheritedSize[0x06C0])
	 */
	class ULineSetComponent : public UMeshComponent
	{
	public:
		class UMaterialInterface*                                  LineMaterial;                                            // 0x06C0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FBoxSphereBounds                                    Bounds;                                                  // 0x06C8(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bBoundsDirty;                                            // 0x0700(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7S1I[0x3F];                                  // 0x0701(0x003F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.MeshElementsVisualizerProperties
	 * Size -> 0x0028 (FullSize[0x00D0] - InheritedSize[0x00A8])
	 */
	class UMeshElementsVisualizerProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bVisible;                                                // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowWireframe;                                          // 0x00A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowBorders;                                            // 0x00AA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowUVSeams;                                            // 0x00AB(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowNormalSeams;                                        // 0x00AC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowColorSeams;                                         // 0x00AD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OAWZ[0x2];                                   // 0x00AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ThicknessScale;                                          // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              WireframeColor;                                          // 0x00B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              BoundaryEdgeColor;                                       // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              UVSeamColor;                                             // 0x00BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              NormalSeamColor;                                         // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              ColorSeamColor;                                          // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DepthBias;                                               // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAdjustDepthBiasUsingMeshSize;                           // 0x00CC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5JSI[0x3];                                   // 0x00CD(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PreviewGeometry
	 * Size -> 0x00A8 (FullSize[0x00D0] - InheritedSize[0x0028])
	 */
	class UPreviewGeometry : public UObject
	{
	public:
		class APreviewGeometryActor*                               ParentActor;                                             // 0x0028(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, class ULineSetComponent*>              LineSets;                                                // 0x0030(0x0050) ExportObject, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic
		TMap<class FString, class UPointSetComponent*>             PointSets;                                               // 0x0080(0x0050) ExportObject, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic

	public:
		bool SetPointSetVisibility(const class FString& PointSetIdentifier, bool bVisible);
		bool SetPointSetMaterial(const class FString& PointSetIdentifier, class UMaterialInterface* NewMaterial);
		bool SetLineSetVisibility(const class FString& LineSetIdentifier, bool bVisible);
		bool SetLineSetMaterial(const class FString& LineSetIdentifier, class UMaterialInterface* NewMaterial);
		void SetAllPointSetsMaterial(class UMaterialInterface* Material);
		void SetAllLineSetsMaterial(class UMaterialInterface* Material);
		bool RemovePointSet(const class FString& PointSetIdentifier, bool bDestroy);
		bool RemoveLineSet(const class FString& LineSetIdentifier, bool bDestroy);
		void RemoveAllPointSets(bool bDestroy);
		void RemoveAllLineSets(bool bDestroy);
		class APreviewGeometryActor* GetActor();
		class UPointSetComponent* FindPointSet(const class FString& PointSetIdentifier);
		class ULineSetComponent* FindLineSet(const class FString& LineSetIdentifier);
		void Disconnect();
		void CreateInWorld(class UWorld* World, const struct FTransform& WithTransform);
		class UPointSetComponent* AddPointSet(const class FString& PointSetIdentifier);
		class ULineSetComponent* AddLineSet(const class FString& LineSetIdentifier);
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.MeshElementsVisualizer
	 * Size -> 0x0028 (FullSize[0x00F8] - InheritedSize[0x00D0])
	 */
	class UMeshElementsVisualizer : public UPreviewGeometry
	{
	public:
		class UMeshElementsVisualizerProperties*                   Settings;                                                // 0x00D0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMeshWireframeComponent*                             WireframeComponent;                                      // 0x00D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PO7G[0x18];                                  // 0x00E0(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.MeshWireframeComponent
	 * Size -> 0x00A0 (FullSize[0x0760] - InheritedSize[0x06C0])
	 */
	class UMeshWireframeComponent : public UMeshComponent
	{
	public:
		float                                                      LineDepthBias;                                           // 0x06C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LineDepthBiasSizeScale;                                  // 0x06C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ThicknessScale;                                          // 0x06C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableWireframe;                                        // 0x06CC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VLMY[0x3];                                   // 0x06CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FColor                                              WireframeColor;                                          // 0x06D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WireframeThickness;                                      // 0x06D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableBoundaryEdges;                                    // 0x06D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GGVG[0x3];                                   // 0x06D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FColor                                              BoundaryEdgeColor;                                       // 0x06DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoundaryEdgeThickness;                                   // 0x06E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableUVSeams;                                          // 0x06E4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GKGW[0x3];                                   // 0x06E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FColor                                              UVSeamColor;                                             // 0x06E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UVSeamThickness;                                         // 0x06EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableNormalSeams;                                      // 0x06F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_07QW[0x3];                                   // 0x06F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FColor                                              NormalSeamColor;                                         // 0x06F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NormalSeamThickness;                                     // 0x06F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableColorSeams;                                       // 0x06FC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KZ63[0x3];                                   // 0x06FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FColor                                              ColorSeamColor;                                          // 0x0700(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ColorSeamThickness;                                      // 0x0704(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  LineMaterial;                                            // 0x0708(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FBoxSphereBounds                                    LocalBounds;                                             // 0x0710(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Z1XI[0x18];                                  // 0x0748(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PointSetComponent
	 * Size -> 0x0080 (FullSize[0x0740] - InheritedSize[0x06C0])
	 */
	class UPointSetComponent : public UMeshComponent
	{
	public:
		class UMaterialInterface*                                  PointMaterial;                                           // 0x06C0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FBoxSphereBounds                                    Bounds;                                                  // 0x06C8(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bBoundsDirty;                                            // 0x0700(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WZ2C[0x3F];                                  // 0x0701(0x003F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PreviewMesh
	 * Size -> 0x0118 (FullSize[0x0140] - InheritedSize[0x0028])
	 */
	class UPreviewMesh : public UObject
	{
	public:
		unsigned char                                              UnknownData_SB1M[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bBuildSpatialDataStructure;                              // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TD6U[0xF];                                   // 0x0041(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDynamicMeshComponent*                               DynamicMeshComponent;                                    // 0x0050(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XL87[0xE8];                                  // 0x0058(0x00E8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PolyEditPreviewMesh
	 * Size -> 0x0410 (FullSize[0x0550] - InheritedSize[0x0140])
	 */
	class UPolyEditPreviewMesh : public UPreviewMesh
	{
	public:
		unsigned char                                              UnknownData_G1AZ[0x410];                                 // 0x0140(0x0410) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PreviewGeometryActor
	 * Size -> 0x0000 (FullSize[0x04C0] - InheritedSize[0x04C0])
	 */
	class APreviewGeometryActor : public AInternalToolFrameworkActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.TriangleSetComponent
	 * Size -> 0x0100 (FullSize[0x07C0] - InheritedSize[0x06C0])
	 */
	class UTriangleSetComponent : public UMeshComponent
	{
	public:
		struct FBoxSphereBounds                                    Bounds;                                                  // 0x06C0(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bBoundsDirty;                                            // 0x06F8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JV8F[0xC7];                                  // 0x06F9(0x00C7) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.UVLayoutPreviewProperties
	 * Size -> 0x0028 (FullSize[0x00D0] - InheritedSize[0x00A8])
	 */
	class UUVLayoutPreviewProperties : public UInteractiveToolPropertySet
	{
	public:
		bool                                                       bEnabled;                                                // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DC0A[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EUVLayoutPreviewSide                                       Side;                                                    // 0x00AC(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YBX2[0x3];                                   // 0x00AD(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      Scale;                                                   // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OGO1[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Offset;                                                  // 0x00B8(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowWireframe;                                          // 0x00C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HXU3[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.UVLayoutPreview
	 * Size -> 0x0138 (FullSize[0x0160] - InheritedSize[0x0028])
	 */
	class UUVLayoutPreview : public UObject
	{
	public:
		class UUVLayoutPreviewProperties*                          Settings;                                                // 0x0028(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPreviewMesh*                                        PreviewMesh;                                             // 0x0030(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTriangleSetComponent*                               TriangleComponent;                                       // 0x0038(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowBackingRectangle;                                   // 0x0040(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ADW2[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  BackingRectangleMaterial;                                // 0x0048(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0AAB[0x110];                                 // 0x0050(0x0110) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.CollectSurfacePathMechanic
	 * Size -> 0x0590 (FullSize[0x05C0] - InheritedSize[0x0030])
	 */
	class UCollectSurfacePathMechanic : public UInteractionMechanic
	{
	public:
		unsigned char                                              UnknownData_5DIC[0x590];                                 // 0x0030(0x0590) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.ConstructionPlaneMechanic
	 * Size -> 0x00C0 (FullSize[0x00F0] - InheritedSize[0x0030])
	 */
	class UConstructionPlaneMechanic : public UInteractionMechanic
	{
	public:
		unsigned char                                              UnknownData_3MC4[0x98];                                  // 0x0030(0x0098) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCombinedTransformGizmo*                             PlaneTransformGizmo;                                     // 0x00C8(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTransformProxy*                                     PlaneTransformProxy;                                     // 0x00D0(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PKW6[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USingleClickInputBehavior*                           ClickToSetPlaneBehavior;                                 // 0x00E0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULocalSingleClickInputBehavior*                      MiddleClickToSetGizmoBehavior;                           // 0x00E8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.CurveControlPointsMechanic
	 * Size -> 0x0650 (FullSize[0x0680] - InheritedSize[0x0030])
	 */
	class UCurveControlPointsMechanic : public UInteractionMechanic
	{
	public:
		unsigned char                                              UnknownData_WO10[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USingleClickInputBehavior*                           ClickBehavior;                                           // 0x0040(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMouseHoverBehavior*                                 HoverBehavior;                                           // 0x0048(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CARQ[0x498];                                 // 0x0050(0x0498) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APreviewGeometryActor*                               PreviewGeometryActor;                                    // 0x04E8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPointSetComponent*                                  DrawnControlPoints;                                      // 0x04F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULineSetComponent*                                   DrawnControlSegments;                                    // 0x04F8(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPointSetComponent*                                  PreviewPoint;                                            // 0x0500(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULineSetComponent*                                   PreviewSegment;                                          // 0x0508(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QMJQ[0x78];                                  // 0x0510(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTransformProxy*                                     PointTransformProxy;                                     // 0x0588(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCombinedTransformGizmo*                             PointTransformGizmo;                                     // 0x0590(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3QR2[0xE8];                                  // 0x0598(0x00E8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.DragAlignmentMechanic
	 * Size -> 0x0240 (FullSize[0x0270] - InheritedSize[0x0030])
	 */
	class UDragAlignmentMechanic : public UInteractionMechanic
	{
	public:
		unsigned char                                              UnknownData_9D0H[0x240];                                 // 0x0030(0x0240) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.DragAlignmentInteraction
	 * Size -> 0x02A8 (FullSize[0x02D0] - InheritedSize[0x0028])
	 */
	class UDragAlignmentInteraction : public UObject
	{
	public:
		unsigned char                                              UnknownData_G4L3[0x2A8];                                 // 0x0028(0x02A8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.LatticeControlPointsMechanic
	 * Size -> 0x04D0 (FullSize[0x0500] - InheritedSize[0x0030])
	 */
	class ULatticeControlPointsMechanic : public UInteractionMechanic
	{
	public:
		unsigned char                                              UnknownData_3JB3[0x1F0];                                 // 0x0030(0x01F0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APreviewGeometryActor*                               PreviewGeometryActor;                                    // 0x0220(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPointSetComponent*                                  DrawnControlPoints;                                      // 0x0228(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULineSetComponent*                                   DrawnLatticeEdges;                                       // 0x0230(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I0PS[0xA8];                                  // 0x0238(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTransformProxy*                                     PointTransformProxy;                                     // 0x02E0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCombinedTransformGizmo*                             PointTransformGizmo;                                     // 0x02E8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1375[0x58];                                  // 0x02F0(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URectangleMarqueeMechanic*                           MarqueeMechanic;                                         // 0x0348(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QONA[0x1B0];                                 // 0x0350(0x01B0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PlaneDistanceFromHitMechanic
	 * Size -> 0x04F0 (FullSize[0x0520] - InheritedSize[0x0030])
	 */
	class UPlaneDistanceFromHitMechanic : public UInteractionMechanic
	{
	public:
		unsigned char                                              UnknownData_QG1Z[0x4F0];                                 // 0x0030(0x04F0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PolyLassoMarqueeMechanic
	 * Size -> 0x01A0 (FullSize[0x01D0] - InheritedSize[0x0030])
	 */
	class UPolyLassoMarqueeMechanic : public UInteractionMechanic
	{
	public:
		unsigned char                                              UnknownData_PIGV[0x58];                                  // 0x0030(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpacingTolerance;                                        // 0x0088(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LineThickness;                                           // 0x008C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        LineColor;                                               // 0x0090(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ClosedColor;                                             // 0x00A0(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableFreehandPolygons;                                 // 0x00B0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableMultiClickPolygons;                               // 0x00B1(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_55WI[0x6];                                   // 0x00B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClickDragInputBehavior*                             ClickDragBehavior;                                       // 0x00B8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMouseHoverBehavior*                                 HoverBehavior;                                           // 0x00C0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7JGH[0x108];                                 // 0x00C8(0x0108) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.RectangleMarqueeMechanic
	 * Size -> 0x01F0 (FullSize[0x0220] - InheritedSize[0x0030])
	 */
	class URectangleMarqueeMechanic : public UInteractionMechanic
	{
	public:
		unsigned char                                              UnknownData_J030[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUseExternalClickDragBehavior;                           // 0x0038(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseExternalUpdateCameraState;                           // 0x0039(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L5RR[0x46];                                  // 0x003A(0x0046) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     OnDragRectangleChangedDeferredThreshold;                 // 0x0080(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JK8H[0x48];                                  // 0x0088(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClickDragInputBehavior*                             ClickDragBehavior;                                       // 0x00D0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IRRL[0x148];                                 // 0x00D8(0x0148) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.RectangleMarqueeInteraction
	 * Size -> 0x01E8 (FullSize[0x0210] - InheritedSize[0x0028])
	 */
	class URectangleMarqueeInteraction : public UObject
	{
	public:
		unsigned char                                              UnknownData_JNMJ[0x1E8];                                 // 0x0028(0x01E8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.SpaceCurveDeformationMechanicPropertySet
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class USpaceCurveDeformationMechanicPropertySet : public UInteractiveToolPropertySet
	{
	public:
		ESpaceCurveControlPointTransformMode                       TransformMode;                                           // 0x00A8(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S88J[0x3];                                   // 0x00A9(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		ESpaceCurveControlPointOriginMode                          TransformOrigin;                                         // 0x00AC(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4DC7[0x3];                                   // 0x00AD(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		float                                                      Softness;                                                // 0x00B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESpaceCurveControlPointFalloffType                         SoftFalloff;                                             // 0x00B4(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HDVX[0x3];                                   // 0x00B5(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.SpaceCurveDeformationMechanic
	 * Size -> 0x02A0 (FullSize[0x02D0] - InheritedSize[0x0030])
	 */
	class USpaceCurveDeformationMechanic : public UInteractionMechanic
	{
	public:
		unsigned char                                              UnknownData_EEO3[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USingleClickInputBehavior*                           ClickBehavior;                                           // 0x0040(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMouseHoverBehavior*                                 HoverBehavior;                                           // 0x0048(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GQBG[0x18];                                  // 0x0050(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USpaceCurveDeformationMechanicPropertySet*           TransformProperties;                                     // 0x0068(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TOAU[0xF8];                                  // 0x0070(0x00F8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APreviewGeometryActor*                               PreviewGeometryActor;                                    // 0x0168(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPointSetComponent*                                  RenderPoints;                                            // 0x0170(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ULineSetComponent*                                   RenderSegments;                                          // 0x0178(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FMJA[0x38];                                  // 0x0180(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTransformProxy*                                     PointTransformProxy;                                     // 0x01B8(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCombinedTransformGizmo*                             PointTransformGizmo;                                     // 0x01C0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KXUV[0x108];                                 // 0x01C8(0x0108) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.SpatialCurveDistanceMechanic
	 * Size -> 0x03E0 (FullSize[0x0410] - InheritedSize[0x0030])
	 */
	class USpatialCurveDistanceMechanic : public UInteractionMechanic
	{
	public:
		unsigned char                                              UnknownData_RMFX[0x3E0];                                 // 0x0030(0x03E0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.MeshOpPreviewWithBackgroundCompute
	 * Size -> 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
	 */
	class UMeshOpPreviewWithBackgroundCompute : public UObject
	{
	public:
		unsigned char                                              UnknownData_GNH5[0x30];                                  // 0x0028(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPreviewMesh*                                        PreviewMesh;                                             // 0x0058(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          StandardMaterials;                                       // 0x0060(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  OverrideMaterial;                                        // 0x0070(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  WorkingMaterial;                                         // 0x0078(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  SecondaryMaterial;                                       // 0x0080(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UWorld>                               PreviewWorld;                                            // 0x0088(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IH1D[0x28];                                  // 0x0090(0x0028) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.ModelingComponentsSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UModelingComponentsSettings : public UDeveloperSettings
	{
	public:
		bool                                                       bEnableRayTracingWhileEditing;                           // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableRayTracing;                                       // 0x0039(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableCollision;                                        // 0x003A(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionTraceFlag                                        CollisionMode;                                           // 0x003B(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_64FL[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.ModelingComponentsEditorSettings
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UModelingComponentsEditorSettings : public UDeveloperSettings
	{
	public:
		EModelingComponentsPlaneVisualizationMode                  GridMode;                                                // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C0VX[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumGridLines;                                            // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GridSpacing;                                             // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GridScale;                                               // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GridSize;                                                // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N5BV[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.ModelingObjectsCreationAPI
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UModelingObjectsCreationAPI : public UObject
	{
	public:
		struct FCreateTextureObjectResult CreateTextureObject(const struct FCreateTextureObjectParams& CreateTexParams);
		struct FCreateMeshObjectResult CreateMeshObject(const struct FCreateMeshObjectParams& CreateMeshParams);
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PreviewMeshActor
	 * Size -> 0x0000 (FullSize[0x04C0] - InheritedSize[0x04C0])
	 */
	class APreviewMeshActor : public AInternalToolFrameworkActor
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.CreateMeshObjectTypeProperties
	 * Size -> 0x0030 (FullSize[0x00D8] - InheritedSize[0x00A8])
	 */
	class UCreateMeshObjectTypeProperties : public UInteractiveToolPropertySet
	{
	public:
		class FString                                              OutputType;                                              // 0x00A8(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              VolumeType;                                              // 0x00B8(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      OutputTypeNamesList;                                     // 0x00C0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bShowVolumeList;                                         // 0x00D0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CWQZ[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (PADDING)

	public:
		bool ShouldShowPropertySet();
		TArray<class FString> GetOutputTypeNamesFunc();
		ECreateObjectTypeHint GetCurrentCreateMeshType();
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.OnAcceptHandleSourcesPropertiesSingle
	 * Size -> 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
	 */
	class UOnAcceptHandleSourcesPropertiesSingle : public UOnAcceptHandleSourcesPropertiesBase
	{
	public:
		EHandleSourcesMethod                                       HandleInputs;                                            // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C9WD[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PolygroupLayersProperties
	 * Size -> 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
	 */
	class UPolygroupLayersProperties : public UInteractiveToolPropertySet
	{
	public:
		class FName                                                ActiveGroupLayer;                                        // 0x00A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      GroupLayersList;                                         // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		TArray<class FString> GetGroupLayersFunc();
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.WeightMapSetProperties
	 * Size -> 0x0020 (FullSize[0x00C8] - InheritedSize[0x00A8])
	 */
	class UWeightMapSetProperties : public UInteractiveToolPropertySet
	{
	public:
		class FName                                                WeightMap;                                               // 0x00A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      WeightMapsList;                                          // 0x00B0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bInvertWeightMap;                                        // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0VM2[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (PADDING)

	public:
		TArray<class FString> GetWeightMapsFunc();
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.GeometrySelectionManager
	 * Size -> 0x0250 (FullSize[0x0278] - InheritedSize[0x0028])
	 */
	class UGeometrySelectionManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_U2JD[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGeometrySelectionEditCommandArguments*              SelectionArguments;                                      // 0x0050(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6IDW[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInteractiveToolsContext*                            ToolsContext;                                            // 0x0060(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2PJU[0x210];                                 // 0x0068(0x0210) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PersistentMeshSelection
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UPersistentMeshSelection : public UObject
	{
	public:
		unsigned char                                              UnknownData_YRO4[0x60];                                  // 0x0028(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PersistentMeshSelectionManager
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UPersistentMeshSelectionManager : public UObject
	{
	public:
		class UInteractiveToolsContext*                            ParentContext;                                           // 0x0028(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPersistentMeshSelection*                            ActiveSelection;                                         // 0x0030(0x0008) ZeroConstructor, Deprecated, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPreviewGeometry*                                    SelectionDisplay;                                        // 0x0038(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PolygonSelectionMechanicProperties
	 * Size -> 0x0000 (FullSize[0x00C0] - InheritedSize[0x00C0])
	 */
	class UPolygonSelectionMechanicProperties : public UMeshTopologySelectionMechanicProperties
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.PolygonSelectionMechanic
	 * Size -> 0x0010 (FullSize[0x0B00] - InheritedSize[0x0AF0])
	 */
	class UPolygonSelectionMechanic : public UMeshTopologySelectionMechanic
	{
	public:
		class UPolygonSelectionMechanicProperties*                 Properties;                                              // 0x0AF0(0x0008) ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X22R[0x8];                                   // 0x0AF8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.ModelingSceneSnappingManager
	 * Size -> 0x0128 (FullSize[0x0150] - InheritedSize[0x0028])
	 */
	class UModelingSceneSnappingManager : public USceneSnappingManager
	{
	public:
		class UInteractiveToolsContext*                            ParentContext;                                           // 0x0028(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_P2KN[0x120];                                 // 0x0030(0x0120) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ModelingComponents.MultiTransformer
	 * Size -> 0x0188 (FullSize[0x01B0] - InheritedSize[0x0028])
	 */
	class UMultiTransformer : public UObject
	{
	public:
		unsigned char                                              UnknownData_5QSK[0x60];                                  // 0x0028(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInteractiveGizmoManager*                            GizmoManager;                                            // 0x0088(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MP6D[0x70];                                  // 0x0090(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCombinedTransformGizmo*                             TransformGizmo;                                          // 0x0100(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTransformProxy*                                     TransformProxy;                                          // 0x0108(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDragAlignmentMechanic*                              DragAlignmentMechanic;                                   // 0x0110(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YPHY[0x98];                                  // 0x0118(0x0098) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
