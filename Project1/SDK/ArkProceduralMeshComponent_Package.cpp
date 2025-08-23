/**
 * Name: Ark_Survival_Ascended
 * Version: 0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0257C740
	 * 		Name   -> Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.UpdateMeshSection_LinearColor
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		int32_t                                            SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector3f>                           Vertices                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector3f>                           Normals                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2f>                           UV0                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2f>                           UV1                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2f>                           UV2                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2f>                           UV3                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLinearColor>                        VertexColors                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FArkProcMeshTangent>                 Tangents                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UArkProceduralMeshComponent::UpdateMeshSection_LinearColor(int32_t SectionIndex, TArray<struct FVector3f> Vertices, TArray<struct FVector3f> Normals, TArray<struct FVector2f> UV0, TArray<struct FVector2f> UV1, TArray<struct FVector2f> UV2, TArray<struct FVector2f> UV3, TArray<struct FLinearColor> VertexColors, TArray<struct FArkProcMeshTangent> Tangents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.UpdateMeshSection_LinearColor");
		
		UArkProceduralMeshComponent_UpdateMeshSection_LinearColor_Params params {};
		params.SectionIndex = SectionIndex;
		params.Vertices = Vertices;
		params.Normals = Normals;
		params.UV0 = UV0;
		params.UV1 = UV1;
		params.UV2 = UV2;
		params.UV3 = UV3;
		params.VertexColors = VertexColors;
		params.Tangents = Tangents;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0257CDE0
	 * 		Name   -> Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.UpdateMeshSection
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		int32_t                                            SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector3f>                           Vertices                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector3f>                           Normals                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2f>                           UV0                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FColor>                              VertexColors                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FArkProcMeshTangent>                 Tangents                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UArkProceduralMeshComponent::UpdateMeshSection(int32_t SectionIndex, TArray<struct FVector3f> Vertices, TArray<struct FVector3f> Normals, TArray<struct FVector2f> UV0, TArray<struct FColor> VertexColors, TArray<struct FArkProcMeshTangent> Tangents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.UpdateMeshSection");
		
		UArkProceduralMeshComponent_UpdateMeshSection_Params params {};
		params.SectionIndex = SectionIndex;
		params.Vertices = Vertices;
		params.Normals = Normals;
		params.UV0 = UV0;
		params.VertexColors = VertexColors;
		params.Tangents = Tangents;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0257C360
	 * 		Name   -> Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.SetMeshSectionVisible
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNewVisibility                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArkProceduralMeshComponent::SetMeshSectionVisible(int32_t SectionIndex, bool bNewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.SetMeshSectionVisible");
		
		UArkProceduralMeshComponent_SetMeshSectionVisible_Params params {};
		params.SectionIndex = SectionIndex;
		params.bNewVisibility = bNewVisibility;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0257C250
	 * 		Name   -> Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.IsMeshSectionVisible
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UArkProceduralMeshComponent::IsMeshSectionVisible(int32_t SectionIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.IsMeshSectionVisible");
		
		UArkProceduralMeshComponent_IsMeshSectionVisible_Params params {};
		params.SectionIndex = SectionIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0257C230
	 * 		Name   -> Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.GetNumSections
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UArkProceduralMeshComponent::GetNumSections()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.GetNumSections");
		
		UArkProceduralMeshComponent_GetNumSections_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0257D290
	 * 		Name   -> Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.CreateMeshSection_LinearColor
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		int32_t                                            SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector3f>                           Vertices                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Triangles                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector3f>                           Normals                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2f>                           UV0                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2f>                           UV1                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2f>                           UV2                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2f>                           UV3                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLinearColor>                        VertexColors                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FArkProcMeshTangent>                 Tangents                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bCreateCollision                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArkProceduralMeshComponent::CreateMeshSection_LinearColor(int32_t SectionIndex, TArray<struct FVector3f> Vertices, TArray<int32_t> Triangles, TArray<struct FVector3f> Normals, TArray<struct FVector2f> UV0, TArray<struct FVector2f> UV1, TArray<struct FVector2f> UV2, TArray<struct FVector2f> UV3, TArray<struct FLinearColor> VertexColors, TArray<struct FArkProcMeshTangent> Tangents, bool bCreateCollision)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.CreateMeshSection_LinearColor");
		
		UArkProceduralMeshComponent_CreateMeshSection_LinearColor_Params params {};
		params.SectionIndex = SectionIndex;
		params.Vertices = Vertices;
		params.Triangles = Triangles;
		params.Normals = Normals;
		params.UV0 = UV0;
		params.UV1 = UV1;
		params.UV2 = UV2;
		params.UV3 = UV3;
		params.VertexColors = VertexColors;
		params.Tangents = Tangents;
		params.bCreateCollision = bCreateCollision;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0257DBB0
	 * 		Name   -> Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.CreateMeshSection
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		int32_t                                            SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector3f>                           Vertices                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    Triangles                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector3f>                           Normals                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2f>                           UV0                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FColor>                              VertexColors                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FArkProcMeshTangent>                 Tangents                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bCreateCollision                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArkProceduralMeshComponent::CreateMeshSection(int32_t SectionIndex, TArray<struct FVector3f> Vertices, TArray<int32_t> Triangles, TArray<struct FVector3f> Normals, TArray<struct FVector2f> UV0, TArray<struct FColor> VertexColors, TArray<struct FArkProcMeshTangent> Tangents, bool bCreateCollision)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.CreateMeshSection");
		
		UArkProceduralMeshComponent_CreateMeshSection_Params params {};
		params.SectionIndex = SectionIndex;
		params.Vertices = Vertices;
		params.Triangles = Triangles;
		params.Normals = Normals;
		params.UV0 = UV0;
		params.VertexColors = VertexColors;
		params.Tangents = Tangents;
		params.bCreateCollision = bCreateCollision;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0257C620
	 * 		Name   -> Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.ClearMeshSection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArkProceduralMeshComponent::ClearMeshSection(int32_t SectionIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.ClearMeshSection");
		
		UArkProceduralMeshComponent_ClearMeshSection_Params params {};
		params.SectionIndex = SectionIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0257C0E0
	 * 		Name   -> Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.ClearCollisionConvexMeshes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UArkProceduralMeshComponent::ClearCollisionConvexMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.ClearCollisionConvexMeshes");
		
		UArkProceduralMeshComponent_ClearCollisionConvexMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0257C600
	 * 		Name   -> Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.ClearAllMeshSections
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UArkProceduralMeshComponent::ClearAllMeshSections()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.ClearAllMeshSections");
		
		UArkProceduralMeshComponent_ClearAllMeshSections_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0257C120
	 * 		Name   -> Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.AddCollisionConvexMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FVector>                             ConvexVerts                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UArkProceduralMeshComponent::AddCollisionConvexMesh(TArray<struct FVector> ConvexVerts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArkProceduralMeshComponent.ArkProceduralMeshComponent.AddCollisionConvexMesh");
		
		UArkProceduralMeshComponent_AddCollisionConvexMesh_Params params {};
		params.ConvexVerts = ConvexVerts;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArkProceduralMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArkProceduralMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ArkProceduralMeshComponent.ArkProceduralMeshComponent");
		return ptr;
	}

}


