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
	 * Class GeometryFramework.BaseDynamicMeshComponent
	 * Size -> 0x0070 (FullSize[0x0730] - InheritedSize[0x06C0])
	 */
	class UBaseDynamicMeshComponent : public UMeshComponent
	{
	public:
		unsigned char                                              UnknownData_DWW7[0x20];                                  // 0x06C0(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bExplicitShowWireframe;                                  // 0x06E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C4SV[0x3];                                   // 0x06E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        WireframeColor;                                          // 0x06E4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDynamicMeshComponentColorOverrideMode                     ColorMode;                                               // 0x06F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4Z5Q[0x3];                                   // 0x06F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FColor                                              ConstantColor;                                           // 0x06F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableFlatShading;                                      // 0x06FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableViewModeOverrides;                                // 0x06FD(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5FUZ[0x2];                                   // 0x06FE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  OverrideRenderMaterial;                                  // 0x0700(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  SecondaryRenderMaterial;                                 // 0x0708(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6XW9[0x1];                                   // 0x0710(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bEnableRayTracing;                                       // 0x0711(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JUEO[0x6];                                   // 0x0712(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInterface*>                          BaseMaterials;                                           // 0x0718(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KWJS[0x8];                                   // 0x0728(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetViewModeOverridesEnabled(bool bEnabled);
		void SetShadowsEnabled(bool bEnabled);
		void SetSecondaryRenderMaterial(class UMaterialInterface* Material);
		void SetSecondaryBuffersVisibility(bool bSetVisible);
		void SetOverrideRenderMaterial(class UMaterialInterface* Material);
		void SetEnableWireframeRenderPass(bool bEnable);
		void SetEnableRaytracing(bool bSetEnabled);
		void SetEnableFlatShading(bool bEnable);
		void SetConstantOverrideColor(const struct FColor& NewColor);
		void SetColorOverrideMode(EDynamicMeshComponentColorOverrideMode NewMode);
		bool HasOverrideRenderMaterial(int32_t K);
		bool GetViewModeOverridesEnabled();
		bool GetShadowsEnabled();
		class UMaterialInterface* GetSecondaryRenderMaterial();
		bool GetSecondaryBuffersVisibility();
		class UMaterialInterface* GetOverrideRenderMaterial(int32_t MaterialIndex);
		bool GetFlatShadingEnabled();
		bool GetEnableWireframeRenderPass();
		bool GetEnableRaytracing();
		class UDynamicMesh* GetDynamicMesh();
		struct FColor GetConstantOverrideColor();
		EDynamicMeshComponentColorOverrideMode GetColorOverrideMode();
		void ClearSecondaryRenderMaterial();
		void ClearOverrideRenderMaterial();
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryFramework.MeshCommandChangeTarget
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMeshCommandChangeTarget : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryFramework.MeshReplacementCommandChangeTarget
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMeshReplacementCommandChangeTarget : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryFramework.MeshVertexCommandChangeTarget
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMeshVertexCommandChangeTarget : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryFramework.DynamicMeshComponent
	 * Size -> 0x0210 (FullSize[0x0940] - InheritedSize[0x0730])
	 */
	class UDynamicMeshComponent : public UBaseDynamicMeshComponent
	{
	public:
		class UDynamicMesh*                                        MeshObject;                                              // 0x0730(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8O34[0xF8];                                  // 0x0738(0x00F8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EDynamicMeshComponentTangentsMode                          TangentsType;                                            // 0x0830(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VO6W[0x3F];                                  // 0x0831(0x003F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ECollisionTraceFlag                                        CollisionType;                                           // 0x0870(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAsyncCooking;                                        // 0x0871(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableComplexCollision;                                 // 0x0872(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDeferCollisionUpdates;                                  // 0x0873(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SRNM[0x4];                                   // 0x0874(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBodySetup*                                          MeshBodySetup;                                           // 0x0878(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RP4O[0x38];                                  // 0x0880(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKAggregateGeom                                     AggGeom;                                                 // 0x08B8(0x0068) Edit, Protected, NativeAccessSpecifierProtected
		TArray<class UBodySetup*>                                  AsyncBodySetupQueue;                                     // 0x0920(0x0010) ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IL28[0x10];                                  // 0x0930(0x0010) MISSED OFFSET (PADDING)

	public:
		bool ValidateMaterialSlots(bool bCreateIfMissing, bool bDeleteExtraSlots);
		void UpdateCollision(bool bOnlyIfPending);
		void SetTangentsType(EDynamicMeshComponentTangentsMode NewTangentsType);
		void SetDynamicMesh(class UDynamicMesh* NewMesh);
		void SetDeferredCollisionUpdatesEnabled(bool bEnabled, bool bImmediateUpdate);
		void SetComplexAsSimpleCollisionEnabled(bool bEnabled, bool bImmediateUpdate);
		EDynamicMeshComponentTangentsMode GetTangentsType();
		void EnableComplexAsSimpleCollision();
		void ConfigureMaterialSet(TArray<class UMaterialInterface*> NewMaterialSet);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryFramework.DynamicMeshActor
	 * Size -> 0x0018 (FullSize[0x04D0] - InheritedSize[0x04B8])
	 */
	class ADynamicMeshActor : public AActor
	{
	public:
		class UDynamicMeshComponent*                               DynamicMeshComponent;                                    // 0x04B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableComputeMeshPool;                                  // 0x04C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T6HP[0x7];                                   // 0x04C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDynamicMeshPool*                                    DynamicMeshPool;                                         // 0x04C8(0x0008) ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		bool ReleaseComputeMesh(class UDynamicMesh* Mesh);
		void ReleaseAllComputeMeshes();
		class UDynamicMeshComponent* GetDynamicMeshComponent();
		class UDynamicMeshPool* GetComputeMeshPool();
		void FreeAllComputeMeshes();
		class UDynamicMesh* AllocateComputeMesh();
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryFramework.DynamicMeshGenerator
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDynamicMeshGenerator : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryFramework.DynamicMesh
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class UDynamicMesh : public UObject
	{
	public:
		unsigned char                                              UnknownData_HT4M[0x48];                                  // 0x0028(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             MeshModifiedBPEvent;                                     // 0x0070(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GPX8[0x20];                                  // 0x0080(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDynamicMeshGenerator*                               MeshGenerator;                                           // 0x00A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableMeshGenerator;                                    // 0x00A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0TGQ[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (PADDING)

	public:
		class UDynamicMesh* ResetToCube();
		class UDynamicMesh* Reset();
		bool IsEmpty();
		int32_t GetTriangleCount();
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryFramework.DynamicMeshPool
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UDynamicMeshPool : public UObject
	{
	public:
		TArray<class UDynamicMesh*>                                CachedMeshes;                                            // 0x0028(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<class UDynamicMesh*>                                AllCreatedMeshes;                                        // 0x0038(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected

	public:
		void ReturnMesh(class UDynamicMesh* Mesh);
		void ReturnAllMeshes();
		class UDynamicMesh* RequestMesh();
		void FreeAllMeshes();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
