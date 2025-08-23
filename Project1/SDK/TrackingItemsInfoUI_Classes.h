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
	 * WidgetBlueprintGeneratedClass TrackingItemsInfoUI.TrackingItemsInfoUI_C
	 * Size -> 0x0080 (FullSize[0x0888] - InheritedSize[0x0808])
	 */
	class UTrackingItemsInfoUI_C : public UTrackingItemUI
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0808(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCustomButtonWidget*                                 ButtonDestroyPanel1;                                     // 0x0810(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCustomButtonWidget*                                 ButtonDestroyPanel2;                                     // 0x0818(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCustomButtonWidget*                                 ButtonDestroyPanel3;                                     // 0x0820(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TrackEngramIcon1;                                        // 0x0828(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TrackEngramIcon2;                                        // 0x0830(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TrackEngramIcon3;                                        // 0x0838(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTrackResourceItem_Widget_C*                         TrackResourceItem_Widget;                                // 0x0840(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTrackResourceItem_Widget_C*                         TrackResourceItem_Widget_2;                              // 0x0848(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTrackResourceItem_Widget_C*                         TrackResourceItem_Widget_3;                              // 0x0850(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTrackResourceItem_Widget_C*                         TrackResourceItem_Widget_4;                              // 0x0858(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTrackResourceItem_Widget_C*                         TrackResourceItem_Widget_5;                              // 0x0860(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTrackResourceItem_Widget_C*                         TrackResourceItem_Widget_6;                              // 0x0868(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTrackResourceItem_Widget_C*                         TrackResourceItem_Widget_7;                              // 0x0870(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTrackResourceItem_Widget_C*                         TrackResourceItem_Widget_8;                              // 0x0878(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTrackResourceItem_Widget_C*                         TrackResourceItem_Widget_9;                              // 0x0880(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void GetAllTrackingResourcesWIdgets(TArray<class UTrackResourceItem_Widget_C*>* Array);
		void BndEvt__TrackingItemsInfoUI_ButtonDestroyPanel1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__TrackingItemsInfoUI_ButtonDestroyPanel2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__TrackingItemsInfoUI_ButtonDestroyPanel3_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void RemovedFromViewport();
		void Construct();
		void RemoveIndex_Event(class UClass* Item);
		void UpdateTrackingInfoBP();
		void ExecuteUbergraph_TrackingItemsInfoUI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
