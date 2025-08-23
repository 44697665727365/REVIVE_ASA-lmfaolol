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
	 * Function DataListButtonHairLength_Widget_ASA.DataListButtonHairLength_Widget_ASA_C.ExtraSetupWidget
	 */
	struct UDataListButtonHairLength_Widget_ASA_C_ExtraSetupWidget_Params
	{
	public:
		class UPrimalUserWidget*                                   UserWidget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DataListButtonHairLength_Widget_ASA.DataListButtonHairLength_Widget_ASA_C.GetQuantityMeshes
	 */
	struct UDataListButtonHairLength_Widget_ASA_C_GetQuantityMeshes_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X5C6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DataListButtonHairLength_Widget_ASA.DataListButtonHairLength_Widget_ASA_C.SetupTextValue
	 */
	struct UDataListButtonHairLength_Widget_ASA_C_SetupTextValue_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                ReturnText;                                              // 0x0018(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function DataListButtonHairLength_Widget_ASA.DataListButtonHairLength_Widget_ASA_C.RefreshHairData
	 */
	struct UDataListButtonHairLength_Widget_ASA_C_RefreshHairData_Params
	{
	public:
		int32_t                                                    HairIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isFemale;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DataListButtonHairLength_Widget_ASA.DataListButtonHairLength_Widget_ASA_C.ExecuteUbergraph_DataListButtonHairLength_Widget_ASA
	 */
	struct UDataListButtonHairLength_Widget_ASA_C_ExecuteUbergraph_DataListButtonHairLength_Widget_ASA_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
