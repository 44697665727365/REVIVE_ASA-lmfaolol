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
	 * BlueprintGeneratedClass PlayerControllerBlueprint.PlayerControllerBlueprint_C
	 * Size -> 0x0114 (FullSize[0x2DA4] - InheritedSize[0x2C90])
	 */
	class APlayerControllerBlueprint_C : public AShooterPlayerController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x2C90(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPrimalUserWidget*                                   InventoryScene;                                          // 0x2C98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		unsigned char                                              GroundConformDebugBuffSoftClass[0x30];                   // 0x2CA0(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		ETameTrackerFilterCategory                                 TameTrackerCategory;                                     // 0x2CD0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8P9F[0x7];                                   // 0x2CD1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              TrackPingItem[0x30];                                     // 0x2CD8(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              TrackPingBuff[0x30];                                     // 0x2D08(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		int32_t                                                    InitialMaxCountOfListedTrackedActorsForDIsplaySorting;   // 0x2D38(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       debugactortracking;                                      // 0x2D3C(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       lastknownskiplistui;                                     // 0x2D3D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       lastknownskipmap;                                        // 0x2D3E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1CQQ[0x1];                                   // 0x2D3F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     ShouldUpdateTrackedActor_TorporChangeTolerance;          // 0x2D40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ShouldUpdateTrackedActor_TameAffinityChangeTolerance;    // 0x2D48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ShouldUpdateTrackedActor_HPChangeTolerance;              // 0x2D50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ShouldUpdateTrackedActor_LocationChangeTolerance;        // 0x2D58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5VPP[0x4];                                   // 0x2D5C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AWaterInteractionBP_C*                               FluidInteractionManager;                                 // 0x2D60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UPlayerControllerTrameTrackerFunctions_C*            DEBUGTameTrackerfunctionsobject;                         // 0x2D68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      FoliageHarvestEffect_RestrictedIntervalBetweenHitEffects; // 0x2D70(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R2ES[0x4];                                   // 0x2D74(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     FoliageHarvestEffect_MinRadius;                          // 0x2D78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     FoliageHarvestEffect_MaxRadius;                          // 0x2D80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     FoliageHarvestEffect_HeightThatMatchesMinRadius;         // 0x2D88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     FoliageHarvestEffect_HeightThatMatchesMaxRadius;         // 0x2D90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FoliageHarvestEffect_InteractionStrength_MaxRadius;      // 0x2D98(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FoliageHarvestEffect_Plasticity;                         // 0x2D9C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      FoliageHarvestEffect_InteractionStrength_MinRadius;      // 0x2DA0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void HandleAddPhotoModeMarker(TArray<struct FVector>* Points, class UClass* MarkerClass);
		void IsPhotoModeAllowed(bool* Allowed);
		void TogglePhotoMode();
		class FString PlayerCommand(const class FString& TheCommand);
		struct FCustomTrackedActorInfo BPSetFCustomTrackedPlayerInfoMembersByPlayerRef(class AShooterCharacter* HandledPlayer, bool isfavorited, bool IsATeammateOnMap, bool bIsTrackedWaypoint, bool bIsValidForCurrentFilter);
		void RestrictCreateFoliageHitEffect();
		void BPOnRecievedUpdatedCachedTeamTameList(int32_t CustomTameSelectionType, int32_t DinoGroup, const class FString& CustomTameSearchText, bool IsInfoFresh, int32_t DesiredIndexOfWidgetThatShouldHaveItsCreatureReturned, bool* Handled, int32_t ScrollbarIndex);
		void iscreaturebeingtrackedatm(int32_t InputPin, bool* NewParam);
		void isplayerbeingtrackedatm(int32_t InputPin, bool* NewParam);
		void IfRoomRemainsQueryMoreEntriesFromSourceList(int32_t* CustomTameSelectionType, int32_t* DinoGroup, class FString* CustomTameSearchText, class AShooterGameMode** GameMode, bool* ishandlingfavoritedactors1, TArray<class AActor*>* nonfavoritetrackedactors1, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_players1, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_creatures1, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Creatures1, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Players1, TArray<int32_t>* RemovedTrackedActorsIDs_Players1, TArray<int32_t>* RemovedTrackedActorsIDs_Creatures1, class UCharacterTrackFilter_Base_C** localtrackactorfilter, int32_t* ScrollbarIndex, TArray<class AActor*> OverwrittenCustomActorArray, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PreviouslyTrackedCreaturesThatRemainTracked, TMap<int32_t, struct FTrackedActorPlusInfoStruct>* PreviouslyTrackedPlayersThatRemainTracked, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_players1, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_creatures1, TMap<int32_t, bool> AllTrackedPlayersThisTick, TMap<int32_t, bool> AllTrackedCreaturesThisTick, TArray<int32_t> RemovedTeammates, TArray<int32_t> missingfavcreatures, TArray<int32_t> missingfavallies, TArray<int32_t> missingfavteammates, TArray<int32_t> missingwaypointcreatures, TArray<int32_t> missingwaypointallies, TArray<int32_t> missingwaypointteammates);
		void getorcreatefilterobject(class UCharacterTrackFilter_Base_C** AlreadySetupFilterObject, int32_t* TameSelectionType, class UCharacterTrackFilter_Base_C** AsCreatureTrackFilterBase);
		void updatetrackedcharactersonserverandclient(bool* IsInfoFresh, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Creatures1, TArray<struct FTrackedActorPlusInfoStruct>* ReplacedTrackedActorInfo_Players1, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_creatures1, TArray<struct FTrackedActorPlusInfoStruct>* AddedTrackedActorInfo_players1, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_creatures1, TArray<struct FTrackedActorPlusInfoStruct>* UpdatedTrackedActorInfo_players1, TArray<int32_t>* RemovedFromPageTrackedActorsIDs_Creatures1, TArray<int32_t>* RemovedFromPageTrackedActorsIDs_Players1, TArray<int32_t> RemovedFromPageTrackedActorsIDs_Players_Teammates);
		void BPServerRequestCustomTrackedActorList_logic(int32_t* CustomTameSelectionType, int32_t* DinoGroup, class FString* CustomTameSearchText, int32_t ScrollbarIndex, bool SkipUIList, bool SkipMap, bool* Handled);
		void Handlesortingtrackedactors(int32_t* CustomTameSelectionType, int32_t* DinoGroup, class FString* CustomTameSearchText, bool IsInfoFresh, TArray<class AActor*>* OverwrittenCustomActorArray, class UCharacterTrackFilter_Base_C** AlreadySetupFilterObject, int32_t* ScrollbarIndex, bool SkipDinoListUI, bool SkipMap, bool* Handled);
		bool ShouldFullyRefreshList();
		void BPServerRequestCustomTrackedActorList(int32_t CustomTameSelectionType, int32_t DinoGroup, const class FString& CustomTameSearchText, bool* Handled, int32_t NewScrollbarIndex);
		void CanFit(const struct FVector& Location, double VerticalOffset, double Angle, double HorizontalOffset, double Radius, double HalfHeight, class AActor* SpawningActor, class AActor* IgnoreActor, bool* Can, struct FVector* NewLocation);
		void CanDeploy(class UClass* Class, const struct FVector& Location, class AActor* Actor, class AActor* IgnoreActor, bool* Can, struct FVector* NewLocation);
		struct FVector BPCheckCanDinoSpawnFromLocation(class UClass* DinoClass, const struct FVector& CheckLocation);
		void OnLoaded_D7293B2D48183D83205E9295F5716E6E(class UClass* Loaded);
		void OnLoaded_BA98DE0848BC459B691689932D89326C(class UClass* Loaded);
		void OnLoaded_CAE125AC424938179B7AD98DC7D71BB0(class UClass* Loaded);
		void BPServerRequestUpdateTrackedWaypointsAndMapPlayers();
		void BPServerRequestUpdateTrackedWaypointsOnly();
		void OnActorCustomEvent_Event(const class FName& EventCustomName, const class FString& EventCustomString, class AActor* InstigatorActor);
		void ReceiveBeginPlay();
		void ServerTryTrackWIthoutWeapon();
		void SetupNewTrackBP();
		void ROS_ToggleGroundConformDebug();
		void BPApplyFoliageHarvestEffectOnHitAndCollect(const struct FVector& FoliageOrigin_ImpactPoint, const struct FVector& TraceEndpoint, const struct FVector& interactDir);
		void BPOnSpawnPlayerCameraManager();
		void DestroyPhotoModeMarker();
		void AddPhotoModeMarker(TArray<struct FVector> Points, class UClass* MarkerClass);
		void SavePhotoModeMarker(const class FString& MarkerName);
		void ExecuteUbergraph_PlayerControllerBlueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
