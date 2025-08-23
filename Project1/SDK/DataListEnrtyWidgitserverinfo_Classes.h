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
	 * WidgetBlueprintGeneratedClass DataListEnrtyWidgitserverinfo.DataListEnrtyWidgitserverinfo_C
	 * Size -> 0x0030 (FullSize[0x0428] - InheritedSize[0x03F8])
	 */
	class UDataListEnrtyWidgitserverinfo_C : public UDataListEntryWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UServerInfoInfoEntryButton*                          ServerInfoInfoEntryButton_2;                             // 0x0400(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FLinearColor                                        UnSelectedColorBG;                                       // 0x0408(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        UnSelectedPairColorBG;                                   // 0x0418(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Construct();
		void ExecuteUbergraph_DataListEnrtyWidgitserverinfo(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
