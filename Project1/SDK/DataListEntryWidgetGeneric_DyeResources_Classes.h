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
	 * WidgetBlueprintGeneratedClass DataListEntryWidgetGeneric_DyeResources.DataListEntryWidgetGeneric_DyeResources_C
	 * Size -> 0x0010 (FullSize[0x0778] - InheritedSize[0x0768])
	 */
	class UDataListEntryWidgetGeneric_DyeResources_C : public UDataListEntryButton_DyeResources
	{
	public:
		class UDataListButton_Widget_ASA_C*                        DataListButton_Widget_ASA;                               // 0x0768(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ItemIcon;                                                // 0x0770(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
