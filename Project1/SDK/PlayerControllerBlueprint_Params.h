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
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.HandleAddPhotoModeMarker
	 */
	struct APlayerControllerBlueprint_C_HandleAddPhotoModeMarker_Params
	{
	public:
		TArray<struct FVector>                                     Points;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UClass*                                              MarkerClass;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.IsPhotoModeAllowed
	 */
	struct APlayerControllerBlueprint_C_IsPhotoModeAllowed_Params
	{
	public:
		bool                                                       Allowed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.TogglePhotoMode
	 */
	struct APlayerControllerBlueprint_C_TogglePhotoMode_Params
	{	};

	/**
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.PlayerCommand
	 */
	struct APlayerControllerBlueprint_C_PlayerCommand_Params
	{
	public:
		class FString                                              TheCommand;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPSetFCustomTrackedPlayerInfoMembersByPlayerRef
	 */
	struct APlayerControllerBlueprint_C_BPSetFCustomTrackedPlayerInfoMembersByPlayerRef_Params
	{
	public:
		class AShooterCharacter*                                   HandledPlayer;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       isfavorited;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsATeammateOnMap;                                        // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsTrackedWaypoint;                                      // 0x000A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsValidForCurrentFilter;                                // 0x000B(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0PPH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCustomTrackedActorInfo                             ReturnValue;                                             // 0x0010(0x00E0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.Restrict Create Foliage Hit Effect
	 */
	struct APlayerControllerBlueprint_C_RestrictCreateFoliageHitEffect_Params
	{	};

	/**
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPOnRecievedUpdatedCachedTeamTameList
	 */
	struct APlayerControllerBlueprint_C_BPOnRecievedUpdatedCachedTeamTameList_Params
	{
	public:
		int32_t                                                    CustomTameSelectionType;                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DinoGroup;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              CustomTameSearchText;                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       IsInfoFresh;                                             // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_916G[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    DesiredIndexOfWidgetThatShouldHaveItsCreatureReturned;   // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Handled;                                                 // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SZEZ[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ScrollbarIndex;                                          // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.is creature being tracked atm
	 */
	struct APlayerControllerBlueprint_C_iscreaturebeingtrackedatm_Params
	{
	public:
		int32_t                                                    InputPin;                                                // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       NewParam;                                                // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y334[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.is player being tracked atm
	 */
	struct APlayerControllerBlueprint_C_isplayerbeingtrackedatm_Params
	{
	public:
		int32_t                                                    InputPin;                                                // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       NewParam;                                                // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YQ6W[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.If Room Remains Query More Entries From Source List
	 */
	struct APlayerControllerBlueprint_C_IfRoomRemainsQueryMoreEntriesFromSourceList_Params
	{
	public:
		int32_t                                                    CustomTameSelectionType;                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DinoGroup;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              CustomTameSearchText;                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		class AShooterGameMode*                                    GameMode;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		bool                                                       ishandlingfavoritedactors1;                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U5KR[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      nonfavoritetrackedactors1;                               // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 UpdatedTrackedActorInfo_players1;                        // 0x0038(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 UpdatedTrackedActorInfo_creatures1;                      // 0x0048(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 ReplacedTrackedActorInfo_Creatures1;                     // 0x0058(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 ReplacedTrackedActorInfo_Players1;                       // 0x0068(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTrackedActorsIDs_Players1;                        // 0x0078(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTrackedActorsIDs_Creatures1;                      // 0x0088(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UCharacterTrackFilter_Base_C*                        localtrackactorfilter;                                   // 0x0098(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ScrollbarIndex;                                          // 0x00A0(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0O27[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      OverwrittenCustomActorArray;                             // 0x00A8(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PreviouslyTrackedCreaturesThatRemainTracked;             // 0x00B8(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          PreviouslyTrackedPlayersThatRemainTracked;               // 0x0108(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 AddedTrackedActorInfo_players1;                          // 0x0158(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 AddedTrackedActorInfo_creatures1;                        // 0x0168(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, bool>                                        AllTrackedPlayersThisTick;                               // 0x0178(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TMap<int32_t, bool>                                        AllTrackedCreaturesThisTick;                             // 0x01C8(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedTeammates;                                        // 0x0218(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingfavcreatures;                                     // 0x0228(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingfavallies;                                        // 0x0238(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingfavteammates;                                     // 0x0248(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointcreatures;                                // 0x0258(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointallies;                                   // 0x0268(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            missingwaypointteammates;                                // 0x0278(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.get or create filter object
	 */
	struct APlayerControllerBlueprint_C_getorcreatefilterobject_Params
	{
	public:
		class UCharacterTrackFilter_Base_C*                        AlreadySetupFilterObject;                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TameSelectionType;                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TN4L[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCharacterTrackFilter_Base_C*                        AsCreatureTrackFilterBase;                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.update tracked characters on server and client
	 */
	struct APlayerControllerBlueprint_C_updatetrackedcharactersonserverandclient_Params
	{
	public:
		bool                                                       IsInfoFresh;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ARFV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FTrackedActorPlusInfoStruct>                 ReplacedTrackedActorInfo_Creatures1;                     // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 ReplacedTrackedActorInfo_Players1;                       // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 AddedTrackedActorInfo_creatures1;                        // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 AddedTrackedActorInfo_players1;                          // 0x0038(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 UpdatedTrackedActorInfo_creatures1;                      // 0x0048(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FTrackedActorPlusInfoStruct>                 UpdatedTrackedActorInfo_players1;                        // 0x0058(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedFromPageTrackedActorsIDs_Creatures1;              // 0x0068(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedFromPageTrackedActorsIDs_Players1;                // 0x0078(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<int32_t>                                            RemovedFromPageTrackedActorsIDs_Players_Teammates;       // 0x0088(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPServerRequestCustomTrackedActorList_logic
	 */
	struct APlayerControllerBlueprint_C_BPServerRequestCustomTrackedActorList_logic_Params
	{
	public:
		int32_t                                                    CustomTameSelectionType;                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DinoGroup;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              CustomTameSearchText;                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		int32_t                                                    ScrollbarIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SkipUIList;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SkipMap;                                                 // 0x001D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Handled;                                                 // 0x001E(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_B361[0x1];                                   // 0x001F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.Handle sorting tracked actors
	 */
	struct APlayerControllerBlueprint_C_Handlesortingtrackedactors_Params
	{
	public:
		int32_t                                                    CustomTameSelectionType;                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DinoGroup;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              CustomTameSearchText;                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
		bool                                                       IsInfoFresh;                                             // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NRAZ[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      OverwrittenCustomActorArray;                             // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UCharacterTrackFilter_Base_C*                        AlreadySetupFilterObject;                                // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ScrollbarIndex;                                          // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SkipDinoListUI;                                          // 0x003C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SkipMap;                                                 // 0x003D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Handled;                                                 // 0x003E(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RBQA[0x1];                                   // 0x003F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.Should Fully Refresh List
	 */
	struct APlayerControllerBlueprint_C_ShouldFullyRefreshList_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPServerRequestCustomTrackedActorList
	 */
	struct APlayerControllerBlueprint_C_BPServerRequestCustomTrackedActorList_Params
	{
	public:
		int32_t                                                    CustomTameSelectionType;                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DinoGroup;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              CustomTameSearchText;                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Handled;                                                 // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q59T[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    NewScrollbarIndex;                                       // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.CanFit
	 */
	struct APlayerControllerBlueprint_C_CanFit_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     VerticalOffset;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Angle;                                                   // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     HorizontalOffset;                                        // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Radius;                                                  // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     HalfHeight;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              SpawningActor;                                           // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              IgnoreActor;                                             // 0x0048(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       Can;                                                     // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KDE2[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             NewLocation;                                             // 0x0058(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.CanDeploy
	 */
	struct APlayerControllerBlueprint_C_CanDeploy_Params
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              Actor;                                                   // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              IgnoreActor;                                             // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       Can;                                                     // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V701[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             NewLocation;                                             // 0x0038(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPCheckCanDinoSpawnFromLocation
	 */
	struct APlayerControllerBlueprint_C_BPCheckCanDinoSpawnFromLocation_Params
	{
	public:
		class UClass*                                              DinoClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		struct FVector                                             CheckLocation;                                           // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             ReturnValue;                                             // 0x0020(0x0018)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.OnLoaded_D7293B2D48183D83205E9295F5716E6E
	 */
	struct APlayerControllerBlueprint_C_OnLoaded_D7293B2D48183D83205E9295F5716E6E_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.OnLoaded_BA98DE0848BC459B691689932D89326C
	 */
	struct APlayerControllerBlueprint_C_OnLoaded_BA98DE0848BC459B691689932D89326C_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.OnLoaded_CAE125AC424938179B7AD98DC7D71BB0
	 */
	struct APlayerControllerBlueprint_C_OnLoaded_CAE125AC424938179B7AD98DC7D71BB0_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPServerRequestUpdateTrackedWaypointsAndMapPlayers
	 */
	struct APlayerControllerBlueprint_C_BPServerRequestUpdateTrackedWaypointsAndMapPlayers_Params
	{	};

	/**
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPServerRequestUpdateTrackedWaypointsOnly
	 */
	struct APlayerControllerBlueprint_C_BPServerRequestUpdateTrackedWaypointsOnly_Params
	{	};

	/**
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.OnActorCustomEvent_Event
	 */
	struct APlayerControllerBlueprint_C_OnActorCustomEvent_Event_Params
	{
	public:
		class FName                                                EventCustomName;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              EventCustomString;                                       // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class AActor*                                              InstigatorActor;                                         // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.ReceiveBeginPlay
	 */
	struct APlayerControllerBlueprint_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.ServerTryTrackWIthoutWeapon
	 */
	struct APlayerControllerBlueprint_C_ServerTryTrackWIthoutWeapon_Params
	{	};

	/**
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.SetupNewTrackBP
	 */
	struct APlayerControllerBlueprint_C_SetupNewTrackBP_Params
	{	};

	/**
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.ROS_ToggleGroundConformDebug
	 */
	struct APlayerControllerBlueprint_C_ROS_ToggleGroundConformDebug_Params
	{	};

	/**
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPApplyFoliageHarvestEffectOnHitAndCollect
	 */
	struct APlayerControllerBlueprint_C_BPApplyFoliageHarvestEffectOnHitAndCollect_Params
	{
	public:
		struct FVector                                             FoliageOrigin_ImpactPoint;                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TraceEndpoint;                                           // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             interactDir;                                             // 0x0030(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.BPOnSpawnPlayerCameraManager
	 */
	struct APlayerControllerBlueprint_C_BPOnSpawnPlayerCameraManager_Params
	{	};

	/**
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.DestroyPhotoModeMarker
	 */
	struct APlayerControllerBlueprint_C_DestroyPhotoModeMarker_Params
	{	};

	/**
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.AddPhotoModeMarker
	 */
	struct APlayerControllerBlueprint_C_AddPhotoModeMarker_Params
	{
	public:
		TArray<struct FVector>                                     Points;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UClass*                                              MarkerClass;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.SavePhotoModeMarker
	 */
	struct APlayerControllerBlueprint_C_SavePhotoModeMarker_Params
	{
	public:
		class FString                                              MarkerName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerControllerBlueprint.PlayerControllerBlueprint_C.ExecuteUbergraph_PlayerControllerBlueprint
	 */
	struct APlayerControllerBlueprint_C_ExecuteUbergraph_PlayerControllerBlueprint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MHY4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
