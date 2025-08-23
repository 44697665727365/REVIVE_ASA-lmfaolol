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
	 * WidgetBlueprintGeneratedClass StructureStatWidget.StructureStatWidget_C
	 * Size -> 0x02A8 (FullSize[0x0A60] - InheritedSize[0x07B8])
	 */
	class UStructureStatWidget_C : public UStructureStatWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              IconImage;                                               // 0x07C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProgressBar*                                        StatBar;                                                 // 0x07C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FProgressBarStyle                                   StyleBar;                                                // 0x07D0(0x0290) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_StructureStatWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
