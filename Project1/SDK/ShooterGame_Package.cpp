#include "pch.h"


/**
 * Function:
 * 		RVA    -> 0x0331BBC0
 * 		Name   -> Function ShooterGame.VictoryCore.ServerSearchFoliage
 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
 * Parameters:
 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector                                     Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		TArray<struct FOverlappedFoliageElement>           OutFoliage                                                 (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
 * 		bool                                               bVisibleAndActiveOnly                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bIncludeUsableFoliage                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bIncludeMeshFoliage                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bSortByDistance                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bReverseSort                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void UVictoryCore::STATIC_ServerSearchFoliage(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, TArray<struct FOverlappedFoliageElement>* OutFoliage, bool bVisibleAndActiveOnly, bool bIncludeUsableFoliage, bool bIncludeMeshFoliage, bool bSortByDistance, bool bReverseSort)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.VictoryCore.ServerSearchFoliage"));

	UVictoryCore_ServerSearchFoliage_Params params{};
	params.WorldContextObject = WorldContextObject;
	params.Origin = Origin;
	params.Radius = Radius;
	params.bVisibleAndActiveOnly = bVisibleAndActiveOnly;
	params.bIncludeUsableFoliage = bIncludeUsableFoliage;
	params.bIncludeMeshFoliage = bIncludeMeshFoliage;
	params.bSortByDistance = bSortByDistance;
	params.bReverseSort = bReverseSort;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutFoliage != nullptr)
		*OutFoliage = params.OutFoliage;
}

void AShooterPlayerState::ClientReceiveSpawnPoints(TArray<struct FSpawnPointInfo> SpawnPointsInfos)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerState.ClientReceiveSpawnPoints"));

	AShooterPlayerState_ClientReceiveSpawnPoints_Params params{};
	params.SpawnPointsInfos = SpawnPointsInfos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void AShooterPlayerState::ServerGetPlayerConnectedData()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerState.ServerGetPlayerConnectedData"));

	AShooterPlayerState_ServerGetPlayerConnectedData_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void AShooterPlayerState::ServerGetServerOptions()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerState.ServerGetServerOptions"));

	AShooterPlayerState_ServerGetServerOptions_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}


/**
 * Function:
 * 		RVA    -> 0x03317050
 * 		Name   -> Function ShooterGame.VictoryCore.MulticastDrawDebugSphere
 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
 * Parameters:
 * 		class AActor*                                      ReplicatedActor                                            (Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector                                     Center                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		int32_t                                            Segments                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FLinearColor                                LineColor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void UVictoryCore::STATIC_MulticastDrawDebugSphere(class AActor* ReplicatedActor, const struct FVector& Center, float Radius, int32_t Segments, const struct FLinearColor& LineColor, float Duration)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.VictoryCore.MulticastDrawDebugSphere"));

	UVictoryCore_MulticastDrawDebugSphere_Params params{};
	params.ReplicatedActor = ReplicatedActor;
	params.Center = Center;
	params.Radius = Radius;
	params.Segments = Segments;
	params.LineColor = LineColor;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x03331B50
 * 		Name   -> Function ShooterGame.VictoryCore.GetSpecialActorList
 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
 * Parameters:
 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		EActorListsBP                                      ActorListType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		TArray<class AActor*>                              OutActors                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
 */
void UVictoryCore::STATIC_GetSpecialActorList(class UObject* WorldContextObject, EActorListsBP ActorListType, TArray<class AActor*>* OutActors)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.VictoryCore.GetSpecialActorList"));

	UVictoryCore_GetSpecialActorList_Params params{};
	params.WorldContextObject = WorldContextObject;
	params.ActorListType = ActorListType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
}

/**
 * Function:
 * 		RVA    -> 0x03182F80
 * 		Name   -> Function ShooterGame.PrimalInventoryComponent.ServerSplitItemStack
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
 * Parameters:
 * 		struct FItemNetID                                  ItemID                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
 * 		int32_t                                            AmountToSplit                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void UPrimalInventoryComponent::ServerSplitItemStack(const struct FItemNetID& ItemID, int32_t AmountToSplit)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalInventoryComponent.ServerSplitItemStack"));

	UPrimalInventoryComponent_ServerSplitItemStack_Params params{};
	params.ItemID = ItemID;
	params.AmountToSplit = AmountToSplit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}


/**
 * Function:
 * 		RVA    -> 0x031836D0
 * 		Name   -> Function ShooterGame.PrimalInventoryComponent.ServerAddItemToSlot
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
 * Parameters:
 * 		struct FItemNetID                                  ItemID                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
 * 		int32_t                                            SlotIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bSuppressSound                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void UPrimalInventoryComponent::ServerAddItemToSlot(const struct FItemNetID& ItemID, int32_t SlotIndex, bool bSuppressSound)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalInventoryComponent.ServerAddItemToSlot"));

	UPrimalInventoryComponent_ServerAddItemToSlot_Params params{};
	params.ItemID = ItemID;
	params.SlotIndex = SlotIndex;
	params.bSuppressSound = bSuppressSound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x032C06F0
 * 		Name   -> Function ShooterGame.ShooterWeapon.StartFire
 * 		Flags  -> (Native, Public, BlueprintCallable)
 * Parameters:
 * 		bool                                               bFromGamepad                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void AShooterWeapon::StartFire(bool bFromGamepad)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterWeapon.StartFire"));

	AShooterWeapon_StartFire_Params params{};
	params.bFromGamepad = bFromGamepad;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void AShooterWeapon::StartAltFire()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterWeapon.StartAltFire"));

	AShooterWeapon_StartAltFire_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void AShooterWeapon::ServerStartAltFire()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterWeapon.ServerStartAltFire"));

	AShooterWeapon_ServerStartAltFire_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x030B0470
 * 		Name   -> Function ShooterGame.ShooterWeapon.StopFire
 * 		Flags  -> (Native, Public, BlueprintCallable)
 */
void AShooterWeapon::StopFire()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterWeapon.StopFire"));

	AShooterWeapon_StopFire_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x031AFFE0
 * 		Name   -> Function ShooterGame.ShooterWeapon.ServerStartReload
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
 */
void AShooterWeapon::ServerStartReload()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterWeapon.ServerStartReload"));

	AShooterWeapon_ServerStartReload_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x0327A540
 * 		Name   -> Function ShooterGame.ShooterPlayerController.
 CharaterDataToArk
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
 * Parameters:
 * 		class UPrimalInventoryComponent*                   InventoryComp                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void AShooterPlayerController::ServerUploadCharaterDataToArk(class UPrimalInventoryComponent* InventoryComp)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerUploadCharaterDataToArk"));

	AShooterPlayerController_ServerUploadCharaterDataToArk_Params params{};
	params.InventoryComp = InventoryComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

class UObject* UVictoryCore::STATIC_PureClassDefaultObject(class UClass* FromClass)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.VictoryCore.PureClassDefaultObject"));

	UVictoryCore_PureClassDefaultObject_Params params{};
	params.FromClass = FromClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x0326B060
 * 		Name   -> Function ShooterGame.ShooterPlayerController.ServerUnlockPerMapExplorerNote
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
 * Parameters:
 * 		int32_t                                            ExplorerNoteIndex                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bAvoidBuff                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               SavePlayerData                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void AShooterPlayerController::ServerUnlockPerMapExplorerNote(int32_t ExplorerNoteIndex, bool bAvoidBuff, bool SavePlayerData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerUnlockPerMapExplorerNote"));

	AShooterPlayerController_ServerUnlockPerMapExplorerNote_Params params{};
	params.ExplorerNoteIndex = ExplorerNoteIndex;
	params.bAvoidBuff = bAvoidBuff;
	params.SavePlayerData = SavePlayerData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void AShooterPlayerController::ClientUnlockExplorerNote(int32_t ExplorerNoteIndex, bool forceShowExplorerNoteUI, bool SavePlayerData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ClientUnlockExplorerNote"));

	AShooterPlayerController_ClientUnlockExplorerNote_Params params{};
	params.ExplorerNoteIndex = ExplorerNoteIndex;
	params.forceShowExplorerNoteUI = forceShowExplorerNoteUI;
	params.SavePlayerData = SavePlayerData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x0327CE30
 * 		Name   -> Function ShooterGame.ShooterPlayerController.ServerTransferToRemoteInventory
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
 * Parameters:
 * 		class UPrimalInventoryComponent*                   InventoryComp                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FItemNetID                                  ItemID                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
 * 		bool                                               bAlsoTryToEqup                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		int32_t                                            RequestedQuantity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void AShooterPlayerController::ServerTransferToRemoteInventory(class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemID, bool bAlsoTryToEqup, int32_t RequestedQuantity)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerTransferToRemoteInventory"));

	AShooterPlayerController_ServerTransferToRemoteInventory_Params params{};
	params.InventoryComp = InventoryComp;
	params.ItemID = ItemID;
	params.bAlsoTryToEqup = bAlsoTryToEqup;
	params.RequestedQuantity = RequestedQuantity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x0327D0F0
 * 		Name   -> Function ShooterGame.ShooterPlayerController.ServerTransferFromRemoteInventory
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
 * Parameters:
 * 		class UPrimalInventoryComponent*                   InventoryComp                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FItemNetID                                  ItemID                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
 * 		int32_t                                            RequestedQuantity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		int32_t                                            ToSlotIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bEquipItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void AShooterPlayerController::ServerTransferFromRemoteInventory(class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemID, int32_t RequestedQuantity, int32_t ToSlotIndex, bool bEquipItem)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerTransferFromRemoteInventory"));

	AShooterPlayerController_ServerTransferFromRemoteInventory_Params params{};
	params.InventoryComp = InventoryComp;
	params.ItemID = ItemID;
	params.RequestedQuantity = RequestedQuantity;
	params.ToSlotIndex = ToSlotIndex;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x032879D0
 * 		Name   -> Function ShooterGame.ShooterPlayerController.ServerSendChatMessage
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
 * Parameters:
 * 		class FString                                      ChatMessage                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		EChatSendMode                                      SendMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void AShooterPlayerController::ServerSendChatMessage(const class FString& ChatMessage, EChatSendMode SendMode, int32 SenderPlatform)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerSendChatMessage"));

	AShooterPlayerController_ServerSendChatMessage_Params params{};
	params.ChatMessage = ChatMessage;
	params.SendMode = SendMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

struct FItemNetInfo UPrimalItem::GetItemNetInfo(bool bIsForSendingToClient)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalItem.GetItemNetInfo"));

	UPrimalItem_GetItemNetInfo_Params params{};
	params.bIsForSendingToClient = bIsForSendingToClient;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


/**
 * Function:
 * 		RVA    -> 0x0326DF00
 * 		Name   -> Function ShooterGame.ShooterPlayerController.ServerRequestTribeLog
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
 */
void AShooterPlayerController::ServerRequestTribeLog()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerRequestTribeLog"));

	AShooterPlayerController_ServerRequestTribeLog_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x03278A60
 * 		Name   -> Function ShooterGame.ShooterPlayerController.ServerRequest
 
 
 Up
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
 * Parameters:
 * 		class UPrimalCharacterStatusComponent*             forStatusComp                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		EPrimalCharacterStatusValue                        ValueType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void AShooterPlayerController::ServerRequestLevelUp(class UPrimalCharacterStatusComponent* forStatusComp, EPrimalCharacterStatusValue ValueType)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerRequestLevelUp"));

	AShooterPlayerController_ServerRequestLevelUp_Params params{};
	params.forStatusComp = forStatusComp;
	params.ValueType = ValueType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x0327BD10
 * 		Name   -> Function ShooterGame.ShooterPlayerController.ServerRequestInventoryUseItem
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
 * Parameters:
 * 		class UPrimalInventoryComponent*                   InventoryComp                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FItemNetID                                  ItemID                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
 */
void AShooterPlayerController::ServerRequestInventoryUseItem(class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemID)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerRequestInventoryUseItem"));

	AShooterPlayerController_ServerRequestInventoryUseItem_Params params{};
	params.InventoryComp = InventoryComp;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x0327F020
 * 		Name   -> Function ShooterGame.ShooterPlayerController.ServerRequestActorItems
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
 * Parameters:
 * 		class UPrimalInventoryComponent*                   forInventory                                               (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bInventoryItems                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bWithFirstSpawn                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void AShooterPlayerController::ServerRequestActorItems(class UPrimalInventoryComponent* forInventory, bool bInventoryItems, bool bWithFirstSpawn)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerRequestActorItems"));

	AShooterPlayerController_ServerRequestActorItems_Params params{};
	params.forInventory = forInventory;
	params.bInventoryItems = bInventoryItems;
	params.bWithFirstSpawn = bWithFirstSpawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x03287B80
 * 		Name   -> Function ShooterGame.ShooterPlayerController.ServerNotifyEditText
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
 * Parameters:
 * 		class FString                                      TextToUse                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               checkedBox                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		class UClass*                                      ForObjectClass                                             (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		uint32_t                                           ExtraID1                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		uint32_t                                           ExtraID2                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		class UObject*                                     ForObject                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void AShooterPlayerController::ServerNotifyEditText(const class FString& TextToUse, bool CheckedBox, class UClass* ForObjectClass, uint32 ExtraID1, uint32 ExtraID2, class UObject* ForObject)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerNotifyEditText"));

	AShooterPlayerController_ServerNotifyEditText_Params params{};
	params.TextToUse = TextToUse;
	params.checkedBox = CheckedBox;
	params.ForObjectClass = ForObjectClass;
	params.ExtraID1 = ExtraID1;
	params.ExtraID2 = ExtraID2;
	params.ForObject = ForObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x03279220
 * 		Name   -> Function ShooterGame.ShooterPlayerController.ServerMultiUse
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
 * Parameters:
 * 		class UObject*                                     ForObject                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void AShooterPlayerController::ServerMultiUse(class UObject* ForObject, int32_t UseIndex)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerMultiUse"));

	AShooterPlayerController_ServerMultiUse_Params params{};
	params.ForObject = ForObject;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	//static uint64_t SMU = 0;
	//if (!SMU)
	//	SMU = signature(Xors("48 85 D2 0F 84 A6 09")).GetPointer();
	//auto Fn = reinterpret_cast<void (__fastcall*)(AShooterPlayerController * _this, UObject* ForObject, int32_t UseIndex)>(SMU);
	//spoof_call(Fn, this, ForObject, UseIndex);
}

/**
 * Function:
 * 		RVA    -> 0x0327E400
 * 		Name   -> Function ShooterGame.ShooterPlayerController.ServerEquipPawnItem
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
 * Parameters:
 * 		struct FItemNetID                                  ItemID                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
 */
void AShooterPlayerController::ServerEquipPawnItem(const struct FItemNetID& ItemID)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerEquipPawnItem"));

	AShooterPlayerController_ServerEquipPawnItem_Params params{};
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x0327E090
 * 		Name   -> Function ShooterGame.ShooterPlayerController.ServerDropFromRemoteInventory
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
 * Parameters:
 * 		class UPrimalInventoryComponent*                   InventoryComp                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FItemNetID                                  ItemID                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
 */
void AShooterPlayerController::ServerDropFromRemoteInventory(class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemID)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerDropFromRemoteInventory"));

	AShooterPlayerController_ServerDropFromRemoteInventory_Params params{};
	params.InventoryComp = InventoryComp;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x0327C030
 * 		Name   -> Function ShooterGame.ShooterPlayerController.ServerCraftItem
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
 * Parameters:
 * 		class UPrimalInventoryComponent*                   InventoryComp                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FItemNetID                                  ItemID                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
 */
void AShooterPlayerController::ServerCraftItem(class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemID)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerCraftItem"));

	AShooterPlayerController_ServerCraftItem_Params params{};
	params.InventoryComp = InventoryComp;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void AShooterPlayerController::ServerRequestDropAllItems(const class FString& CurrentCustomFolderFilter, const class FString& CurrentNameFilter, bool OnlySkins, bool AlsoSkins)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerRequestDropAllItems"));

	AShooterPlayerController_ServerRequestDropAllItems_Params params{};
	params.CurrentCustomFolderFilter = CurrentCustomFolderFilter;
	params.CurrentNameFilter = CurrentNameFilter;
	params.OnlySkins = OnlySkins;
	params.AlsoSkins = AlsoSkins;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}


/**
 * Function:
 * 		RVA    -> 0x0326D5C0
 * 		Name   -> Function ShooterGame.ShooterPlayerController.ClientAddFloatingDamageText
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
 * Parameters:
 * 		struct FVector_NetQuantize                         AtLocation                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		int32_t                                            DamageAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		int32_t                                            FromTeamID                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void AShooterPlayerController::ClientAddFloatingDamageText(const struct FVector_NetQuantize& AtLocation, int32_t DamageAmount, int32_t FromTeamID)
{
	//static UFunction* fn = nullptr;
	//if (!fn)
	//	fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ClientAddFloatingDamageText"));

	//AShooterPlayerController_ClientAddFloatingDamageText_Params params{};
	//params.AtLocation = AtLocation;
	//params.DamageAmount = DamageAmount;
	//params.FromTeamID = FromTeamID;

	//auto flags = fn->FunctionFlags;
	//fn->FunctionFlags |= 0x00000400;
	//UObject::ProcessEvent(fn, &params);
	//fn->FunctionFlags = flags;

	static uint64_t FloatingDMGText = 0;
	if (!FloatingDMGText)
		FloatingDMGText = signature(Xors("48 89 5C 24 08 48 89 74 24 10 48 89 7C 24 18 55 41 56 41 57 48 8D 6C 24 B9 48 81 EC C0 00 00 00 45")).GetPointer();
	auto Fn = reinterpret_cast<void (__fastcall*)(AShooterPlayerController * _this, FVector_NetQuantize AtLocation, int32_t DamageAmmount, int32_t FromTeamID)>(FloatingDMGText);
	spoof_call(Fn, this, AtLocation, DamageAmount, FromTeamID);
}



/**
 * Function:
 * 		RVA    -> 0x0314A8B0
 * 		Name   -> Function ShooterGame.PrimalDinoCharacter.ServerClearRider
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
 * Parameters:
 * 		int32_t                                            OverrideUnboardDirection                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void APrimalDinoCharacter::ServerClearRider(int32_t OverrideUnboardDirection)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalDinoCharacter.ServerClearRider"));

	APrimalDinoCharacter_ServerClearRider_Params params{};
	params.OverrideUnboardDirection = OverrideUnboardDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x030F6B10
 * 		Name   -> Function ShooterGame.PrimalCharacter.BPSuicide
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
 */
void APrimalCharacter::BPSuicide()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalCharacter.BPSuicide"));

	APrimalCharacter_BPSuicide_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x032BEE10
 * 		Name   -> Function ShooterGame.ShooterWeapon.GetMuzzleLocation
 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
 */
struct FVector AShooterWeapon::GetMuzzleLocation()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterWeapon.GetMuzzleLocation"));

	AShooterWeapon_GetMuzzleLocation_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x03141810
 * 		Name   -> Function ShooterGame.PrimalDinoCharacter.GetDinoVelocity
 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
 */
struct FVector APrimalDinoCharacter::GetDinoVelocity()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalDinoCharacter.GetDinoVelocity"));

	APrimalDinoCharacter_GetDinoVelocity_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x03105370
 * 		Name   -> Function ShooterGame.PrimalCharacter.GetVisualVelocity
 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
 */
struct FVector APrimalCharacter::GetVisualVelocity()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalCharacter.GetVisualVelocity"));

	APrimalCharacter_GetVisualVelocity_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x033081F0
 * 		Name   -> Function ShooterGame.VictoryCore.CalculateGPSCoordinates
 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
 * Parameters:
 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector                                     WorldPos                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
struct FIntPoint UVictoryCore::STATIC_CalculateGPSCoordinates(class UObject* WorldContextObject, const struct FVector& WorldPos)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.VictoryCore.CalculateGPSCoordinates"));

	UVictoryCore_CalculateGPSCoordinates_Params params{};
	params.WorldContextObject = WorldContextObject;
	params.WorldPos = WorldPos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function ShooterGame.VictoryCore.IsPointStuckWithinMesh
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          TestPoint                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   HemisphereSubdivisions                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   RayDistance                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   PercentageConsideredStuck                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                           ActorToIgnore                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryCore::STATIC_IsPointStuckWithinMesh(class UObject* WorldContextObject, const struct FVector& TestPoint, int32 HemisphereSubdivisions, float RayDistance, float PercentageConsideredStuck, class AActor* ActorToIgnore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = UObject::FindObject<UFunction>(Xors("Function ShooterGame.VictoryCore.IsPointStuckWithinMesh"));

	UVictoryCore_IsPointStuckWithinMesh_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.TestPoint = std::move(TestPoint);
	Parms.hemisphereSubdivisions = HemisphereSubdivisions;
	Parms.rayDistance = RayDistance;
	Parms.percentageConsideredStuck = PercentageConsideredStuck;
	Parms.ActorToIgnore = ActorToIgnore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function ShooterGame.VictoryCore.IsUndermesh
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class APrimalCharacter*                 Character                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                          CheckSevenHitLocation                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bOverlapping                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActorComponent*                  CheckSevenResult                                       (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    DebugDraw                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   DebugDrawSeconds                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVictoryCore::STATIC_IsUndermesh(class APrimalCharacter* Character, struct FVector* CheckSevenHitLocation, bool* bOverlapping, class UActorComponent** CheckSevenResult, bool DebugDraw, float DebugDrawSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = UObject::FindObject<UFunction>(Xors("Function ShooterGame.VictoryCore.IsUndermesh"));

	UVictoryCore_IsUndermesh_Params Parms{};

	Parms.Character = Character;
	Parms.DebugDraw = DebugDraw;
	Parms.debugDrawSeconds = DebugDrawSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (CheckSevenHitLocation != nullptr)
		*CheckSevenHitLocation = std::move(Parms.CheckSevenHitLocation);

	if (bOverlapping != nullptr)
		*bOverlapping = Parms.bOverlapping;

	if (CheckSevenResult != nullptr)
		*CheckSevenResult = Parms.CheckSevenResult;

	return Parms.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x00000000
 * 		Name   -> PredefinedFunction UVictoryCore.StaticClass
 * 		Flags  -> (Predefined, Static)
 */
UClass* UVictoryCore::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class ShooterGame.VictoryCore"));
	return ptr;
}


/**
 * Function:
 * 		RVA    -> 0x00000000
 * 		Name   -> PredefinedFunction UPrimalInventoryComponent.StaticClass
 * 		Flags  -> (Predefined, Static)
 */
UClass* UPrimalInventoryComponent::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class ShooterGame.PrimalInventoryComponent"));
	return ptr;
}

/**
 * Function:
 * 		RVA    -> 0x00000000
 * 		Name   -> PredefinedFunction AShooterWeapon_Instant.StaticClass
 * 		Flags  -> (Predefined, Static)
 */
UClass* AShooterWeapon_Instant::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class ShooterGame.ShooterWeapon_Instant"));
	return ptr;
}

/**
 * Function:
 * 		RVA    -> 0x00000000
 * 		Name   -> PredefinedFunction AShooterCharacter.StaticClass
 * 		Flags  -> (Predefined, Static)
 */
UClass* AShooterCharacter::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class ShooterGame.ShooterCharacter"));
	return ptr;
}

/**
 * Function:
 * 		RVA    -> 0x00000000
 * 		Name   -> PredefinedFunction APrimalWeaponBow.StaticClass
 * 		Flags  -> (Predefined, Static)
 */
UClass* APrimalWeaponBow::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class ShooterGame.PrimalWeaponBow"));
	return ptr;
}

/**
 * Function:
 * 		RVA    -> 0x00000000
 * 		Name   -> PredefinedFunction APrimalStructureTurret.StaticClass
 * 		Flags  -> (Predefined, Static)
 */
UClass* APrimalStructureTurret::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class ShooterGame.PrimalStructureTurret"));
	return ptr;
}

/**
 * Function:
 * 		RVA    -> 0x00000000
 * 		Name   -> PredefinedFunction APrimalStructureItemContainer.StaticClass
 * 		Flags  -> (Predefined, Static)
 */
UClass* APrimalStructureItemContainer::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class ShooterGame.PrimalStructureItemContainer"));
	return ptr;
}

/**
 * Function:
 * 		RVA    -> 0x00000000
 * 		Name   -> PredefinedFunction APrimalStructureItemContainer_SupplyCrate.StaticClass
 * 		Flags  -> (Predefined, Static)
 */
UClass* APrimalStructureItemContainer_SupplyCrate::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class ShooterGame.PrimalStructureItemContainer_SupplyCrate"));
	return ptr;
}

/**
 * Function:
 * 		RVA    -> 0x00000000
 * 		Name   -> PredefinedFunction APrimalStructureBearTrap.StaticClass
 * 		Flags  -> (Predefined, Static)
 */
UClass* APrimalStructureBearTrap::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class ShooterGame.PrimalStructureBearTrap"));
	return ptr;
}

/**
 * Function:
 * 		RVA    -> 0x00000000
 * 		Name   -> PredefinedFunction APrimalDinoCharacter.StaticClass
 * 		Flags  -> (Predefined, Static)
 */
UClass* APrimalDinoCharacter::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class ShooterGame.PrimalDinoCharacter"));
	return ptr;
}

/**
 * Function:
 * 		RVA    -> 0x00000000
 * 		Name   -> PredefinedFunction APrimalCharacter.StaticClass
 * 		Flags  -> (Predefined, Static)
 */
UClass* APrimalCharacter::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class ShooterGame.PrimalCharacter"));
	return ptr;
}

UClass* UUI_ListSessions::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class ShooterGame.UI_ListSessions"));
	return ptr;
}

/**
 * Function:
 * 		RVA    -> 0x00000000
 * 		Name   -> PredefinedFunction ADroppedItem.StaticClass
 * 		Flags  -> (Predefined, Static)
 */
UClass* ADroppedItem::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class ShooterGame.DroppedItem"));
	return ptr;
}

/**
 * Function:
 * 		RVA    -> 0x032C0200
 * 		Name   -> Function ShooterGame.ShooterWeapon.GetCurrentAmmoInClip
 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
 */
int32_t AShooterWeapon::GetCurrentAmmoInClip()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterWeapon.GetCurrentAmmoInClip"));

	AShooterWeapon_GetCurrentAmmoInClip_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x032BEAD0
 * 		Name   -> Function ShooterGame.ShooterWeapon.GetWeaponDamageMultiplier
 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
 */
float AShooterWeapon::GetWeaponDamageMultiplier()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterWeapon.GetWeaponDamageMultiplier"));

	AShooterWeapon_GetWeaponDamageMultiplier_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


/**
 * Function:
 * 		RVA    -> 0x0324D430
 * 		Name   -> Function ShooterGame.ShooterHUD.ShowInventory
 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
 * Parameters:
 * 		class UPrimalInventoryComponent*                   InventoryComp                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
class UUI_Inventory* AShooterHUD::ShowInventory(class UPrimalInventoryComponent* InventoryComp)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterHUD.ShowInventory"));

	AShooterHUD_ShowInventory_Params params{};
	params.InventoryComp = InventoryComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


void AShooterPlayerController::ServerUploadDino(class APrimalDinoCharacter* DownloadedDino)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerUploadDino"));

	AShooterPlayerController_ServerUploadDino_Params params{};
	params.DownloadedDino = DownloadedDino;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void AShooterPlayerController::ServerRequestSetDefaultDestination(int32_t forSpawnPointID, int32_t SpawnPointID)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerRequestSetDefaultDestination"));

	AShooterPlayerController_ServerRequestSetDefaultDestination_Params params{};
	params.forSpawnPointID = forSpawnPointID;
	params.SpawnPointID = SpawnPointID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}


class UUI_EngramsMenu* AShooterHUD::ShowEngramsMenu(bool bInputDelay)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterHUD.ShowEngramsMenu"));

	AShooterHUD_ShowEngramsMenu_Params params{};
	params.bInputDelay = bInputDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

void AShooterPlayerController::ServerCharacterUploadWithItems_Start(uint64_t PlayerDataID, const struct FArkTributePlayerData& PlayerData)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerCharacterUploadWithItems_Start"));

	AShooterPlayerController_ServerCharacterUploadWithItems_Start_Params params{};
	params.PlayerDataID = PlayerDataID;
	params.PlayerData = PlayerData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x03243360
 * 		Name   -> Function ShooterGame.VictoryCore.GetShooterGameUserSettings
 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
 */
class UShooterGameUserSettings* UVictoryCore::STATIC_GetShooterGameUserSettings()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.VictoryCore.GetShooterGameUserSettings"));

	UVictoryCore_GetShooterGameUserSettings_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

void AShooterHUD::ShowMultiUseUIFor(class AActor* AnActor, bool bFromGamepad, const struct FMultiUseWheelOption& WheelCategoryEntry)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterHUD.ShowMultiUseUIFor"));

	AShooterHUD_ShowMultiUseUIFor_Params params{};
	params.AnActor = AnActor;
	params.bFromGamepad = bFromGamepad;
	params.WheelCategoryEntry = WheelCategoryEntry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

class FString UVictoryCore::STATIC_Generate_UUID()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.VictoryCore.Generate_UUID"));

	UVictoryCore_Generate_UUID_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x03182A80
 * 		Name   -> Function ShooterGame.PrimalInventoryComponent.GetEquippedItemOfType
 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
 * Parameters:
 * 		EPrimalEquipmentType                               aType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */

void AShooterPlayerController::ServerCharacterUploadWithItems_UploadItem(uint64_t PlayerDataID, const struct FItemNetInfo& InvItem)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerCharacterUploadWithItems_UploadItem"));

	AShooterPlayerController_ServerCharacterUploadWithItems_UploadItem_Params params{};
	params.PlayerDataID = PlayerDataID;
	params.InvItem = InvItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void AShooterPlayerController::ServerCharacterUploadWithItems_FinishAndCreateCharacter(uint64_t PlayerDataID)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerCharacterUploadWithItems_FinishAndCreateCharacter"));

	AShooterPlayerController_ServerCharacterUploadWithItems_FinishAndCreateCharacter_Params params{};
	params.PlayerDataID = PlayerDataID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

class UPrimalItem* UPrimalInventoryComponent::GetEquippedItemOfType(EPrimalEquipmentType aType)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalInventoryComponent.GetEquippedItemOfType"));

	UPrimalInventoryComponent_GetEquippedItemOfType_Params params{};
	params.aType = aType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


/**
 * Function:
 * 		RVA    -> 0x0313F1B0
 * 		Name   -> Function ShooterGame.PrimalDinoCharacter.ServerSetRiderMountedWeaponRotation
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults)
 * Parameters:
 * 		struct FRotator                                    InVal                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
 */
void APrimalDinoCharacter::ServerSetRiderMountedWeaponRotationYawPitch(float yaw, float pitch)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalDinoCharacter.ServerSetRiderMountedWeaponRotationYawPitch"));

	APrimalDinoCharacter_ServerSetRiderMountedWeaponRotationYawPitch_Params params{};
	params.InValYaw = yaw;
	params.InValPitch = pitch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x0310D520
 * 		Name   -> Function ShooterGame.PrimalCharacter.GetPrimalMovement
 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
 */
class UPrimalCharacterMovement* APrimalCharacter::GetPrimalMovement()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalCharacter.GetPrimalMovement"));

	APrimalCharacter_GetPrimalMovement_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

void APrimalDinoCharacter::SetLastMovementDesiredRotation(const struct FRotator& InRotation)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalDinoCharacter.SetLastMovementDesiredRotation"));

	APrimalDinoCharacter_SetLastMovementDesiredRotation_Params params{};
	params.InRotation = InRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}


/**
 * Function:
 * 		RVA    -> 0x031407F0
 * 		Name   -> Function ShooterGame.PrimalDinoCharacter.GetBabyCuddleFood
 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
 */
class UClass* APrimalDinoCharacter::GetBabyCuddleFood()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalDinoCharacter.GetBabyCuddleFood"));

	APrimalDinoCharacter_GetBabyCuddleFood_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x0312D480
 * 		Name   -> Function ShooterGame.PrimalCharacterStatusComponent.GetStatusValueString
 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
 * Parameters:
 * 		EPrimalCharacterStatusValue                        ValueType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bValueOnly                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
class FString UPrimalCharacterStatusComponent::GetStatusValueString(EPrimalCharacterStatusValue ValueType, bool bValueOnly)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalCharacterStatusComponent.GetStatusValueString"));

	UPrimalCharacterStatusComponent_GetStatusValueString_Params params{};
	params.ValueType = ValueType;
	params.bValueOnly = bValueOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x0312D290
 * 		Name   -> Function ShooterGame.PrimalCharacterStatusComponent.GetStatusMaxValueString
 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
 * Parameters:
 * 		EPrimalCharacterStatusValue                        ValueType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bValueOnly                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
class FString UPrimalCharacterStatusComponent::GetStatusMaxValueString(EPrimalCharacterStatusValue ValueType, bool bValueOnly)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalCharacterStatusComponent.GetStatusMaxValueString"));

	UPrimalCharacterStatusComponent_GetStatusMaxValueString_Params params{};
	params.ValueType = ValueType;
	params.bValueOnly = bValueOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x031A71E0
 * 		Name   -> Function ShooterGame.PrimalPlayerData.LinkedPlayerIDString
 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
 */
class FString UPrimalPlayerData::LinkedPlayerIDString()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalPlayerData.LinkedPlayerIDString"));

	UPrimalPlayerData_LinkedPlayerIDString_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x03115F50
 * 		Name   -> Function ShooterGame.PrimalTargetableActor.GetDescriptiveName
 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
 */
class FString APrimalTargetableActor::GetDescriptiveName()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalTargetableActor.GetDescriptiveName"));

	APrimalTargetableActor_GetDescriptiveName_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

class UObject* UVictoryCore::STATIC_GetDefaultObject(class UObject* FromObjectInstance)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.VictoryCore.GetDefaultObject"));

	UVictoryCore_GetDefaultObject_Params params{};
	params.FromObjectInstance = FromObjectInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function ShooterGame.VictoryCore.BPLoadObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           PathName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UVictoryCore::STATIC_BPLoadObject(const class FString& PathName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("VictoryCore", "BPLoadObject");

	UVictoryCore_BPLoadObject_Params Parms{};

	Parms.PathName = std::move(PathName);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x0327EE90
 * 		Name   -> Function ShooterGame.ShooterPlayerController.ServerRemovePawnItem
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
 * Parameters:
 * 		struct FItemNetID                                  ItemID                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
 * 		bool                                               bSecondryAction                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void AShooterPlayerController::ServerRemovePawnItem(const struct FItemNetID& ItemID, bool bSecondryAction)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerRemovePawnItem"));

	AShooterPlayerController_ServerRemovePawnItem_Params params{};
	params.ItemID = ItemID;
	params.bSecondryAction = bSecondryAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x03115F50
 * 		Name   -> Function ShooterGame.PrimalCharacter.GetDescriptiveName
 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
 */
class FString APrimalCharacter::GetDescriptiveName()
{
	FString Str;
	if (this && this->IsA(AShooterCharacter::StaticClass()))
	{
		static uint64_t GetDescriptiveName2 = 0;

		if (!GetDescriptiveName2)
			GetDescriptiveName2 = signature(Xors("40 55 53 56 41 54 41 55 41 56 41 57 48 8D 6C 24 D9 48 81 EC B0")).GetPointer();

		auto Fn = reinterpret_cast<void(__fastcall*)(AShooterCharacter * _this, FString * result)>(GetDescriptiveName2);
		spoof_call(Fn, (AShooterCharacter*)this, &Str);
	}
	else
	{
		static uint64_t GetDescriptiveName = 0;

		if (!GetDescriptiveName)
			GetDescriptiveName = signature(Xors("48 8B C4 48 89 50 10 55 56 48 8D 68 D8")).GetPointer();

		auto Fn = reinterpret_cast<void(__fastcall*)(APrimalCharacter * _this, FString * result)>(GetDescriptiveName);
		spoof_call(Fn, this, &Str);
	}

	return Str;
}

class FString APrimalDinoCharacter::GetDinoDescriptiveName(bool IgnoreArticle, bool IncludeDetails)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalDinoCharacter.GetDinoDescriptiveName"));

	APrimalDinoCharacter_GetDinoDescriptiveName_Params params{};
	params.IgnoreArticle = IgnoreArticle;
	params.IncludeDetails = IncludeDetails;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x01C66FA0
 * 		Name   -> Function ShooterGame.ShooterPlayerController.GetShooterHud
 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
 */
class AShooterHUD* AShooterPlayerController::GetShooterHud()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.GetShooterHud"));

	AShooterPlayerController_GetShooterHud_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

void AShooterWeapon::ClientStartReload()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterWeapon.ClientStartReload"));

	AShooterWeapon_ClientStartReload_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void AShooterWeapon::ServerToggleAccessory()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterWeapon.ServerToggleAccessory"));

	AShooterWeapon_ServerToggleAccessory_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

TArray<struct FAvailableMission> UVictoryCore::STATIC_GetAllAvailableMissions(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.VictoryCore.GetAllAvailableMissions"));

	UVictoryCore_GetAllAvailableMissions_Params params{};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

int32_t AShooterPlayerState::GetTribeId()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerState.GetTribeId"));

	AShooterPlayerState_GetTribeId_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

void UPrimalUI::ShowConfirmationDialogBP(const class FString& TitleText, const class FString& MessageText, bool isJustOKBox)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalUI.ShowConfirmationDialogBP"));

	UPrimalUI_ShowConfirmationDialogBP_Params params{};
	params.TitleText = TitleText;
	params.MessageText = MessageText;
	params.isJustOKBox = isJustOKBox;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

class FString APrimalCharacter::BPGetDebugInfoString()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalCharacter.BPGetDebugInfoString"));

	APrimalCharacter_BPGetDebugInfoString_Params params{};

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


class FName APrimalCharacter::GetCurrentCameraProfileId()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalCharacter.GetCurrentCameraProfileId"));

	APrimalCharacter_GetCurrentCameraProfileId_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

class UPrimalUI* AShooterHUD::ShowChangeCameraModeUI()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterHUD.ShowChangeCameraModeUI"));

	AShooterHUD_ShowChangeCameraModeUI_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

class UUI_SurvivorProfile* AShooterHUD::ShowSurvivorProfileUI()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterHUD.ShowSurvivorProfileUI"));

	AShooterHUD_ShowSurvivorProfileUI_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

class UBuildingUI* AShooterHUD::ShowBuildingUI()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterHUD.ShowBuildingUI"));

	AShooterHUD_ShowBuildingUI_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


void APrimalStructure::UpdateTribeGroupStructureRank(unsigned char NewRank)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalStructure.UpdateTribeGroupStructureRank"));

	APrimalStructure_UpdateTribeGroupStructureRank_Params params{};
	params.NewRank = NewRank;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void APrimalStructureItemContainer::UpdateTribeGroupInventoryRank(unsigned char NewRank)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalStructureItemContainer.UpdateTribeGroupInventoryRank"));
	
	APrimalStructureItemContainer_UpdateTribeGroupInventoryRank_Params params {};
	params.NewRank = NewRank;
	
	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

// Function ShooterGame.ShooterPlayerState.ServerRequestChangePlayerData
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// struct FPrimalPlayerCharacterConfigStructReplicatedPlayerCharacterConfig                                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void AShooterPlayerState::ServerRequestChangePlayerData(struct FPrimalPlayerCharacterConfigStructReplicated* PlayerCharacterConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerState.ServerRequestChangePlayerData"));

	AShooterPlayerState_ServerRequestChangePlayerData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerCharacterConfig != nullptr)
		*PlayerCharacterConfig = std::move(Parms.PlayerCharacterConfig);

}

class UObject* UVictoryCore::STATIC_GetClassDefaultObject(class UClass* FromClass)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.VictoryCore.GetClassDefaultObject"));

	UVictoryCore_GetClassDefaultObject_Params params{};
	params.FromClass = FromClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

void AShooterCharacter::ServerFireBallistaProjectile(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterCharacter.ServerFireBallistaProjectile"));

	AShooterCharacter_ServerFireBallistaProjectile_Params params{};
	params.Origin = Origin;
	params.ShootDir = ShootDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}


void UPrimalCharacterMovement::ServerJumpOutOfWater(const struct FVector_NetQuantize100& WallNormal, unsigned char JumpFlag)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalCharacterMovement.ServerJumpOutOfWater"));

	UPrimalCharacterMovement_ServerJumpOutOfWater_Params params{};
	params.WallNormal = WallNormal;
	params.JumpFlag = JumpFlag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void AShooterPlayerController::ServerCheckUnfreeze()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerCheckUnfreeze"));

	AShooterPlayerController_ServerCheckUnfreeze_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}


void APrimalCharacter::ServerRequestDragTarget(class APrimalCharacter* Target)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalCharacter.ServerRequestDragTarget"));

	APrimalCharacter_ServerRequestDragTarget_Params params{};
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void APrimalCharacter::MoveForward(float Val)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalCharacter.MoveForward"));

	APrimalCharacter_MoveForward_Params params{};
	params.Val = Val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x03284E80
 * 		Name   -> Function ShooterGame.ShooterPlayerController.GetPlayerCharacter
 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
 */
class AShooterCharacter* AShooterPlayerController::GetPlayerCharacter()
{
	static uint64_t GPC = 0;
	if (!GPC)
		GPC = signature(Xors("44 8B 81 E8 0F")).GetPointer();
	auto Fn = reinterpret_cast<AShooterCharacter * (__fastcall*)(AShooterPlayerController * _this)>(GPC);
	return spoof_call(Fn, this);
}

int32_t UPrimalItem::GetAttachedComponentsNum()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalItem.GetAttachedComponentsNum"));

	UPrimalItem_GetAttachedComponentsNum_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

class UActorComponent* UPrimalItem::GetAttachedComponent(int32_t attachmentIndex, class AActor* UseOtherActor)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalItem.GetAttachedComponent"));

	UPrimalItem_GetAttachedComponent_Params params{};
	params.attachmentIndex = attachmentIndex;
	params.UseOtherActor = UseOtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

void AShooterPlayerController::ServerLoadArkInventoryItems(TArray<struct FItemNetInfo> ArkInventoryItems, bool bFinalBatch)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerLoadArkInventoryItems"));

	AShooterPlayerController_ServerLoadArkInventoryItems_Params params{};
	params.ArkInventoryItems = ArkInventoryItems;
	params.bFinalBatch = bFinalBatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void AShooterPlayerController::ServerAsyncLoadArkInventoryItems(TArray<struct FItemNetInfo> ArkInventoryItems, bool bFinalBatch)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerAsyncLoadArkInventoryItems"));

	AShooterPlayerController_ServerAsyncLoadArkInventoryItems_Params params{};
	params.ArkInventoryItems = ArkInventoryItems;
	params.bFinalBatch = bFinalBatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

bool APrimalCharacter::IsInStatusState(EPrimalCharacterStatusState StatusStateType)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalCharacter.IsInStatusState"));

	APrimalCharacter_IsInStatusState_Params params{};
	params.StatusStateType = StatusStateType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

void APrimalCharacter::GetAllBuffs(TArray<class APrimalBuff*>* AllBuffs)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalCharacter.GetAllBuffs"));

	APrimalCharacter_GetAllBuffs_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AllBuffs != nullptr)
		*AllBuffs = params.AllBuffs;
}


void APrimalCharacter::ServerGiveDefaultWeapon()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalCharacter.ServerGiveDefaultWeapon"));

	APrimalCharacter_ServerGiveDefaultWeapon_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void APrimalBuff_MissionData::ServerRequestStartMission(class UClass* MissionType, class AMissionDispatcher* FromDispatcher)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalBuff_MissionData.ServerRequestStartMission"));

	APrimalBuff_MissionData_ServerRequestStartMission_Params params{};
	params.MissionType = MissionType;
	params.FromDispatcher = FromDispatcher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void APrimalBuff_MissionData::ServerRequestStartMissionWithMissionTag(const class FName& MissionTag, class AMissionDispatcher* FromDispatcher)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>("Function ShooterGame.PrimalBuff_MissionData.ServerRequestStartMissionWithMissionTag");

	APrimalBuff_MissionData_ServerRequestStartMissionWithMissionTag_Params params{};
	params.MissionTag = MissionTag;
	params.FromDispatcher = FromDispatcher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void APrimalBuff_MissionData::ServerRequestCancelMission()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = UObject::FindObject<UFunction>("Function ShooterGame.PrimalBuff_MissionData.ServerRequestCancelMission");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


void APrimalBuff::ServerRequestRelatedMissionData()
{
	static UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = UObject::FindObject<UFunction>("Function ShooterGame.PrimalBuff.ServerRequestRelatedMissionData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


void APrimalBuff_MissionData::ServerMulticastRequiredProps()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = UObject::FindObject<UFunction>("Function ShooterGame.PrimalBuff_MissionData.ServerMulticastRequiredProps");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


void AShooterCharacter::ServerRequestHexagonTrade(int32_t RequestedTradableItemIndex, int32_t Quantity)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterCharacter.ServerRequestHexagonTrade"));

	AShooterCharacter_ServerRequestHexagonTrade_Params params{};
	params.RequestedTradableItemIndex = RequestedTradableItemIndex;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

UClass* APrimalBuff_MissionData::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class ShooterGame.PrimalBuff_MissionData"));
	return ptr;
}
UClass* AMissionDispatcher::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class ShooterGame.MissionDispatcher"));
	return ptr;
}

bool UVictoryCore::STATIC_VTraceSingleBP(class UObject* WorldContextObject, struct FHitResult* OutHit, const struct FVector& Start, const struct FVector& End, ECollisionChannel TraceChannel, int32_t CollisionGroups, const class FName& TraceTag, bool bTraceComplex, class AActor* ActorToIgnore, float DebugDrawDuration)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.VictoryCore.VTraceSingleBP"));

	UVictoryCore_VTraceSingleBP_Params params{};
	params.WorldContextObject = WorldContextObject;
	params.Start = Start;
	params.End = End;
	params.TraceChannel = TraceChannel;
	params.CollisionGroups = CollisionGroups;
	params.TraceTag = TraceTag;
	params.bTraceComplex = bTraceComplex;
	params.ActorToIgnore = ActorToIgnore;
	params.DebugDrawDuration = DebugDrawDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}

void AShooterCharacter::RenamePlayer(const class FString& NewName)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterCharacter.RenamePlayer"));

	AShooterCharacter_RenamePlayer_Params params{};
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}


void AShooterCharacter::ServerNetEndClimbingLadder(bool bIsClimbOver, const struct FVector& ClimbOverLoc, const struct FVector& JumpDir)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterCharacter.ServerNetEndClimbingLadder"));

	AShooterCharacter_ServerNetEndClimbingLadder_Params params{};
	params.bIsClimbOver = bIsClimbOver;
	params.ClimbOverLoc = ClimbOverLoc;
	params.JumpDir = JumpDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void AShooterPlayerController::SetAdminIcon(bool bAdminIcon)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.SetAdminIcon"));

	AShooterPlayerController_SetAdminIcon_Params params{};
	params.bAdminIcon = bAdminIcon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void AShooterPlayerController::ServerSetSupressAdminIcon(bool bSuppress)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerSetSupressAdminIcon"));

	AShooterPlayerController_ServerSetSupressAdminIcon_Params params{};
	params.bSuppress = bSuppress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void UPrimalCharacterStatusComponent::UpdateWeightStat(bool bForceSetValue)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalCharacterStatusComponent.UpdateWeightStat"));

	UPrimalCharacterStatusComponent_UpdateWeightStat_Params params{};
	params.bForceSetValue = bForceSetValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

class FString UPrimalPlayerData::GetUniqueIdString()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalPlayerData.GetUniqueIdString"));

	UPrimalPlayerData_GetUniqueIdString_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

void AShooterPlayerController::EnableSpectator(bool destroyPlayerCharacter)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.EnableSpectator"));

	AShooterPlayerController_EnableSpectator_Params params{};
	params.destroyPlayerCharacter = destroyPlayerCharacter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

UClass* AShooterPlayerState::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class ShooterGame.ShooterPlayerState"));
	return ptr;
}


void AShooterCharacter::ServerForceUpdatedAimedActors(float OverrideMaxDistance, bool bReplicateToSimulatedClients)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterCharacter.ServerForceUpdatedAimedActors"));

	AShooterCharacter_ServerForceUpdatedAimedActors_Params params{};
	params.OverrideMaxDistance = OverrideMaxDistance;
	params.bReplicateToSimulatedClients = bReplicateToSimulatedClients;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void AShooterPlayerState::ServerGetAllPlayerNamesAndLocations()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerState.ServerGetAllPlayerNamesAndLocations"));

	AShooterPlayerState_ServerGetAllPlayerNamesAndLocations_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void AShooterPlayerState::ClientGetPlayerAdministratorData(TArray<struct FAdminPlayerDataInfo> List)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerState.ClientGetPlayerAdministratorData"));

	AShooterPlayerState_ClientGetPlayerAdministratorData_Params params{};
	params.List = List;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void AShooterPlayerState::ClientGetAlivePlayerConnectedData(TArray<struct FAlivePlayerDataInfo> List)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerState.ClientGetAlivePlayerConnectedData"));

	AShooterPlayerState_ClientGetAlivePlayerConnectedData_Params params{};
	params.List = List;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void AShooterPlayerState::ServerGetAlivePlayerConnectedData()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerState.ServerGetAlivePlayerConnectedData"));

	AShooterPlayerState_ServerGetAlivePlayerConnectedData_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void AShooterPlayerState::ClientGetAllPlayerNamesAndLocations(TArray<struct FAliveNameAndLocation> List)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerState.ClientGetAllPlayerNamesAndLocations"));

	AShooterPlayerState_ClientGetAllPlayerNamesAndLocations_Params params{};
	params.List = List;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void AShooterPlayerController::ServerRequestDownloadPlayerCharacter(const struct FArkTributePlayerData& DownloadedCharacter, int32_t SpawnPointID, int32_t spawnRegionIndex)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerRequestDownloadPlayerCharacter"));

	AShooterPlayerController_ServerRequestDownloadPlayerCharacter_Params params{};
	params.DownloadedCharacter = DownloadedCharacter;
	params.SpawnPointID = SpawnPointID;
	params.spawnRegionIndex = spawnRegionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void AShooterPlayerController::ClientDrawUndermeshSphere(int32_t Radius)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ClientDrawUndermeshSphere"));

	AShooterPlayerController_ClientDrawUndermeshSphere_Params params{};
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void AShooterCharacter::ServerNotifyProjectileImpact(const struct FHitResult& HitResult, bool bFromReplication, int32_t FromProjectileID)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterCharacter.ServerNotifyProjectileImpact"));

	AShooterCharacter_ServerNotifyProjectileImpact_Params params{};
	params.HitResult = HitResult;
	params.bFromReplication = bFromReplication;
	params.FromProjectileID = FromProjectileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}


void ABasePlayerController::SimulateInputKey(const struct FKey& Key, bool bPressed)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.BasePlayerController.SimulateInputKey"));

	ABasePlayerController_SimulateInputKey_Params params{};
	params.Key = Key;
	params.bPressed = bPressed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void AShooterWeapon::ServerStartSecondaryAction()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterWeapon.ServerStartSecondaryAction"));

	AShooterWeapon_ServerStartSecondaryAction_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void AShooterWeapon::ServerStopSecondaryAction()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterWeapon.ServerStopSecondaryAction"));

	AShooterWeapon_ServerStopSecondaryAction_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}


void AShooterWeapon::ServerStopAltFire()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterWeapon.ServerStopAltFire"));

	AShooterWeapon_ServerStopAltFire_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void AShooterCharacter::ServerSwitchMap()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterCharacter.ServerSwitchMap"));

	AShooterCharacter_ServerSwitchMap_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void AShooterPlayerController::ServerRequestPlaceStructure(int32_t StructureIndex, const struct FVector& BuildLocation, const struct FRotator& BuildRotation, const struct FRotator& PlayerViewRotation, const struct FItemNetID& PlaceUsingItemID, const struct FPlacementData& PlacementData, const struct FBPNetExecParams& LocalData, bool bIsCheat, bool bIsFlipped, int32_t WithSnapPointCycle)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerRequestPlaceStructure"));

	AShooterPlayerController_ServerRequestPlaceStructure_Params params{};
	params.StructureIndex = StructureIndex;
	params.BuildLocation = BuildLocation;
	params.BuildRotation = BuildRotation;
	params.PlayerViewRotation = PlayerViewRotation;
	params.PlaceUsingItemID = PlaceUsingItemID;
	params.PlacementData = PlacementData;
	params.LocalData = LocalData;
	params.bIsCheat = bIsCheat;
	params.bIsFlipped = bIsFlipped;
	params.WithSnapPointCycle = WithSnapPointCycle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void AShooterWeapon_Placer::PlaceStructureWithSecondaryAction()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterWeapon_Placer.PlaceStructureWithSecondaryAction"));

	AShooterWeapon_Placer_PlaceStructureWithSecondaryAction_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

UClass* APrimalStructureTurretBallista::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class ShooterGame.PrimalStructureTurretBallista"));
	return ptr;
}

void AShooterPlayerController::ServerReleaseSeatingStructure()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerReleaseSeatingStructure"));

	AShooterPlayerController_ServerReleaseSeatingStructure_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void AShooterPlayerController::ServerLoadWorld()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerLoadWorld"));

	AShooterPlayerController_ServerLoadWorld_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}


void APlayerController::ServerCheckClientPossession()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PlayerController.ServerCheckClientPossession"));

	APlayerController_ServerCheckClientPossession_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

bool AShooterCharacter::IsBlockingWithShield()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterCharacter.IsBlockingWithShield"));

	AShooterCharacter_IsBlockingWithShield_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

double UVictoryCore::STATIC_GetNetworkTimeInSeconds(class UObject* WorldContextObject)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObjectSingle<UFunction*>(Xors(L"/Script/ShooterGame.VictoryCore:GetNetworkTimeInSeconds"));


	UVictoryCore_GetNetworkTimeInSeconds_Params params{};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

class FString UVictoryCore::STATIC_FormatAsTime(int32_t InTime, bool UseLeadingZero, bool bForceLeadingZeroHour, bool bShowSeconds)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.VictoryCore.FormatAsTime"));

	UVictoryCore_FormatAsTime_Params params{};
	params.InTime = InTime;
	params.UseLeadingZero = UseLeadingZero;
	params.bForceLeadingZeroHour = bForceLeadingZeroHour;
	params.bShowSeconds = bShowSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

double UVictoryCore::STATIC_GetRealWorldUtcTimeInSeconds()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.VictoryCore.GetRealWorldUtcTimeInSeconds"));

	UVictoryCore_GetRealWorldUtcTimeInSeconds_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

class FString UVictoryCore::STATIC_FormatAsTimeLong(int32_t InTime)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.VictoryCore.FormatAsTimeLong"));

	UVictoryCore_FormatAsTimeLong_Params params{};
	params.InTime = InTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

void AShooterPlayerController::ClientNotifyShowProfileRequest(const struct FUniqueNetIdRepl& ProfileId)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ClientNotifyShowProfileRequest"));

	AShooterPlayerController_ClientNotifyShowProfileRequest_Params params{};
	params.ProfileId = ProfileId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

void APlayerController::ServerCheckClientPossessionReliable()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PlayerController.ServerCheckClientPossessionReliable"));

	APlayerController_ServerCheckClientPossessionReliable_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

UClass* AShooterGameSession::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class ShooterGame.ShooterGameSession"));
	return ptr;
}

/**
 * Function:
 * 		RVA    -> 0x03111220
 * 		Name   -> Function ShooterGame.PrimalCharacter.GetBuffs
 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
 * Parameters:
 * 		TArray<class APrimalBuff*>                         TheBuffs                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
 */
void APrimalCharacter::GetBuffs(TArray<class APrimalBuff*>* TheBuffs)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalCharacter.GetBuffs"));

	APrimalCharacter_GetBuffs_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TheBuffs != nullptr)
		*TheBuffs = params.TheBuffs;
}

/**
 * Function:
 * 		RVA    -> 0x03111630
 * 		Name   -> Function ShooterGame.PrimalCharacter.GetBuff
 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
 * Parameters:
 * 		class UClass*                                      BuffClass                                                  (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
class APrimalBuff* APrimalCharacter::GetBuff(class UClass* BuffClass)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalCharacter.GetBuff"));

	APrimalCharacter_GetBuff_Params params{};
	params.BuffClass = BuffClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x0327ADC0
 * 		Name   -> Function ShooterGame.ShooterPlayerController.ServerAddItemToArkInventory
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
 * Parameters:
 * 		class UPrimalInventoryComponent*                   InventoryComp                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FItemNetID                                  ItemID                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
 * 		int32_t                                            RequestedQuantity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void AShooterPlayerController::ServerAddItemToArkInventory(class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemID, int32_t RequestedQuantity)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerAddItemToArkInventory"));

	AShooterPlayerController_ServerAddItemToArkInventory_Params params{};
	params.InventoryComp = InventoryComp;
	params.ItemID = ItemID;
	params.RequestedQuantity = RequestedQuantity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x0327ABB0
 * 		Name   -> Function ShooterGame.ShooterPlayerController.ServerAddItemFromArkInventory
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
 * Parameters:
 * 		class UPrimalInventoryComponent*                   InventoryComp                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FItemNetID                                  ItemID                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
 * 		int32_t                                            RequestedQuantity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void AShooterPlayerController::ServerAddItemFromArkInventory(class UPrimalInventoryComponent* InventoryComp, const struct FItemNetID& ItemID, int32_t RequestedQuantity)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerAddItemFromArkInventory"));

	AShooterPlayerController_ServerAddItemFromArkInventory_Params params{};
	params.InventoryComp = InventoryComp;
	params.ItemID = ItemID;
	params.RequestedQuantity = RequestedQuantity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x031F32B0
 * 		Name   -> Function ShooterGame.ShooterCharacter.GetRidingDino
 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
 */
class APrimalDinoCharacter* AShooterCharacter::GetRidingDino()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterCharacter.GetRidingDino"));

	AShooterCharacter_GetRidingDino_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x03193120
 * 		Name   -> Function ShooterGame.PrimalItem.CanUse
 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
 * Parameters:
 * 		bool                                               bIgnoreCooldown                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
bool UPrimalItem::CanUse(bool bIgnoreCooldown)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalItem.CanUse"));

	UPrimalItem_CanUse_Params params{};
	params.bIgnoreCooldown = bIgnoreCooldown;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x03192CA0
 * 		Name   -> Function ShooterGame.PrimalItem.CanDrop
 * 		Flags  -> (Native, Public, BlueprintCallable)
 */
bool UPrimalItem::CanDrop()
{
	static uint64_t CD = 0;
	if (!CD)
		CD = signature(Xors("40 53 48 83 EC 20 F7 41 5C")).GetPointer();
	auto Fn = reinterpret_cast<bool (__fastcall*)(UPrimalItem * _this)>(CD);
	return spoof_call(Fn, this);
}

bool UPrimalItem::IsBroken()
{
	//static UFunction* fn = nullptr;
	//if (!fn)
	//	fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalItem.IsBroken"));

	//UPrimalItem_IsBroken_Params params{};

	//auto flags = fn->FunctionFlags;
	//fn->FunctionFlags |= 0x00000400;
	//UObject::ProcessEvent(fn, &params);
	//fn->FunctionFlags = flags;

	//return params.ReturnValue;

	static uint64_t CD = 0;
	if (!CD)
		CD = signature(Xors("40 53 48 83 EC 20 48 8B 01 48 8B D9 FF 90 ?? ?? ?? ?? 84 C0 74 1D 0F")).GetPointer();
	auto Fn = reinterpret_cast<bool(__fastcall*)(UPrimalItem * _this)>(CD);
	return spoof_call(Fn, this);
}


/**
 * Function:
 * 		RVA    -> 0x031881B0
 * 		Name   -> Function ShooterGame.PrimalInventoryComponent.CanEquipItem
 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
 * Parameters:
 * 		class UPrimalItem*                                 anItem                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
bool UPrimalInventoryComponent::CanEquipItem(class UPrimalItem* anItem)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalInventoryComponent.CanEquipItem"));

	UPrimalInventoryComponent_CanEquipItem_Params params{};
	params.anItem = anItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x032C0270
 * 		Name   -> Function ShooterGame.ShooterWeapon.CanFire
 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
 * Parameters:
 * 		bool                                               bForceAllowSubmergedFiring                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
bool AShooterWeapon::CanFire(bool bForceAllowSubmergedFiring)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterWeapon.CanFire"));

	AShooterWeapon_CanFire_Params params{};
	params.bForceAllowSubmergedFiring = bForceAllowSubmergedFiring;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x03146EC0
 * 		Name   -> Function ShooterGame.PrimalDinoCharacter.BPIsTamed
 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
 */
bool APrimalDinoCharacter::BPIsTamed()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalDinoCharacter.BPIsTamed"));

	APrimalDinoCharacter_BPIsTamed_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x0310CCB0
 * 		Name   -> Function ShooterGame.PrimalCharacter.IsPrimalCharFriendly
 * 		Flags  -> (Native, Public, BlueprintCallable)
 * Parameters:
 * 		class APrimalCharacter*                            primalChar                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
bool APrimalCharacter::IsPrimalCharFriendly(class APrimalCharacter* primalChar)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalCharacter.IsPrimalCharFriendly"));

	APrimalCharacter_IsPrimalCharFriendly_Params params{};
	params.primalChar = primalChar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x031138D0
 * 		Name   -> Function ShooterGame.PrimalCharacter.IsBaby
 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
 */
bool APrimalCharacter::IsBaby()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalCharacter.IsBaby"));

	APrimalCharacter_IsBaby_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x03115FD0
 * 		Name   -> Function ShooterGame.PrimalCharacter.IsAlive
 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
 */
bool APrimalCharacter::IsAlive()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalCharacter.IsAlive"));

	APrimalCharacter_IsAlive_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

UClass* AShooterGameMode::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class ShooterGame.ShooterGameMode"));
	return ptr;
}

/**
 * Function:
 * 		RVA    -> 0x031153E0
 * 		Name   -> Function ShooterGame.PrimalCharacter.BPIsConscious
 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
 */
bool APrimalCharacter::BPIsConscious()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalCharacter.BPIsConscious"));

	APrimalCharacter_BPIsConscious_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x031F6130
 * 		Name   -> Function ShooterGame.ShooterCharacter.LinkedPlayerIDString
 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
 */
class FString AShooterCharacter::LinkedPlayerIDString()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterCharacter.LinkedPlayerIDString"));

	AShooterCharacter_LinkedPlayerIDString_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

class FString AShooterPlayerState::GetUniqueIdString()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerState.GetUniqueIdString"));

	AShooterPlayerState_GetUniqueIdString_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


class FString UPrimalPlayerData::GetUniqueNetIdAsString()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalPlayerData.GetUniqueNetIdAsString"));

	UPrimalPlayerData_GetUniqueNetIdAsString_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

class FString AShooterPlayerState::GetUniqueNetIdAsString()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerState.GetUniqueNetIdAsString"));

	AShooterPlayerState_GetUniqueNetIdAsString_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x00000000
 * 		Name   -> PredefinedFunction APrimalStructure.StaticClass
 * 		Flags  -> (Predefined, Static)
 */
UClass* APrimalStructure::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class ShooterGame.PrimalStructure"));
	return ptr;
}

UClass* APrimalStructureExplosive::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class ShooterGame.PrimalStructureExplosive"));
	return ptr;
}

/**
 * Function:
 * 		RVA    -> 0x0314DF10
 * 		Name   -> Function ShooterGame.PrimalDinoCharacter.GetDinoEntryIcon
 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
 */
class UTexture* APrimalDinoCharacter::GetDinoEntryIcon()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalDinoCharacter.GetDinoEntryIcon"));

	APrimalDinoCharacter_GetDinoEntryIcon_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


/**
 * Function:
 * 		RVA    -> 0x00000000
 * 		Name   -> PredefinedFunction APrimalStructureItemContainer_CropPlot.StaticClass
 * 		Flags  -> (Predefined, Static)
 */
UClass* APrimalStructureItemContainer_CropPlot::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class ShooterGame.PrimalStructureItemContainer_CropPlot"));
	return ptr;
}

/**
 * Function:
 * 		RVA    -> 0x0312B230
 * 		Name   -> Function ShooterGame.PrimalCharacterStatusComponent.GetMutationPoints
 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
 * Parameters:
 * 		EPrimalCharacterStatusValue                        ValueType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
int32_t UPrimalCharacterStatusComponent::GetMutationPoints(EPrimalCharacterStatusValue ValueType)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalCharacterStatusComponent.GetMutationPoints"));

	UPrimalCharacterStatusComponent_GetMutationPoints_Params params{};
	params.ValueType = ValueType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


/**
 * Function:
 * 		RVA    -> 0x03180700
 * 		Name   -> Function ShooterGame.PrimalInventoryComponent.GetEquippedArmorRating
 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
 * Parameters:
 * 		EPrimalEquipmentType                               equipmentType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
float UPrimalInventoryComponent::GetEquippedArmorRating(EPrimalEquipmentType equipmentType)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalInventoryComponent.GetEquippedArmorRating"));

	UPrimalInventoryComponent_GetEquippedArmorRating_Params params{};
	params.equipmentType = equipmentType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


/**
 * Function:
 * 		RVA    -> 0x05AB6BA0
 * 		Name   -> Function Engine.NavMovementComponent.IsMovingOnGround
 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
 */
bool UNavMovementComponent::IsMovingOnGround()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.NavMovementComponent.IsMovingOnGround"));

	UNavMovementComponent_IsMovingOnGround_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


/**
 * Function:
 * 		RVA    -> 0x00000000
 * 		Name   -> PredefinedFunction APrimalStructureSeaMine.StaticClass
 * 		Flags  -> (Predefined, Static)
 */
UClass* APrimalStructureSeaMine::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class ShooterGame.PrimalStructureSeaMine"));
	return ptr;
}


/**
 * Function:
 * 		RVA    -> 0x03182E90
 * 		Name   -> Function ShooterGame.PrimalInventoryComponent.ServerMergeItemStack
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
 * Parameters:
 * 		struct FItemNetID                                  ItemID                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
 */
void UPrimalInventoryComponent::ServerMergeItemStack(const struct FItemNetID& ItemID)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalInventoryComponent.ServerMergeItemStack"));

	UPrimalInventoryComponent_ServerMergeItemStack_Params params{};
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x031F4960
 * 		Name   -> Function ShooterGame.ShooterCharacter.ApplyBoneModifiers
 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
 */
void AShooterCharacter::ApplyBoneModifiers()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterCharacter.ApplyBoneModifiers"));

	AShooterCharacter_ApplyBoneModifiers_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}


/**
 * Function:
 * 		RVA    -> 0x05AE6710
 * 		Name   -> Function Engine.SkinnedMeshComponent.FindClosestBone_K2
 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
 * Parameters:
 * 		struct FVector                                     TestLocation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector                                     BoneLocation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		float                                              IgnoreScale                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bRequirePhysicsAsset                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
class FName USkinnedMeshComponent::FindClosestBone_K2(const struct FVector& TestLocation, struct FVector* BoneLocation, float IgnoreScale, bool bRequirePhysicsAsset)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.SkinnedMeshComponent.FindClosestBone_K2"));

	USkinnedMeshComponent_FindClosestBone_K2_Params params{};
	params.TestLocation = TestLocation;
	params.IgnoreScale = IgnoreScale;
	params.bRequirePhysicsAsset = bRequirePhysicsAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BoneLocation != nullptr)
		*BoneLocation = params.BoneLocation;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x0312E790
 * 		Name   -> Function ShooterGame.PrimalCharacterStatusComponent.BPGetMaxStatusValue
 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
 * Parameters:
 * 		EPrimalCharacterStatusValue                        ValueType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
float UPrimalCharacterStatusComponent::BPGetMaxStatusValue(EPrimalCharacterStatusValue ValueType)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalCharacterStatusComponent.BPGetMaxStatusValue"));

	UPrimalCharacterStatusComponent_BPGetMaxStatusValue_Params params{};
	params.ValueType = ValueType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x0312E880
 * 		Name   -> Function ShooterGame.PrimalCharacterStatusComponent.BPGetCurrentStatusValue
 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
 * Parameters:
 * 		EPrimalCharacterStatusValue                        ValueType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
float UPrimalCharacterStatusComponent::BPGetCurrentStatusValue(EPrimalCharacterStatusValue ValueType)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalCharacterStatusComponent.BPGetCurrentStatusValue"));

	UPrimalCharacterStatusComponent_BPGetCurrentStatusValue_Params params{};
	params.ValueType = ValueType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x032C0390
 * 		Name   -> Function ShooterGame.ShooterWeapon.ReloadWeapon
 * 		Flags  -> (Native, Public, BlueprintCallable)
 */
void AShooterWeapon::ReloadWeapon()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterWeapon.ReloadWeapon"));

	AShooterWeapon_ReloadWeapon_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x032BFD50
 * 		Name   -> Function ShooterGame.ShooterWeapon.ServerStartFire
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
 */
void AShooterWeapon::ServerStartFire()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterWeapon.ServerStartFire"));

	AShooterWeapon_ServerStartFire_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x032CBD10
 * 		Name   -> Function ShooterGame.ShooterWeapon_Projectile.ServerFireProjectileEx
 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults)
 * Parameters:
 * 		struct FVector                                     Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector_NetQuantizeNormal                   ShootDir                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		float                                              Speed                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		int32_t                                            RandomSeed                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		int32_t                                            ProjectileID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void AShooterWeapon_Projectile::ServerFireProjectileEx(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir, float Speed, int32_t RandomSeed, int32_t ProjectileID)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterWeapon_Projectile.ServerFireProjectileEx"));

	AShooterWeapon_Projectile_ServerFireProjectileEx_Params params{};
	params.Origin = Origin;
	params.ShootDir = ShootDir;
	params.Speed = Speed;
	params.RandomSeed = RandomSeed;
	params.ProjectileID = ProjectileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x01CDC800
 * 		Name   -> Function ShooterGame.ShooterWeapon.BPTryFireWeapon
 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
 */
bool AShooterWeapon::BPTryFireWeapon()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterWeapon.BPTryFireWeapon"));

	AShooterWeapon_BPTryFireWeapon_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x04091020
 * 		Name   -> Function ShooterGame.ShooterWeapon.BPFireWeapon
 * 		Flags  -> (Event, Public, BlueprintEvent)
 */
void AShooterWeapon::BPFireWeapon()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterWeapon.BPFireWeapon"));

	AShooterWeapon_BPFireWeapon_Params params{};

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x031093C0
 * 		Name   -> Function ShooterGame.PrimalWeaponGrenade.ServerFixScout
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
 */
void APrimalWeaponGrenade::ServerFixScout()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalWeaponGrenade.ServerFixScout"));

	APrimalWeaponGrenade_ServerFixScout_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x04091020
 * 		Name   -> Function ShooterGame.PrimalWeaponGrenade.BPFixScout
 * 		Flags  -> (Event, Public, BlueprintEvent)
 */
void APrimalWeaponGrenade::BPFixScout()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalWeaponGrenade.BPFixScout"));

	APrimalWeaponGrenade_BPFixScout_Params params{};

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x032BFD30
 * 		Name   -> Function ShooterGame.ShooterWeapon.ServerStopFire
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
 */
void AShooterWeapon::ServerStopFire()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterWeapon.ServerStopFire"));

	AShooterWeapon_ServerStopFire_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x0314A7C0
 * 		Name   -> Function ShooterGame.PrimalDinoCharacter.ServerRequestAttack
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
 * Parameters:
 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void APrimalDinoCharacter::ServerRequestAttack(int32_t AttackIndex)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalDinoCharacter.ServerRequestAttack"));

	APrimalDinoCharacter_ServerRequestAttack_Params params{};
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

// Function ShooterGame.ShooterPlayerController.ServerSetOwnsBTT
// (Net, NetReliable, Native, Event, Public, NetServer)


/**
 * Function:
 * 		RVA    -> 0x0327E310
 * 		Name   -> Function ShooterGame.ShooterPlayerController.ServerActorViewRemoteInventory
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
 * Parameters:
 * 		class UPrimalInventoryComponent*                   InventoryComp                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void AShooterPlayerController::ServerActorViewRemoteInventory(class UPrimalInventoryComponent* InventoryComp)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerActorViewRemoteInventory"));

	AShooterPlayerController_ServerActorViewRemoteInventory_Params params{};
	params.InventoryComp = InventoryComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x0327E220
 * 		Name   -> Function ShooterGame.ShooterPlayerController.ServerActorCloseRemoteInventory
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
 * Parameters:
 * 		class UPrimalInventoryComponent*                   InventoryComp                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void AShooterPlayerController::ServerActorCloseRemoteInventory(class UPrimalInventoryComponent* InventoryComp)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerActorCloseRemoteInventory"));

	AShooterPlayerController_ServerActorCloseRemoteInventory_Params params{};
	params.InventoryComp = InventoryComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x03110D80
 * 		Name   -> Function ShooterGame.PrimalCharacter.NetUpdateTribeName
 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
 * Parameters:
 * 		class FString                                      NewTribeName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void APrimalCharacter::NetUpdateTribeName(const class FString& NewTribeName)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalCharacter.NetUpdateTribeName"));

	APrimalCharacter_NetUpdateTribeName_Params params{};
	params.NewTribeName = NewTribeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x00000000
 * 		Name   -> PredefinedFunction APrimalWeaponGrenade.StaticClass
 * 		Flags  -> (Predefined, Static)
 */
UClass* APrimalWeaponGrenade::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class ShooterGame.PrimalWeaponGrenade"));
	return ptr;
}

/**
 * Function:
 * 		RVA    -> 0x032889C0
 * 		Name   -> Function ShooterGame.ShooterPlayerController.ServerStartWeaponFire
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
 * Parameters:
 * 		class AShooterWeapon*                              Weapon                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void AShooterPlayerController::ServerStartWeaponFire(class AShooterWeapon* Weapon)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerStartWeaponFire"));

	AShooterPlayerController_ServerStartWeaponFire_Params params{};
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x032888D0
 * 		Name   -> Function ShooterGame.ShooterPlayerController.ServerStopWeaponFire
 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
 * Parameters:
 * 		class AShooterWeapon*                              Weapon                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void AShooterPlayerController::ServerStopWeaponFire(class AShooterWeapon* Weapon)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerStopWeaponFire"));

	AShooterPlayerController_ServerStopWeaponFire_Params params{};
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x032C88E0
 * 		Name   -> Function ShooterGame.ShooterWeapon_Instant.NetSimulateForceShot
 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
 * Parameters:
 * 		struct FVector                                     ShotOrigin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector                                     ShootDir                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void AShooterWeapon_Instant::NetSimulateForceShot(const struct FVector& ShotOrigin, const struct FVector& ShootDir)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterWeapon_Instant.NetSimulateForceShot"));

	AShooterWeapon_Instant_NetSimulateForceShot_Params params{};
	params.ShotOrigin = ShotOrigin;
	params.ShootDir = ShootDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x032C84C0
 * 		Name   -> Function ShooterGame.ShooterWeapon_Instant.ServerNotifyShotOrigin
 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults)
 * Parameters:
 * 		struct FVector                                     Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		TArray<struct FHitResult>                          Impacts                                                    (ConstParm, Parm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
 * 		TArray<struct FVector_NetQuantizeNormal>           ShootDirs                                                  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
 */
void AShooterWeapon_Instant::ServerNotifyShotOrigin(const struct FVector& Origin, TArray<struct FHitResult> Impacts, TArray<struct FVector_NetQuantizeNormal> ShootDirs)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterWeapon_Instant.ServerNotifyShotOrigin"));

	AShooterWeapon_Instant_ServerNotifyShotOrigin_Params params{};
	params.Origin = Origin;
	params.Impacts = Impacts;
	params.ShootDirs = ShootDirs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x032C8720
 * 		Name   -> Function ShooterGame.ShooterWeapon_Instant.ServerNotifyShot
 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer)
 * Parameters:
 * 		TArray<struct FHitResult>                          Impacts                                                    (ConstParm, Parm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
 * 		TArray<struct FVector_NetQuantizeNormal>           ShootDirs                                                  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
 */
void AShooterWeapon_Instant::ServerNotifyShot(TArray<struct FHitResult> Impacts, TArray<struct FVector_NetQuantizeNormal> ShootDirs)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterWeapon_Instant.ServerNotifyShot"));

	AShooterWeapon_Instant_ServerNotifyShot_Params params{};
	params.Impacts = Impacts;
	params.ShootDirs = ShootDirs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x0326C210
 * 		Name   -> Function ShooterGame.ShooterPlayerController.DisableSurfaceCameraInterpolation
 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
 */
void AShooterPlayerController::DisableSurfaceCameraInterpolation()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.DisableSurfaceCameraInterpolation"));

	AShooterPlayerController_DisableSurfaceCameraInterpolation_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x031F73C0
 * 		Name   -> Function ShooterGame.ShooterCharacter.SetCameraMode
 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
 * Parameters:
 * 		bool                                               bFirstPerson                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bIgnoreSettingFirstPersonRiding                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void AShooterCharacter::SetCameraMode(bool bFirstPerson, bool bIgnoreSettingFirstPersonRiding, bool bForce)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterCharacter.SetCameraMode"));

	AShooterCharacter_SetCameraMode_Params params{};
	params.bFirstPerson = bFirstPerson;
	params.bIgnoreSettingFirstPersonRiding = bIgnoreSettingFirstPersonRiding;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x0311AAB0
 * 		Name   -> Function ShooterGame.PrimalCharacter.OverrideCameraInterpSpeed
 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
 * Parameters:
 * 		float                                              DefaultTPVCameraSpeedInterpMultiplier                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		float                                              DefaultTPVOffsetInterpSpeed                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		float                                              TPVCameraSpeedInterpMultiplier                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		float                                              TPVOffsetInterpSpeed                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void APrimalCharacter::OverrideCameraInterpSpeed(float DefaultTPVCameraSpeedInterpMultiplier, float DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpMultiplier, float* TPVOffsetInterpSpeed)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalCharacter.OverrideCameraInterpSpeed"));

	APrimalCharacter_OverrideCameraInterpSpeed_Params params{};
	params.DefaultTPVCameraSpeedInterpMultiplier = DefaultTPVCameraSpeedInterpMultiplier;
	params.DefaultTPVOffsetInterpSpeed = DefaultTPVOffsetInterpSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TPVCameraSpeedInterpMultiplier != nullptr)
		*TPVCameraSpeedInterpMultiplier = params.TPVCameraSpeedInterpMultiplier;
	if (TPVOffsetInterpSpeed != nullptr)
		*TPVOffsetInterpSpeed = params.TPVOffsetInterpSpeed;
}

/**
 * Function:
 * 		RVA    -> 0x03114AC0
 * 		Name   -> Function ShooterGame.PrimalCharacter.GetTPVCameraOffsetMultiplier
 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
 */
struct FVector APrimalCharacter::GetTPVCameraOffsetMultiplier()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalCharacter.GetTPVCameraOffsetMultiplier"));

	APrimalCharacter_GetTPVCameraOffsetMultiplier_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x03114B10
 * 		Name   -> Function ShooterGame.PrimalCharacter.GetTPVCameraOffset
 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
 * Parameters:
 * 		bool                                               bForASACamera                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
struct FVector APrimalCharacter::GetTPVCameraOffset(bool bForASACamera)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalCharacter.GetTPVCameraOffset"));

	APrimalCharacter_GetTPVCameraOffset_Params params{};
	params.bForASACamera = bForASACamera;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x031939D0
 * 		Name   -> Function Engine.PrimalActor.IsFirstPersonCamera
 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
 */
bool UPrimalActor::IsFirstPersonCamera()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PrimalActor.IsFirstPersonCamera"));

	UPrimalActor_IsFirstPersonCamera_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x03269050
 * 		Name   -> Function ShooterGame.ShooterPlayerController.IsViewingInventoryUI
 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
 */
bool AShooterPlayerController::IsViewingInventoryUI()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.IsViewingInventoryUI"));

	AShooterPlayerController_IsViewingInventoryUI_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x0310A490
 * 		Name   -> Function ShooterGame.PrimalCharacter.IsPrimalCharSwimming
 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
 */
bool APrimalCharacter::IsPrimalCharSwimming()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalCharacter.IsPrimalCharSwimming"));

	APrimalCharacter_IsPrimalCharSwimming_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x032CC2B0
 * 		Name   -> Function ShooterGame.ShooterWeapon_Projectile.ServerFireProjectile
 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults)
 * Parameters:
 * 		struct FVector                                     Origin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		struct FVector_NetQuantizeNormal                   ShootDir                                                   (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		int32_t                                            ProjectileID                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void AShooterWeapon_Projectile::ServerFireProjectile(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir, int32_t ProjectileID)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterWeapon_Projectile.ServerFireProjectile"));

	AShooterWeapon_Projectile_ServerFireProjectile_Params params{};
	params.Origin = Origin;
	params.ShootDir = ShootDir;
	params.ProjectileID = ProjectileID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x00000000
 * 		Name   -> PredefinedFunction AShooterWeapon_Projectile.StaticClass
 * 		Flags  -> (Predefined, Static)
 */
UClass* AShooterWeapon_Projectile::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class ShooterGame.ShooterWeapon_Projectile"));
	return ptr;
}

/**
 * Function:
 * 		RVA    -> 0x032C7BD0
 * 		Name   -> Function ShooterGame.ShooterWeapon_FlameThrower.ServerTickShootFX
 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer)
 */
void AShooterWeapon_FlameThrower::ServerTickShootFX()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterWeapon_FlameThrower.ServerTickShootFX"));

	AShooterWeapon_FlameThrower_ServerTickShootFX_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x032C7BB0
 * 		Name   -> Function ShooterGame.ShooterWeapon_FlameThrower.ServerStopShootFX
 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer)
 */
void AShooterWeapon_FlameThrower::ServerStopShootFX()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterWeapon_FlameThrower.ServerStopShootFX"));

	AShooterWeapon_FlameThrower_ServerStopShootFX_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x032C7BF0
 * 		Name   -> Function ShooterGame.ShooterWeapon_FlameThrower.ServerBeginShootFX
 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer)
 */
void AShooterWeapon_FlameThrower::ServerBeginShootFX()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterWeapon_FlameThrower.ServerBeginShootFX"));

	AShooterWeapon_FlameThrower_ServerBeginShootFX_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x031E28F0
 * 		Name   -> Function ShooterGame.PrimalWeaponBow.ServerSetPullString
 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer)
 * Parameters:
 * 		bool                                               bIsPulling                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
void APrimalWeaponBow::ServerSetPullString(bool bIsPulling)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalWeaponBow.ServerSetPullString"));

	APrimalWeaponBow_ServerSetPullString_Params params{};
	params.bIsPulling = bIsPulling;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;
}

/**
 * Function:
 * 		RVA    -> 0x00000000
 * 		Name   -> PredefinedFunction AShooterProjectile.StaticClass
 * 		Flags  -> (Predefined, Static)
 */
UClass* AShooterProjectile::StaticClass()
{
	static UClass* ptr = nullptr;
	if (!ptr)
		ptr = UObject::FindClass(Xors("Class ShooterGame.ShooterProjectile"));
	return ptr;
}

/**
 * Function:
 * 		RVA    -> 0x05D943E0
 * 		Name   -> Function Engine.MovementComponent.GetPhysicsVolume
 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
 */
class APhysicsVolume* UMovementComponent::GetPhysicsVolume()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.MovementComponent.GetPhysicsVolume"));

	UMovementComponent_GetPhysicsVolume_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x0312E690
 * 		Name   -> Function ShooterGame.PrimalCharacterStatusComponent.BPGetPercentStatusValue
 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
 * Parameters:
 * 		EPrimalCharacterStatusValue                        ValueType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
float UPrimalCharacterStatusComponent::BPGetPercentStatusValue(EPrimalCharacterStatusValue ValueType)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalCharacterStatusComponent.BPGetPercentStatusValue"));

	UPrimalCharacterStatusComponent_BPGetPercentStatusValue_Params params{};
	params.ValueType = ValueType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x023C98E0
 * 		Name   -> Function Engine.MaterialInterface.GetBaseMaterial
 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
 */
class UMaterial* UMaterialInterface::GetBaseMaterial()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.MaterialInterface.GetBaseMaterial"));

	UMaterialInterface_GetBaseMaterial_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x05ACBFB0
 * 		Name   -> Function Engine.PrimitiveComponent.GetMaterial
 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
 * Parameters:
 * 		int32_t                                            ElementIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
class UMaterialInterface* UPrimitiveComponent::GetMaterial(int32_t ElementIndex)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PrimitiveComponent.GetMaterial"));

	UPrimitiveComponent_GetMaterial_Params params{};
	params.ElementIndex = ElementIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x04091020
 * 		Name   -> Function Engine.PrimalActor.BPConsumeSetPinCode
 * 		Flags  -> (Event, Public, BlueprintEvent)
 * Parameters:
 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		int32_t                                            appledPinCode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bIsSetting                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		int32_t                                            TheCustomIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
bool UPrimalActor::BPConsumeSetPinCode(class APlayerController* ForPC, int32_t appledPinCode, bool bIsSetting, int32_t TheCustomIndex)
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function Engine.PrimalActor.BPConsumeSetPinCode"));

	UPrimalActor_BPConsumeSetPinCode_Params params{};
	params.ForPC = ForPC;
	params.appledPinCode = appledPinCode;
	params.bIsSetting = bIsSetting;
	params.TheCustomIndex = TheCustomIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

/**
 * Function:
 * 		RVA    -> 0x030D93E0
 * 		Name   -> Function ShooterGame.PrimalStructure.IsPinLocked
 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
 */
bool APrimalStructure::IsPinLocked()
{
	static UFunction* fn = nullptr;
	if (!fn)
		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalStructure.IsPinLocked"));

	APrimalStructure_IsPinLocked_Params params{};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;
	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}
/**
 * Function:
 * 		RVA    -> 0x04091020
 * 		Name   -> Function ShooterGame.PrimalStructureItemContainer.BPApplyPinCode
 * 		Flags  -> (Event, Public, BlueprintEvent)
 * Parameters:
 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		int32_t                                            appledPinCode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		bool                                               bIsSetting                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 * 		int32_t                                            TheCustomIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 */
 bool APrimalStructureItemContainer::BPApplyPinCode(class AShooterPlayerController* ForPC, int32_t appledPinCode, bool bIsSetting, int32_t TheCustomIndex)
 {
 	static UFunction* fn = nullptr;
 	if (!fn)
 		fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalStructureItemContainer.BPApplyPinCode"));
 	
 	APrimalStructureItemContainer_BPApplyPinCode_Params params {};
 	params.ForPC = ForPC;
 	params.appledPinCode = appledPinCode;
 	params.bIsSetting = bIsSetting;
 	params.TheCustomIndex = TheCustomIndex;
 	
 	auto flags = fn->FunctionFlags;
 	UObject::ProcessEvent(fn, &params);
 	fn->FunctionFlags = flags;
 	
 	return params.ReturnValue;
 }

 /**
  * Function:
  * 		RVA    -> 0x032781A0
  * 		Name   -> Function ShooterGame.ShooterPlayerController.ServerRequestSetPin
  * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
  * Parameters:
  * 		class UObject*                                     ForTarget                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		int32_t                                            PinValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		bool                                               bIsSetting                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		int32_t                                            TheCustomIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  */
 void AShooterPlayerController::ServerRequestSetPin(class UObject* ForTarget, int32_t PinValue, bool bIsSetting, int32_t TheCustomIndex)
 {
	 static UFunction* fn = nullptr;
	 if (!fn)
		 fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ServerRequestSetPin"));

	 AShooterPlayerController_ServerRequestSetPin_Params params{};
	 params.ForTarget = ForTarget;
	 params.PinValue = PinValue;
	 params.bIsSetting = bIsSetting;
	 params.TheCustomIndex = TheCustomIndex;

	 auto flags = fn->FunctionFlags;
	 fn->FunctionFlags |= 0x00000400;
	 UObject::ProcessEvent(fn, &params);
	 fn->FunctionFlags = flags;
 }

 /**
  * Function:
  * 		RVA    -> 0x03232930
  * 		Name   -> Function ShooterGame.ShooterGameState.IsValidMassTeleportData
  * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
  * Parameters:
  * 		struct FMassTeleportData                           CheckData                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
  */
 bool AShooterGameState::STATIC_IsValidMassTeleportData(const struct FMassTeleportData& CheckData)
 {
	 static UFunction* fn = nullptr;
	 if (!fn)
		 fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterGameState.IsValidMassTeleportData"));

	 AShooterGameState_IsValidMassTeleportData_Params params{};
	 params.CheckData = CheckData;

	 auto flags = fn->FunctionFlags;
	 fn->FunctionFlags |= 0x00000400;
	 UObject::ProcessEvent(fn, &params);
	 fn->FunctionFlags = flags;

	 return params.ReturnValue;
 }
 /**
  * Function:
  * 		RVA    -> 0x05818B50
  * 		Name   -> Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
  * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
  * Parameters:
  * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		class UWidget*                                     InWidgetToFocus                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		EMouseLockMode                                     InMouseLockMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		bool                                               bFlushInput                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  */
 void UWidgetBlueprintLibrary::STATIC_SetInputMode_UIOnlyEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bFlushInput)
 {
	 static UFunction* fn = nullptr;
	 if (!fn)
		 fn = UObject::FindObject<UFunction>(Xors("Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx"));

	 UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Params params{};
	 params.PlayerController = PlayerController;
	 params.InWidgetToFocus = InWidgetToFocus;
	 params.InMouseLockMode = InMouseLockMode;
	 params.bFlushInput = bFlushInput;

	 auto flags = fn->FunctionFlags;
	 fn->FunctionFlags |= 0x00000400;
	 UObject::ProcessEvent(fn, &params);
	 fn->FunctionFlags = flags;
 }	
 /**
	 * Function:
	 * 		RVA    -> 0x05813690
	 * 		Name   -> Function UMG.WidgetBlueprintLibrary.DismissAllMenus
	 * 		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
	 */
 void UWidgetBlueprintLibrary::STATIC_DismissAllMenus()
 {
	 static UFunction* fn = nullptr;
	 if (!fn)
		 fn = UObject::FindObject<UFunction>(Xors("Function UMG.WidgetBlueprintLibrary.DismissAllMenus"));

	 UWidgetBlueprintLibrary_DismissAllMenus_Params params{};

	 auto flags = fn->FunctionFlags;
	 fn->FunctionFlags |= 0x00000400;
	 UObject::ProcessEvent(fn, &params);
	 fn->FunctionFlags = flags;
 }
 // Function ShooterGame.PrimalBuff.GetTimeLeft
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

 float APrimalBuff::GetTimeLeft()
 {
	 static class UFunction* Func = nullptr;

	 if (Func == nullptr)
		 Func = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalBuff.GetTimeLeft"));

	 APrimalBuff_GetTimeLeft_Params Parms{};

	 auto Flgs = Func->FunctionFlags;
	 Func->FunctionFlags |= 0x400;

	 UObject::ProcessEvent(Func, &Parms);

	 Func->FunctionFlags = Flgs;

	 return Parms.ReturnValue;
 }

 // Function ShooterGame.PrimalBuff.GetBuffDescription
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FStatusValueModifierDescription  ReturnValue                                            (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

 FStatusValueModifierDescription APrimalBuff::GetBuffDescription()
 {
	 static class UFunction* Func = nullptr;

	 if (Func == nullptr)
		 Func = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalBuff.GetBuffDescription"));

	 APrimalBuff_GetBuffDescription_Params Parms{};

	 UObject::ProcessEvent(Func, &Parms);

	 return Parms.ReturnValue;
 }


 // Function ShooterGame.PrimalBuff.GetUniqueName
 // (Native, Public, BlueprintCallable, BlueprintPure, Const)
 // Parameters:
 // class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

 class FString APrimalBuff::GetUniqueName()
 {
	 static class UFunction* Func = nullptr;

	 if (Func == nullptr)
		 Func = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalBuff.GetUniqueName"));
	 APrimalBuff_GetUniqueName_Params Parms{};

	 auto Flgs = Func->FunctionFlags;
	 Func->FunctionFlags |= 0x400;

	 UObject::ProcessEvent(Func, &Parms);

	 Func->FunctionFlags = Flgs;

	 return Parms.ReturnValue;
 }


 // Function ShooterGame.PrimalBuff.BPGetHUDElements
 // (Event, Public, HasOutParams, BlueprintEvent)
 // Parameters:
 // class APlayerController*                ForPC                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 // TArray<struct FHUDElement>              OutElements                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

 void APrimalBuff::BPGetHUDElements(class APlayerController* ForPC, TArray<FHUDElement>* OutElements)
 {
	 static class UFunction* Func = nullptr;

	 if (Func == nullptr)
		 Func = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalBuff.BPGetHUDElements"));

	 APrimalCharacter_BPGetHUDElements_Params Parms{};

	 Parms.ForPC = ForPC;

	 UObject::ProcessEvent(Func, &Parms);

	 if (OutElements != nullptr)
		 *OutElements = std::move(Parms.OutElements);
 }

 // Function ShooterGame.VictoryCore.BPLoadClass
 // (Final, Native, Static, Public, BlueprintCallable)
 // Parameters:
 // class FString                           PathName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 // class UClass*                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

 class UClass* UVictoryCore::STATIC_BPLoadClass(const class FString& PathName)
 {
	 static class UFunction* Func = nullptr;

	 if (Func == nullptr)
		 Func = UObject::FindObject<UFunction>(Xors("Function ShooterGame.VictoryCore.BPLoadClass"));

	 UVictoryCore_BPLoadClass_Params Parms{};

	 Parms.PathName = std::move(PathName);

	 auto Flgs = Func->FunctionFlags;
	 Func->FunctionFlags |= 0x400;

	 UObject::ProcessEvent(Func, &Parms);

	 Func->FunctionFlags = Flgs;

	 return Parms.ReturnValue;
 }

 /**
  * Function:
  * 		RVA    -> 0x032608D0
  * 		Name   -> Function ShooterGame.ShooterPlayerController.ClientDisplayNotificationDialog
  * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
  * Parameters:
  * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		class FString                                      Title                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		bool                                               bIsError                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		bool                                               OnOkGoToMainMenu                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		bool                                               bAutoClose                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		bool                                               bCanBeTop                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		bool                                               bHideXBoxFooter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  */
 void AShooterPlayerController::ClientDisplayNotificationDialog(const class FString& Message, const class FString& Title, bool bIsError, bool OnOkGoToMainMenu, bool bAutoClose, bool bCanBeTop, bool bHideXBoxFooter)
 {
	 static UFunction* fn = nullptr;
	 if (!fn)
		 fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ClientDisplayNotificationDialog"));

	 AShooterPlayerController_ClientDisplayNotificationDialog_Params params{};
	 params.Message = Message;
	 params.Title = Title;
	 params.bIsError = bIsError;
	 params.OnOkGoToMainMenu = OnOkGoToMainMenu;
	 params.bAutoClose = bAutoClose;
	 params.bCanBeTop = bCanBeTop;
	 params.bHideXBoxFooter = bHideXBoxFooter;

	 auto flags = fn->FunctionFlags;
	 fn->FunctionFlags |= 0x00000400;
	 UObject::ProcessEvent(fn, &params);
	 fn->FunctionFlags = flags;
 }

 /**
  * Function:
  * 		RVA    -> 0x033229F0
  * 		Name   -> Function ShooterGame.VictoryCore.SpawnActorInWorld
  * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
  * Parameters:
  * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		class UClass*                                      anActorClass                                               (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		struct FVector                                     AtLocation                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		struct FRotator                                    AtRotation                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
  * 		class USceneComponent*                             AttachToComponent                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		int32_t                                            DataIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		class FName                                        AttachSocketName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		class APawn*                                       InstigatorPawn                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  */
 class AActor* UVictoryCore::STATIC_SpawnActorInWorld(class UObject* WorldContextObject, class UClass* anActorClass, const struct FVector& AtLocation, const struct FRotator& AtRotation, class USceneComponent* AttachToComponent, int32_t DataIndex, const class FName& AttachSocketName, class AActor* OwnerActor, class APawn* InstigatorPawn)
 {
	 static UFunction* fn = nullptr;
	 if (!fn)
		 fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.VictoryCore.SpawnActorInWorld"));

	 UVictoryCore_SpawnActorInWorld_Params params{};
	 params.WorldContextObject = WorldContextObject;
	 params.anActorClass = anActorClass;
	 params.AtLocation = AtLocation;
	 params.AtRotation = AtRotation;
	 params.AttachToComponent = AttachToComponent;
	 params.DataIndex = DataIndex;
	 params.AttachSocketName = AttachSocketName;
	 params.OwnerActor = OwnerActor;
	 params.InstigatorPawn = InstigatorPawn;

	 auto flags = fn->FunctionFlags;
	 fn->FunctionFlags |= 0x00000400;
	 UObject::ProcessEvent(fn, &params);
	 fn->FunctionFlags = flags;

	 return params.ReturnValue;
 }

 /**
  * Function:
  * 		RVA    -> 0x03334660
  * 		Name   -> Function ShooterGame.VictoryCore.SpawnActorDeferred
  * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
  * Parameters:
  * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		struct FRotator                                    Rotation                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
  * 		class AActor*                                      Owner                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		class APawn*                                       Instigator                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		bool                                               bNoCollisionFail                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  */
 class AActor* UVictoryCore::STATIC_SpawnActorDeferred(class UClass* Class, class UObject* WorldContextObject, const struct FVector& Location, const struct FRotator& Rotation, class AActor* Owner, class APawn* Instigator, bool bNoCollisionFail)
 {
	 static UFunction* fn = nullptr;
	 if (!fn)
		 fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.VictoryCore.SpawnActorDeferred"));

	 UVictoryCore_SpawnActorDeferred_Params params{};
	 params.Class = Class;
	 params.WorldContextObject = WorldContextObject;
	 params.Location = Location;
	 params.Rotation = Rotation;
	 params.Owner = Owner;
	 params.Instigator = Instigator;
	 params.bNoCollisionFail = bNoCollisionFail;

	 auto flags = fn->FunctionFlags;
	 fn->FunctionFlags |= 0x00000400;
	 UObject::ProcessEvent(fn, &params);
	 fn->FunctionFlags = flags;

	 return params.ReturnValue;
 }

 // Function ShooterGame.VictoryCore.LeadTargetPosition
 // (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
 // Parameters:
 // struct FVector                          ProjLocation                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 // float                                   ProjSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 // struct FVector                          TargetLocation                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 // struct FVector                          TargetVelocity                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 // struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

 struct FVector UVictoryCore::STATIC_LeadTargetPosition(const struct FVector& ProjLocation, float ProjSpeed, const struct FVector& TargetLocation, const struct FVector& TargetVelocity)
 {
	 static class UFunction* Func = nullptr;

	 if (Func == nullptr)
		 Func = UObject::FindObject<UFunction>(Xors("Function ShooterGame.VictoryCore.LeadTargetPosition"));

	 UVictoryCore_LeadTargetPosition_Params Parms{};

	 Parms.ProjLocation = std::move(ProjLocation);
	 Parms.ProjSpeed = ProjSpeed;
	 Parms.TargetLocation = std::move(TargetLocation);
	 Parms.TargetVelocity = std::move(TargetVelocity);

	 auto Flgs = Func->FunctionFlags;
	 Func->FunctionFlags |= 0x400;

	 UObject::ProcessEvent(Func, &Parms);

	 Func->FunctionFlags = Flgs;

	 return Parms.ReturnValue;
 }

 // Function ShooterGame.ShooterPlayerController.ClientPlayLocalSound
 // (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
 // Parameters:
 // class USoundBase*                       ASound                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 // bool                                    bAttach                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

 void AShooterPlayerController::ClientPlayLocalSound(class USoundBase* ASound, bool bAttach)
 {
	 static class UFunction* Func = nullptr;

	 if (Func == nullptr)
		 Func = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ClientPlayLocalSound"));

	 AShooterPlayerController_ClientPlayLocalSound_Params Parms{};

	 Parms.aSound = ASound;
	 Parms.bAttach = bAttach;

	 auto Flgs = Func->FunctionFlags;
	 Func->FunctionFlags |= 0x400;

	 UObject::ProcessEvent(Func, &Parms);

	 Func->FunctionFlags = Flgs;
 }
 /**
  * Function:
  * 		RVA    -> 0x00000000
  * 		Name   -> PredefinedFunction ABiomeZoneVolume.StaticClass
  * 		Flags  -> (Predefined, Static)
  */
 UClass* ABiomeZoneVolume::StaticClass()
 {
	 static UClass* ptr = nullptr;
	 if (!ptr)
		 ptr = UObject::FindClass(Xors("Class ShooterGame.BiomeZoneVolume"));
	 return ptr;
 }

 /**
  * Function:
  * 		RVA    -> 0x0302D790
  * 		Name   -> Function ShooterGame.BiomeZoneVolume.GetPhysicsVolumeAtLocation
  * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
  * Parameters:
  * 		class UWorld*                                      ForWorld                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		struct FVector                                     AtPoint                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		bool                                               bFastPath                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  */
 class APhysicsVolume* ABiomeZoneVolume::STATIC_GetPhysicsVolumeAtLocation(class UWorld* ForWorld, const struct FVector& AtPoint, bool bFastPath)
 {
	 static UFunction* fn = nullptr;
	 if (!fn)
		 fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.BiomeZoneVolume.GetPhysicsVolumeAtLocation"));

	 ABiomeZoneVolume_GetPhysicsVolumeAtLocation_Params params{};
	 params.ForWorld = ForWorld;
	 params.AtPoint = AtPoint;
	 params.bFastPath = bFastPath;

	 auto flags = fn->FunctionFlags;
	 fn->FunctionFlags |= 0x00000400;
	 UObject::ProcessEvent(fn, &params);
	 fn->FunctionFlags = flags;

	 return params.ReturnValue;
 }

 /**
  * Function:
  * 		RVA    -> 0x0312B560
  * 		Name   -> Function ShooterGame.PrimalCharacterStatusComponent.GetLevelUpPoints
  * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
  * Parameters:
  * 		EPrimalCharacterStatusValue                        ValueType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		bool                                               bTamedPoints                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  */
 int32_t UPrimalCharacterStatusComponent::GetLevelUpPoints(EPrimalCharacterStatusValue ValueType, bool bTamedPoints)
 {
	 static UFunction* fn = nullptr;
	 if (!fn)
		 fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalCharacterStatusComponent.GetLevelUpPoints"));

	 UPrimalCharacterStatusComponent_GetLevelUpPoints_Params params{};
	 params.ValueType = ValueType;
	 params.bTamedPoints = bTamedPoints;

	 auto flags = fn->FunctionFlags;
	 fn->FunctionFlags |= 0x00000400;
	 UObject::ProcessEvent(fn, &params);
	 fn->FunctionFlags = flags;

	 return params.ReturnValue;
 }

 void UPrimalCharacterStatusComponent::SetLevelUpPoints(EPrimalCharacterStatusValue ValueType, bool bTamedPoints, int32_t newPoints)
 {
	 static UFunction* fn = nullptr;
	 if (!fn)
		 fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalCharacterStatusComponent.SetLevelUpPoints"));

	 UPrimalCharacterStatusComponent_SetLevelUpPoints_Params params{};
	 params.ValueType = ValueType;
	 params.bTamedPoints = bTamedPoints;
	 params.newPoints = newPoints;

	 auto flags = fn->FunctionFlags;
	 fn->FunctionFlags |= 0x00000400;
	 UObject::ProcessEvent(fn, &params);
	 fn->FunctionFlags = flags;
 }

 /**
  * Function:
  * 		RVA    -> 0x0312CF00
  * 		Name   -> Function ShooterGame.PrimalCharacterStatusComponent.HasExperienceForLevelUp
  * 		Flags  -> (Final, Native, Public, BlueprintCallable)
  */
 bool UPrimalCharacterStatusComponent::HasExperienceForLevelUp()
 {
	 static UFunction* fn = nullptr;
	 if (!fn)
		 fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalCharacterStatusComponent.HasExperienceForLevelUp"));

	 UPrimalCharacterStatusComponent_HasExperienceForLevelUp_Params params{};

	 auto flags = fn->FunctionFlags;
	 fn->FunctionFlags |= 0x00000400;
	 UObject::ProcessEvent(fn, &params);
	 fn->FunctionFlags = flags;

	 return params.ReturnValue;
 }

 // Function ShooterGame.PrimalDinoCharacter.BPGetCustomDinoSetup
 // (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
 // Parameters:
 // struct FDinoSetup                       ReturnValue                                            (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

 struct FDinoSetup APrimalDinoCharacter::BPGetCustomDinoSetup()
 {
	 static class UFunction* Func = nullptr;

	 if (Func == nullptr)
		 Func = UObject::FindObject<UFunction>(Xors("Function ShooterGame.PrimalDinoCharacter.BPGetCustomDinoSetup"));

	 APrimalDinoCharacter_BPGetCustomDinoSetup_Params Parms{};

	 UObject::ProcessEvent(Func, &Parms);

	 return Parms.ReturnValue;
 }


 // Function ShooterGame.VictoryCore.GetDinoSetupPointsPerStat
 // (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
 // Parameters:
 // struct FDinoSetup                       DinoSetup                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
 // EPrimalCharacterStatusValue             StatusType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 // bool                                    bGetPlayerAdded                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 // int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

 int32 UVictoryCore::STATIC_GetDinoSetupPointsPerStat(const struct FDinoSetup& DinoSetup, EPrimalCharacterStatusValue StatusType, bool bGetPlayerAdded)
 {
	 static class UFunction* Func = nullptr;

	 if (Func == nullptr)
		 Func = UObject::FindObject<UFunction>(Xors("Function ShooterGame.VictoryCore.GetDinoSetupPointsPerStat"));

	 UVictoryCore_GetDinoSetupPointsPerStat_Params Parms{};

	 Parms.DinoSetup = std::move(DinoSetup);
	 Parms.StatusType = StatusType;
	 Parms.bGetPlayerAdded = bGetPlayerAdded;

	 auto Flgs = Func->FunctionFlags;
	 Func->FunctionFlags |= 0x400;

	 UObject::ProcessEvent(Func, &Parms);

	 Func->FunctionFlags = Flgs;

	 return Parms.ReturnValue;
 }

 // Function ShooterGame.VictoryCore.GetObjectPathName
 // (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
 // Parameters:
 // class UObject*                          ForObject                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 // class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

 class FString UVictoryCore::STATIC_GetObjectPathName(class UObject* ForObject)
 {
	 static class UFunction* Func = nullptr;

	 if (Func == nullptr)
		 Func = StaticClass()->GetFunction("VictoryCore", "GetObjectPathName");

	 UVictoryCore_GetObjectPathName_Params Parms{};

	 Parms.ForObject = ForObject;

	 auto Flgs = Func->FunctionFlags;
	 Func->FunctionFlags |= 0x400;

	 UObject::ProcessEvent(Func, &Parms);

	 Func->FunctionFlags = Flgs;

	 return Parms.ReturnValue;
 }


 // Function ShooterGame.ShooterPlayerController.Client_AddTeamPing
 // (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
 // Parameters:
 // struct FTeamPingData                    WithPingData                                           (ConstParm, Parm, NativeAccessSpecifierPublic)

 void AShooterPlayerController::Client_AddTeamPing(const struct FTeamPingData& WithPingData)
 {
	 static class UFunction* Func = nullptr;

	 if (Func == nullptr)
		 Func = Class->GetFunction("ShooterPlayerController", "Client_AddTeamPing");

	 AShooterPlayerController_Client_AddTeamPing_Params Parms{};

	 Parms.WithPingData = std::move(WithPingData);

	 auto Flgs = Func->FunctionFlags;
	 Func->FunctionFlags |= 0x400;

	 UObject::ProcessEvent(Func, &Parms);

	 Func->FunctionFlags = Flgs;
 }

 // Function ShooterGame.ShooterPlayerController.Client_ReceivePing
 // (Net, NetReliable, Native, Event, Protected, NetClient, BlueprintCallable)
 // Parameters:
 // struct FReplicatePingData               ReceivedPingData                                       (ConstParm, Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

 void AShooterPlayerController::Client_ReceivePing(const struct FReplicatePingData& ReceivedPingData)
 {
	 static class UFunction* Func = nullptr;

	 if (Func == nullptr)
		 Func = Class->GetFunction("ShooterPlayerController", "Client_ReceivePing");

	 AShooterPlayerController_Client_ReceivePing_Params Parms{};

	 Parms.ReceivedPingData = std::move(ReceivedPingData);

	 auto Flgs = Func->FunctionFlags;
	 Func->FunctionFlags |= 0x400;

	 UObject::ProcessEvent(Func, &Parms);

	 Func->FunctionFlags = Flgs;
 }


 // Function ShooterGame.ShooterPlayerController.Server_Ping
 // (Net, NetReliable, Native, Event, Protected, NetServer, BlueprintCallable)
 // Parameters:
 // struct FReplicatePingData               WithPingData                                           (ConstParm, Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

 void AShooterPlayerController::Server_Ping(const struct FReplicatePingData& WithPingData)
 {
	 static class UFunction* Func = nullptr;

	 if (Func == nullptr)
		 Func = Class->GetFunction("ShooterPlayerController", "Server_Ping");

	 AShooterPlayerController_Server_Ping_Params Parms{};

	 Parms.WithPingData = std::move(WithPingData);

	 auto Flgs = Func->FunctionFlags;
	 Func->FunctionFlags |= 0x400;

	 UObject::ProcessEvent(Func, &Parms);

	 Func->FunctionFlags = Flgs;
 }

 // Function ShooterGame.ShooterPlayerController.Server_DoTeamPing
 // (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
 // Parameters:
 // struct FTeamPingData                    WithPingData                                           (ConstParm, Parm, NativeAccessSpecifierPublic)

 void AShooterPlayerController::Server_DoTeamPing(const struct FTeamPingData& WithPingData)
 {
	 static class UFunction* Func = nullptr;

	 if (Func == nullptr)
		 Func = Class->GetFunction("ShooterPlayerController", "Server_DoTeamPing");

	 AShooterPlayerController_Server_DoTeamPing_Params Parms{};

	 Parms.WithPingData = std::move(WithPingData);

	 auto Flgs = Func->FunctionFlags;
	 Func->FunctionFlags |= 0x400;

	 UObject::ProcessEvent(Func, &Parms);

	 Func->FunctionFlags = Flgs;
 }


 // Function ShooterGame.ShooterPlayerController.Client_UpdateRallyPointData
 // (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
 // Parameters:
 // bool                                    DestroyRallyPoint                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 // struct FTeamPingData                    RallyPointData                                         (Parm, NativeAccessSpecifierPublic)

 void AShooterPlayerController::Client_UpdateRallyPointData(bool DestroyRallyPoint, const struct FTeamPingData& RallyPointData)
 {
	 static class UFunction* Func = nullptr;

	 if (Func == nullptr)
		 Func = Class->GetFunction("ShooterPlayerController", "Client_UpdateRallyPointData");

	 AShooterPlayerController_Client_UpdateRallyPointData_Params Parms{};

	 Parms.DestroyRallyPoint = DestroyRallyPoint;
	 Parms.RallyPointData = std::move(RallyPointData);

	 auto Flgs = Func->FunctionFlags;
	 Func->FunctionFlags |= 0x400;

	 UObject::ProcessEvent(Func, &Parms);

	 Func->FunctionFlags = Flgs;
 }
 // Function ShooterGame.ShooterPlayerCameraManager.GetCameraStyle
 // (Native, Public, BlueprintCallable)
 // Parameters:
 // class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

 class FName AShooterPlayerCameraManager::GetCameraStyle()
 {
	 static class UFunction* Func = nullptr;

	 if (Func == nullptr)
		 Func = Class->GetFunction("ShooterPlayerCameraManager", "GetCameraStyle");

	 AShooterPlayerCameraManager_GetCameraStyle_Params Parms{};

	 auto Flgs = Func->FunctionFlags;
	 Func->FunctionFlags |= 0x400;

	 UObject::ProcessEvent(Func, &Parms);

	 Func->FunctionFlags = Flgs;

	 return Parms.ReturnValue;
 }
 UClass* AShooterWeapon_InstantPenetrating::StaticClass()
 {
	 static UClass* ptr = nullptr;
	 if (!ptr)
		 ptr = UObject::FindClass(Xors("Class ShooterGame.ShooterWeapon_InstantPenetrating"));
	 return ptr;
 }
 // Function Engine.PlayerController.SendToConsole
 // (Exec, Native, Public)
 // Parameters:
 // class FString                           Command                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

 void APlayerController::SendToConsole(const class FString& Command)
 {
	 static class UFunction* Func = nullptr;

	 if (Func == nullptr)
		 Func = Class->GetFunction("PlayerController", "SendToConsole");

	 APlayerController_SendToConsole_Params Parms{};

	 Parms.Command = std::move(Command);

	 auto Flgs = Func->FunctionFlags;
	 Func->FunctionFlags |= 0x400;

	 UObject::ProcessEvent(Func, &Parms);

	 Func->FunctionFlags = Flgs;
 }

 // Function ShooterGame.VictoryCore.VTraceMultiBP
 // (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
 // Parameters:
 // class UObject*                          WorldContextObject                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 // TArray<struct FHitResult>               OutHits                                                (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
 // struct FVector                          Start                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 // struct FVector                          End                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 // class AActor*                           InIgnoreActor                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 // int32                                   CollisionGroups                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 // float                                   SphereRadius                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 // struct FVector                          BoxExtent                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 // bool                                    bReturnPhysMaterial                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 // ECollisionChannel                       TraceChannel                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 // bool                                    bTraceComplex                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 // class FName                             TraceTag                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 // bool                                    bTraceChannelForceOverlap                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 // bool                                    bDoSort                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 // class AActor*                           AdditionalIgnoreActor                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 // class AActor*                           AnotherIgnoreActor                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 // bool                                    bJustDoSphereOverlapAtStartLoc                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 // float                                   DebugDrawDuration                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 // bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 bool UVictoryCore::VTraceMultiBP(class UObject* WorldContextObject, TArray<struct FHitResult>* OutHits, const struct FVector& Start, const struct FVector& End, class AActor* InIgnoreActor, int32 CollisionGroups, float SphereRadius, const struct FVector& BoxExtent, bool bReturnPhysMaterial, ECollisionChannel TraceChannel, bool bTraceComplex, const class FName& TraceTag, bool bTraceChannelForceOverlap, bool bDoSort, class AActor* AdditionalIgnoreActor, class AActor* AnotherIgnoreActor, bool bJustDoSphereOverlapAtStartLoc, float DebugDrawDuration)
 {
	 static class UFunction* Func = nullptr;

	 if (Func == nullptr)
		 Func = StaticClass()->GetFunction("VictoryCore", "VTraceMultiBP");

	 UVictoryCore_VTraceMultiBP_Params Parms{};

	 Parms.WorldContextObject = WorldContextObject;
	 Parms.Start = std::move(Start);
	 Parms.End = std::move(End);
	 Parms.InIgnoreActor = InIgnoreActor;
	 Parms.CollisionGroups = CollisionGroups;
	 Parms.SphereRadius = SphereRadius;
	 Parms.BoxExtent = std::move(BoxExtent);
	 Parms.bReturnPhysMaterial = bReturnPhysMaterial;
	 Parms.TraceChannel = TraceChannel;
	 Parms.bTraceComplex = bTraceComplex;
	 Parms.TraceTag = TraceTag;
	 Parms.bTraceChannelForceOverlap = bTraceChannelForceOverlap;
	 Parms.bDoSort = bDoSort;
	 Parms.AdditionalIgnoreActor = AdditionalIgnoreActor;
	 Parms.AnotherIgnoreActor = AnotherIgnoreActor;
	 Parms.bJustDoSphereOverlapAtStartLoc = bJustDoSphereOverlapAtStartLoc;
	 Parms.DebugDrawDuration = DebugDrawDuration;

	 auto Flgs = Func->FunctionFlags;
	 Func->FunctionFlags |= 0x400;

	 UVictoryCore::StaticClass()->DefaultObject->ProcessEvent(Func, &Parms);

	 Func->FunctionFlags = Flgs;

	 if (OutHits != nullptr)
		 *OutHits = std::move(Parms.OutHits);

	 return Parms.ReturnValue;
 }



 // Function ShooterGame.ShooterWeapon_InstantPenetrating.WeaponPenetrationTrace
 // (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
 // Parameters:
 // struct FVector                          Start                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 // struct FVector                          End                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 // bool                                    FilterVisuals                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 // bool                                    bDebugDraw                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 // float                                   DebugDrawDuration                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
 // TArray<struct FHitResult>               HitResults                                             (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
 // TArray<bool>                            IsEntryHit                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
 // float                                   MaxDistance                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

 void AShooterWeapon_InstantPenetrating::WeaponPenetrationTrace(const struct FVector& Start, const struct FVector& End, bool FilterVisuals, bool bDebugDraw, float DebugDrawDuration, TArray<struct FHitResult>* HitResults, TArray<bool>* IsEntryHit, float* MaxDistance)
 {
	 static class UFunction* Func = nullptr;

	 if (Func == nullptr)
		 Func = Class->GetFunction("ShooterWeapon_InstantPenetrating", "WeaponPenetrationTrace");

	 AShooterWeapon_InstantPenetrating_WeaponPenetrationTrace_Params Parms{};

	 Parms.Start = std::move(Start);
	 Parms.End = std::move(End);
	 Parms.FilterVisuals = FilterVisuals;
	 Parms.bDebugDraw = bDebugDraw;
	 Parms.DebugDrawDuration = DebugDrawDuration;

	 auto Flgs = Func->FunctionFlags;
	 Func->FunctionFlags |= 0x400;

	 UObject::ProcessEvent(Func, &Parms);

	 Func->FunctionFlags = Flgs;

	 if (HitResults != nullptr)
		 *HitResults = std::move(Parms.HitResults);

	 if (IsEntryHit != nullptr)
		 *IsEntryHit = std::move(Parms.IsEntryHit);

	 if (MaxDistance != nullptr)
		 *MaxDistance = Parms.MaxDistance;
 }
 // Function ShooterGame.ShooterWeapon.GetAdjustedAim
 // (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
 // Parameters:
 // struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

 struct FVector AShooterWeapon::GetAdjustedAim()
 {
	 static class UFunction* Func = nullptr;

	 if (Func == nullptr)
		 Func = Class->GetFunction("ShooterWeapon", "GetAdjustedAim");

	 AShooterWeapon_GetAdjustedAim_Params Parms{};

	 auto Flgs = Func->FunctionFlags;
	 Func->FunctionFlags |= 0x400;

	 UObject::ProcessEvent(Func, &Parms);

	 Func->FunctionFlags = Flgs;

	 return Parms.ReturnValue;
 }


 // Function ShooterGame.ShooterWeapon.ForcesTPVCameraOffset
 // (Native, Event, Public, BlueprintEvent)
 // Parameters:
 // bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

 bool AShooterWeapon::ForcesTPVCameraOffset()
 {
	 static class UFunction* Func = nullptr;

	 if (Func == nullptr)
		 Func = Class->GetFunction("ShooterWeapon", "ForcesTPVCameraOffset");

	 AShooterWeapon_ForcesTPVCameraOffset_Params Parms{};

	 auto Flgs = Func->FunctionFlags;
	 Func->FunctionFlags |= 0x400;

	 UObject::ProcessEvent(Func, &Parms);

	 Func->FunctionFlags = Flgs;

	 return Parms.ReturnValue;
 }


 /**
  * Function:
  * 		RVA    -> 0x0326CF30
  * 		Name   -> Function ShooterGame.ShooterPlayerController.ClientAddFloatingText
  * 		Flags  -> (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient, BlueprintCallable)
  * Parameters:
  * 		struct FVector_NetQuantize                         AtLocation                                                 (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		class FString                                      FloatingTextString                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		struct FColor                                      FloatingTextColor                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		float                                              ScaleX                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		float                                              ScaleY                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		float                                              TextLifeSpan                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		struct FVector                                     TextVelocity                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		float                                              MinScale                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		float                                              FadeInTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  * 		float                                              FadeOutTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
  */
 void AShooterPlayerController::ClientAddFloatingText(const struct FVector_NetQuantize& AtLocation, const class FString& FloatingTextString, const struct FColor& FloatingTextColor, float ScaleX, float ScaleY, float TextLifeSpan, const struct FVector& TextVelocity, float MinScale, float FadeInTime, float FadeOutTime)
 {
	 static UFunction* fn = nullptr;
	 if (!fn)
		 fn = UObject::FindObject<UFunction>(Xors("Function ShooterGame.ShooterPlayerController.ClientAddFloatingText"));

	 AShooterPlayerController_ClientAddFloatingText_Params params{};
	 params.AtLocation = AtLocation;
	 params.FloatingTextString = FloatingTextString;
	 params.FloatingTextColor = FloatingTextColor;
	 params.ScaleX = ScaleX;
	 params.ScaleY = ScaleY;
	 params.TextLifeSpan = TextLifeSpan;
	 params.TextVelocity = TextVelocity;
	 params.MinScale = MinScale;
	 params.FadeInTime = FadeInTime;
	 params.FadeOutTime = FadeOutTime;

	 auto flags = fn->FunctionFlags;
	 fn->FunctionFlags |= 0x00000400;
	 UObject::ProcessEvent(fn, &params);
	 fn->FunctionFlags = flags;
 }
