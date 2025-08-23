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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHeightfieldMinMaxTexture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHeightfieldMinMaxTexture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VirtualHeightfieldMesh.HeightfieldMinMaxTexture");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMaterialExpressionHeightfieldMinMaxTexture.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMaterialExpressionHeightfieldMinMaxTexture::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VirtualHeightfieldMesh.MaterialExpressionHeightfieldMinMaxTexture");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVirtualHeightfieldMesh.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVirtualHeightfieldMesh::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VirtualHeightfieldMesh.VirtualHeightfieldMesh");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x019A4550
	 * 		Name   -> Function VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent.GatherHideFlags
	 * 		Flags  -> (Final, Native, Protected, HasOutParms, Const)
	 * Parameters:
	 * 		bool                                               InOutHidePrimitivesInEditor                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               InOutHidePrimitivesInGame                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVirtualHeightfieldMeshComponent::GatherHideFlags(bool* InOutHidePrimitivesInEditor, bool* InOutHidePrimitivesInGame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent.GatherHideFlags");
		
		UVirtualHeightfieldMeshComponent_GatherHideFlags_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InOutHidePrimitivesInEditor != nullptr)
			*InOutHidePrimitivesInEditor = params.InOutHidePrimitivesInEditor;
		if (InOutHidePrimitivesInGame != nullptr)
			*InOutHidePrimitivesInGame = params.InOutHidePrimitivesInGame;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVirtualHeightfieldMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVirtualHeightfieldMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent");
		return ptr;
	}

}


