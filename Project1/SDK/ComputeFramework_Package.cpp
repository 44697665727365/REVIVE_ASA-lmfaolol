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
	 * 		Name   -> PredefinedFunction UComputeDataInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComputeDataInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ComputeFramework.ComputeDataInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UComputeDataProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComputeDataProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ComputeFramework.ComputeDataProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UComputeKernelSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComputeKernelSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ComputeFramework.ComputeKernelSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UComputeSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComputeSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ComputeFramework.ComputeSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UComputeGraph.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComputeGraph::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ComputeFramework.ComputeGraph");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013AB1E0
	 * 		Name   -> Function ComputeFramework.ComputeGraphComponent.QueueExecute
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UComputeGraphComponent::QueueExecute()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ComputeFramework.ComputeGraphComponent.QueueExecute");
		
		UComputeGraphComponent_QueueExecute_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013AB220
	 * 		Name   -> Function ComputeFramework.ComputeGraphComponent.DestroyDataProviders
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UComputeGraphComponent::DestroyDataProviders()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ComputeFramework.ComputeGraphComponent.DestroyDataProviders");
		
		UComputeGraphComponent_DestroyDataProviders_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013AB250
	 * 		Name   -> Function ComputeFramework.ComputeGraphComponent.CreateDataProviders
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            InBindingIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     InBindingObject                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UComputeGraphComponent::CreateDataProviders(int32_t InBindingIndex, class UObject* InBindingObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ComputeFramework.ComputeGraphComponent.CreateDataProviders");
		
		UComputeGraphComponent_CreateDataProviders_Params params {};
		params.InBindingIndex = InBindingIndex;
		params.InBindingObject = InBindingObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UComputeGraphComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComputeGraphComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ComputeFramework.ComputeGraphComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UComputeKernel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComputeKernel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ComputeFramework.ComputeKernel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UComputeKernelFromText.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComputeKernelFromText::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ComputeFramework.ComputeKernelFromText");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UComputeSourceFromText.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComputeSourceFromText::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ComputeFramework.ComputeSourceFromText");
		return ptr;
	}

}


