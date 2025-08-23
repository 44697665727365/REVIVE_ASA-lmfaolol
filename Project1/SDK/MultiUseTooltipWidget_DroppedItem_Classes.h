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
	 * WidgetBlueprintGeneratedClass MultiUseTooltipWidget_DroppedItem.MultiUseTooltipWidget_DroppedItem_C
	 * Size -> 0x0018 (FullSize[0x0408] - InheritedSize[0x03F0])
	 */
	class UMultiUseTooltipWidget_DroppedItem_C : public UMultiUseTooltip
	{
	public:
		class UImage*                                              ItemIconImage;                                           // 0x03F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ItemQuantity;                                            // 0x03F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMultiUseActionWidget_UI_C*                          MultiUseActionWidget_UI;                                 // 0x0400(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
