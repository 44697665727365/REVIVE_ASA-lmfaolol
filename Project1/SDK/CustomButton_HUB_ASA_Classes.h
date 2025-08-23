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
	 * BlueprintGeneratedClass CustomButton_HUB_ASA.CustomButton_HUB_ASA_C
	 * Size -> 0x07F0 (FullSize[0x0F30] - InheritedSize[0x0740])
	 */
	class UCustomButton_HUB_ASA_C : public UCustomButtonWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0740(0x0008) ZeroConstructor, Transient, DuplicateTransient
		unsigned char                                              UnknownData_E5FJ[0x8];                                   // 0x0748(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FButtonStyle                                        SelectedStyle;                                           // 0x0750(0x03F0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FButtonStyle                                        UnSelectedStyle;                                         // 0x0B40(0x03F0) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void BPSetToggledState(bool IsToggled);
		void ExecuteUbergraph_CustomButton_HUB_ASA(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
