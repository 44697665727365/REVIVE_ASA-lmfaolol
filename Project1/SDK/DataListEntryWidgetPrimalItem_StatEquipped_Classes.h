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
	 * WidgetBlueprintGeneratedClass DataListEntryWidgetPrimalItem_StatEquipped.DataListEntryWidgetPrimalItem_StatEquipped_C
	 * Size -> 0x0018 (FullSize[0x0410] - InheritedSize[0x03F8])
	 */
	class UDataListEntryWidgetPrimalItem_StatEquipped_C : public UDataListEntryWidget
	{
	public:
		class UMenuAnchor*                                         CtxMenu;                                                 // 0x03F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HoverState;                                              // 0x0400(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDataListEntryButton_PrimalItem*                     TheDataListButton;                                       // 0x0408(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void OnPaint(struct FPaintContext* Context);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
