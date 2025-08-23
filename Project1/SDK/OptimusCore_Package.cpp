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
	 * 		Name   -> PredefinedFunction UOptimusComputeDataInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusComputeDataInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusComputeDataInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusComponentSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusComponentSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusComponentSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusComponentBindingProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusComponentBindingProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusComponentBindingProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusComputeKernelProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusComputeKernelProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusComputeKernelProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusDataInterfaceProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusDataInterfaceProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusDataInterfaceProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusExecutionDomainProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusExecutionDomainProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusExecutionDomainProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusGeneratedClassDefiner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusGeneratedClassDefiner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusGeneratedClassDefiner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusNodeAdderPinProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusNodeAdderPinProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusNodeAdderPinProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusNodeFunctionLibraryOwner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusNodeFunctionLibraryOwner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusNodeFunctionLibraryOwner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusNodeGraphCollectionOwner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusNodeGraphCollectionOwner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusNodeGraphCollectionOwner");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusNodePinRouter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusNodePinRouter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusNodePinRouter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusParameterBindingProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusParameterBindingProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusParameterBindingProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusPathResolver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusPathResolver::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusPathResolver");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusShaderTextProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusShaderTextProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusShaderTextProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusValueProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusValueProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusValueProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusKernelSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusKernelSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusKernelSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusSceneComponentSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusSceneComponentSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusSceneComponentSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusSkinnedMeshComponentSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusSkinnedMeshComponentSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusSkinnedMeshComponentSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusSkeletalMeshComponentSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusSkeletalMeshComponentSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusSkeletalMeshComponentSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusAnimAttributeDataInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusAnimAttributeDataInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusAnimAttributeDataInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusAnimAttributeDataProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusAnimAttributeDataProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusAnimAttributeDataProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusClothDataInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusClothDataInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusClothDataInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusClothDataProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusClothDataProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusClothDataProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusConnectivityDataInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusConnectivityDataInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusConnectivityDataInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusConnectivityDataProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusConnectivityDataProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusConnectivityDataProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusDebugDrawDataInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusDebugDrawDataInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusDebugDrawDataInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusDebugDrawDataProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusDebugDrawDataProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusDebugDrawDataProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusDuplicateVerticesDataInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusDuplicateVerticesDataInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusDuplicateVerticesDataInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusDuplicateVerticesDataProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusDuplicateVerticesDataProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusDuplicateVerticesDataProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusGraphDataInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusGraphDataInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusGraphDataInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusGraphDataProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusGraphDataProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusGraphDataProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusHalfEdgeDataInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusHalfEdgeDataInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusHalfEdgeDataInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusHalfEdgeDataProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusHalfEdgeDataProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusHalfEdgeDataProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusMorphTargetDataInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusMorphTargetDataInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusMorphTargetDataInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusMorphTargetDataProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusMorphTargetDataProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusMorphTargetDataProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusRawBufferDataInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusRawBufferDataInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusRawBufferDataInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusTransientBufferDataInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusTransientBufferDataInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusTransientBufferDataInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusPersistentBufferDataInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusPersistentBufferDataInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusPersistentBufferDataInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusRawBufferDataProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusRawBufferDataProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusRawBufferDataProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusTransientBufferDataProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusTransientBufferDataProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusTransientBufferDataProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusPersistentBufferDataProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusPersistentBufferDataProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusPersistentBufferDataProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusSceneDataInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusSceneDataInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusSceneDataInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusSceneDataProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusSceneDataProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusSceneDataProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusSkeletonDataInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusSkeletonDataInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusSkeletonDataInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusSkeletonDataProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusSkeletonDataProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusSkeletonDataProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusSkinnedMeshDataInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusSkinnedMeshDataInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusSkinnedMeshDataInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusSkinnedMeshDataProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusSkinnedMeshDataProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusSkinnedMeshDataProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusSkinnedMeshExecDataInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusSkinnedMeshExecDataInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusSkinnedMeshExecDataInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusSkinnedMeshExecDataProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusSkinnedMeshExecDataProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusSkinnedMeshExecDataProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusSkinnedMeshWriteDataInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusSkinnedMeshWriteDataInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusSkinnedMeshWriteDataInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusSkinnedMeshWriteDataProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusSkinnedMeshWriteDataProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusSkinnedMeshWriteDataProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02109390
	 * 		Name   -> Function OptimusCore.OptimusNode.SetGraphPosition
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector2D                                   InPosition                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOptimusNode::SetGraphPosition(const struct FVector2D& InPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNode.SetGraphPosition");
		
		UOptimusNode_SetGraphPosition_Params params {};
		params.InPosition = InPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021095C0
	 * 		Name   -> Function OptimusCore.OptimusNode.GetNodeName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName UOptimusNode::GetNodeName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNode.GetNodeName");
		
		UOptimusNode_GetNodeName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021095F0
	 * 		Name   -> Function OptimusCore.OptimusNode.GetNodeCategory
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName UOptimusNode::GetNodeCategory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNode.GetNodeCategory");
		
		UOptimusNode_GetNodeCategory_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02109370
	 * 		Name   -> Function OptimusCore.OptimusNode.GetGraphPosition
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector2D UOptimusNode::GetGraphPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNode.GetGraphPosition");
		
		UOptimusNode_GetGraphPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02109520
	 * 		Name   -> Function OptimusCore.OptimusNode.GetDisplayName
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FText UOptimusNode::GetDisplayName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNode.GetDisplayName");
		
		UOptimusNode_GetDisplayName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusNode_DataInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusNode_DataInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusNode_DataInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusNode_AnimAttributeDataInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusNode_AnimAttributeDataInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusNode_AnimAttributeDataInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusNode_ComponentSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusNode_ComponentSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusNode_ComponentSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusNode_ComputeKernelBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusNode_ComputeKernelBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusNode_ComputeKernelBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusNode_ComputeKernelFunctionGeneratorClass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusNode_ComputeKernelFunctionGeneratorClass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusNode_ComputeKernelFunctionGeneratorClass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusNode_ComputeKernelFunction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusNode_ComputeKernelFunction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusNode_ComputeKernelFunction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusNode_ConstantValueGeneratorClass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusNode_ConstantValueGeneratorClass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusNode_ConstantValueGeneratorClass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusNode_ConstantValue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusNode_ConstantValue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusNode_ConstantValue");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusNode_CustomComputeKernel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusNode_CustomComputeKernel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusNode_CustomComputeKernel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusNode_FunctionReference.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusNode_FunctionReference::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusNode_FunctionReference");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusNode_ResourceAccessorBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusNode_ResourceAccessorBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusNode_ResourceAccessorBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusNode_GetResource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusNode_GetResource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusNode_GetResource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusNode_GetVariable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusNode_GetVariable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusNode_GetVariable");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusNode_GraphTerminal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusNode_GraphTerminal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusNode_GraphTerminal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusNode_Resource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusNode_Resource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusNode_Resource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusNode_SetResource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusNode_SetResource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusNode_SetResource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusNode_SubGraphReference.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusNode_SubGraphReference::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusNode_SubGraphReference");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusActionStack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusActionStack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusActionStack");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusComponentSourceBinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusComponentSourceBinding::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusComponentSourceBinding");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusComputeGraph.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusComputeGraph::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusComputeGraph");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusComponentSourceBindingContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusComponentSourceBindingContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusComponentSourceBindingContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusVariableContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusVariableContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusVariableContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusResourceContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusResourceContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusResourceContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x020FC700
	 * 		Name   -> Function OptimusCore.OptimusDeformer.GetVariables
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UOptimusVariableDescription*> UOptimusDeformer::GetVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusDeformer.GetVariables");
		
		UOptimusDeformer_GetVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x020FC670
	 * 		Name   -> Function OptimusCore.OptimusDeformer.GetResources
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UOptimusResourceDescription*> UOptimusDeformer::GetResources()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusDeformer.GetResources");
		
		UOptimusDeformer_GetResources_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x020FC5E0
	 * 		Name   -> Function OptimusCore.OptimusDeformer.GetComponentBindings
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UOptimusComponentSourceBinding*> UOptimusDeformer::GetComponentBindings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusDeformer.GetComponentBindings");
		
		UOptimusDeformer_GetComponentBindings_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusDeformer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusDeformer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusDeformer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusDeformerInstanceSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusDeformerInstanceSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusDeformerInstanceSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02101DF0
	 * 		Name   -> Function OptimusCore.OptimusDeformerInstance.SetVectorVariable
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InVariableName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InValue                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOptimusDeformerInstance::SetVectorVariable(const class FName& InVariableName, const struct FVector& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusDeformerInstance.SetVectorVariable");
		
		UOptimusDeformerInstance_SetVectorVariable_Params params {};
		params.InVariableName = InVariableName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02101BC0
	 * 		Name   -> Function OptimusCore.OptimusDeformerInstance.SetVector4Variable
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InVariableName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    InValue                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOptimusDeformerInstance::SetVector4Variable(const class FName& InVariableName, const struct FVector4& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusDeformerInstance.SetVector4Variable");
		
		UOptimusDeformerInstance_SetVector4Variable_Params params {};
		params.InVariableName = InVariableName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02101940
	 * 		Name   -> Function OptimusCore.OptimusDeformerInstance.SetTransformVariable
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InVariableName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  InValue                                                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOptimusDeformerInstance::SetTransformVariable(const class FName& InVariableName, const struct FTransform& InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusDeformerInstance.SetTransformVariable");
		
		UOptimusDeformerInstance_SetTransformVariable_Params params {};
		params.InVariableName = InVariableName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02102200
	 * 		Name   -> Function OptimusCore.OptimusDeformerInstance.SetIntVariable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InVariableName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOptimusDeformerInstance::SetIntVariable(const class FName& InVariableName, int32_t InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusDeformerInstance.SetIntVariable");
		
		UOptimusDeformerInstance_SetIntVariable_Params params {};
		params.InVariableName = InVariableName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02102010
	 * 		Name   -> Function OptimusCore.OptimusDeformerInstance.SetFloatVariable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InVariableName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		double                                             InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOptimusDeformerInstance::SetFloatVariable(const class FName& InVariableName, double InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusDeformerInstance.SetFloatVariable");
		
		UOptimusDeformerInstance_SetFloatVariable_Params params {};
		params.InVariableName = InVariableName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021023A0
	 * 		Name   -> Function OptimusCore.OptimusDeformerInstance.SetBoolVariable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        InVariableName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOptimusDeformerInstance::SetBoolVariable(const class FName& InVariableName, bool InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusDeformerInstance.SetBoolVariable");
		
		UOptimusDeformerInstance_SetBoolVariable_Params params {};
		params.InVariableName = InVariableName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02101910
	 * 		Name   -> Function OptimusCore.OptimusDeformerInstance.GetVariables
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UOptimusVariableDescription*> UOptimusDeformerInstance::GetVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusDeformerInstance.GetVariables");
		
		UOptimusDeformerInstance_GetVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x021017C0
	 * 		Name   -> Function OptimusCore.OptimusDeformerInstance.EnqueueTriggerGraph
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InTriggerGraphName                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOptimusDeformerInstance::EnqueueTriggerGraph(const class FName& InTriggerGraphName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusDeformerInstance.EnqueueTriggerGraph");
		
		UOptimusDeformerInstance_EnqueueTriggerGraph_Params params {};
		params.InTriggerGraphName = InTriggerGraphName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusDeformerInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusDeformerInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusDeformerInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0210BB10
	 * 		Name   -> Function OptimusCore.OptimusNodeGraph.RenameGraph
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOptimusNodeGraph*                           InGraph                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      InNewName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOptimusNodeGraph::RenameGraph(class UOptimusNodeGraph* InGraph, const class FString& InNewName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNodeGraph.RenameGraph");
		
		UOptimusNodeGraph_RenameGraph_Params params {};
		params.InGraph = InGraph;
		params.InNewName = InNewName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0210DF80
	 * 		Name   -> Function OptimusCore.OptimusNodeGraph.RemoveNodes
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UOptimusNode*>                        InNodes                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UOptimusNodeGraph::RemoveNodes(TArray<class UOptimusNode*> InNodes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNodeGraph.RemoveNodes");
		
		UOptimusNodeGraph_RemoveNodes_Params params {};
		params.InNodes = InNodes;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0210E090
	 * 		Name   -> Function OptimusCore.OptimusNodeGraph.RemoveNode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOptimusNode*                                InNode                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOptimusNodeGraph::RemoveNode(class UOptimusNode* InNode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNodeGraph.RemoveNode");
		
		UOptimusNodeGraph_RemoveNode_Params params {};
		params.InNode = InNode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0210D0D0
	 * 		Name   -> Function OptimusCore.OptimusNodeGraph.RemoveLink
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOptimusNodePin*                             InNodeOutputPin                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UOptimusNodePin*                             InNodeInputPin                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOptimusNodeGraph::RemoveLink(class UOptimusNodePin* InNodeOutputPin, class UOptimusNodePin* InNodeInputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNodeGraph.RemoveLink");
		
		UOptimusNodeGraph_RemoveLink_Params params {};
		params.InNodeOutputPin = InNodeOutputPin;
		params.InNodeInputPin = InNodeInputPin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0210CD70
	 * 		Name   -> Function OptimusCore.OptimusNodeGraph.RemoveAllLinks
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOptimusNodePin*                             InNodePin                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOptimusNodeGraph::RemoveAllLinks(class UOptimusNodePin* InNodePin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNodeGraph.RemoveAllLinks");
		
		UOptimusNodeGraph_RemoveAllLinks_Params params {};
		params.InNodePin = InNodePin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0210BCD0
	 * 		Name   -> Function OptimusCore.OptimusNodeGraph.MoveGraph
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOptimusNodeGraph*                           InGraph                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InInsertBefore                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOptimusNodeGraph::MoveGraph(class UOptimusNodeGraph* InGraph, int32_t InInsertBefore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNodeGraph.MoveGraph");
		
		UOptimusNodeGraph_MoveGraph_Params params {};
		params.InGraph = InGraph;
		params.InInsertBefore = InInsertBefore;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0210BEF0
	 * 		Name   -> Function OptimusCore.OptimusNodeGraph.IsSubGraphReference
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UOptimusNode*                                InNode                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOptimusNodeGraph::IsSubGraphReference(class UOptimusNode* InNode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNodeGraph.IsSubGraphReference");
		
		UOptimusNodeGraph_IsSubGraphReference_Params params {};
		params.InNode = InNode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0210C110
	 * 		Name   -> Function OptimusCore.OptimusNodeGraph.IsKernelFunction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UOptimusNode*                                InNode                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOptimusNodeGraph::IsKernelFunction(class UOptimusNode* InNode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNodeGraph.IsKernelFunction");
		
		UOptimusNodeGraph_IsKernelFunction_Params params {};
		params.InNode = InNode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0210C000
	 * 		Name   -> Function OptimusCore.OptimusNodeGraph.IsFunctionReference
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UOptimusNode*                                InNode                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOptimusNodeGraph::IsFunctionReference(class UOptimusNode* InNode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNodeGraph.IsFunctionReference");
		
		UOptimusNodeGraph_IsFunctionReference_Params params {};
		params.InNode = InNode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0210F190
	 * 		Name   -> Function OptimusCore.OptimusNodeGraph.IsFunctionGraph
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UOptimusNodeGraph::IsFunctionGraph()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNodeGraph.IsFunctionGraph");
		
		UOptimusNodeGraph_IsFunctionGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0210F1B0
	 * 		Name   -> Function OptimusCore.OptimusNodeGraph.IsExecutionGraph
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UOptimusNodeGraph::IsExecutionGraph()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNodeGraph.IsExecutionGraph");
		
		UOptimusNodeGraph_IsExecutionGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0210C220
	 * 		Name   -> Function OptimusCore.OptimusNodeGraph.IsCustomKernel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UOptimusNode*                                InNode                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOptimusNodeGraph::IsCustomKernel(class UOptimusNode* InNode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNodeGraph.IsCustomKernel");
		
		UOptimusNodeGraph_IsCustomKernel_Params params {};
		params.InNode = InNode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0210F1D0
	 * 		Name   -> Function OptimusCore.OptimusNodeGraph.GetGraphType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EOptimusNodeGraphType UOptimusNodeGraph::GetGraphType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNodeGraph.GetGraphType");
		
		UOptimusNodeGraph_GetGraphType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0210BE60
	 * 		Name   -> Function OptimusCore.OptimusNodeGraph.GetGraphs
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UOptimusNodeGraph*> UOptimusNodeGraph::GetGraphs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNodeGraph.GetGraphs");
		
		UOptimusNodeGraph_GetGraphs_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0210F160
	 * 		Name   -> Function OptimusCore.OptimusNodeGraph.GetGraphIndex
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UOptimusNodeGraph::GetGraphIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNodeGraph.GetGraphIndex");
		
		UOptimusNodeGraph_GetGraphIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0210C330
	 * 		Name   -> Function OptimusCore.OptimusNodeGraph.ExpandCollapsedNodes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOptimusNode*                                InFunctionNode                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UOptimusNode*> UOptimusNodeGraph::ExpandCollapsedNodes(class UOptimusNode* InFunctionNode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNodeGraph.ExpandCollapsedNodes");
		
		UOptimusNodeGraph_ExpandCollapsedNodes_Params params {};
		params.InFunctionNode = InFunctionNode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0210DA70
	 * 		Name   -> Function OptimusCore.OptimusNodeGraph.DuplicateNodes
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UOptimusNode*>                        InNodes                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   InPosition                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOptimusNodeGraph::DuplicateNodes(TArray<class UOptimusNode*> InNodes, const struct FVector2D& InPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNodeGraph.DuplicateNodes");
		
		UOptimusNodeGraph_DuplicateNodes_Params params {};
		params.InNodes = InNodes;
		params.InPosition = InPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0210DCA0
	 * 		Name   -> Function OptimusCore.OptimusNodeGraph.DuplicateNode
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UOptimusNode*                                InNode                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   InPosition                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOptimusNode* UOptimusNodeGraph::DuplicateNode(class UOptimusNode* InNode, const struct FVector2D& InPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNodeGraph.DuplicateNode");
		
		UOptimusNodeGraph_DuplicateNode_Params params {};
		params.InNode = InNode;
		params.InPosition = InPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0210C640
	 * 		Name   -> Function OptimusCore.OptimusNodeGraph.ConvertFunctionToCustomKernel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOptimusNode*                                InKernelFunction                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOptimusNode* UOptimusNodeGraph::ConvertFunctionToCustomKernel(class UOptimusNode* InKernelFunction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNodeGraph.ConvertFunctionToCustomKernel");
		
		UOptimusNodeGraph_ConvertFunctionToCustomKernel_Params params {};
		params.InKernelFunction = InKernelFunction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0210C730
	 * 		Name   -> Function OptimusCore.OptimusNodeGraph.ConvertCustomKernelToFunction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOptimusNode*                                InCustomKernel                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOptimusNode* UOptimusNodeGraph::ConvertCustomKernelToFunction(class UOptimusNode* InCustomKernel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNodeGraph.ConvertCustomKernelToFunction");
		
		UOptimusNodeGraph_ConvertCustomKernelToFunction_Params params {};
		params.InCustomKernel = InCustomKernel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0210C440
	 * 		Name   -> Function OptimusCore.OptimusNodeGraph.CollapseNodesToSubGraph
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UOptimusNode*>                        InNodes                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UOptimusNode* UOptimusNodeGraph::CollapseNodesToSubGraph(TArray<class UOptimusNode*> InNodes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNodeGraph.CollapseNodesToSubGraph");
		
		UOptimusNodeGraph_CollapseNodesToSubGraph_Params params {};
		params.InNodes = InNodes;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0210C550
	 * 		Name   -> Function OptimusCore.OptimusNodeGraph.CollapseNodesToFunction
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class UOptimusNode*>                        InNodes                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UOptimusNode* UOptimusNodeGraph::CollapseNodesToFunction(TArray<class UOptimusNode*> InNodes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNodeGraph.CollapseNodesToFunction");
		
		UOptimusNodeGraph_CollapseNodesToFunction_Params params {};
		params.InNodes = InNodes;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0210E3C0
	 * 		Name   -> Function OptimusCore.OptimusNodeGraph.AddVariableGetNode
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UOptimusVariableDescription*                 InVariableDesc                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   InPosition                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOptimusNode* UOptimusNodeGraph::AddVariableGetNode(class UOptimusVariableDescription* InVariableDesc, const struct FVector2D& InPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNodeGraph.AddVariableGetNode");
		
		UOptimusNodeGraph_AddVariableGetNode_Params params {};
		params.InVariableDesc = InVariableDesc;
		params.InPosition = InPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0210ED90
	 * 		Name   -> Function OptimusCore.OptimusNodeGraph.AddValueNode
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FOptimusDataTypeRef                         InDataTypeRef                                              (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   InPosition                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOptimusNode* UOptimusNodeGraph::AddValueNode(const struct FOptimusDataTypeRef& InDataTypeRef, const struct FVector2D& InPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNodeGraph.AddValueNode");
		
		UOptimusNodeGraph_AddValueNode_Params params {};
		params.InDataTypeRef = InDataTypeRef;
		params.InPosition = InPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0210E5A0
	 * 		Name   -> Function OptimusCore.OptimusNodeGraph.AddResourceSetNode
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UOptimusResourceDescription*                 InResourceDesc                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   InPosition                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOptimusNode* UOptimusNodeGraph::AddResourceSetNode(class UOptimusResourceDescription* InResourceDesc, const struct FVector2D& InPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNodeGraph.AddResourceSetNode");
		
		UOptimusNodeGraph_AddResourceSetNode_Params params {};
		params.InResourceDesc = InResourceDesc;
		params.InPosition = InPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0210E960
	 * 		Name   -> Function OptimusCore.OptimusNodeGraph.AddResourceNode
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UOptimusResourceDescription*                 InResourceDesc                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   InPosition                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOptimusNode* UOptimusNodeGraph::AddResourceNode(class UOptimusResourceDescription* InResourceDesc, const struct FVector2D& InPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNodeGraph.AddResourceNode");
		
		UOptimusNodeGraph_AddResourceNode_Params params {};
		params.InResourceDesc = InResourceDesc;
		params.InPosition = InPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0210E780
	 * 		Name   -> Function OptimusCore.OptimusNodeGraph.AddResourceGetNode
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UOptimusResourceDescription*                 InResourceDesc                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   InPosition                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOptimusNode* UOptimusNodeGraph::AddResourceGetNode(class UOptimusResourceDescription* InResourceDesc, const struct FVector2D& InPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNodeGraph.AddResourceGetNode");
		
		UOptimusNodeGraph_AddResourceGetNode_Params params {};
		params.InResourceDesc = InResourceDesc;
		params.InPosition = InPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0210EFA0
	 * 		Name   -> Function OptimusCore.OptimusNodeGraph.AddNode
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      InNodeClass                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   InPosition                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOptimusNode* UOptimusNodeGraph::AddNode(class UClass* InNodeClass, const struct FVector2D& InPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNodeGraph.AddNode");
		
		UOptimusNodeGraph_AddNode_Params params {};
		params.InNodeClass = InNodeClass;
		params.InPosition = InPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0210D3A0
	 * 		Name   -> Function OptimusCore.OptimusNodeGraph.AddLink
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UOptimusNodePin*                             InNodeOutputPin                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UOptimusNodePin*                             InNodeInputPin                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UOptimusNodeGraph::AddLink(class UOptimusNodePin* InNodeOutputPin, class UOptimusNodePin* InNodeInputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNodeGraph.AddLink");
		
		UOptimusNodeGraph_AddLink_Params params {};
		params.InNodeOutputPin = InNodeOutputPin;
		params.InNodeInputPin = InNodeInputPin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0210EB40
	 * 		Name   -> Function OptimusCore.OptimusNodeGraph.AddDataInterfaceNode
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      InDataInterfaceClass                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   InPosition                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOptimusNode* UOptimusNodeGraph::AddDataInterfaceNode(class UClass* InDataInterfaceClass, const struct FVector2D& InPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNodeGraph.AddDataInterfaceNode");
		
		UOptimusNodeGraph_AddDataInterfaceNode_Params params {};
		params.InDataInterfaceClass = InDataInterfaceClass;
		params.InPosition = InPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0210E1E0
	 * 		Name   -> Function OptimusCore.OptimusNodeGraph.AddComponentBindingGetNode
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UOptimusComponentSourceBinding*              InComponentBinding                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector2D                                   InPosition                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UOptimusNode* UOptimusNodeGraph::AddComponentBindingGetNode(class UOptimusComponentSourceBinding* InComponentBinding, const struct FVector2D& InPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptimusCore.OptimusNodeGraph.AddComponentBindingGetNode");
		
		UOptimusNodeGraph_AddComponentBindingGetNode_Params params {};
		params.InComponentBinding = InComponentBinding;
		params.InPosition = InPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusNodeGraph.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusNodeGraph::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusNodeGraph");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusNodeSubGraph.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusNodeSubGraph::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusNodeSubGraph");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusFunctionNodeGraph.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusFunctionNodeGraph::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusFunctionNodeGraph");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusNodeLink.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusNodeLink::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusNodeLink");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusNodePin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusNodePin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusNodePin");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusResourceDescription.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusResourceDescription::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusResourceDescription");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusValueContainerGeneratorClass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusValueContainerGeneratorClass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusValueContainerGeneratorClass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusValueContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusValueContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusValueContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptimusVariableDescription.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptimusVariableDescription::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OptimusCore.OptimusVariableDescription");
		return ptr;
	}

}


