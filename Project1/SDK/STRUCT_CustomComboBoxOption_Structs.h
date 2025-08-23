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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct STRUCT_CustomComboBoxOption.STRUCT_CustomComboBoxOption
	 * Size -> 0x0038
	 */
	struct FSTRUCT_CustomComboBoxOption
	{
	public:
		class FString                                              Name_10_A8819FCA4723B827B1B4428613451C33;                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		int64_t                                                    ID_8_43B1393542FD19674771E188F8E1DF0D;                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FSTRUCT_SubOptions>                          SubOptions_9_0FDA515249F344B2F1B0449DA437EADE;           // 0x0018(0x0010) Edit, BlueprintVisible
		class FString                                              ImageUrl_13_487F9F2742BB6A0B222F21A177253BD6;            // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
