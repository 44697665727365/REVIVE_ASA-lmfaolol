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
	 * Class AudioWidgets.AudioMeter
	 * Size -> 0x0580 (FullSize[0x0770] - InheritedSize[0x01F0])
	 */
	class UAudioMeter : public UWidget
	{
	public:
		TArray<struct FMeterChannelInfo>                           MeterChannelInfo;                                        // 0x01F0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      MeterChannelInfoDelegate;                                // 0x0200(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAudioMeterStyle                                    WidgetStyle;                                             // 0x0210(0x04D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EOrientation                                               Orientation;                                             // 0x06E0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UR7D[0x3];                                   // 0x06E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        BackgroundColor;                                         // 0x06E4(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        MeterBackgroundColor;                                    // 0x06F4(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        MeterValueColor;                                         // 0x0704(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        MeterPeakColor;                                          // 0x0714(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        MeterClippingColor;                                      // 0x0724(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        MeterScaleColor;                                         // 0x0734(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        MeterScaleLabelColor;                                    // 0x0744(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JO9V[0x1C];                                  // 0x0754(0x001C) MISSED OFFSET (PADDING)

	public:
		void SetMeterValueColor(const struct FLinearColor& InValue);
		void SetMeterScaleLabelColor(const struct FLinearColor& InValue);
		void SetMeterScaleColor(const struct FLinearColor& InValue);
		void SetMeterPeakColor(const struct FLinearColor& InValue);
		void SetMeterClippingColor(const struct FLinearColor& InValue);
		void SetMeterChannelInfo(TArray<struct FMeterChannelInfo> InMeterChannelInfo);
		void SetMeterBackgroundColor(const struct FLinearColor& InValue);
		void SetBackgroundColor(const struct FLinearColor& InValue);
		TArray<struct FMeterChannelInfo> GetMeterChannelInfo__DelegateSignature();
		TArray<struct FMeterChannelInfo> GetMeterChannelInfo();
		static UClass* StaticClass();
	};

	/**
	 * Class AudioWidgets.AudioRadialSlider
	 * Size -> 0x0220 (FullSize[0x0410] - InheritedSize[0x01F0])
	 */
	class UAudioRadialSlider : public UWidget
	{
	public:
		float                                                      Value;                                                   // 0x01F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ValueDelegate;                                           // 0x01F4(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAudioRadialSliderLayout                                   WidgetLayout;                                            // 0x0204(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LY4I[0x3];                                   // 0x0205(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        CenterBackgroundColor;                                   // 0x0208(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SliderProgressColor;                                     // 0x0218(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SliderBarColor;                                          // 0x0228(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           HandStartEndRatio;                                       // 0x0238(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                UnitsText;                                               // 0x0248(0x0018) Edit, NativeAccessSpecifierPublic
		struct FLinearColor                                        TextLabelBackgroundColor;                                // 0x0260(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowLabelOnlyOnHover;                                    // 0x0270(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowUnitsText;                                           // 0x0271(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsUnitsTextReadOnly;                                     // 0x0272(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsValueTextReadOnly;                                     // 0x0273(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SliderThickness;                                         // 0x0274(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           OutputRange;                                             // 0x0278(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnValueChanged;                                          // 0x0288(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QEVN[0x178];                                 // 0x0298(0x0178) MISSED OFFSET (PADDING)

	public:
		void SetWidgetLayout(EAudioRadialSliderLayout InLayout);
		void SetValueTextReadOnly(bool bIsReadOnly);
		void SetUnitsTextReadOnly(bool bIsReadOnly);
		void SetUnitsText(const class FText& Units);
		void SetTextLabelBackgroundColor(const struct FSlateColor& InColor);
		void SetSliderThickness(float InThickness);
		void SetSliderProgressColor(const struct FLinearColor& InValue);
		void SetSliderBarColor(const struct FLinearColor& InValue);
		void SetShowUnitsText(bool bShowUnitsText);
		void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);
		void SetOutputRange(const struct FVector2D& InOutputRange);
		void SetHandStartEndRatio(const struct FVector2D& InHandStartEndRatio);
		void SetCenterBackgroundColor(const struct FLinearColor& InValue);
		float GetSliderValue(float OutputValue);
		float GetOutputValue(float InSliderValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioWidgets.AudioVolumeRadialSlider
	 * Size -> 0x0000 (FullSize[0x0410] - InheritedSize[0x0410])
	 */
	class UAudioVolumeRadialSlider : public UAudioRadialSlider
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioWidgets.AudioFrequencyRadialSlider
	 * Size -> 0x0000 (FullSize[0x0410] - InheritedSize[0x0410])
	 */
	class UAudioFrequencyRadialSlider : public UAudioRadialSlider
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioWidgets.AudioSliderBase
	 * Size -> 0x0850 (FullSize[0x0A40] - InheritedSize[0x01F0])
	 */
	class UAudioSliderBase : public UWidget
	{
	public:
		float                                                      Value;                                                   // 0x01F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C0UL[0x4];                                   // 0x01F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                UnitsText;                                               // 0x01F8(0x0018) Edit, NativeAccessSpecifierPublic
		struct FLinearColor                                        TextLabelBackgroundColor;                                // 0x0210(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      TextLabelBackgroundColorDelegate;                        // 0x0220(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowLabelOnlyOnHover;                                    // 0x0230(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowUnitsText;                                           // 0x0231(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsUnitsTextReadOnly;                                     // 0x0232(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsValueTextReadOnly;                                     // 0x0233(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ValueDelegate;                                           // 0x0234(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SliderBackgroundColor;                                   // 0x0244(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      SliderBackgroundColorDelegate;                           // 0x0254(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SliderBarColor;                                          // 0x0264(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      SliderBarColorDelegate;                                  // 0x0274(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SliderThumbColor;                                        // 0x0284(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      SliderThumbColorDelegate;                                // 0x0294(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        WidgetBackgroundColor;                                   // 0x02A4(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      WidgetBackgroundColorDelegate;                           // 0x02B4(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrientation                                               Orientation;                                             // 0x02C4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DLO3[0x3];                                   // 0x02C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnValueChanged;                                          // 0x02C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N9HA[0x768];                                 // 0x02D8(0x0768) MISSED OFFSET (PADDING)

	public:
		void SetWidgetBackgroundColor(const struct FLinearColor& InValue);
		void SetValueTextReadOnly(bool bIsReadOnly);
		void SetUnitsTextReadOnly(bool bIsReadOnly);
		void SetUnitsText(const class FText& Units);
		void SetTextLabelBackgroundColor(const struct FSlateColor& InColor);
		void SetSliderThumbColor(const struct FLinearColor& InValue);
		void SetSliderBarColor(const struct FLinearColor& InValue);
		void SetSliderBackgroundColor(const struct FLinearColor& InValue);
		void SetShowUnitsText(bool bShowUnitsText);
		void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);
		float GetSliderValue(float OutputValue);
		float GetOutputValue(float InSliderValue);
		float GetLinValue(float OutputValue);
		static UClass* StaticClass();
	};

	/**
	 * Class AudioWidgets.AudioSlider
	 * Size -> 0x0010 (FullSize[0x0A50] - InheritedSize[0x0A40])
	 */
	class UAudioSlider : public UAudioSliderBase
	{
	public:
		TWeakObjectPtr<class UCurveFloat>                          LinToOutputCurve;                                        // 0x0A40(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UCurveFloat>                          OutputToLinCurve;                                        // 0x0A48(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioWidgets.AudioVolumeSlider
	 * Size -> 0x0000 (FullSize[0x0A50] - InheritedSize[0x0A50])
	 */
	class UAudioVolumeSlider : public UAudioSlider
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class AudioWidgets.AudioFrequencySlider
	 * Size -> 0x0010 (FullSize[0x0A50] - InheritedSize[0x0A40])
	 */
	class UAudioFrequencySlider : public UAudioSliderBase
	{
	public:
		struct FVector2D                                           OutputRange;                                             // 0x0A40(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
