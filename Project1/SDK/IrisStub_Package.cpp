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
	 * 		Name   -> PredefinedFunction UDataStream.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataStream::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisStub.DataStream");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIrisObjectReferencePackageMap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIrisObjectReferencePackageMap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisStub.IrisObjectReferencePackageMap");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetBlobHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetBlobHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisStub.NetBlobHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetObjectPrioritizerConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetObjectPrioritizerConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisStub.NetObjectPrioritizerConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetObjectCountLimiterConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetObjectCountLimiterConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisStub.NetObjectCountLimiterConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetObjectFilterConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetObjectFilterConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisStub.NetObjectFilterConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetObjectFilter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetObjectFilter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisStub.NetObjectFilter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetObjectPrioritizer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetObjectPrioritizer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisStub.NetObjectPrioritizer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReplicationBridge.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReplicationBridge::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisStub.ReplicationBridge");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectReplicationBridge.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectReplicationBridge::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisStub.ObjectReplicationBridge");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USequentialPartialNetBlobHandlerConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USequentialPartialNetBlobHandlerConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisStub.SequentialPartialNetBlobHandlerConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USequentialPartialNetBlobHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USequentialPartialNetBlobHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisStub.SequentialPartialNetBlobHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USphereWithOwnerBoostNetObjectPrioritizerConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USphereWithOwnerBoostNetObjectPrioritizerConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class IrisStub.SphereWithOwnerBoostNetObjectPrioritizerConfig");
		return ptr;
	}

}


