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
	 * WidgetBlueprintGeneratedClass DataListEntry_EngramListWidget.DataListEntry_EngramListWidget_C
	 * Size -> 0x0068 (FullSize[0x0878] - InheritedSize[0x0810])
	 */
	class UDataListEntry_EngramListWidget_C : public UDataListEntryEngramList
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0810(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              ElementIcon;                                             // 0x0818(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              EngramRowEnd;                                            // 0x0820(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              EngramRowMiddle;                                         // 0x0828(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              EngramRowStart;                                          // 0x0830(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_152;                                               // 0x0838(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LevelLabel;                                              // 0x0840(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScaleBox*                                           LevelLabelEffect;                                        // 0x0848(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateColor                                         NextLevelUpTextColor;                                    // 0x0850(0x0014) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         CurrentLevelUpTextColor;                                 // 0x0864(0x0014) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void Construct();
		void ExecuteUbergraph_DataListEntry_EngramListWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
