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
	 * Class ArkProceduralMeshComponent.ArkProceduralMeshComponent
	 * Size -> 0x0090 (FullSize[0x0750] - InheritedSize[0x06C0])
	 */
	class UArkProceduralMeshComponent : public UMeshComponent
	{
	public:
		unsigned char                                              UnknownData_OP6X[0x8];                                   // 0x06C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bUseComplexAsSimpleCollision;                            // 0x06C8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAsyncCooking;                                        // 0x06C9(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R8OX[0x6];                                   // 0x06CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBodySetup*                                          ProcMeshBodySetup;                                       // 0x06D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableCollisionBuilding;                                // 0x06D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6KFH[0x7];                                   // 0x06D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FArkProcMeshSection>                         ProcMeshSections;                                        // 0x06E0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FKConvexElem>                                CollisionConvexElems;                                    // 0x06F0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FBoxSphereBounds                                    LocalBounds;                                             // 0x0700(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		TArray<class UBodySetup*>                                  AsyncBodySetupQueue;                                     // 0x0738(0x0010) ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AQQQ[0x8];                                   // 0x0748(0x0008) MISSED OFFSET (PADDING)

	public:
		void UpdateMeshSection_LinearColor(int32_t SectionIndex, TArray<struct FVector3f> Vertices, TArray<struct FVector3f> Normals, TArray<struct FVector2f> UV0, TArray<struct FVector2f> UV1, TArray<struct FVector2f> UV2, TArray<struct FVector2f> UV3, TArray<struct FLinearColor> VertexColors, TArray<struct FArkProcMeshTangent> Tangents);
		void UpdateMeshSection(int32_t SectionIndex, TArray<struct FVector3f> Vertices, TArray<struct FVector3f> Normals, TArray<struct FVector2f> UV0, TArray<struct FColor> VertexColors, TArray<struct FArkProcMeshTangent> Tangents);
		void SetMeshSectionVisible(int32_t SectionIndex, bool bNewVisibility);
		bool IsMeshSectionVisible(int32_t SectionIndex);
		int32_t GetNumSections();
		void CreateMeshSection_LinearColor(int32_t SectionIndex, TArray<struct FVector3f> Vertices, TArray<int32_t> Triangles, TArray<struct FVector3f> Normals, TArray<struct FVector2f> UV0, TArray<struct FVector2f> UV1, TArray<struct FVector2f> UV2, TArray<struct FVector2f> UV3, TArray<struct FLinearColor> VertexColors, TArray<struct FArkProcMeshTangent> Tangents, bool bCreateCollision);
		void CreateMeshSection(int32_t SectionIndex, TArray<struct FVector3f> Vertices, TArray<int32_t> Triangles, TArray<struct FVector3f> Normals, TArray<struct FVector2f> UV0, TArray<struct FColor> VertexColors, TArray<struct FArkProcMeshTangent> Tangents, bool bCreateCollision);
		void ClearMeshSection(int32_t SectionIndex);
		void ClearCollisionConvexMeshes();
		void ClearAllMeshSections();
		void AddCollisionConvexMesh(TArray<struct FVector> ConvexVerts);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
