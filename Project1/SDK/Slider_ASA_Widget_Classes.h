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
	 * WidgetBlueprintGeneratedClass Slider_ASA_Widget.Slider_ASA_Widget_C
	 * Size -> 0x002C (FullSize[0x035C] - InheritedSize[0x0330])
	 */
	class USlider_ASA_Widget_C : public UPrimalUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0330(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UOverlay*                                            OverlayCapsLimit;                                        // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            OverlaySlider;                                           // 0x0340(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UProgressBar*                                        ProgressBar;                                             // 0x0348(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             SliderFloatValue;                                        // 0x0350(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      LastValue;                                               // 0x0358(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class UWidget* GetOverrideHighligteableWidgetBP();
		void SetupSetPercent(float InputPin, bool PreventRecallParent);
		void SetupValue(double _float_, bool PreventRecallParent);
		void BPExecutedCommandForPrimalUI(const class FName& CommandName, const struct FBPNetExecParams& ExecParams);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_Slider_ASA_Widget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
