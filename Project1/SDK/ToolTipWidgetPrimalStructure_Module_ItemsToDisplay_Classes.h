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
	 * WidgetBlueprintGeneratedClass ToolTipWidgetPrimalStructure_Module_ItemsToDisplay.ToolTipWidgetPrimalStructure_Module_ItemsToDisplay_C
	 * Size -> 0x0010 (FullSize[0x0358] - InheritedSize[0x0348])
	 */
	class UToolTipWidgetPrimalStructure_Module_ItemsToDisplay_C : public UToolTipWidgetPrimalStructureModuleItemsToDisplay
	{
	public:
		class UTextBlock*                                          HeaderTextBlock;                                         // 0x0348(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ItemsToDisplayContainer;                                 // 0x0350(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
