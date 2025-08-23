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
	 * WidgetBlueprintGeneratedClass CustomOverlayUI.CustomOverlayUI_C
	 * Size -> 0x0011 (FullSize[0x07B1] - InheritedSize[0x07A0])
	 */
	class UCustomOverlayUI_C : public UUI_CustomOverlay
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        MainCanvas;                                              // 0x07A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       FirstTick;                                               // 0x07B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void AddChildToCanvas(class UUserWidget* Child, const struct FVector2D& Size, int32_t ZOrder);
		void SetArrowAlpha(float theLeftRightAlpha, float theUpDownAlpha);
		void SetPointerScale(float Scale);
		void ShowReticule(bool show);
		void SetPointerColorAdd(float Add);
		void SetInnerRingScales(float scale0, float scale1, float scale2);
		void ExecuteUbergraph_CustomOverlayUI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
