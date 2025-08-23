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
	 * WidgetBlueprintGeneratedClass CheatMenu.CheatMenu_C
	 * Size -> 0x0431 (FullSize[0x0EA9] - InheritedSize[0x0A78])
	 */
	class UCheatMenu_C : public UUI_DebugSpawnMenu
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A78(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCheckBox*                                           BabyCheck;                                               // 0x0A80(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           BlueprintCheckBox;                                       // 0x0A88(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CharacterPresetOptions;                                  // 0x0A90(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CheatOptions;                                            // 0x0A98(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    CheatStringAddition;                                     // 0x0AA0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             ClearFilterButton;                                       // 0x0AA8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             CloseButton;                                             // 0x0AB0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           DebugTouchCheck;                                         // 0x0AB8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        DebugView;                                               // 0x0AC0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDataListPanel*                                      DinoList;                                                // 0x0AC8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        DinoOptions;                                             // 0x0AD0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    DinoSpawnLevelBox;                                       // 0x0AD8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        EggOptions;                                              // 0x0AE0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           EngramCheckBox;                                          // 0x0AE8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           FemaleCheck;                                             // 0x0AF0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           FertilizedCheckBox;                                      // 0x0AF8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        FilterPanel;                                             // 0x0B00(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image;                                                   // 0x0B08(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_5;                                                 // 0x0B10(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_49;                                                // 0x0B18(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_98;                                                // 0x0B20(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           IncludeItemsCheck;                                       // 0x0B28(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        ItemOptions;                                             // 0x0B30(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           MaleCheck;                                               // 0x0B38(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    NamesFilterInputField;                                   // 0x0B40(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    NumberEggsToSpawn;                                       // 0x0B48(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    NumToSpawnTextBox;                                       // 0x0B50(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableTextBox*                                    QualityToSpawnTextBox;                                   // 0x0B58(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ReferenceText;                                           // 0x0B60(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           SaddleCheck;                                             // 0x0B68(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCheckBox*                                           TameCheck;                                               // 0x0B70(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             ToDinosButton;                                           // 0x0B78(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    ScreenTracker;                                           // 0x0B80(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9OB8[0x4];                                   // 0x0B84(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FText>                                        FolderNames;                                             // 0x0B88(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UUI_DebugSpawnMenuEntry*>                     DebugEntries;                                            // 0x0B98(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class FString>                                      DinoNames;                                               // 0x0BA8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      DinoEggNames;                                            // 0x0BB8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      CheatNames;                                              // 0x0BC8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      CheatStrings;                                            // 0x0BD8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      CharacterPresetStrings;                                  // 0x0BE8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FCheatMenuCharacterLevelPreset>              CharacterPresetLevel;                                    // 0x0BF8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      ScorchedEarthDinoNames;                                  // 0x0C08(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<ECheatMenuOptionTypes>                              OptionTypes;                                             // 0x0C18(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      ScorchedEarthEggNames;                                   // 0x0C28(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FCheatMapJumpInfo>                           IslandMapJumpInfos;                                      // 0x0C38(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      MapOpenCheats;                                           // 0x0C48(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      OpenMapNames;                                            // 0x0C58(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FCheatMapJumpInfo>                           SEMapJumpInfos;                                          // 0x0C68(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      ReferenceTexts;                                          // 0x0C78(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FCheatMapJumpInfo>                           CenterMapJumpInfos;                                      // 0x0C88(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FCheatMapJumpInfo>                           AberrationMapJumpInfos;                                  // 0x0C98(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FCheatMapJumpInfo>                           RagnarokMapJumpInfos;                                    // 0x0CA8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FCheatMapJumpInfo>                           ExtinctionMapJumpInfos;                                  // 0x0CB8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FCheatMapJumpInfo>                           ValgueroMapJumpInfos;                                    // 0x0CC8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FCheatMapJumpInfo>                           CrystalIslesMapJumpInfos;                                // 0x0CD8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FCheatMapJumpInfo>                           GenesisMapJumpInfos;                                     // 0x0CE8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FCheatMapJumpInfo>                           Gen2MapJumpInfos;                                        // 0x0CF8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FCheatMapJumpInfo>                           LostIslandMapJumpInfos;                                  // 0x0D08(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<bool>                                               CheatConfirmation;                                       // 0x0D18(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      IslandBossStrings;                                       // 0x0D28(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      IslandBossCheats;                                        // 0x0D38(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      SEBossCheats;                                            // 0x0D48(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      SEBossStrings;                                           // 0x0D58(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      AberrationBossStrings;                                   // 0x0D68(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      AberrationBossCheats;                                    // 0x0D78(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      ExtinctionBossCheats;                                    // 0x0D88(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      ExtinctionBossStrings;                                   // 0x0D98(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      CenterBossCheats;                                        // 0x0DA8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      CenterBossStrings;                                       // 0x0DB8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      RagnarokBossCheats;                                      // 0x0DC8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      RagnarokBossStrings;                                     // 0x0DD8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      ValgueroBossCheats;                                      // 0x0DE8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      ValgueroBossStrings;                                     // 0x0DF8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      AberrationUniqueDinoNames;                               // 0x0E08(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      AberrantDinoNames;                                       // 0x0E18(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      CommunityDinoNames;                                      // 0x0E28(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      ExtinctionDinoNames;                                     // 0x0E38(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      ExtinctionCorruptDinoNames;                              // 0x0E48(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<bool>                                               OptionsIsEngram;                                         // 0x0E58(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<int32_t>                                            OptionsQuantity;                                         // 0x0E68(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      ExtionctionEggNames;                                     // 0x0E78(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FString>                                      EventDinoNames;                                          // 0x0E88(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              FilterName;                                              // 0x0E98(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       IgnoreFilterChange;                                      // 0x0EA8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool BPEscapeClosed();
		void ClearFilter(bool ShouldRefresh);
		void GetBossSpawnArray(TArray<class FString>* BossNames, TArray<class FString>* BossCheats);
		void CloseMenu();
		void GetMapOpenListsForEntry(int32_t ScreenTracker, TArray<class FString>* CheatStrings, bool* Success);
		void CreateMapOpenButton(const class FString& Name, const class FName& MapName, class UUI_DebugSpawnMenuEntry** CreatedWidget);
		void CreateMapOpenEntry(const class FString& Name, int32_t ArrayIndex, TArray<class FString>* Array);
		void GetMapJumpArray(TArray<class FString>* EmptyStringArray);
		void CreateMapJumpButton(const struct FCheatMapJumpInfo& Cheat, class UUI_DebugSpawnMenuEntry** CreatedWidget);
		void CreateMapJumpEntry(int32_t ArrayIndex, TArray<struct FCheatMapJumpInfo>* MapJumps);
		void GetMapJumpListForEntry(int32_t ScreenTracker, TArray<struct FCheatMapJumpInfo>* MapJumps, bool* Success);
		void AddAllEntriesButtonForItems();
		class UCheatMenuItemAllButton_C* CreateButtonFromAllEntries();
		void HideAllOptions();
		void SetupOptionsBarForFolder();
		void GetCharacterPresetsForEntry(int32_t ScreenTracker, TArray<struct FCheatMenuCharacterLevelPreset>* CharacterPresetLevel, TArray<struct FCheatMenuCharacterPresetItems>* CharacterPresetItem, bool* Success);
		void GetCheatListsForEntry(int32_t ScreenTracker, TArray<class FString>* CheatStrings, TArray<bool>* RequireConfirm, bool* AllowAdditionalString, bool* Success);
		void GetEggListsForEntry(int32_t ScreenTracker, bool* Success);
		void GetDinoListsForEntry(int32_t ScreenTracker, bool* Success);
		void CreateCharacterPresetEntry(const class FString& InString, int32_t ArrayIndex, TArray<struct FCheatMenuCharacterLevelPreset>* LevelLists, TArray<struct FCheatMenuCharacterPresetItems>* ItemLists);
		void CreateCheatEntry(const class FString& Name, int32_t ArrayIndex, TArray<class FString>* Array, TArray<bool>* ArrayConfirm, bool AllowAdditionalString);
		void CreateEggEntry(const class FString& Name, int32_t ArrayIndex);
		void CreateDinoEntry(const class FString& Text, int32_t ArrayIndex);
		void SetupOptionBar();
		void CreateButtonFromCharacterPresets(const class FText& Name, const struct FCheatMenuCharacterLevelPreset& Levels, const struct FCheatMenuCharacterPresetItems& Items, class UUI_DebugSpawnMenuEntry** CreatedWidget);
		void CreateFolderButtons(const class FText& Name, int32_t ScreenNumber, class UTexture2D* Image, class UUI_DebugSpawnMenuEntry** outWidget);
		void CreateCheatButtonFromBlueprintID(const class FString& Name, const class FString& Cheat, bool RequireConfirm, bool AllowAdditionalString, class UUI_DebugSpawnMenuEntry** CreatedWidget);
		void CreateEggItemButtonFromBlueprintIDs(const class FString& Name, class UUI_DebugSpawnMenuEntry** CreatedWidget);
		void CreateItemButtonFromBlueprintID(class UUI_DebugSpawnMenuEntry** CreatedWidget);
		void CreateItemButtonAndSetText(const class FString& ItemName, const class FString& ItemSpawnString, class UCheatMenuButton_C** CreatedButton);
		void CreateDinoButtonAndSetText(const class FString& Text, class UCheatMenuButton_C** CreatedButton);
		void Construct();
		void BndEvt__CloseButton_K2Node_ComponentBoundEvent_126_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__EditableTextBox_139_K2Node_ComponentBoundEvent_360_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__DinoSpawnLevelBox_K2Node_ComponentBoundEvent_41_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__ToDinosButton_K2Node_ComponentBoundEvent_319_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__NumberEggsToSpawn_K2Node_ComponentBoundEvent_232_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void ScreenChanged(int32_t ToScreen);
		void OnHome();
		void BndEvt__BlueprintCheckBox_K2Node_ComponentBoundEvent_19_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__SpawnMenu_TameCheck_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__CheatMenu_NamesFilterInputField_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__CheatMenu_Button_131_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_CheatMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
