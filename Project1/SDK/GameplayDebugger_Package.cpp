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
	 * 		RVA    -> 0x06B0E150
	 * 		Name   -> Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetViewPoint
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
	 * Parameters:
	 * 		struct FVector                                     InViewLocation                                             (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     InViewDirection                                            (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGameplayDebuggerCategoryReplicator::ServerSetViewPoint(const struct FVector& InViewLocation, const struct FVector& InViewDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetViewPoint");
		
		AGameplayDebuggerCategoryReplicator_ServerSetViewPoint_Params params {};
		params.InViewLocation = InViewLocation;
		params.InViewDirection = InViewDirection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B0E4D0
	 * 		Name   -> Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetEnabled
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGameplayDebuggerCategoryReplicator::ServerSetEnabled(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetEnabled");
		
		AGameplayDebuggerCategoryReplicator_ServerSetEnabled_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B0E310
	 * 		Name   -> Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetDebugActor
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSelectInEditor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGameplayDebuggerCategoryReplicator::ServerSetDebugActor(class AActor* Actor, bool bSelectInEditor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetDebugActor");
		
		AGameplayDebuggerCategoryReplicator_ServerSetDebugActor_Params params {};
		params.Actor = Actor;
		params.bSelectInEditor = bSelectInEditor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B0DF30
	 * 		Name   -> Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetCategoryEnabled
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		int32_t                                            categoryId                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGameplayDebuggerCategoryReplicator::ServerSetCategoryEnabled(int32_t categoryId, bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSetCategoryEnabled");
		
		AGameplayDebuggerCategoryReplicator_ServerSetCategoryEnabled_Params params {};
		params.categoryId = categoryId;
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B0DBB0
	 * 		Name   -> Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSendExtensionInputEvent
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		int32_t                                            ExtensionId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            HandlerId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGameplayDebuggerCategoryReplicator::ServerSendExtensionInputEvent(int32_t ExtensionId, int32_t HandlerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSendExtensionInputEvent");
		
		AGameplayDebuggerCategoryReplicator_ServerSendExtensionInputEvent_Params params {};
		params.ExtensionId = ExtensionId;
		params.HandlerId = HandlerId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B0DD70
	 * 		Name   -> Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSendCategoryInputEvent
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 * Parameters:
	 * 		int32_t                                            categoryId                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            HandlerId                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGameplayDebuggerCategoryReplicator::ServerSendCategoryInputEvent(int32_t categoryId, int32_t HandlerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerSendCategoryInputEvent");
		
		AGameplayDebuggerCategoryReplicator_ServerSendCategoryInputEvent_Params params {};
		params.categoryId = categoryId;
		params.HandlerId = HandlerId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B0E0F0
	 * 		Name   -> Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerResetViewPoint
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 */
	void AGameplayDebuggerCategoryReplicator::ServerResetViewPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ServerResetViewPoint");
		
		AGameplayDebuggerCategoryReplicator_ServerResetViewPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x012EBCE0
	 * 		Name   -> Function GameplayDebugger.GameplayDebuggerCategoryReplicator.OnRep_ReplicatedData
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void AGameplayDebuggerCategoryReplicator::OnRep_ReplicatedData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggerCategoryReplicator.OnRep_ReplicatedData");
		
		AGameplayDebuggerCategoryReplicator_OnRep_ReplicatedData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x06B0DAA0
	 * 		Name   -> Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ClientDataPackPacket
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
	 * Parameters:
	 * 		struct FGameplayDebuggerDataPackRPCParams          Params                                                     (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AGameplayDebuggerCategoryReplicator::ClientDataPackPacket(const struct FGameplayDebuggerDataPackRPCParams& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameplayDebugger.GameplayDebuggerCategoryReplicator.ClientDataPackPacket");
		
		AGameplayDebuggerCategoryReplicator_ClientDataPackPacket_Params params {};
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGameplayDebuggerCategoryReplicator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGameplayDebuggerCategoryReplicator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayDebugger.GameplayDebuggerCategoryReplicator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayDebuggerConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayDebuggerConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayDebugger.GameplayDebuggerConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayDebuggerUserSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayDebuggerUserSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayDebugger.GameplayDebuggerUserSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayDebuggerLocalController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayDebuggerLocalController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayDebugger.GameplayDebuggerLocalController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGameplayDebuggerPlayerManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGameplayDebuggerPlayerManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayDebugger.GameplayDebuggerPlayerManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGameplayDebuggerRenderingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameplayDebuggerRenderingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class GameplayDebugger.GameplayDebuggerRenderingComponent");
		return ptr;
	}

}


