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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.UpdateMeshSection_LinearColor
	 */
	struct UArkProceduralMeshComponent_UpdateMeshSection_LinearColor_Params
	{
	public:
		int32_t                                                    SectionIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QYT2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVector3f>                                   Vertices;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FVector3f>                                   Normals;                                                 // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FVector2f>                                   UV0;                                                     // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FVector2f>                                   UV1;                                                     // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		TArray<struct FVector2f>                                   UV2;                                                     // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		TArray<struct FVector2f>                                   UV3;                                                     // 0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		TArray<struct FLinearColor>                                VertexColors;                                            // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FArkProcMeshTangent>                         Tangents;                                                // 0x0078(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.UpdateMeshSection
	 */
	struct UArkProceduralMeshComponent_UpdateMeshSection_Params
	{
	public:
		int32_t                                                    SectionIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EIXC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVector3f>                                   Vertices;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FVector3f>                                   Normals;                                                 // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FVector2f>                                   UV0;                                                     // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FColor>                                      VertexColors;                                            // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FArkProcMeshTangent>                         Tangents;                                                // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.SetMeshSectionVisible
	 */
	struct UArkProceduralMeshComponent_SetMeshSectionVisible_Params
	{
	public:
		int32_t                                                    SectionIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bNewVisibility;                                          // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.IsMeshSectionVisible
	 */
	struct UArkProceduralMeshComponent_IsMeshSectionVisible_Params
	{
	public:
		int32_t                                                    SectionIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.GetNumSections
	 */
	struct UArkProceduralMeshComponent_GetNumSections_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.CreateMeshSection_LinearColor
	 */
	struct UArkProceduralMeshComponent_CreateMeshSection_LinearColor_Params
	{
	public:
		int32_t                                                    SectionIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1H2M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVector3f>                                   Vertices;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            Triangles;                                               // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FVector3f>                                   Normals;                                                 // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FVector2f>                                   UV0;                                                     // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FVector2f>                                   UV1;                                                     // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		TArray<struct FVector2f>                                   UV2;                                                     // 0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		TArray<struct FVector2f>                                   UV3;                                                     // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
		TArray<struct FLinearColor>                                VertexColors;                                            // 0x0078(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FArkProcMeshTangent>                         Tangents;                                                // 0x0088(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bCreateCollision;                                        // 0x0098(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.CreateMeshSection
	 */
	struct UArkProceduralMeshComponent_CreateMeshSection_Params
	{
	public:
		int32_t                                                    SectionIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G0PP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVector3f>                                   Vertices;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<int32_t>                                            Triangles;                                               // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FVector3f>                                   Normals;                                                 // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FVector2f>                                   UV0;                                                     // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FColor>                                      VertexColors;                                            // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FArkProcMeshTangent>                         Tangents;                                                // 0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bCreateCollision;                                        // 0x0068(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.ClearMeshSection
	 */
	struct UArkProceduralMeshComponent_ClearMeshSection_Params
	{
	public:
		int32_t                                                    SectionIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.ClearCollisionConvexMeshes
	 */
	struct UArkProceduralMeshComponent_ClearCollisionConvexMeshes_Params
	{	};

	/**
	 * Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.ClearAllMeshSections
	 */
	struct UArkProceduralMeshComponent_ClearAllMeshSections_Params
	{	};

	/**
	 * Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.AddCollisionConvexMesh
	 */
	struct UArkProceduralMeshComponent_AddCollisionConvexMesh_Params
	{
	public:
		TArray<struct FVector>                                     ConvexVerts;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
