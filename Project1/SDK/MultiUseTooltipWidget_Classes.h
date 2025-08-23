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
	 * WidgetBlueprintGeneratedClass MultiUseTooltipWidget.MultiUseTooltipWidget_C
	 * Size -> 0x0010 (FullSize[0x0400] - InheritedSize[0x03F0])
	 */
	class UMultiUseTooltipWidget_C : public UMultiUseTooltip
	{
	public:
		class UVerticalBox*                                        InfoPanel;                                               // 0x03F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMultiUseActionWidget_UI_C*                          MultiUseActionWidget_UI;                                 // 0x03F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
