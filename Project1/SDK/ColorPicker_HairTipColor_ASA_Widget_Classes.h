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
	 * WidgetBlueprintGeneratedClass ColorPicker_HairTipColor_ASA_Widget.ColorPicker_HairTipColor_ASA_Widget_C
	 * Size -> 0x0008 (FullSize[0x03A8] - InheritedSize[0x03A0])
	 */
	class UColorPicker_HairTipColor_ASA_Widget_C : public UColorPicker_ASA_Widget_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03A0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void UpdateColor(const struct FVector2D& Color);
		void ExecuteUbergraph_ColorPicker_HairTipColor_ASA_Widget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
