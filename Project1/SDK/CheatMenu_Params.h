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
	 * Function CheatMenu.CheatMenu_C.BPEscapeClosed
	 */
	struct UCheatMenu_C_BPEscapeClosed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0MN2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CheatMenu.CheatMenu_C.ClearFilter
	 */
	struct UCheatMenu_C_ClearFilter_Params
	{
	public:
		bool                                                       ShouldRefresh;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CheatMenu.CheatMenu_C.GetBossSpawnArray
	 */
	struct UCheatMenu_C_GetBossSpawnArray_Params
	{
	public:
		TArray<class FString>                                      BossNames;                                               // 0x0000(0x0010)  (Parm, OutParm)
		TArray<class FString>                                      BossCheats;                                              // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function CheatMenu.CheatMenu_C.CloseMenu
	 */
	struct UCheatMenu_C_CloseMenu_Params
	{	};

	/**
	 * Function CheatMenu.CheatMenu_C.GetMapOpenListsForEntry
	 */
	struct UCheatMenu_C_GetMapOpenListsForEntry_Params
	{
	public:
		int32_t                                                    ScreenTracker;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CKBW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      CheatStrings;                                            // 0x0008(0x0010)  (Parm, OutParm)
		bool                                                       Success;                                                 // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CheatMenu.CheatMenu_C.CreateMapOpenButton
	 */
	struct UCheatMenu_C_CreateMapOpenButton_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FName                                                MapName;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUI_DebugSpawnMenuEntry*                             CreatedWidget;                                           // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CheatMenu.CheatMenu_C.CreateMapOpenEntry
	 */
	struct UCheatMenu_C_CreateMapOpenEntry_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    ArrayIndex;                                              // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_08EJ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      Array;                                                   // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CheatMenu.CheatMenu_C.GetMapJumpArray
	 */
	struct UCheatMenu_C_GetMapJumpArray_Params
	{
	public:
		TArray<class FString>                                      EmptyStringArray;                                        // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function CheatMenu.CheatMenu_C.CreateMapJumpButton
	 */
	struct UCheatMenu_C_CreateMapJumpButton_Params
	{
	public:
		struct FCheatMapJumpInfo                                   Cheat;                                                   // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UUI_DebugSpawnMenuEntry*                             CreatedWidget;                                           // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CheatMenu.CheatMenu_C.CreateMapJumpEntry
	 */
	struct UCheatMenu_C_CreateMapJumpEntry_Params
	{
	public:
		int32_t                                                    ArrayIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W025[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FCheatMapJumpInfo>                           MapJumps;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CheatMenu.CheatMenu_C.GetMapJumpListForEntry
	 */
	struct UCheatMenu_C_GetMapJumpListForEntry_Params
	{
	public:
		int32_t                                                    ScreenTracker;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_97LL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FCheatMapJumpInfo>                           MapJumps;                                                // 0x0008(0x0010)  (Parm, OutParm)
		bool                                                       Success;                                                 // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V6HW[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CheatMenu.CheatMenu_C.AddAllEntriesButtonForItems
	 */
	struct UCheatMenu_C_AddAllEntriesButtonForItems_Params
	{
	public:
		unsigned char                                              UnknownData_WUBM[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CheatMenu.CheatMenu_C.CreateButtonFromAllEntries
	 */
	struct UCheatMenu_C_CreateButtonFromAllEntries_Params
	{
	public:
		unsigned char                                              UnknownData_4RPM[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCheatMenuItemAllButton_C*                           ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CheatMenu.CheatMenu_C.HideAllOptions
	 */
	struct UCheatMenu_C_HideAllOptions_Params
	{	};

	/**
	 * Function CheatMenu.CheatMenu_C.SetupOptionsBarForFolder
	 */
	struct UCheatMenu_C_SetupOptionsBarForFolder_Params
	{	};

	/**
	 * Function CheatMenu.CheatMenu_C.GetCharacterPresetsForEntry
	 */
	struct UCheatMenu_C_GetCharacterPresetsForEntry_Params
	{
	public:
		int32_t                                                    ScreenTracker;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_REDS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FCheatMenuCharacterLevelPreset>              CharacterPresetLevel;                                    // 0x0008(0x0010)  (Parm, OutParm)
		TArray<struct FCheatMenuCharacterPresetItems>              CharacterPresetItem;                                     // 0x0018(0x0010)  (Parm, OutParm)
		bool                                                       Success;                                                 // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CheatMenu.CheatMenu_C.GetCheatListsForEntry
	 */
	struct UCheatMenu_C_GetCheatListsForEntry_Params
	{
	public:
		int32_t                                                    ScreenTracker;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OBRM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      CheatStrings;                                            // 0x0008(0x0010)  (Parm, OutParm)
		TArray<bool>                                               RequireConfirm;                                          // 0x0018(0x0010)  (Parm, OutParm)
		bool                                                       AllowAdditionalString;                                   // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2ODY[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CheatMenu.CheatMenu_C.GetEggListsForEntry
	 */
	struct UCheatMenu_C_GetEggListsForEntry_Params
	{
	public:
		int32_t                                                    ScreenTracker;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O5WX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_48BM[0x14];                                  // 0x0004(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_UF9B[0x24];                                  // 0x0004(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       Success;                                                 // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CheatMenu.CheatMenu_C.GetDinoListsForEntry
	 */
	struct UCheatMenu_C_GetDinoListsForEntry_Params
	{
	public:
		int32_t                                                    ScreenTracker;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_934L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_8A0C[0x14];                                  // 0x0004(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_OYXL[0x24];                                  // 0x0004(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       Success;                                                 // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CheatMenu.CheatMenu_C.CreateCharacterPresetEntry
	 */
	struct UCheatMenu_C_CreateCharacterPresetEntry_Params
	{
	public:
		class FString                                              InString;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    ArrayIndex;                                              // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QJZ5[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FCheatMenuCharacterLevelPreset>              LevelLists;                                              // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FCheatMenuCharacterPresetItems>              ItemLists;                                               // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CheatMenu.CheatMenu_C.CreateCheatEntry
	 */
	struct UCheatMenu_C_CreateCheatEntry_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    ArrayIndex;                                              // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EUMK[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      Array;                                                   // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<bool>                                               ArrayConfirm;                                            // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       AllowAdditionalString;                                   // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CheatMenu.CheatMenu_C.CreateEggEntry
	 */
	struct UCheatMenu_C_CreateEggEntry_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    ArrayIndex;                                              // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ES23[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_2YDA[0x14];                                  // 0x0014(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_M61O[0x24];                                  // 0x0014(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CheatMenu.CheatMenu_C.CreateDinoEntry
	 */
	struct UCheatMenu_C_CreateDinoEntry_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    ArrayIndex;                                              // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0JYM[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_AOBZ[0x14];                                  // 0x0014(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_0UK0[0x24];                                  // 0x0014(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CheatMenu.CheatMenu_C.SetupOptionBar
	 */
	struct UCheatMenu_C_SetupOptionBar_Params
	{	};

	/**
	 * Function CheatMenu.CheatMenu_C.CreateButtonFromCharacterPresets
	 */
	struct UCheatMenu_C_CreateButtonFromCharacterPresets_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FCheatMenuCharacterLevelPreset                      Levels;                                                  // 0x0018(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCheatMenuCharacterPresetItems                      Items;                                                   // 0x0040(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UUI_DebugSpawnMenuEntry*                             CreatedWidget;                                           // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CheatMenu.CheatMenu_C.CreateFolderButtons
	 */
	struct UCheatMenu_C_CreateFolderButtons_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    ScreenNumber;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DRC9[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          Image;                                                   // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UUI_DebugSpawnMenuEntry*                             outWidget;                                               // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CheatMenu.CheatMenu_C.CreateCheatButtonFromBlueprintID
	 */
	struct UCheatMenu_C_CreateCheatButtonFromBlueprintID_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Cheat;                                                   // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       RequireConfirm;                                          // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AllowAdditionalString;                                   // 0x0021(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KBJ6[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_DebugSpawnMenuEntry*                             CreatedWidget;                                           // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CheatMenu.CheatMenu_C.CreateEggItemButtonFromBlueprintIDs
	 */
	struct UCheatMenu_C_CreateEggItemButtonFromBlueprintIDs_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_T2QA[0x30];                                  // 0x0010(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_F152[0x60];                                  // 0x0010(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_DebugSpawnMenuEntry*                             CreatedWidget;                                           // 0x0070(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CheatMenu.CheatMenu_C.CreateItemButtonFromBlueprintID
	 */
	struct UCheatMenu_C_CreateItemButtonFromBlueprintID_Params
	{
	public:
		unsigned char                                              UnknownData_U9GD[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUI_DebugSpawnMenuEntry*                             CreatedWidget;                                           // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CheatMenu.CheatMenu_C.CreateItemButtonAndSetText
	 */
	struct UCheatMenu_C_CreateItemButtonAndSetText_Params
	{
	public:
		class FString                                              ItemName;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ItemSpawnString;                                         // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UCheatMenuButton_C*                                  CreatedButton;                                           // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CheatMenu.CheatMenu_C.CreateDinoButtonAndSetText
	 */
	struct UCheatMenu_C_CreateDinoButtonAndSetText_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QO0Y[0x30];                                  // 0x0010(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_CWD3[0x60];                                  // 0x0010(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UCheatMenuButton_C*                                  CreatedButton;                                           // 0x0070(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CheatMenu.CheatMenu_C.Construct
	 */
	struct UCheatMenu_C_Construct_Params
	{	};

	/**
	 * Function CheatMenu.CheatMenu_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_126_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCheatMenu_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_126_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CheatMenu.CheatMenu_C.BndEvt__EditableTextBox_139_K2Node_ComponentBoundEvent_360_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UCheatMenu_C_BndEvt__EditableTextBox_139_K2Node_ComponentBoundEvent_360_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CheatMenu.CheatMenu_C.BndEvt__DinoSpawnLevelBox_K2Node_ComponentBoundEvent_41_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UCheatMenu_C_BndEvt__DinoSpawnLevelBox_K2Node_ComponentBoundEvent_41_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CheatMenu.CheatMenu_C.BndEvt__ToDinosButton_K2Node_ComponentBoundEvent_319_OnButtonPressedEvent__DelegateSignature
	 */
	struct UCheatMenu_C_BndEvt__ToDinosButton_K2Node_ComponentBoundEvent_319_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CheatMenu.CheatMenu_C.BndEvt__NumberEggsToSpawn_K2Node_ComponentBoundEvent_232_OnEditableTextBoxCommittedEvent__DelegateSignature
	 */
	struct UCheatMenu_C_BndEvt__NumberEggsToSpawn_K2Node_ComponentBoundEvent_232_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CheatMenu.CheatMenu_C.Screen Changed
	 */
	struct UCheatMenu_C_ScreenChanged_Params
	{
	public:
		int32_t                                                    ToScreen;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CheatMenu.CheatMenu_C.OnHome
	 */
	struct UCheatMenu_C_OnHome_Params
	{	};

	/**
	 * Function CheatMenu.CheatMenu_C.BndEvt__BlueprintCheckBox_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UCheatMenu_C_BndEvt__BlueprintCheckBox_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CheatMenu.CheatMenu_C.BndEvt__SpawnMenu_TameCheck_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UCheatMenu_C_BndEvt__SpawnMenu_TameCheck_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CheatMenu.CheatMenu_C.BndEvt__CheatMenu_NamesFilterInputField_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UCheatMenu_C_BndEvt__CheatMenu_NamesFilterInputField_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CheatMenu.CheatMenu_C.BndEvt__CheatMenu_Button_131_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCheatMenu_C_BndEvt__CheatMenu_Button_131_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CheatMenu.CheatMenu_C.ExecuteUbergraph_CheatMenu
	 */
	struct UCheatMenu_C_ExecuteUbergraph_CheatMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OY01[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
