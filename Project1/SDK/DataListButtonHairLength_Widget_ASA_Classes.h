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
	 * WidgetBlueprintGeneratedClass DataListButtonHairLength_Widget_ASA.DataListButtonHairLength_Widget_ASA_C
	 * Size -> 0x0011 (FullSize[0x0489] - InheritedSize[0x0478])
	 */
	class UDataListButtonHairLength_Widget_ASA_C : public UDataListButtonVariable_Widget_ASA_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0478(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       IsFacialHair;                                            // 0x0480(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_05N9[0x3];                                   // 0x0481(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    HairIndex;                                               // 0x0484(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isFemale;                                                // 0x0488(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ExtraSetupWidget(class UPrimalUserWidget* UserWidget, int32_t Index);
		int32_t GetQuantityMeshes();
		void SetupTextValue(const class FText& Text, class FText* ReturnText);
		void RefreshHairData(int32_t HairIndex, bool isFemale);
		void ExecuteUbergraph_DataListButtonHairLength_Widget_ASA(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
