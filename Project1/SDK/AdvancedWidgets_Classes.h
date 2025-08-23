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
	 * Class AdvancedWidgets.RadialSlider
	 * Size -> 0x0690 (FullSize[0x0880] - InheritedSize[0x01F0])
	 */
	class URadialSlider : public UWidget
	{
	public:
		float                                                      Value;                                                   // 0x01F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ValueDelegate;                                           // 0x01F4(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCustomDefaultValue;                                  // 0x0204(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0877[0x3];                                   // 0x0205(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CustomDefaultValue;                                      // 0x0208(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HLOU[0x4];                                   // 0x020C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  SliderRange;                                             // 0x0210(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<float>                                              ValueTags;                                               // 0x0298(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      SliderHandleStartAngle;                                  // 0x02A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SliderHandleEndAngle;                                    // 0x02AC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularOffset;                                           // 0x02B0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CAT8[0x4];                                   // 0x02B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           HandStartEndRatio;                                       // 0x02B8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MT2I[0x8];                                   // 0x02C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSliderStyle                                        WidgetStyle;                                             // 0x02D0(0x0500) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FLinearColor                                        SliderBarColor;                                          // 0x07D0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SliderProgressColor;                                     // 0x07E0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SliderHandleColor;                                       // 0x07F0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        CenterBackgroundColor;                                   // 0x0800(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Locked;                                                  // 0x0810(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MouseUsesStep;                                           // 0x0811(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RequiresControllerLock;                                  // 0x0812(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_36LW[0x1];                                   // 0x0813(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StepSize;                                                // 0x0814(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFocusable;                                             // 0x0818(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseVerticalDrag;                                         // 0x0819(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowSliderHandle;                                        // 0x081A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowSliderHand;                                          // 0x081B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MR0M[0x4];                                   // 0x081C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMouseCaptureBegin;                                     // 0x0820(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMouseCaptureEnd;                                       // 0x0830(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnControllerCaptureBegin;                                // 0x0840(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnControllerCaptureEnd;                                  // 0x0850(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnValueChanged;                                          // 0x0860(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4LE6[0x10];                                  // 0x0870(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetValueTags(TArray<float> InValueTags);
		void SetValue(float InValue);
		void SetUseVerticalDrag(bool InUseVerticalDrag);
		void SetStepSize(float InValue);
		void SetSliderRange(const struct FRuntimeFloatCurve& InSliderRange);
		void SetSliderProgressColor(const struct FLinearColor& InValue);
		void SetSliderHandleStartAngle(float InValue);
		void SetSliderHandleEndAngle(float InValue);
		void SetSliderHandleColor(const struct FLinearColor& InValue);
		void SetSliderBarColor(const struct FLinearColor& InValue);
		void SetShowSliderHandle(bool InShowSliderHandle);
		void SetShowSliderHand(bool InShowSliderHand);
		void SetLocked(bool InValue);
		void SetHandStartEndRatio(const struct FVector2D& InValue);
		void SetCustomDefaultValue(float InValue);
		void SetCenterBackgroundColor(const struct FLinearColor& InValue);
		void SetAngularOffset(float InValue);
		float GetValue();
		float GetNormalizedSliderHandlePosition();
		float GetCustomDefaultValue();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
