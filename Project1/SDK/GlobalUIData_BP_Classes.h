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
	 * BlueprintGeneratedClass GlobalUIData_BP.GlobalUIData_BP_C
	 * Size -> 0x06C0 (FullSize[0x07E8] - InheritedSize[0x0128])
	 */
	class UGlobalUIData_BP_C : public UPrimalGlobalUIData
	{
	public:
		struct FHUDElement                                         StruggleHUDElementTemplate;                              // 0x0128(0x01B0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FHUDRichTextOverlayData                             StruggleHUDRichTextOverlay;                              // 0x02D8(0x0070) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLinearColor                                        StruggleHUDRichTextColor;                                // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     StruggleHUDRichTextBlinkSpeed;                           // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              DefaultStruggleHUDTextString;                            // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FHUDElement                                         FuelOrAmmoHUDElementTemplate;                            // 0x0370(0x01B0) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     FuelOrAmmoSpaceBetweenSlots;                             // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FuelOrAmmoHUDTextColor_Default;                          // 0x0528(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FuelOrAmmoHUDTextColor_Low;                              // 0x0538(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FuelOrAmmoHUDTextColor_Critical;                         // 0x0548(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FuelOrAmmoHUDTextColor_Upgrade1;                         // 0x0558(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FuelOrAmmoHUDTextColor_Upgrade2;                         // 0x0568(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FuelOrAmmoHUDBackgroundColor_Default;                    // 0x0578(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FuelOrAmmoHUDBackgroundColor_Low;                        // 0x0588(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FuelOrAmmoHUDBackgroundColor_Critical;                   // 0x0598(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FuelOrAmmoHUDBackgroundColor_Upgrade1;                   // 0x05A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FuelOrAmmoHUDBackgroundColor_Upgrade2;                   // 0x05B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FuelOrAmmoHUDForegroundColor_Default;                    // 0x05C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FuelOrAmmoHUDForegroundColor_Low;                        // 0x05D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FuelOrAmmoHUDForegroundColor_Critical;                   // 0x05E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FuelOrAmmoHUDForegroundColor_Upgrade1;                   // 0x05F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        FuelOrAmmoHUDForegroundColor_Upgrade2;                   // 0x0608(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FHUDElement                                         FuelOrAmmoExtraBarHUDElementTemplate;                    // 0x0618(0x01B0) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     FuelOrAmmoExtraBarOffsetY;                               // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     FuelOrAmmoExtraBarLocationSpanOffsetMult;                // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FHUDElement>                                 FuelOrAmmoSlotsInUse;                                    // 0x07D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void BPGetHUDElements_Module_FuelOrAmmo_ExtraBar(int32_t SlotOffset, int32_t SlotSpan, int32_t StateIndex, double progress, const class FString& ExtendedInfoText, struct FHUDElement* OutHUDElement);
		void BPGetHUDElements_Module_FuelOrAmmo(int32_t SlotIndex, int32_t StateIndex, double progress, const class FString& MainText, const class FString& ExtendedInfoText, class UTexture2D* Icon, struct FHUDElement* OutHUDElement);
		void BPGetHUDElements_Module_Struggle(class APlayerController* ForPC, double StruggleProgressPercent, const class FString& RichTextOverride, class AActor* Instigator, TArray<struct FHUDElement>* Elements, struct FHUDRichTextOverlayData* OutHUDRichTextOverlay);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
